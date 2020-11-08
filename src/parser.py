from __future__ import absolute_import
from __future__ import print_function
import os
from optparse import OptionParser

import copy
import random
import sys
from datetime import datetime
import time
sys.path.insert(0, "./Pyverilog/build/lib")

import pyverilog
import pyverilog.utils.version
import pyverilog.vparser.ast as vast
from pyverilog.vparser.parser import VerilogCodeParser
from pyverilog.ast_code_generator.codegen import ASTCodeGenerator

from collections import defaultdict

all_variable_set = {}
path = "output/"


#..................................................... CLASS FOR RAM MODULES ........................................................................
class ram_module_info:
	identifier = ""
	module_name = ""  
	array_name = ""
	ram_params = {}
	port_mapping = {}
	rw_signals = []
	data_lines = []
	addr_lines = []
	state_sig_flags = {}
	state_op_dict = {}
	if_blocks = []
	op_blocks = []
	assign_ops = []
	def __init__(self,module_name,no_of_ports):
		self.module_name=module_name
		if(no_of_ports=="1"):
			self.rw_signals = ["ce0","we0"]
			self.addr_lines = ["address0"]
			self.data_lines = ["q0","d0"]
		else:
			self.rw_signals = ["ce0","we0","ce1","we1"]
			self.addr_lines = ["address0","address1"]
			self.data_lines = ["q0","d0","q1","d1"]

#..................................................... CLASS FOR ROM MODULES .......................................................................
class rom_module_info:
	identifier = ""
	module_name = ""    
	array_name = ""
	file_name = ""
	rom_params = {}
	port_mapping = {}
	rw_signals = []
	data_lines = []
	addr_lines = []
	state_sig_flags = {}
	state_op_dict = {}
	if_blocks = []
	op_blocks = []
	file_values = []
	assign_ops = []
	def __init__(self,module_name,no_of_ports):
		self.module_name=module_name
		if(no_of_ports=="1"):
			self.rw_signals = ["ce0"]
			self.addr_lines = ["address0"]
			self.data_lines = ["q0"]
		elif(no_of_ports=="2"):
			self.rw_signals = ["ce0","ce1"]
			self.addr_lines = ["address0","address1"]
			self.data_lines = ["q0","q1"]
		elif(no_of_ports=="3"):
			self.rw_signals = ["ce0","ce1","ce2"]
			self.addr_lines = ["address0","address1","address2"]
			self.data_lines = ["q0","q1","q2"]
		else:			
			self.rw_signals = ["ce0","ce1","ce2","ce3"]
			self.addr_lines = ["address0","address1","address2","address3"]
			self.data_lines = ["q0","q1","q2","q3"]


#..................................................... CLASS FOR FUNCTION MODULES ...................................................................
class function_module_info:
	identifier = ""
	module_name = ""
	port_mapping = {}
	def __init__(self,module_name):
		self.module_name=module_name

#............................................. ADD BRACKETS AROUND OPERATIONS ........................................................................
def process_assign(init):
	key = init.left.var
	if type(key) is vast.Identifier:
		key = key.name
	value = init.right.var
	return (key, value)

#............................................. ADD BRACKETS AROUND OPERATIONS ........................................................................
def sanitize(str):
	if "+" in str or "-" in str or "*" in str or "/" in str or ">" in str or "<" in str  or "&" in str or "|" in str or "==" in str  or "^" in str :
		return "(" + str + ")"
	return str

#............................................. MAKE A CONSTANT WITH GIVEN BIT LENGTH WITH ALL 1'S .....................................................
def make_constant(width):
	bit_arr=[]
	for i in range(width):
		bit_arr.append(1)
	val=0;
	for i in range(width):
		val += bit_arr[i] * (1<<i);
	return val

#............................................... GET CONSTANT VALUE FROM INTCONST TYPE .................................................................
def resolve(x):
	if type(x) is vast.IntConst:
		t=str(x)
		i=0
		f=0
		s=""
		w=""
		while i<len(t):
			if t[i]=="'" and f==0:
				f=1
			elif f==1 and (t[i]!='b' and t[i]!='d'):
				s=s+t[i]
			else:
				if (t[i]!='b' and t[i]!='d'):
					w=w+t[i]			
			i=i+1
		w1 = make_constant(int(w))
	return s,str(w1),str(w)

#............................................. CHECKING TYPE OF OPERATION AND RETURN STRING WITH BRACKETS .....................................................
def determine_operation1(modules, top, inputs, keys, tgt, is_cond, state_block,state_id,condition_variables):
	module = modules[top]
	op_string = ""
 
	if type(tgt) is vast.Xor:
		str1 = determine_operation1(modules, top, inputs, keys, tgt.left, is_cond, state_block,state_id,condition_variables)
		str2 = determine_operation1(modules, top, inputs, keys, tgt.right, is_cond, state_block,state_id,condition_variables)
		return sanitize(str1) + " ^ " + sanitize(str2)
	elif type(tgt) is vast.Eq:
		str1 = determine_operation1(modules, top, inputs, keys, tgt.left, is_cond, state_block,state_id,condition_variables)
		str2 = determine_operation1(modules, top, inputs, keys, tgt.right, is_cond, state_block,state_id,condition_variables)
		str11=sanitize(str1)
		str12=sanitize(str2)
		if(state_id==str12):
			state_block[0]=True
		return sanitize(str1) + " == " + sanitize(str2)
	elif type(tgt) is vast.GreaterThan:
		str1 = determine_operation1(modules, top, inputs, keys, tgt.left, is_cond, state_block,state_id,condition_variables)
		str2 = determine_operation1(modules, top, inputs, keys, tgt.right, is_cond, state_block,state_id,condition_variables)
		return sanitize(str1) + " > " + sanitize(str2)
	elif type(tgt) is vast.Or:
		str1 = determine_operation1(modules, top, inputs, keys, tgt.left, is_cond, state_block,state_id,condition_variables)
		str2 = determine_operation1(modules, top, inputs, keys, tgt.right, is_cond, state_block,state_id,condition_variables)
		return sanitize(str1) + " || " + sanitize(str2)
	elif type(tgt) is vast.And:
		str1 = determine_operation1(modules, top, inputs, keys, tgt.left, is_cond, state_block,state_id,condition_variables)
		str2 = determine_operation1(modules, top, inputs, keys, tgt.right, is_cond, state_block,state_id,condition_variables)        
		return sanitize(str1) + " && " + sanitize(str2)
	elif type(tgt) is vast.Identifier:
		return determine_operation1(modules, top, inputs, keys, tgt.name, is_cond, state_block,state_id,condition_variables)
	elif type(tgt) is vast.IntConst:
		num = 0
		b = 0
		if "'b" in tgt.value:
			for l in range(len(tgt.value)-1,0,-1):
				if tgt.value[l] == 'b':
					break;
				if tgt.value[l] == '1':
					num = num + 2**b
				b = b+1
			return str(num)        

		if "'d" in tgt.value:            
			x=str(tgt.value)                        
			i=0
			f=0
			s=""
			while i<len(x):
				if x[i]=="'" and f==0:
					f=1
				elif f==1 and x[i]!='d':
					s=s+x[i]
				i=i+1                        
			return s
		return str(tgt.value)
	elif type(tgt) is vast.Unot:        
		return "!(" + determine_operation1(modules, top, inputs, keys, tgt.right, is_cond, state_block,state_id,condition_variables) + ")"
	if type(tgt) is str:
		condition_variables.append(tgt)
		return tgt
	if inputs.get(tgt) != None:
		return tgt
	if keys.get(tgt) != None:
		return tgt

#............................................. CHECKING TYPE OF OPERATION AND RETURN STRING WITH BRACKETS .....................................................
def determine_operation(modules, top, inputs, keys, current_value, tgt, is_cond,condition_variables):
	module = modules[top]
	op_string = ""
		
	if type(tgt) is vast.Xor:
		str1 = determine_operation(modules, top, inputs, keys, current_value, tgt.left, is_cond,condition_variables)
		str2 = determine_operation(modules, top, inputs, keys, current_value, tgt.right, is_cond,condition_variables)
		return sanitize(str1) + " ^ " + sanitize(str2)
	elif type(tgt) is vast.Eq:
		str1 = determine_operation(modules, top, inputs, keys, current_value, tgt.left, is_cond,condition_variables)
		str2 = determine_operation(modules, top, inputs, keys, current_value, tgt.right, is_cond,condition_variables)
		return sanitize(str1) + " == " + sanitize(str2)
	elif type(tgt) is vast.Or:
		str1 = determine_operation(modules, top, inputs, keys, current_value, tgt.left, is_cond,condition_variables)
		str2 = determine_operation(modules, top, inputs, keys, current_value, tgt.right, is_cond,condition_variables)
		return sanitize(str1) + " || " + sanitize(str2)
	elif type(tgt) is vast.GreaterThan:
		str1 = determine_operation(modules, top, inputs, keys, current_value, tgt.left, is_cond,condition_variables)
		str2 = determine_operation(modules, top, inputs, keys, current_value, tgt.right, is_cond,condition_variables)
		return sanitize(str1) + " > " + sanitize(str2)
	elif type(tgt) is vast.And:
		str1 = determine_operation(modules, top, inputs, keys, current_value, tgt.left, is_cond,condition_variables)
		str2 = determine_operation(modules, top, inputs, keys, current_value, tgt.right, is_cond,condition_variables)
		return sanitize(str1) + " && " + sanitize(str2)
	elif type(tgt) is vast.Identifier:
		return determine_operation(modules, top, inputs, keys, current_value, tgt.name, is_cond,condition_variables)
	elif type(tgt) is vast.IntConst:        
		num = 0
		b = 0
		if "'b" in tgt.value:
			for l in range(len(tgt.value)-1,0,-1):
				if tgt.value[l] == 'b':
					break;
				if tgt.value[l] == '1':
					num = num + 2**b
				b = b+1
			return str(num)
		

		if "'d" in tgt.value:            
			x=str(tgt.value)                        
			i=0
			f=0
			s=""
			while i<len(x):
				if x[i]=="'" and f==0:
					f=1
				elif f==1 and x[i]!='d':
					s=s+x[i]
				i=i+1                        
			return s
		return str(tgt.value)

	elif type(tgt) is vast.Unot:        
		return "!(" + determine_operation(modules, top, inputs, keys, current_value,tgt.right, is_cond,condition_variables) + ")"
	if type(tgt) is str:
		condition_variables.append(tgt)
		return tgt	
	if inputs.get(tgt) != None:
		return tgt
	if keys.get(tgt) != None:
		return tgt

#................................................. PROCESS BLOCK AND EXTRACT CONTENTS INSIDE ...........................................
def process_block(modules, top, inputs, keys, regs, statements, init, has_return,condition_variables):
	global return_expr
	next_states = {}
	next_conds = {}  
	c_blocks = []     
	list_next_states = []

	#................................................... BLOCK CONTAINS ANOTHER BLOCK ...................................................	
	if type(statements) is vast.Block:		
		return process_block(modules, top, inputs, keys, regs, statements.statements, init, has_return,condition_variables)
	current_value = copy.deepcopy(init)

	#............................................. BLOCK CONTAINS TUPLE OF STATEMENTS ...................................................	
	if type(statements) is tuple:
		for s in statements:            
			if type(s) is vast.BlockingSubstitution:
				(key, value) = process_assign(s)            
				if key == "ap_NS_fsm":
					next_states[value] = []
					next_conds[value] = "T"
					list_next_states.append(value)
				else:
					current_value[key] = value            

			elif type(s) is vast.IfStatement:				
				cond = determine_operation(modules, top, inputs,keys,  current_value, s.cond, True,condition_variables)
				t_next_states, t_next_conds , t_c_blocks=  process_block(modules, top, inputs, keys, regs, s.true_statement, current_value, has_return,condition_variables)    
				c_blocks.extend(t_c_blocks)
				for l in t_next_states:
					next_conds[l] = "(" + cond + ") == 1"                    
					next_states[l] = t_next_states[l]
				if (s.false_statement):
					f_next_states, f_next_conds, t_c_blocks =  process_block(modules, top, inputs, keys, regs, s.false_statement, current_value, has_return,condition_variables)    
					c_blocks.extend(t_c_blocks)					
					for l in f_next_states:                        
						next_conds[l] = "(" + cond + ") == 0"
						next_states[l] = f_next_states[l]           
			else:
				s.show()
				raise Exception("Malformed statement in block")
	else:
		s = statements
		
		#............................................. BLOCK CONTAINS BLOCKING SUBSTITUTION .............................................
		if type(s) is vast.BlockingSubstitution:
			(key, value) = process_assign(s)            
			if key == "ap_NS_fsm":
				next_states[value] = []
				next_conds[value] = "T"
				list_next_states.append(value)
			else:
				current_value[key] = value                               

		#............................................. BLOCK CONTAINS IF BLOCK ...........................................................
		elif type(s) is vast.IfStatement:            
			while type(s) is vast.IfStatement:
				cond = determine_operation(modules, top, inputs,keys,  current_value, s.cond, True,condition_variables)                        
				t_next_states, t_next_conds, t_c_blocks =  process_block(modules, top, inputs, keys, regs, s.true_statement, current_value, has_return,condition_variables)    
				c_blocks.extend(t_c_blocks)
				temp={}
				temp["condition"]="(" + cond + ") == 1"                    
				for l in t_next_states:
					temp["next_state"]=l                
				temp["condition_variables"]=[]
				c_blocks.append(temp)                           
				s=s.false_statement
			

			#............................................. IF BLOCK CONTAINS A BLOCK .....................................................
			if type(s) is vast.Block:
				l_next_states,l_next_conds, t_c_blocks = process_block(modules, top, inputs, keys, regs, s.statements, init, has_return,condition_variables)
				c_blocks.extend(t_c_blocks)
				temp={}
				temp["condition"]="T"
				for l in l_next_states:
					temp["next_state"]=l
				temp["condition_variables"]=[]
				c_blocks.append(temp)                               
		else:
			s.show()
			raise Exception("Malformed statement in block")

	return next_states, next_conds, c_blocks    	


#................................................. PROCESS RT OPERATION FOR ARITHMETIC TYPE .........................................................
def arithmetic_operation(lside,value,rewrite_op,inputs,module,temp_regs,operator,l):	
	bits="63"
	bits1="63"
	bits2="63"
	width="63"
	iwidth="63"
	iwidth1="63"

	if l.left.var.name in all_variable_set:
		width=all_variable_set[l.left.var.name]["width"]
	lhs_const = make_constant(int(str(width))+1)	

	#................................................... IF BOTH OPERANDS IN CONDITION ARE SIGNED ...................................................	
	if type(l.right.var.left) and type(l.right.var.right) is vast.SystemCall:  		

		#................................................... IF 2ND OPERAND IS CONSTANT .............................................................
		if type(l.right.var.left) is vast.SystemCall and type(l.right.var.right.args[0]) is vast.IntConst:
			temp_regs.append(str(l.right.var.left.args[0]))
			val2,wwidth,bits=resolve(l.right.var.right.args[0])  
			if l.right.var.left.args[0].name in all_variable_set:
				iwidth=str(int(str(all_variable_set[l.right.var.left.args[0].name]["width"]))+1)						
			return (" ( ( " + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.left.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + iwidth + " ) " +  operator  +"do_twos_complement( " + val2 + " , " + bits + " ) " + " ) & " + str(lhs_const) + " ) ")

		#................................................... IF 1ST OPERAND IS CONSTANT .............................................................
		elif type(l.right.var.left.args[0]) is vast.IntConst and type(l.right.var.right) is vast.SystemCall:
			temp_regs.append(str(l.right.var.right.args[0]))
			val1,wwidth,bits=resolve(l.right.var.left.args[0])            
			if l.right.var.right.args[0].name in all_variable_set:
				iwidth=str(int(str(all_variable_set[l.right.var.right.args[0].name]["width"]))+1)
			return (" ( ( " +"do_twos_complement( " + val1+ " , " + bits + " ) " + operator + "do_twos_complement( " +rewrite(l.left.var.name,l.right.var.right.args[0].name,rewrite_op,inputs,module,temp_regs)+ " , " + iwidth +" ) " + " ) & " + str(lhs_const) + " ) ")                             

		else:                                        
			temp_regs.append(str(l.right.var.left.args[0]))
			temp_regs.append(str(l.right.var.right.args[0]))
			if l.right.var.left.args[0].name in all_variable_set:
				iwidth=str(int(str(all_variable_set[l.right.var.left.args[0].name]["width"]))+1)
			if l.right.var.right.args[0].name in all_variable_set:
				iwidth1=str(int(str(all_variable_set[l.right.var.right.args[0].name]["width"]))+1)
			return (" ( ( " + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.left.args[0].name,rewrite_op,inputs,module,temp_regs)+ " , " + iwidth +  " ) " +  operator  + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.right.args[0].name,rewrite_op,inputs,module,temp_regs)+ " , " + iwidth1 + " ) " + " ) & " + str(lhs_const) + " ) ")

	#................................................... IF BOTH OPERANDS ARE IDENTIFIER .............................................................
	if type(l.right.var.left) is vast.Identifier and type(l.right.var.right) is vast.Identifier:
		temp_regs.append(str(l.right.var.left))   
		temp_regs.append(str(l.right.var.right))
		return (" ( ( " + rewrite(l.left.var.name,l.right.var.left.name,rewrite_op,inputs,module,temp_regs) +  operator  + rewrite(l.left.var.name,l.right.var.right.name,rewrite_op,inputs,module,temp_regs) + " ) & " + str(lhs_const) + " ) ")

	#................................................... IF 1ST OPERAND IS IDENTIFIER AND OTHER IS CONSTANT ..........................................
	if type(l.right.var.left) is vast.Identifier and type(l.right.var.right) is vast.IntConst:
		temp_regs.append(str(l.right.var.left))
		val2,wwidth,bits=resolve(l.right.var.right)        
		return (" ( ( " + rewrite(l.left.var.name,l.right.var.left.name,rewrite_op,inputs,module,temp_regs) +  operator  + val2 + " ) & " + str(lhs_const) + " ) ")                        

	#................................................... IF 2ND OPERAND IS IDENTIFIER AND OTHER IS CONSTANT ..........................................
	if type(l.right.var.left) is vast.IntConst and type(l.right.var.right) is vast.Identifier:
		temp_regs.append(str(l.right.var.right))
		val1,wwidth,bits=resolve(l.right.var.left)        
		return (" ( ( " + val1 +  operator  + rewrite(l.left.var.name,l.right.var.right.name,rewrite_op,inputs,module,temp_regs) + " ) & " + str(lhs_const) + " ) ")
	
	#................................................... IF BOTH OPERANDS ARE CONSTANT ................................................................
	if type(l.right.var.left) is vast.IntConst and type(l.right.var.right) is vast.IntConst:
		val1,wwidth1,bits1=resolve(l.right.var.left)
		val2,wwidth2,bits2=resolve(l.right.var.right)        
		return (" ( ( " + val1 +  operator  + val2 + " ) & " + str(lhs_const) + " ) ")

#................................................. PROCESS RT OPERATION FOR RELATIONAL TYPE .........................................................
def relational_operation(lside,value,rewrite_op,inputs,module,temp_regs,operator,l):    
	bits1="63"
	bits2="63"
	bits="63"
	iwidth="63"
	iwidth1="63"
	width="63"
	if l.left.var.name in all_variable_set:
		width=all_variable_set[l.left.var.name]["width"]
	lhs_const = make_constant(int(str(width))+1)	

	#................................................... IF BOTH OPERANDS IN CONDITION ARE SIGNED ...................................................
	if type(l.right.var.cond.left) and type(l.right.var.cond.right) is vast.SystemCall:                            
		st=""
		st1=""

		#............................................ IF TRUE VALUE OF CONDITION IS CONSTANT ........................................................
		if type(l.right.var.true_value) is vast.IntConst:
			st,wwidth,bits=resolve(l.right.var.true_value)
		else:

			#............................................ IF TRUE VALUE OF CONDITION IS SIGNED.......................................................
			if type(l.right.var.true_value) is vast.SystemCall:
				temp_regs.append(str(l.right.var.true_value.args[0]))
				if l.right.var.true_value.args[0].name in all_variable_set:
					iwidth=str(int(str(all_variable_set[l.right.var.true_value.args[0].name]["width"]))+1)
				st="do_twos_complement( " + rewrite("",l.right.var.true_value.args[0],rewrite_op,inputs,module,temp_regs) +" , " + iwidth + " ) "

			#............................................ IF TRUE VALUE OF CONDITION IS IDENTIFIER ..................................................
			if type(l.right.var.true_value) is vast.Identifier:
				temp_regs.append(str(l.right.var.true_value))
				st=rewrite("",l.right.var.true_value,rewrite_op,inputs,module,temp_regs)
		
		#............................................ IF FALSE VALUE OF CONDITION IS CONSTANT .......................................................
		if type(l.right.var.false_value) is vast.IntConst:
			st1,wwidth,bits=resolve(l.right.var.false_value) 
		else:

			#............................................ IF FALSE VALUE OF CONDITION IS SIGNED......................................................
			if type(l.right.var.false_value) is vast.SystemCall:
				temp_regs.append(str(l.right.var.false_value.args[0]))
				if l.right.var.false_value.args[0].name in all_variable_set:
					iwidth=str(int(str(all_variable_set[l.right.var.false.args[0].name]["width"]))+1)
				st1="do_twos_complement( " +rewrite("",l.right.var.false_value.args[0],rewrite_op,inputs,module,temp_regs) + " , " + iwidth + " ) "

			#............................................ IF FALSE VALUE OF CONDITION IS IDENTIFIER..................................................
			if type(l.right.var.false_value) is vast.Identifier:
				st1=rewrite("",l.right.var.false_value,rewrite_op,inputs,module,temp_regs)


		
		val1=""
		val2=""
		if type(l.right.var.cond.left.args[0]) is vast.IntConst:
			val1,wwidth1,bits1=resolve(l.right.var.cond.left.args[0])
		if type(l.right.var.cond.right.args[0]) is vast.IntConst:
			val2,wwidth2,bits2=resolve(l.right.var.cond.right.args[0])

		#............................................ IF BOTH OPERANDS IN CONDITION ARE SIGNED IDENTIFIERS ..........................................
		if val1 == "" and val2 == "":            
			temp_regs.append(str(l.left.var.name))                                
			return ( " ( " + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.cond.left.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + bits1 + " ) " + operator + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.cond.right.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + bits2 + " ) " +" ? "+st+" : "+st1 + " ) ")            
				
		else:
			#............................................ IF 1ST OPERAND IN CONDITION IS SIGNED IDENTIFIER ..........................................
			if(val1=="" and val2!=""):                
				temp_regs.append(str(l.right.var.cond.left.args[0].name))
				return ( " ( " + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.cond.left.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + bits1 + " ) "  + operator + "do_twos_complement(" + val2 + " , " + bits1 + " ) " +" ? "+st+" :  "+st1+" ) ")                
					
			#............................................ IF 2ND OPERAND IN CONDITION IS SIGNED IDENTIFIER ..........................................
			elif(val2=="" and val1!=""):    
				temp_regs.append(str(l.right.var.cond.right.args[0].name))
				return ( " ( " + "do_twos_complement( " + val1 + " , " + bits2 + " ) " + operator + "do_twos_complement( " +  rewrite(l.left.var.name,l.right.var.cond.right.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + bits2 +  " ) " +" ? "+st+" : "+st1)                
					
			temp_regs.append(str(l.left.var.name))

	#................................................... IF BOTH OPERANDS IN CONDITION ARE NOT SIGNED ................................................
	else:
		st=""
		st1=""


		#............................................ IF TRUE VALUE OF CONDITION IS CONSTANT .........................................................
		if type(l.right.var.true_value) is vast.IntConst:
			st,wwidth,bits=resolve(l.right.var.true_value)
		else:

			#............................................ IF TRUE VALUE OF CONDITION IS SIGNED........................................................
			if type(l.right.var.true_value) is vast.SystemCall:
				temp_regs.append(str(l.right.var.true_value.args[0]))
				if l.right.var.true_value.args[0].name in all_variable_set:
					iwidth=str(int(str(all_variable_set[l.right.var.true_value.args[0].name]["width"]))+1)
				st="do_twos_complement( " +rewrite("",l.right.var.true_value.args[0],rewrite_op,inputs,module,temp_regs) + " , " + iwidth + " ) "			

			#............................................ IF TRUE VALUE OF CONDITION IS IDENTIFIER ...................................................
			if type(l.right.var.true_value) is vast.Identifier:
				temp_regs.append(str(l.right.var.true_value))
				st=rewrite("",l.right.var.true_value.name,rewrite_op,inputs,module,temp_regs)
		

		#............................................ IF FALSE VALUE OF CONDITION IS CONSTANT ........................................................
		if type(l.right.var.false_value) is vast.IntConst:
			st1,wwidth,bits=resolve(l.right.var.false_value) 
		else:

			#............................................ IF FALSE VALUE OF CONDITION IS SIGNED.......................................................
			if type(l.right.var.false_value) is vast.SystemCall:
				temp_regs.append(str(l.right.var.false_value.args[0]))
				if l.right.var.false_value.args[0].name in all_variable_set:
					iwidth=str(int(str(all_variable_set[l.right.var.false_value.args[0].name]["width"]))+1)
				st1="do_twos_complement( " +rewrite("",l.right.var.false_value.args[0],rewrite_op,inputs,module,temp_regs) + " , " + iwidth + " ) "

			#............................................ IF FALSE VALUE OF CONDITION IS IDENTIFIER ..................................................
			if type(l.right.var.false_value) is vast.Identifier:
				temp_regs.append(str(l.right.var.false_value))
				st1=rewrite("",l.right.var.false_value.name,rewrite_op,inputs,module,temp_regs)

		val1=""
		val2=""
		if type(l.right.var.cond.left) is vast.IntConst:
			val1,wwidth,bits=resolve(l.right.var.cond.left)
		if type(l.right.var.cond.right) is vast.IntConst:
			val2,wwidth,bits=resolve(l.right.var.cond.right)

		#............................................ IF BOTH OPERANDS IN CONDITION ARE SIGNED IDENTIFIERS ...........................................
		if val1 == "" and val2 == "":            
			temp_regs.append(str(l.left.var.name))                                
			return ( " ( " + rewrite(l.left.var.name,l.right.var.cond.left.name,rewrite_op,inputs,module,temp_regs) + operator + rewrite(l.left.var.name,l.right.var.cond.right.name,rewrite_op,inputs,module,temp_regs) +" ? "+st+" : "+st1 + " ) ")                    
				
		else:
			#............................................ IF 1ST OPERAND IN CONDITION IS SIGNED IDENTIFIER ...........................................
			if(val1=="" and val2!=""):                         								
				temp_regs.append(str(l.right.var.cond.left.name))                                                                        
				return ( " ( " + rewrite(l.left.var.name,l.right.var.cond.left.name,rewrite_op,inputs,module,temp_regs)+ operator +val2+" ? "+st+" :  "+st1+" ) ")                							
					
			#............................................ IF 2ND OPERAND IN CONDITION IS SIGNED IDENTIFIER ...........................................
			elif(val2=="" and val1!=""):                        
				temp_regs.append(str(l.right.var.cond.right.name))
				return ( " ( " + val1 + operator +rewrite(l.left.var.name,l.right.var.cond.right.name,rewrite_op,inputs,module,temp_regs)+" ? "+st+" : "+st1 + " ) ")                
					
		temp_regs.append(str(l.left.var.name))

#................................................. PROCESS RT OPERATION FOR SHIFT TYPE ...............................................................
def shift_op(l,op,temp_regs,rewrite_op,inputs,module,lhs_const):

	#......................................................... IF BOTH OPERANDS ARE CONSTANTS ........................................................
	if (type(l.right.var.right) is vast.IntConst) and type(l.right.var.left) is vast.IntConst:
		s1,wwidth,bits=resolve(l.right.var.right)
		s,wwidth1,bits=resolve(l.right.var.left)               
		return (" ( ( " + s + op + s1 + " )  & " + str(lhs_const) + " ) ")

	#............................................................ IF 2ND OPERAND IS CONSTANT .........................................................
	elif type(l.right.var.right) is vast.IntConst:
		s,wwidth1,bits=resolve(l.right.var.right)
		temp_regs.append(str(l.right.var.left.name))                       		
		return (" ( ( " + rewrite(l.left.var.name,l.right.var.left.name,rewrite_op,inputs,module,temp_regs) + op + s + " )  & " + str(lhs_const) + " ) ")

	#............................................................ IF 1ST OPERAND IS CONSTANT ..........................................................
	elif type(l.right.var.left) is vast.IntConst:
		s,wwidth1,bits=resolve(l.right.var.left)   
		temp_regs.append(str(l.right.var.right.name))                                        
		return (" ( ( " + s + op + rewrite(l.left.var.name,l.right.var.right.name,rewrite_op,inputs,module,temp_regs) + " )  & " + str(lhs_const) + " ) ")

	else:						

		#........................................................ IF BOTH OPERANDS ARE SIGNED ........................................................
		if type(l.right.var.left) and (l.right.var.right) is vast.SystemCall:							
			temp_regs.append(str(l.right.var.left.args[0].name))
			temp_regs.append(str(l.right.var.right.args[0].name))                                        
			iwidth="63"
			if l.right.var.left.args[0].name in all_variable_set:
				iwidth=str(int(str(all_variable_set[l.right.var.left.args[0].name]["width"]))+1)
			iwidth1="63"
			if l.right.var.right.args[0].name in all_variable_set:
				iwidth1=str(int(str(all_variable_set[l.right.var.right.args[0].name]["width"]))+1)
			return (" ( ( " + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.left.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + iwidth + " ) " + op + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.right.args[0].name,rewrite_op,inputs,module,temp_regs)+ " , " + iwidth1 + " ) " + " )  & " + str(lhs_const) + " ) ")                                           

		#........................................................ IF 1ST OPERAND IS SIGNED ...........................................................		
		elif type(l.right.var.left) is vast.SystemCall:
			temp_regs.append(str(l.right.var.left.args[0].name))
			iwidth="63"
			if l.right.var.left.args[0].name in all_variable_set:
				iwidth=str(int(str(all_variable_set[l.right.var.left.args[0].name]["width"]))+1)
			return (" ( ( " + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.left.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + iwidth + " ) " + op + rewrite(l.left.var.name,l.right.var.right.name,rewrite_op,inputs,module,temp_regs) + " )  & " + str(lhs_const) + " ) ")                                           
		
		#........................................................ IF 2ND OPERAND IS SIGNED ............................................................						
		elif type(l.right.var.right) is vast.SystemCall:
			temp_regs.append(str(l.right.var.right.args[0].name))                                        
			iwidth1="63"
			if l.right.var.right.args[0].name in all_variable_set:
				iwidth1=str(int(str(all_variable_set[l.right.var.right.args[0].name]["width"]))+1)
			return (" ( ( " + rewrite(l.left.var.name,l.right.var.left.name,rewrite_op,inputs,module,temp_regs) + op + "do_twos_complement( " + rewrite(l.left.var.name,l.right.var.right.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + iwidth1 + "  ) " + " )  & " + str(lhs_const) + " ) ")                                           

		#........................................................ IF BOTH OPERANDS ARE IDENTIFIERS ....................................................
		else:
			temp_regs.append(str(l.right.var.left.name))                                        
			temp_regs.append(str(l.right.var.right.name))                                        
			return ("( ( " + rewrite(l.left.var.name,l.right.var.left.name,rewrite_op,inputs,module,temp_regs) + op + rewrite(l.left.var.name,l.right.var.right.name,rewrite_op,inputs,module,temp_regs) + " )  & " + str(lhs_const) + " ) ")


#......................................................... MAIN BODY OF REWRITE METHOD.................................................................
def rewrite(lside,value,rewrite_op,inputs,module,temp_regs):    	
	temp_regs.append(lside)
	for k in inputs:
		if k==value:
			width=all_variable_set[k]["width"] 
			lhs_const = make_constant(int(str(width))+1)	           
			return "( " + (value) + " & " + str(lhs_const) + " ) "
	flag_reg = False
	for l in module.items:        
		if type(l) is vast.Assign:

			#............................. CHECK IF LHS IS MATCHING WITH OUR VALUE I.E. RHS OF MICRO OPERATION...................................                               
			if l.left.var.name == value:                                                				
				width="63"
				if l.left.var.name in all_variable_set:
					width=all_variable_set[l.left.var.name]["width"]
				lhs_const = make_constant(int(str(width))+1)	
				flag_reg=True

				#..................................................... IF A SYSTEM CALL IN RHS ..................................................
				if type(l.right.var) is vast.SystemCall:					
					flag=False                    
					for k in inputs:
						if k==l.right.var.args[0].name:
							flag=True                            
							temp_regs.append(str(l.left.var.name))
							iwidth="63"
							if l.right.var.args[0].name in all_variable_set:
								iwidth=str(int(str(all_variable_set[l.right.var.args[0].name]["width"]))+1)
							return( "( do_twos_complement( " + l.right.var.args[0].name + " , " + iwidth + " )  & " + str(lhs_const) + " ) ")
					if flag==False:                        
						temp_regs.append(str(l.left.var.name))
						iwidth="63"
						if l.right.var.args[0].name in all_variable_set:
							iwidth=str(int(str(all_variable_set[l.right.var.args[0].name]["width"]))+1)
						return ("( do_twos_complement( " + rewrite(l.left.var.name,l.right.var.args[0].name,rewrite_op,inputs,module,temp_regs) + " , " + iwidth + " ) & " + str(lhs_const) + " ) ")


				#..................................................... IF A IDENTIFIER IN RHS ...................................................
				if type(l.right.var) is vast.Identifier:
					flag=False                    
					for k in inputs:
						if k==l.right.var.name:
							flag=True                            
							temp_regs.append(str(l.left.var.name))
							return " ( " + l.right.var.name + " & " + str(lhs_const) + " ) "
					if flag==False:                        
						temp_regs.append(str(l.left.var.name))
						return " ( " + rewrite(l.right.var.name,l.right.var.name,rewrite_op,inputs,module,temp_regs) + " & " + str(lhs_const) + " ) "



				#..................................................... IF A ARITHMETIC OP IN RHS .................................................
				if type(l.right.var) is vast.Times:
					return arithmetic_operation(lside,value,rewrite_op,inputs,module,temp_regs," * ",l)                                    

				if type(l.right.var) is vast.Plus: 
					return arithmetic_operation(lside,value,rewrite_op,inputs,module,temp_regs," + ",l)                    

				if type(l.right.var) is vast.Minus:
					return arithmetic_operation(lside,value,rewrite_op,inputs,module,temp_regs," - ",l)                    

				if type(l.right.var) is vast.And:
					return arithmetic_operation(lside,value,rewrite_op,inputs,module,temp_regs," & ",l)                    

				if type(l.right.var) is vast.Or:								
					return arithmetic_operation(lside,value,rewrite_op,inputs,module,temp_regs," | ",l)                    

				if type(l.right.var) is vast.Xor:
					return arithmetic_operation(lside,value,rewrite_op,inputs,module,temp_regs," ^ ",l)                    

				if type(l.right.var) is vast.LessThan:
					return arithmetic_operation(lside,value,rewrite_op,inputs,module,temp_regs," < ",l) 


				#..................................................... IF A RELATIONAL OP IN RHS ...................................................
				if type(l.right.var) is vast.Cond:					
					if type(l.right.var.cond) is vast.LessThan:
						return relational_operation(lside,value,rewrite_op,inputs,module,temp_regs," < ",l) 
					
					if type(l.right.var.cond) is vast.GreaterThan:
						return relational_operation(lside,value,rewrite_op,inputs,module,temp_regs," > ",l)                         

					if (type(l.right.var.cond) is vast.Eq) or (type(l.right.var.cond) is vast.Eql):
						return relational_operation(lside,value,rewrite_op,inputs,module,temp_regs," == ",l)                         

					if (type(l.right.var.cond) is vast.NotEq) or (type(l.right.var.cond) is vast.NotEql):
						return relational_operation(lside,value,rewrite_op,inputs,module,temp_regs," != ",l)    					                    
							
				#......................................................... IF A SHIFT OP IN RHS ....................................................
				if type(l.right.var) is vast.Sll:                                            
					return shift_op(l," << ",temp_regs,rewrite_op,inputs,module,lhs_const)                                           

				if type(l.right.var) is vast.Srl:
					return shift_op(l," >> ",temp_regs,rewrite_op,inputs,module,lhs_const)                                           

				if type(l.right.var) is vast.Sra:                                            
					return shift_op(l," << ",temp_regs,rewrite_op,inputs,module,lhs_const)                                           					

				if type(l.right.var) is vast.IntConst:
					val,wwidth,bits=resolve(l.right.var)
					return " ( " + val + " ) & " + wwidth
				
				else:
					print("PASS")
					pass                    
			else:
				pass                
	if flag_reg == False:
		temp_regs.append(value)  
		#width=all_variable_set[k]["width"] 
		#lhs_const = make_constant(int(str(width))+1)	           
		#return " ( " + (value) + " & " + str(lhs_const) + " ) "      		
		return value
	return ""


#......................................... REPLACE ALL VARIABLES IN RHS WITH OLD VARIABLES I.E. VAR__TEMP...........................................
def process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1):
	#print("Processing:",op)

	if '?' in op:
		lhs = ""
		rhs = ""
		flag_equal = False
		for i in op:
			if flag_equal==False:
				if i == "=":
					flag_equal=True
				else:
					lhs += i
			else:
				rhs += i        
	else:
		op_list=op.split('=')

		rhs = op_list[1]
		lhs = op_list[0]
	operands=rhs.split(' ')
	new_rhs=""
	for i1 in operands:        
		if i1!="" and (i1 not in level_trigger_list) and ((i1 in regs.keys()) or (i1 in temp_regs)):
			new_rhs = new_rhs + " " + i1 + "__temp "
		else:
			new_rhs = new_rhs + " " + i1
	#print("Processed:",lhs+"="+new_rhs)
	if "ap_return" in lhs:
		return op
	return lhs+"="+new_rhs


#.............................................. WRITING 2's COMPLEMENT LOGIC IN FILE ..............................................................
def write_2s_complement(f):
	f.write("long long int do_twos_complement( unsigned long long int a ,int width){\n")
	f.write("	int msb = (a >> (width-1)) & 1;\n")
	f.write("	if(msb==1){\n")
	f.write("		int bit[width];int ans[width];\n")
	f.write("		unsigned long long int a1=a;\n")
	f.write("		int i=0;\n")
	f.write("		for(i=0;i<width;i++){\n")
	f.write("			bit[i]=0;\n")
	f.write("			ans[i]=0;\n")
	f.write("		}\n")
	f.write("		i=0;\n")
	f.write("		while(a1>0){\n")
	f.write("			bit[i]=a1%2;\n")
	f.write("			i++;\n")
	f.write("			a1/=2;\n")
	f.write("		}\n")
	f.write("		int flag=0;\n")
	f.write("		for(i=0;i<width;i++){\n")
	f.write("			if(bit[i]==1 && flag==0){\n")
	f.write("				ans[i]=1;\n")
	f.write("				flag=1;\n")
	f.write("			}\n")
	f.write("			else if(flag==0)\n")
	f.write("				ans[i]=bit[i];\n")
	f.write("			else\n")
	f.write("				ans[i]=1 ^ bit[i];\n")
	f.write("		}\n")
	f.write("		long long int fans=0;\n")
	f.write("		for(i=0;i<width;i++)\n")
	f.write("			fans+=ans[i]*(1<<i);\n")
	f.write("		fans = -fans;	\n")
	f.write("		return fans;\n")
	f.write("	}else{	 \n")
	f.write("		return a;\n")
	f.write("	}\n")
	f.write("}\n")

#.......................................................... GENERATE C CODE FUNCTION .............................................................
def generate_code(mod_name,modules,inputs,outputs,regs,wires,controller,state_always_dict,state_op_dict,temp_regs,ap_return_op,vld_op,ram_module_objs,rom_module_objs,rewrite_rom_resover,all_state_ops,func_module_objs,twos_flag,level_trigger_list,state_op_dict1):
	code_declaration=set()    
	code_declaration1=set()    
	
	c_file_name = "ccode_" + mod_name+ ".c"
	f= open(path+c_file_name,"w+")

	#..................................................... WRITING HEADERS AND #DEFINE TO C CODE .................................................
	f.write("#include<stdio.h>\n")
	module = modules[mod_name]
	#print("\n\n\n",all_variable_set)
	for r_obj in ram_module_objs:             
		for i in r_obj.ram_params:
			f.write("#define "+str(r_obj.identifier)+"_"+str(i)+" "+str(r_obj.ram_params[i])+"\n")

	for r_obj in rom_module_objs:         
		for i in r_obj.rom_params:
			f.write("#define "+str(r_obj.identifier)+"_"+str(i)+" "+str(r_obj.rom_params[i])+"\n")	

	
	#..................................................... TWO WRITE 2'S COMEPLEMENT LOGIC ......................................................
	if(twos_flag==True):
		write_2s_complement(f)


	#..................................................... ADDING INPUT OUTPUT VARIABLES TO LIST ................................................
	unsigned_data_type = "unsigned long long int "
	signed_data_type = "long long int "

	parameter_list={}	
	for i in inputs:			
		if inputs[i]["signed"]=="False":			
			parameter_list[i]=unsigned_data_type
		else:        
			parameter_list[i]=signed_data_type
	for i in outputs:
		if outputs[i]["signed"]=="False":
			parameter_list[i]=unsigned_data_type
		else:
			parameter_list[i]=signed_data_type
	
	
	#................................................ WRITING PROTOTYPES OF FUNCTIONS INTO OUTPUT C CODE ........................................	
	for var in func_module_objs:						
		f.write("void ")		
		f.write(var.module_name+"(")				
		#if param_port_list:
		for k, v in sorted(var.port_mapping.items(), key=lambda kv: kv[1]):
			for i in all_variable_set:
				if(i==k):					
					if str(all_variable_set[i]["signed"])=="False":
						
						f.write(unsigned_data_type+"*")
					else:        						
						f.write(signed_data_type+"*")
			f.write(" ,")
		f.write("int dummy")
		f.write(");\n")
				
	
	#............................................... WRITING TOP FUNCTION DEFINITION IN OUTPUT C CODE.............................................
	f.write("void "+mod_name+"(")
	
	for i in sorted (parameter_list.keys()) :     
		f.write(parameter_list[i]+"*"+i+"__1,")            
	f.write("int dummy)")        	    

	f.write("{\n")

	#............................................... COPYING PASSED VARIABLES TO LOCAL COPIES.....................................................
	for i in sorted (parameter_list.keys()) :
		f.write(parameter_list[i]+i+"=*"+i+"__1;\n")
		code_declaration1.add(i)
		code_declaration1.add(i+"__temp")

	#............................................... MAKING CODE DECLARATION SET..................................................................
	
	for i in inputs:
		if inputs[i]["signed"]=="False":
			#code_declaration1.add(i)
			if i!="":
				code_declaration1.add(i+"__temp")	    	
		else:        
			#code_declaration.add(i)
			if i!="":    	
				code_declaration.add(i+"__temp")	        

	for i in regs:
		if (i not in inputs) and (i not in outputs):
			if regs[i]["signed"]=="False":
				code_declaration1.add(i)
				if i!="":
					code_declaration1.add(i+"__temp")
			else:        
				code_declaration.add(i)
				if i!="":    	
					code_declaration.add(i+"__temp")    

	for i in wires:
		if (i not in inputs) and (i not in outputs) and ("ap_CS_fsm" not in i):        
			if wires[i]["signed"]=="False":
				code_declaration1.add(i)
				if i!="":
					code_declaration1.add(i+"__temp")
			else:        
				code_declaration.add(i)
				if i!="":    	
					code_declaration.add(i+"__temp")	       
	
	for i in temp_regs:
		if (i not in inputs) and (i not in outputs):
			if ((i not in code_declaration1) and (i not in code_declaration)):        
				if i in all_variable_set:
					if all_variable_set[i]["signed"]=="False":
						code_declaration1.add(i)
						if i!="":
							code_declaration1.add(i+"__temp")
					else:
						code_declaration.add(i)
						if i!="":
							code_declaration.add(i+"__temp")
				else:
					code_declaration1.add(i)
					if i!="":
						code_declaration1.add(i+"__temp")



	for i in controller:
		state_var = i.replace("ST","CS")
		code_declaration.add(state_var)


	#........................................................ ADDING RAM MODULE VARIABLES.........................................................
	for r_obj in ram_module_objs:
		for p in r_obj.port_mapping:
			if (str(r_obj.port_mapping[p]) not in inputs) and (str(r_obj.port_mapping[p]) not in outputs):
				if int(str(r_obj.ram_params["DWIDTH"]))>32 and (str(r_obj.port_mapping[p]) not in code_declaration):
					code_declaration1.add(str(r_obj.port_mapping[p]))
					if ("q0" in str(r_obj.port_mapping[p])):
						code_declaration1.add(str(r_obj.port_mapping[p])+"__temp")
				else:
					if (str(r_obj.port_mapping[p]) not in code_declaration1):
						code_declaration.add(str(r_obj.port_mapping[p]))
						if ("q0" in str(r_obj.port_mapping[p])):
							code_declaration.add(str(r_obj.port_mapping[p])+"__temp")

	#....................................................... ADDING ROM MODULE VARIABLES..........................................................
	for r_obj in rom_module_objs:
		for p in r_obj.port_mapping:			
			if (str(r_obj.port_mapping[p]) not in inputs) and (str(r_obj.port_mapping[p]) not in outputs):
				if int(str(r_obj.rom_params["DWIDTH"]))>32 and (str(r_obj.port_mapping[p]) not in code_declaration):
					code_declaration1.add(str(r_obj.port_mapping[p]))
					if ("q0" in str(r_obj.port_mapping[p])):
						code_declaration1.add(str(r_obj.port_mapping[p])+"__temp")
				else:
					if (str(r_obj.port_mapping[p]) not in code_declaration1):
						code_declaration.add(str(r_obj.port_mapping[p]))
						if ("q0" in str(r_obj.port_mapping[p])):
							code_declaration.add(str(r_obj.port_mapping[p])+"__temp")
	
	#....................................................... MAKING FINAL LIST WITHOUT DUPLICATES.................................................
	code_declaration_list = []
	code_declaration_list1 = []
	for i in code_declaration:
		code_declaration_list.append(str(i))
	code_declaration_list.sort()    

	for i in code_declaration1:
		code_declaration_list1.append(str(i))
	code_declaration_list1.sort()  

	
	#.................................................. WRITING FINAL LIST OF VARIABLES TO OUTPUT C CODE .........................................
	for i in code_declaration_list:        
		if str(i) != "" and (str(i) not in parameter_list.keys()):
			if "ap_start" == str(i):
				f.write("   "+ signed_data_type +str(i)+"=1;\n")               
			elif "ap_done" == str(i):
				f.write("   "+ signed_data_type +str(i)+"=0;\n")
			elif "ap_rst" == str(i):
				f.write("   "+ signed_data_type +str(i)+"=0;\n")
			elif "ap_CS_fsm" in str(i):
				f.write("   "+ signed_data_type +str(i)+"=0;\n")
			else:
				f.write("   "+ signed_data_type +str(i)+"=0;\n")
	for i in code_declaration_list1:
		if str(i) != "" and (str(i) not in parameter_list.keys()):
			if "ap_start" == str(i):
				f.write("   "+ unsigned_data_type +str(i)+"=1;\n")               
			elif "ap_done" == str(i):
				f.write("   "+ unsigned_data_type +str(i)+"=0;\n")
			elif "ap_rst" == str(i):
				f.write("   "+ unsigned_data_type +str(i)+"=0;\n")
			elif "ap_CS_fsm" in str(i):
				f.write("   "+ unsigned_data_type +str(i)+"=0;\n")
			else:
				f.write("   "+ unsigned_data_type +str(i)+"=0;\n")

	
	f.write("	ap_done=0;\n")
	f.write("	ap_start=1;\n")

	
	#................................................. RAM/ROM DECLARATION ......................................................................
	for r_obj in ram_module_objs:        
		if int(str(r_obj.ram_params["DWIDTH"]))>32:
			f.write("   "+ unsigned_data_type +str(r_obj.array_name)+"["+r_obj.identifier+"_MEM_SIZE];\n")              
		else:
			f.write("   "+ unsigned_data_type +str(r_obj.array_name)+"["+r_obj.identifier+"_MEM_SIZE];\n")              

	for r_obj in rom_module_objs:        
		if int(str(r_obj.rom_params["DWIDTH"]))>32:
			f.write("   "+ unsigned_data_type +str(r_obj.array_name)+"["+r_obj.identifier+"_MEM_SIZE]={\n")              
		else:
			f.write("   "+ unsigned_data_type +str(r_obj.array_name)+"["+r_obj.identifier+"_MEM_SIZE]={\n")              
		f_len = len(r_obj.file_values)
		for v in range(f_len-1):
			f.write(str(r_obj.file_values[v])+",")
		f.write(str(r_obj.file_values[f_len-1])+"};\n")
	

	#................................................. WRITING MAIN BODY ........................................................................
	ap_return_flag=False   
	for i in controller:        
		end_flag=False

		#.............................................. STATE LABEL .............................................................................
		print("\nSTATE:     ",i)
		l = str(i).replace("ST","CS")        
		f.write("\n   "+str(i)+":\n\n")   


		#.............................................. SET STATE VARIABLE ......................................................................	
		for i11 in controller:
			l1 = str(i11).replace("ST","CS")             
			if i11 == i:
				f.write("	"+l1+" = 1;\n")
			else:
				f.write("	"+l1+" = 0;\n")

		#.............................................. OLD_VALUE = NEW_VALUE ...................................................................	
		for i1 in code_declaration:
			if i1!="" and (i1+"__temp") in code_declaration:
				f.write("   "+ i1 +"__temp = " + i1 + " ;\n")         
		for i1 in code_declaration1:
			if i1!="" and (i1+"__temp") in code_declaration1:
				f.write("   "+ i1 +"__temp = " + i1 + " ;\n")
		f.write("\n")


		#.............................................. RESET READ AND WRITE SIGNALS FOR RAM AND ROM ...........................................
		for r_obj in ram_module_objs:
			#print("ram port mapping")
			#print(r_obj.port_mapping)
			curr_sigs=r_obj.state_sig_flags[i] 
				   
			for j in curr_sigs:                    
				if(curr_sigs[j]==True):
					if (j in r_obj.port_mapping):
						f.write("       "+str(r_obj.port_mapping[j])+" = 0;\n")
				else:
					if (j in r_obj.port_mapping):
						f.write("       "+str(r_obj.port_mapping[j])+" = 0;\n")        

			for op in r_obj.assign_ops:
				new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)                                                                                                
				f.write("       "+new_op+";\n")

		for r_obj in rom_module_objs:
			#print("rom port mapping")
			#print(r_obj.port_mapping)
			curr_sigs=r_obj.state_sig_flags[i]        
			for j in curr_sigs:                    
				if(curr_sigs[j]==True):
					if (j in r_obj.port_mapping):
						f.write("       "+str(r_obj.port_mapping[j])+" = 0;\n")
				else:
					if (j in r_obj.port_mapping):
						f.write("       "+str(r_obj.port_mapping[j])+" = 0;\n")        

			#print(r_obj.module_name,"OYO",r_obj.assign_ops)			
			for op in r_obj.assign_ops:
				new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)                                                                                                
				f.write("       "+new_op+";\n")


		#........................................... WRITING ALL STATE OPERATIONS ..............................................................
		for op in all_state_ops:
			f.write("       "+op+" ;\n")		

		#........................................... WRITING LEVEL TRIGGERED OPERATIONS ........................................................
		
		for k in state_op_dict1[i]:
			
			#............................................. IF OPERATIONS HAS NO CONDITIONS .....................................................
			if(k["condition"]=="T") :
				for op in k["operations"]:
					new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)                                                                                                    
					f.write("               "+new_op+";\n")                    
					if("ap_vld" in op):
						for key in vld_op:                                            
							for v_op in vld_op[key]:
								new_op = process_operation(level_trigger_list,v_op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
								f.write("               "+new_op+";\n")
					apop = op.replace(" ","")                    
					if("ap_done" in apop):
						f.write("			if(ap_done==1){\n")                        
						for op1 in ap_return_op:
							ap_return_flag=True
							new_op = process_operation(level_trigger_list,op1,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
							f.write("          "+new_op+";\n")
						f.write("			}\n")
						end_flag=True                        
					for name in func_module_objs:
						#print(name.identifier+"_ap_start=1")
						if name.identifier+"_ap_start_reg=1" in apop:
							call_func_dict[name.module_name]=True
			if len(k)!=0:

				#............................................. IF OPERATIONS HAS CONDITIONS ....................................................
				if(k["condition"]!="T"):                            
					f.write("       if("+k["condition"]+")\n")
					f.write("       {\n")
					for op in k["operations"]:
						new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)                                                                                                
						f.write("           "+new_op+";\n")
						if("ap_vld" in op):
							for key in vld_op:                                            
								for v_op in vld_op[key]:
									new_op = process_operation(level_trigger_list,v_op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
									f.write("               "+new_op+";\n")
						apop = op.replace(" ","")                                                
						if("ap_done" in apop):
							f.write("			if(ap_done==1){\n")
							for op1 in ap_return_op:
								ap_return_flag=True
								new_op = process_operation(level_trigger_list,op1,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
								f.write("          "+new_op+";\n")                                       
							f.write("			}\n")
							end_flag=True 
						for name in func_module_objs:
							#print(name.identifier+"_ap_start=1")
							if name.identifier+"_ap_start_reg=1" in apop:
								call_func_dict[name.module_name]=True                                   
					f.write("       }\n")   

		#............................................... RESET FUNCTION CALL FLAGS .............................................................
		call_func_dict={}
		for name in func_module_objs:
			call_func_dict[name.module_name]=False


		#............................................... WRITING OPERATIONS WITH NO CONDITIONS .................................................
		for k in state_op_dict[i]:
			if(k["condition"]=="T") :
				for op in k["operations"]:
					new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)                                                                                                    
					f.write("               "+new_op+";\n")                    
					if("ap_vld" in op):
						for key in vld_op:                                            
							for v_op in vld_op[key]:
								new_op = process_operation(level_trigger_list,v_op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
								f.write("               "+new_op+";\n")
					apop = op.replace(" ","")                    
					if("ap_done" in apop):
						f.write("			if(ap_done==1){\n")                        
						for op1 in ap_return_op:
							ap_return_flag=True
							new_op = process_operation(level_trigger_list,op1,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
							f.write("          "+new_op+";\n")
						f.write("			}\n")
						end_flag=True                        
					for name in func_module_objs:
						#print(name.identifier+"_ap_start=1")
						if name.identifier+"_ap_start_reg=1" in apop:
							call_func_dict[name.module_name]=True
		
		#............................................... WRITING FOR CONDITIONS IN CONTROLLER ...................................................
		index=0
		for j in controller[i]:
			if index==0:

				#....................................... IF CONDITION NOT PRESENT IN CONTROLLER .................................................                
				if(j["condition"]=='T'):
					for k in state_op_dict[i]:

						#....................................... IF CONDITION IS PRESENT IN ALWAYS BLOCK ........................................
						if(k["condition"]!="T"):

							#.............................................. WRITE CONDITION .....................................................                            
							f.write("       if("+k["condition"]+")\n")
							f.write("       {\n")

							#............................................. WRITE OPERATIONS .....................................................
							for op in k["operations"]:
								new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)                                                                                                
								f.write("           "+new_op+";\n")

								#.......................................... WRITE VALID SIGNAL OPERATIONS .......................................
								if("ap_vld" in op):
									for key in vld_op:                                            
										for v_op in vld_op[key]:
											new_op = process_operation(level_trigger_list,v_op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
											f.write("               "+new_op+";\n")
								apop = op.replace(" ","")

								#.......................................... CHECK IF AP_DONE IS SET ............................................                                                
								if("ap_done" in apop):
									f.write("			if(ap_done==1){\n")
									for op1 in ap_return_op:
										ap_return_flag=True
										new_op = process_operation(level_trigger_list,op1,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
										f.write("          "+new_op+";\n")                                       
									f.write("			}\n")
									end_flag=True 

								#.......................................... CHECK IF AP_START OF ANY FUNCTION MODULE IS SET ....................
								for name in func_module_objs:
									#print(name.identifier+"_ap_start=1")
									if name.identifier+"_ap_start_reg=1" in apop:
										call_func_dict[name.module_name]=True                                   
							f.write("       }\n")   

			    #....................................... IF CONDITION PRESENT IN CONTROLLER .....................................................
				if(j["condition"]!="T"):

					#.............................................. WRITE CONDITION .............................................................					
					f.write("   if("+str(j["condition"])+"){\n")        

					#....................................... IF CONDITION IS PRESENT IN ALWAYS BLOCK ............................................                   
					for k in state_op_dict[i]:
						if(k["condition"]!="T"):
							#if( k["condition"] in j["condition"] ):
							f.write("       if("+k["condition"]+")\n")
							f.write("       {\n")

							#.............................................. WRITE OPERATIONS ....................................................
							for op in k["operations"]:
								new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)                                                                                                    
								f.write("           "+new_op+";\n")                

								#.......................................... WRITE VALID SIGNAL OPERATIONS .......................................
								if("ap_vld" in op):
									for key in vld_op:                                            
										for v_op in vld_op[key]:
											new_op = process_operation(level_trigger_list,v_op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
											f.write("               "+new_op+";\n")											
								apop = op.replace(" ","")      

								#.......................................... CHECK IF AP_DONE IS SET .............................................                                                                                              
								if("ap_done" in apop):
									f.write("			if(ap_done==1){\n")
									for op1 in ap_return_op:
										ap_return_flag=True
										new_op = process_operation(level_trigger_list,op1,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
										f.write("          "+new_op+";\n")                                       
									f.write("			}\n")
									end_flag=True

								#.......................................... CHECK IF AP_START OF ANY FUNCTION MODULE IS SET ....................
								for name in func_module_objs:
									#print(name.identifier+"_ap_start=1")
									if name.identifier+"_ap_start_reg=1" in apop:
										call_func_dict[name.module_name]=True                                                                           
							f.write("       }\n")                        

				
				#....................................... WRITE RAM BLOCK FOR THE CURRENT STATE .................................................
				for r_obj in ram_module_objs:
					for j1 in r_obj.state_op_dict[i]:
						cond = j1["condition"]
						for k in r_obj.port_mapping.keys():
							if(k in cond):
								cond=cond.replace(k,r_obj.port_mapping[k])            
						f.write("       if(" + cond + "){\n")
						for op in j1["operations"]:
							f.write("          "+str(op)+";\n")
						if len(j1["cascade"])!=0:
							for c in j1["cascade"]:
								cond1 = c["condition"]                
								for k in r_obj.port_mapping.keys():
									if(k in cond1):
										cond1=cond1.replace(k,r_obj.port_mapping[k])
								f.write("           if(" + cond1 + "){\n")
								for op in c["operations"]:
									f.write("              "+str(op)+";\n")                

							for c in j1["cascade"]:
								f.write("           }\n")        												
						f.write("       }\n")    

				'''
				for keys in rewrite_rom_resover:
					op = keys+" = "+rewrite_rom_resover[keys]

					new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
					f.write("          "+new_op+";\n")
				'''

				#....................................... WRITE ROM BLOCK FOR THE CURRENT STATE .................................................
				for r_obj in rom_module_objs:
					for j1 in r_obj.state_op_dict[i]:
						cond = j1["condition"]
						for k in r_obj.port_mapping.keys():
							if(k in cond):
								cond=cond.replace(k,r_obj.port_mapping[k])            
						f.write("       if(" + cond + "){\n")
						if len(j1["cascade"])!=0:
							for c in j1["cascade"]:
								cond1 = c["condition"]                
								for k in r_obj.port_mapping.keys():
									if(k in cond1):
										cond1=cond1.replace(k,r_obj.port_mapping[k])
								f.write("           if(" + cond1 + "){\n")
								for op in c["operations"]:
									f.write("              "+str(op)+";\n")                

							for c in j1["cascade"]:
								f.write("           }\n")        
						
						for op in j1["operations"]:
							f.write("          "+str(op)+";\n")
						f.write("       }\n")    
				
				
				#....................................... WRITE FUNCTION CALL FOR THE CURRENT STATE ..............................................
				for var in call_func_dict:
					if call_func_dict[var]==True:
						
						for obj in func_module_objs:
							if(obj.module_name==var):
								f.write("if ("+obj.identifier+"_ap_start_reg==1){\n")
								f.write(obj.identifier+"_ap_start=1;\n")						
								f.write(var+"(")
								param_port_list=[]
								for ports in obj.port_mapping:
									param_port_list.append(ports)
								param_port_list.sort()
								#if param_port_list:
								for k, v in sorted(obj.port_mapping.items(), key=lambda kv: kv[1]):
									f.write("&"+k+",")
								f.write("dummy")
								f.write(");\n")
								f.write(obj.identifier+"_ap_done=1;\n")
								f.write("}\n")

				#....................................... IF AP_DONE IS SET PLACE GOT END CALL WITH CONDITION ...................................
				if end_flag==True:
					f.write("       if(ap_done==1){\n") 
					f.write("       	goto end;\n") 
					f.write("       }\n") 
				
				#....................................... WRITE GOTO CALL HERE ..................................................................
				f.write("       goto "+str(j["next_state"])+";\n")
				if(j["condition"]!="T"):
					f.write("   }\n")
				
				index = index + 1
			else:
				break

		#............................................... RESET FUNCTION CALL FLAGS .............................................................
		call_func_dict={}
		for name in func_module_objs:
			call_func_dict[name.module_name]=False        
		index=0

		#............................................... WRITING FOR CONDITIONS IN CONTROLLER ..................................................
		for j in controller[i]:
			if index>=1:

				#....................................... IF CONDITION NOT PRESENT IN CONTROLLER .................................................				
				if(j["condition"]=='T'):

					#....................................... IF CONDITION IS PRESENT IN ALWAYS BLOCK ............................................
					for k in state_op_dict[i]:
						if(k["condition"]!="T"):                            
							f.write("       if("+k["condition"]+")\n")
							f.write("       {\n")
							for op in k["operations"]:
								new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)                                                                                                
								f.write("           "+new_op+";\n")
								if("ap_vld" in op):
									for key in vld_op:                                            
										for v_op in vld_op[key]:
											new_op = process_operation(level_trigger_list,v_op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
											f.write("               "+new_op+";\n")
								apop = op.replace(" ","")                                                
								if("ap_done" in apop):
									f.write("			if(ap_done==1){\n")
									for op1 in ap_return_op:
										new_op = process_operation(level_trigger_list,op1,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
										f.write("          "+new_op+";\n")                                       
									f.write("			}\n")
									end_flag=True                                    
								for name in func_module_objs:
									#print(name.identifier+"_ap_start=1")
									if name.identifier+"_ap_start_reg=1" in apop:
										call_func_dict[name.module_name]=True                                                                           
							f.write("       }\n")   

				#....................................... IF CONDITION is PRESENT IN CONTROLLER ..................................................
				if(j["condition"]!="T"):
					f.write("   if("+str(j["condition"])+"){\n")                                    

					#....................................... IF CONDITION IS PRESENT IN ALWAYS BLOCK ............................................
					for k in state_op_dict[i]:
						if(k["condition"]!="T"):
							#if( k["condition"] not in j["condition"] ):
							f.write("       if("+k["condition"]+")\n")
							f.write("       {\n")
							for op in k["operations"]:                                    
								new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)								
								f.write("               "+new_op+";\n")                        
								if("ap_vld" in op):
									for key in vld_op:                                            
										for v_op in vld_op[key]:
											new_op = process_operation(level_trigger_list,v_op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
											f.write("               "+new_op+";\n")
								apop = op.replace(" ","")                                                    
								if("ap_done=1" in apop):
									f.write("			if(ap_done==1){\n")
									for op1 in ap_return_op:
										new_op = process_operation(level_trigger_list,op1,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
										f.write("          "+new_op+";\n")                                       
									f.write("			}\n")
									end_flag=True                                        
								for name in func_module_objs:
									#print(name.identifier+"_ap_start=1")
									if name.identifier+"_ap_start_reg=1" in apop:
										call_func_dict[name.module_name]=True                                                                           
							f.write("       }\n")                        

				
				#....................................... WRITE RAM BLOCK FOR THE CURRENT STATE .................................................
				for r_obj in ram_module_objs:
					for j1 in r_obj.state_op_dict[i]:
						cond = j1["condition"]
						for k in r_obj.port_mapping.keys():
							if(k in cond):
								cond=cond.replace(k,r_obj.port_mapping[k])            
						f.write("       if(" + cond + "){\n")
						for op in j1["operations"]:
							f.write("          "+str(op)+";\n")
						if len(j1["cascade"])!=0:
							for c in j1["cascade"]:
								cond1 = c["condition"]                
								for k in r_obj.port_mapping.keys():
									if(k in cond1):
										cond1=cond1.replace(k,r_obj.port_mapping[k])
								f.write("           if(" + cond1 + "){\n")
								for op in c["operations"]:
									f.write("              "+str(op)+";\n")                

							for c in j1["cascade"]:
								f.write("           }\n")        

						
						
						f.write("       }\n")    
				
				'''
				for keys in rewrite_rom_resover:
					op = keys+" = "+rewrite_rom_resover[keys]						
					new_op = process_operation(level_trigger_list,op,code_declaration,regs,temp_regs,code_declaration_list,code_declaration_list1)
					f.write("          "+new_op+";\n")
				'''

				#....................................... WRITE ROM BLOCK FOR THE CURRENT STATE .................................................
				for r_obj in rom_module_objs:
					for j1 in r_obj.state_op_dict[i]:
						cond = j1["condition"]
						for k in r_obj.port_mapping.keys():
							if(k in cond):
								cond=cond.replace(k,r_obj.port_mapping[k])            
						f.write("       if(" + cond + "){\n")
						if len(j1["cascade"])!=0:
							for c in j1["cascade"]:
								cond1 = c["condition"]                
								for k in r_obj.port_mapping.keys():
									if(k in cond1):
										cond1=cond1.replace(k,r_obj.port_mapping[k])
								f.write("           if(" + cond1 + "){\n")
								for op in c["operations"]:
									f.write("              "+str(op)+";\n")                

							for c in j1["cascade"]:
								f.write("           }\n")        

						
						for op in j1["operations"]:
							f.write("          "+str(op)+";\n")
						f.write("       }\n")    
				
				#....................................... WRITE FUNCTION CALL FOR THE CURRENT STATE ..............................................
				for var in call_func_dict:
					if call_func_dict[var]==True:
						
						for obj in func_module_objs:
							if(obj.module_name==var):
								f.write("if ("+obj.identifier+"_ap_start_reg==1){\n")
								f.write(obj.identifier+"_ap_start=1;\n")						
								f.write(var+"(")
								param_port_list=[]
								for ports in obj.port_mapping:
									param_port_list.append(ports)
								param_port_list.sort()
								#if param_port_list:
								for k, v in sorted(obj.port_mapping.items(), key=lambda kv: kv[1]):
									f.write("&"+k+",")
								f.write("dummy")
								f.write(");\n")
								f.write(obj.identifier+"_ap_done=1;\n")
								f.write("}\n")

				#....................................... WRITE GOTO CALL HERE ..................................................................
				f.write("       goto "+str(j["next_state"])+";\n")
				if(j["condition"]!="T"):
					f.write("   }\n")   
				index = index + 1
			else:
				index = index + 1       

	#....................................... WRITING END STATE AND COPYING LOCAL VALUES TO FUNCTION PARAMETERS ..................................
	f.write("   end:\n")
	for i in sorted (parameter_list.keys()) :
		f.write("	*"+i+"__1="+i+";\n")
	f.write("       return;\n")
	f.write("}\n")
	f.close()

#.............................................. EXTRACTING REGS, WIRES, INPUTS AND OUTPUTS ......................................................
def variable_extraction(modules, ast, mod_name, generate_c_code):
	has_return = False
	inputs = {}
	input_list = []
	keys = {}
	key_list = []
	outputs = {}
	regs = {}
	wires = {}

	module = modules[mod_name]
	
	#................................ MAKING ALL DECLARATION SET FOR LIST OF FINAL DECLARATIONS .................................................
	for item in module.items:		
		if type(item) is vast.Decl:
			for l in item.list:
				temp={}
				temp["signed"]=l.signed
				temp["width"]=0
				if l.width is not None:						
					temp["width"]=l.width.msb
				all_variable_set[l.name]=copy.deepcopy(temp)

	#................................ MAKING LIST OF INPUT DECLARATIONS .........................................................................
	for p in modules[mod_name].items:
		if type(p) is vast.Decl:
			for d in p.list:
				if type(d) is vast.Input and d.name != "working_key" and (d.name.startswith("Min_") or d.name.startswith("Mout_") or d.name == "M_DataRdy" or d.name.endswith("data_ram") or d.name == "start_port" or d.name == "clock" or d.name == "reset") == False:
					#inputs[d.name] = 0
					temp={}
					temp["width"]=0
					if d.width is not None:						
						temp["width"]=(int(str(d.width.msb)))
					temp["signed"]=(str(d.signed))
					inputs[d.name]=copy.deepcopy(temp)
					input_list.append(d.name)    

	#................................ MAKING LIST OF OUTPUT DECLARATIONS .........................................................................
	for p in modules[mod_name].items:
		if type(p) is vast.Decl:
			for d in p.list:
				if type(d) is vast.Output and (d.name.startswith("Mout_") or d.name.endswith("data_ram") or d.name == "done_port") == False:
					if d.name == "return_port":
						has_return = True
					temp={}
					temp["width"]=0
					if d.width is not None:						
						temp["width"]=(int(str(d.width.msb)))
					temp["signed"]=(str(d.signed))
					outputs[d.name]=copy.deepcopy(temp)

	#................................ MAKING LIST OF REGISTERS DECLARATIONS .....................................................................
	for l in modules[mod_name].items:
		if type(l) is vast.Decl:
			for l1 in l.list:
				if type(l1) is vast.Reg:					
					temp={}
					temp["width"]=0
					if l1.width is not None:						
						temp["width"]=(int(str(l1.width.msb)))
					temp["signed"]=(str(l1.signed))
					regs[l1.name]=copy.deepcopy(temp)

				#................................ MAKING LIST OF WIRE DECLARATIONS .............................................................
				elif type(l1) is vast.Wire:
					temp={}
					temp["width"]=0
					if l1.width is not None:						
						temp["width"]=(int(str(l1.width.msb)))
					temp["signed"]=(str(l1.signed))
					wires[l1.name]=copy.deepcopy(temp)

	return inputs,outputs,input_list,has_return,regs,wires

#................................ EXTRACTION OF ALL THE STATES IN CONTROLLER ...................................................................
def extract_states(modules, ast, mod_name, generate_c_code):
	reset_state = None
	states = {}
	state_list = []

	is_init = True
	init = {}
	for l in modules[mod_name].items:
		if type(l) is vast.Always and type(l.statement) is vast.Block and type(l.statement.statements[0]) is vast.IfStatement:
			if type(l.statement.statements[0].cond) is vast.Eq and type(l.statement.statements[0].cond.left) is vast.Identifier:
				if l.statement.statements[0].cond.left.name == "ap_rst":
					(key, value) = process_assign(l.statement.statements[0].true_statement.statements[0])
					reset_state = value
		elif type(l) is vast.Always and type(l.statement) is vast.Block:
			if is_init:
				init = {}
			for i in l.statement.statements:
				if is_init and type(i) is not vast.CaseStatement:                    
					pass 

				if type(i) is vast.CaseStatement and i.comp.name == "ap_CS_fsm":
					is_init = False
					for s in i.caselist:
						if s.cond:
							for id in s.cond:
								state_list.append(id.name)
								states[id.name] = s                                                                                                                               
	
	return states,state_list                                

#................................ EXTRACTION OF CONTROLLER FSM ...............................................................................
def get_controller(modules, ast, mod_name, inputs, keys, regs, states, init , has_return , generate_c_code):
	counter=1
	controller={}
	for s in states:
		if(counter!=0):
			condition_variables=[]

			next_states = {}            
			if type(states[s].statement) is vast.Block:
				next_states, next_conds, c_blocks = process_block(modules, mod_name, inputs, keys, regs, states[s].statement.statements, init, has_return,condition_variables)
			
			state_values=[]
			for i in next_conds:                
				temp={}
				temp["condition"]=next_conds[i]
				temp["next_state"]=i
				temp["condition_variables"]=list(set(condition_variables))
				state_values.append(temp)
			state_values.extend(c_blocks)
		controller[s]=state_values
		counter += 1
	return controller

#................................ EXTRACTION OF ALWAYS BLOCK (MICRO-OPERATIONS) FOR EACH STATE IN CONTROLLER...................................
def get_always_block(modules, ast, mod_name, inputs, keys, regs, states, state_list, init , has_return , generate_c_code):	
	module=modules[mod_name]
	counter=0
	state_always_dict={}
	for tgt in state_list:
		counter += 1
		if(counter!=0):
			tgt1=tgt    	    
			tgt=tgt.replace("ST","CS")    	    
			blocks=[]
			for l in module.items:
				condition_variables=[]
				if type(l) is vast.Always and type(l.statement) is vast.Block:
					if type(l.statement.statements[0]) is vast.IfStatement:                                       
						flag=[False]	                    	                   
						cond1=determine_operation1(modules, mod_name, inputs,keys, l.statement.statements[0].cond,True,flag,tgt,condition_variables) 
						if(flag[0]):                            	                       						
							temp={}
							temp["condition"]=cond1
							temp["if_block"]=l.statement.statements[0]
							temp["condition_variables"]=list(set(condition_variables))
							temp["sens_list"]=copy.deepcopy(l.sens_list.list[0].type)
							blocks.append(temp)
						
						cond_var=l.statement.statements[0].false_statement
						while type(cond_var) is vast.IfStatement:                            
							flag=[False]
							cond1=determine_operation1(modules, mod_name, inputs,keys,cond_var.cond,True,flag,tgt,condition_variables)
							if(flag[0]):
								temp={}
								temp["condition"]=cond1
								temp["if_block"]=cond_var
								temp["condition_variables"]=list(set(condition_variables))
								temp["sens_list"]=copy.deepcopy(l.sens_list.list[0].type)
								blocks.append(temp)
							cond_var=cond_var.false_statement

			state_always_dict[tgt1]=blocks
	return state_always_dict


#...................... EXTRACTION OF ASSIGN STATEMENTS (RT-OPERATIONS) FOR EACH MICRO OPERATION IN EVERY STATE IN CONTROLLER...................
def get_condition_and_assignments(modules, ast, mod_name, inputs, keys, regs, states, state_list , init , has_return , generate_c_code, controller , state_always_dict, ram_module_objs, rom_module_objs,top_module_name,rewrite_rom_resover,temp_regs,level_trigger_list):
	module=modules[mod_name]
	state_op_dict={}			# FOR NORMAL OPERATIONS I.E. "POSEDGE" ALWAYS BLOCK
	state_op_dict1={}    		# FOR LEVEL TRIGGERED OPERATIONS I.E. "ALL" OR "SOME REGISTER" ALWAYS BLOCK
	operation_dump=[]			# LIST FOR OPERATIONS DUMP FOR STORING ALL OPERATIONS 
	temp_regs=[]


	top_module=modules[top_module_name]
	top_instancelist = []
	rom_instancelist=[]
	rewrite_op_rom={}
	for item in top_module.items:
		if type(item) is vast.InstanceList:
			top_instancelist.append(item)

	top_ports = {}
	rom_ports = {}

	'''
	for obj in rom_module_objs:
		for l in top_instancelist:     
			if l.module==obj.module_name:
				for i in l.instances:
					for port in i.portlist:
						for it in top_module.items:
							if type(it) is vast.Assign: 
								if port.argname.name == it.left.var.name:
									x=rewrite(it.left.var.name,it.right.var.name,rewrite_op_rom,inputs,module,temp_regs)
									rewrite_rom_resover[it.left.var.name]=x
									
	'''
	#print("ROM RESOLVER:",rewrite_rom_resover)

	
	#.................................. RESET ALL THE READ AND WRITE SIGNALS FOR RAM IN EVERY STATE OF CONTROLLER............................
	for i in state_always_dict:        
		tgt=i        
		for r_obj in ram_module_objs:            
			sig_dict={}
			state_sig_flags=r_obj.state_sig_flags
			rw_signals=copy.deepcopy(r_obj.rw_signals)
			for sig in rw_signals:
				sig_dict[sig] = False            
			state_sig_flags[tgt]=copy.deepcopy(sig_dict)
			r_obj.state_sig_flags=copy.deepcopy(state_sig_flags)

	#.................................. RESET ALL THE READ SIGNALS FOR ROM IN EVERY STATE OF CONTROLLER......................................
	for i in state_always_dict:        
		tgt=i
		for r_obj in rom_module_objs:            
			sig_dict={}
			state_sig_flags=r_obj.state_sig_flags
			rw_signals=copy.deepcopy(r_obj.rw_signals)
			for sig in rw_signals:
				sig_dict[sig] = False            
			state_sig_flags[tgt]=copy.deepcopy(sig_dict)
			r_obj.state_sig_flags=copy.deepcopy(state_sig_flags)

	#.................................. FOR ALL THE MICROPERATIONS EXTRACTED FROM ALWAYS BLOCK ..............................................
	for i in state_always_dict:        
		tgt=i
		#print("----------------------------------------------------------------------> ",tgt)
		blocks=[]
		blocks1=[]
		blocks2=[]
		rewrite_op1=[]
		rewrite_op3=[]

		#.................................. GET OPERATIONS WHICH DECIDES CONDITIONS VARIABLES OF CONTROLLER .................................
		for v in controller[tgt][0]["condition_variables"]:			
			if "CS" and "ap" not in v:
				flag=False
				for op in operation_dump:
					if(v in operation_dump):
						flag=True
				if(flag!=True):                                    
					final_op = v + " = " + rewrite("",str(v),rewrite_op1,inputs,module,temp_regs)
					#if(j["sens_list"]=="all"):                                 							
					#	rewrite_op3.append(final_op)
					#else:							
					rewrite_op1.append(final_op)
		rewrite_op1.reverse()
		rewrite_op3.reverse()

		rewrite_op2=[]        
		
		#.................................. GET OPERATIONS WHICH DECIDES CONDITIONS VARIABLES OF ALWAYS BLOCK ...............................
		for j in state_always_dict[i]:
			for v1 in j["condition_variables"]:                
				if "CS" and "ap" not in v1:
					flag=False
					for op in operation_dump:
						if(v1 in operation_dump):
							flag=True
					if(flag!=True):
						final_op = v1 + " = " + rewrite("",str(v1),rewrite_op2,inputs,module,temp_regs)
						if(j["sens_list"]=="all"):                                 							
							rewrite_op3.append(final_op)
						else:							
							rewrite_op2.append(final_op)

		rewrite_op2=list(set(rewrite_op2))
		rewrite_op2.reverse()
		rewrite_op3=list(set(rewrite_op2))
		rewrite_op3.reverse()
		rewrite_op1.extend(rewrite_op2)
		rewrite_op1=list(set(rewrite_op1))
				

		#.................................. PLACE CONDITION VARIABLE OPERATIONS BERFORE CONDITIONS ...........................................
		if len(rewrite_op1)!=0:  			
			temp1={}            
			temp1["condition"]="T"
			temp1["operations"]=rewrite_op1        
			temp1["sens_list"]=[]
			blocks.append(temp1) 
			for op in rewrite_op1:
				operation_dump.append(str(op))     

		if len(rewrite_op3)!=0: 			
			temp1={}            
			temp1["condition"]="T"
			temp1["operations"]=rewrite_op1        
			temp1["sens_list"]=[]
			blocks2.append(temp1) 
			for op in rewrite_op3:
				operation_dump.append(str(op))     

		
		#.................................. ITERATE ALL THE ALWAYS BLOCK FOR GIVEN STATE ....................................................
		for j in state_always_dict[tgt]:            
			rewrite_op=[]
			rewrite_op_left=[]
			temp={}
			temp["condition"]=j["condition"]
			temp["sens_list"]=copy.deepcopy(j["sens_list"])
			is_level_triggered=False

			#.................................. ITERATE ALL THE OPERATIONS FOR GIVEN STATE ..................................................
			for k in j["if_block"].true_statement.statements:                
				(key, value) = process_assign(k)   
				

				#.................................. CHECK IF ALWAYS BLOCK IS LEVEL TRIGGERED ................................................
				if(temp["sens_list"]=="all"):
					is_level_triggered=True
					level_trigger_list.add(key)

				flag_write = False

				#.................................. IF RHS IS NOT ALREADY INPUT .............................................................
				if(str(value) not in inputs):            

					#.................................. IF RHS IS A CONSTANT ................................................................
					if type(value) is vast.IntConst:
						flag_write=True
						x=str(value)                        
						i=0
						f=0
						s=""
						while i<len(x):
							if x[i]=="'" and f==0:
								f=1
							elif f==1 and (x[i]!='d' and x[i]!='b'):
								s=s+x[i]
							i=i+1
						final_op = key+" = "+s                                                 
						rewrite_op.append(final_op)
												
						final_op1=final_op.replace(" ","")                        

						#.................................. CHECK IF RAM SIGNAL IS SET ......................................................
						for r_obj in ram_module_objs:                                                        
							sig_dict=copy.deepcopy(r_obj.state_sig_flags)
							signals=copy.deepcopy(r_obj.rw_signals)
							for sig in signals:
								signal_op = r_obj.identifier+"_"+sig + "=1"                                              
								
								if signal_op == final_op1:
									#print("\n\n Status signal enabled in state ",tgt," : ",signal_op)                                                                        
									sig_dict[tgt][sig]=True                                                                
							r_obj.state_sig_flags=copy.deepcopy(sig_dict)
							sig_dict.clear()

						#.................................. CHECK IF ROM SIGNAL IS SET ......................................................
						for r_obj in rom_module_objs:                                                        
							sig_dict=copy.deepcopy(r_obj.state_sig_flags)
							signals=copy.deepcopy(r_obj.rw_signals)                            
							for sig in signals:
								signal_op = r_obj.identifier+"_"+sig + "=1"                                                                                                

								if signal_op == final_op1:
									#print("\n\n Status signal enabled in state ",tgt," : ",signal_op)                                                                                                                                                
									sig_dict[tgt][sig]=True                                                                                            
							r_obj.state_sig_flags=copy.deepcopy(sig_dict)                                                        
							
					#.................................. IF RHS OF OPERATION IS INPUT THEN NO REWRITE NEEDED .................................
					else:					
						curr=str(key)+" = "+str(value)                
						#rewrite_op.append(curr)
				
				#.................................. IF RHS IS NOT A CONSTANT NOR A INPUT THEN CALL REWRITE ..................................
				if flag_write==False:                                        
					return_op = rewrite(key,str(value),rewrite_op,inputs,module,temp_regs)
					final_op = (key + " = " + return_op)
					rewrite_op.append(final_op)                

			rewrite_op.reverse()            
			temp["operations"]=rewrite_op
			
			#.................................. DUMP ALL OPERATION IN A LIST TO CHECK FOR CONDITION VARIABLES ...............................
			for op in rewrite_op:
				operation_dump.append(str(op))

			#.................................. IF ALWAYS BLOCK IS LEVEL TRIGGERED THEN STORE ACCORDINGLY ...................................
			if is_level_triggered==True:
				blocks1.append(temp)
			else:
				blocks.append(temp)
		

		#.................................. WRITE FINAL OPERATIONS IN A DICTIONARY IN STATE WISE MANNER .....................................
		state_op_dict[tgt]=blocks
		#print(tgt,blocks2)

		#.................................. WRITE LEVEL TIGGERED OPERATIONS IN A DICTIONARY IN STATE WISE MANNER ............................
		blocks2.extend(blocks1)				
		state_op_dict1[tgt]=blocks2

		
		#.................................. UPDATE RAM AND ROM CLASS WITH READ WRITE SIGNAL INFORMATION .....................................
		for r_obj in ram_module_objs:            
			state_sig_flags = copy.deepcopy(r_obj.state_sig_flags[tgt])
			op_blocks = copy.deepcopy(r_obj.op_blocks)
			rw_signals = copy.deepcopy(r_obj.rw_signals)            

		for r_obj in ram_module_objs:                            
			obj_state_op_dict=copy.deepcopy(r_obj.state_op_dict) 
			state_sig_flags = copy.deepcopy(r_obj.state_sig_flags[tgt])
			op_blocks = copy.deepcopy(r_obj.op_blocks)
			rw_signals = copy.deepcopy(r_obj.rw_signals)
			blocks1=[]			
			for sig in rw_signals:            
				if(state_sig_flags[sig]==True):
					for rb in op_blocks:
						if(sig in rb["condition_variables"]):							
							blocks1.append(copy.deepcopy(rb))                    
			obj_state_op_dict[tgt]=copy.deepcopy(blocks1)
			r_obj.state_op_dict=copy.deepcopy(obj_state_op_dict)

		for r_obj in rom_module_objs:                                        
			obj_state_op_dict=copy.deepcopy(r_obj.state_op_dict)         
			blocks1=[]
			for sig in r_obj.rw_signals:            
				if(r_obj.state_sig_flags[tgt][sig]==True):                    
					for rb in r_obj.op_blocks:
						if(sig in rb["condition_variables"]):                            
												
							blocks1.append(copy.deepcopy(rb))            
			obj_state_op_dict[tgt]=copy.deepcopy(blocks1)
			r_obj.state_op_dict=copy.deepcopy(obj_state_op_dict)


	return state_op_dict,operation_dump,temp_regs,state_op_dict1

#.................................. FIND AP_RETURN OPERATION EXPLICITLY ..................................................................
def get_ap_return_operations(modules, ast, mod_name,inputs,temp_regs):
	module=modules[mod_name]
	ap_return_op=[]
	for l in module.items:        
		if type(l) is vast.Assign:                        
			if l.left.var.name == "ap_return":
				key,value = process_assign(l)                
				return_op = rewrite(key,str(key),ap_return_op,inputs,module,temp_regs)
				final_op = (key + " = " + return_op)
				ap_return_op.append(final_op)
	return ap_return_op,temp_regs

#............................................... FIND OPERATIONS WITH "VLD" IN LHS VARIABLE .............................................
def get_vld_operations(modules, ast, mod_name,inputs,temp_regs,state_always_dict):
	module=modules[mod_name]
	vld_op={}
	
	for i in state_always_dict:
		vld_op_list=[]    
		for j in state_always_dict[i]:            
			for k in j["if_block"].true_statement.statements:                
				(key, value) = process_assign(k)                                                       
				if "ap_vld" in key:
					var_name = key.split("_ap_vld")
					target_reg = var_name[0]
					
					return_op = rewrite(target_reg,str(target_reg),vld_op,inputs,module,temp_regs)
					#print("RETURN OP:",return_op)
					if(return_op!=target_reg):
						final_op = (target_reg + " = " + return_op)                    
						vld_op_list.append(final_op)

		if len(vld_op_list) != 0:
			vld_op[i]=vld_op_list
	return vld_op,temp_regs    

#............................................... FIND ALWAYS BLOCK THAT BELONGS TO ALL STATES ............................................
def get_all_state_always_block(modules, ast, top_module_name,state_list, inputs):    
	module=modules[top_module_name]
	all_state_ops = []
	rewrite_op = []
	temp_regs = []
	for item in module.items:
		if type(item) is vast.Always:

			#.................................... NO IF CONDITION MEANS OPERATIONS BELONG TO ALL STATES ..................................
			if type(item.statement) is vast.Block:
				for l in item.statement.statements:					
					if (type(l) is vast.NonblockingSubstitution) or (type(l) is vast.BlockingSubstitution):
						final_op=""						
						lhs,rhs = process_assign(l)											
						if type(rhs) is vast.IntConst:
							value,wwidth,bits=resolve(rhs)
							final_op = str(lhs) + " = " + str(value)
						elif type(rhs) is vast.And:
							right = arithmetic_operation(lhs,rhs,rewrite_op,inputs,module,temp_regs," & ",l)                    
							final_op = lhs + " = " + right
						elif type(rhs) is vast.Or:
							right = arithmetic_operation(lhs,rhs,rewrite_op,inputs,module,temp_regs," | ",l)                    
							final_op = lhs + " = " + right
						elif type(rhs) is vast.Identifier:
							#final_op = str(lhs) + " = " + str(rhs)							
							right = rewrite(lhs,str(rhs),rewrite_op,inputs,module,temp_regs)							
							final_op = lhs + " = " + right
						if final_op!="":
							all_state_ops.append(final_op)
					elif type(l) is vast.IfStatement:
						inputs=[]
						keys=[]
						current_value=[]
						regs=[]
						condition_variables=[]
						next_states = {}
						next_conds = {}  
						c_blocks = [] 
						state_values=[]    
						top=top_module_name
						has_return=True
						cond = determine_operation(modules, top_module_name, inputs,keys,  current_value, l.cond, True,condition_variables)
						
						no_state_flag=False
						for state in state_list:
							state=state.replace("ST","CS")							
							if state in cond:								
								no_state_flag=True
						if no_state_flag==False:
							for stat in l.true_statement.statements:
								if type(stat) is vast.NonblockingSubstitution:
									final_op=""
									lhs,rhs = process_assign(stat)
									if lhs!="ap_CS_fsm":
										if type(rhs) is vast.IntConst:
											value,wwidth,bits=resolve(rhs)
											final_op = str(lhs) + " = " + str(value)
										elif type(rhs) is vast.And:
											right = arithmetic_operation(lhs,rhs,rewrite_op,inputs,module,temp_regs," & ",l)                    
											final_op = lhs + " = " + right
										elif type(rhs) is vast.Or:
											right = arithmetic_operation(lhs,rhs,rewrite_op,inputs,module,temp_regs," | ",l)                    
											final_op = lhs + " = " + right
										elif type(rhs) is vast.Identifier:
											#final_op = str(lhs) + " = " + str(rhs)											
											right = rewrite(lhs,str(rhs),rewrite_op,inputs,module,temp_regs)
											final_op = lhs + " = " + right
										if final_op!="":
											all_state_ops.append(final_op)
																								
	#print("ALL STATE ALWAYS:",all_state_ops)			
	return all_state_ops,temp_regs


#.................................................. DRIVER CODE FOR THE MAIN PARSER FLOW ..................................................
def process_module(modules, ast, mod_name, generate_c_code,ram_module_objs,rom_module_objs,top_module_name,func_module_objs,twos_flag):
	global addresses


	#.................................... 1. EXTRACT VARIABLES, CONTROLLER AND MICRO-OPERATIONS ...........................................
	keys = {}
	key_list = []	
	level_trigger_list = set()
	inputs,outputs,input_list,has_return,regs,wires = variable_extraction(modules, ast, mod_name, generate_c_code)    	
	is_init = True
	init = {}
	states,state_list = extract_states(modules, ast, mod_name, generate_c_code)    
	controller = get_controller(modules, ast, mod_name, inputs, keys, regs, states, init , has_return , generate_c_code)

	
	#PRINTING CONTROLLER
	'''print(".......................PRINTING CONTROLLER")
	for s in controller:
		print("STATE:--->",s)        
		for i in controller[s]:            
			print(i["condition"],"--->",i["next_state"])
	'''

	all_state_ops,temp_regs=get_all_state_always_block(modules, ast, top_module_name,state_list,inputs)	
	state_always_dict = get_always_block(modules, ast, mod_name, inputs, keys, regs, states, state_list , init , has_return , generate_c_code)
	

	
	#PRINTING ALWAYS BLOCKS
	'''print(".......................PRINTING ALWAYS BLOCK")
	for i in state_always_dict:
		print("\n",i)
		print(state_always_dict[i])    
	'''

	#.................................... 2. EXTRACT RT OPERATIONS FOR MICRO-OPERATIONS USING REWRITE METHOD ..............................
	rewrite_rom_resover={}
	state_op_dict,operation_dump,temp_regs,state_op_dict1 = get_condition_and_assignments(modules, ast, mod_name, inputs, keys, regs, states, state_list , init , has_return , generate_c_code, controller , state_always_dict, ram_module_objs, rom_module_objs,top_module_name,rewrite_rom_resover,temp_regs,level_trigger_list)              


	
	'''print("........................STATE AND OPERATIONS")                     
	for i in state_op_dict:
		print("\n",i)
		for j in state_op_dict[i]:
			print(j)'''
	

	ap_return_op,temp_regs = get_ap_return_operations(modules, ast, mod_name, inputs, temp_regs)

	#PRINTING AP_RETURN OPERATIONS
	#print("AP RETURN OPERATIONS:",ap_return_op)

	vld_op,temp_regs = get_vld_operations(modules, ast, mod_name, inputs, temp_regs, state_always_dict)

	#PRINTING VLD OPERATIONS
	#print("VLD OPERATIONS:",vld_op)
		
	#.................................... 4. GENERATE C CODE ..............................................................................
	print("..............................GENERATE C CODE")                     	
	generate_code(mod_name,modules,inputs,outputs,regs,wires,controller,state_always_dict,state_op_dict,temp_regs,ap_return_op,vld_op,ram_module_objs,rom_module_objs,rewrite_rom_resover,all_state_ops,func_module_objs,twos_flag,level_trigger_list,state_op_dict1)
	

#.................................... FIND RAM AND ROM BLOCKS FROM THEIR VERILOG FILES ....................................................
def get_rr_if_blocks(modules,rr_module_name,rr_module_name1):
	current_value = None
	keys = None
	inputs = None    
	rr_module=modules[rr_module_name]
	rr_module1=modules[rr_module_name1]
	if_blocks=[]
	for item in rr_module1.items:                
		if type(item) is vast.Always:                
			if type(item.statement.statements[0]) is vast.IfStatement:                
				if (rr_module_name1) in modules.keys():
					condition_variables = []
					cond = determine_operation(modules, rr_module_name1, inputs,keys,  current_value, item.statement.statements[0].cond, True,condition_variables)                
					temp={}
					temp["condition"]=cond
					temp["if_block"]=item.statement.statements[0]
					temp["condition_variables"]=list(set(condition_variables))
					if_blocks.append(temp)
	return if_blocks

#.................................... FIND RAM AND ROM OPERATIONS FOR THEIR BLOCKS .......................................................
def get_rr_operations(modules,rr_module_name,rr_module_name1,rr_obj):
	current_value = None
	keys = None
	inputs = None    
	rr_module=modules[rr_module_name]
	rr_module1=modules[rr_module_name1]
	rr_op_blocks = []
	port_mapping = rr_obj.port_mapping

	#............................ PROCESS RAM/ROM BLOCKS FROM THEIR SEPERATE VERILOG FILES ................................................
	for block in rr_obj.if_blocks:
		rewrite_op = []
		temp = {}
		temp["condition"] = block["condition"]
		temp["condition_variables"] = block["condition_variables"]
		cblocks = []
		for k in block["if_block"].true_statement.statements:            
			kl = k


			#......................................... IF OPERATIONS INSIDE IF STATEMENTS .................................................
			if type(kl) is not vast.IfStatement:                                
				key,value = process_assign(k)                            
				if type(key) is vast.Pointer:
					var1 = str(key.var)
					ptr1 = str(key.ptr)
					if(var1 in port_mapping.keys()):
						var1 = port_mapping[var1]
					if(ptr1 in port_mapping.keys()):
						ptr1 = port_mapping[ptr1]
					key = rr_obj.array_name+ "[" + ptr1 + "]"
				if type(value) is vast.Pointer:                    
					var1 = str(value.var)
					ptr1 = str(value.ptr)
					if(var1 in port_mapping.keys()):
						var1 = port_mapping[var1]
					if(ptr1 in port_mapping.keys()):
						ptr1 = port_mapping[ptr1]
					value = rr_obj.array_name + "[" + ptr1 + "]"

				key=str(key)
				value=str(value)

				if(key in port_mapping.keys()):
					key=port_mapping[key]
				if(value in port_mapping.keys()):
					value=port_mapping[value]
				final_op = str(key) + "=" + str(value)
				rewrite_op.append(final_op)

			#......................................... IF OPERATIONS NOT INSIDE IF STATEMENTS ............................................
			else:
				while type(kl) is vast.IfStatement:                                                    
					if (rr_module_name1) in modules.keys():
						condition_variables = []
						cond = determine_operation(modules, rr_module_name1, inputs,keys,  current_value, kl.cond, True,condition_variables)                
						temp1={}                    
						temp1["condition"]=cond
						rewrite_op1=[]
						for k1 in kl.true_statement.statements:
							key,value = process_assign(k1)
							if type(key) is vast.Pointer:
								var1 = str(key.var)
								ptr1 = str(key.ptr)
								if(var1 in port_mapping.keys()):
									var1 = port_mapping[var1]
								if(ptr1 in port_mapping.keys()):
									ptr1 = port_mapping[ptr1]
								key = rr_obj.array_name + "[" + ptr1 + "]"
							if type(value) is vast.Pointer:                    
								var1 = str(value.var)
								ptr1 = str(value.ptr)
								if(var1 in port_mapping.keys()):
									var1 = port_mapping[var1]
								if(ptr1 in port_mapping.keys()):
									ptr1 = port_mapping[ptr1]
								value = rr_obj.array_name + "[" + ptr1 + "]"

							key=str(key)
							value=str(value)

							if(key in port_mapping.keys()):
								key=port_mapping[key]
							if(value in port_mapping.keys()):
								value=port_mapping[value]
							final_op = str(key) + "=" + str(value)
							rewrite_op1.append(final_op)    
						temp1["operations"]=rewrite_op1
						#temp["condition_variables"].extend(list(set(condition_variables)))
						cblocks.append(temp1)
						kl = kl.true_statement.statements
		temp["operations"] = rewrite_op        
		if(len(cblocks)==0):
			temp["cascade"] = []
		else:
			temp["cascade"] = cblocks 
		rr_op_blocks.append(temp)        
	rr_obj.op_blocks=rr_op_blocks
	#print("OP Blocks:\n",rr_obj.op_blocks)

#.................................... EXTRACT IDENTIFIER FOR RAM/ROM FROM INSTANCE ........................................................
def find_array_identifier_name(objects,identifier,top_module):
	instance_names = {}
	for item in top_module.items:
		if type(item) is vast.InstanceList:			
			for it in item.instances:				
				instance_names[item.module] = it.name	

	for obj in objects:
		x=instance_names[obj.module_name].split("_")
		temp_id=""
		for i in range(len(x)-1):
			temp_id = temp_id + x[i] + "_"
		temp_id = temp_id[:-1]		
		obj.array_name=temp_id + identifier
		obj.identifier=temp_id

#.................................... EXTRACT ALL THE RAM PARAMTER VARIABLES ............................................................
def find_parameters_ram(modules,ram_module_objs,top_module_name):
	top_module=modules[top_module_name]
	for obj in ram_module_objs:
		curr_module=modules[obj.module_name]
		ram_params_list=copy.deepcopy(obj.ram_params)
		for item in curr_module.items:
			if type(item) is vast.Decl:
				for it in item.list:
					if type(it) is vast.Parameter:
						value,wwidth,bits=resolve(it.value.var)
						ram_params_list[it.name]=value
		obj.ram_params=copy.deepcopy(ram_params_list)


		curr_module=modules[obj.module_name+"_ram"]
		ram_params_list=copy.deepcopy(obj.ram_params)
		for item in curr_module.items:
			if type(item) is vast.Decl:
				for it in item.list:
					if type(it) is vast.Parameter:
						value=it.value.var
						ram_params_list[it.name]=value
		obj.ram_params=copy.deepcopy(ram_params_list)
		#print("RAM_PARAMS:::",obj.ram_params)

#.................................... EXTRACT ALL THE ROM PARAMTER VARIABLES ............................................................
def find_parameters_rom(modules,rom_module_objs,top_module_name):
	top_module=modules[top_module_name]
	for obj in rom_module_objs:
		curr_module=modules[obj.module_name]
		rom_params_list=copy.deepcopy(obj.rom_params)
		for item in curr_module.items:
			if type(item) is vast.Decl:
				for it in item.list:
					if type(it) is vast.Parameter:
						value,wwidth,bits=resolve(it.value.var)
						rom_params_list[it.name]=value
		obj.rom_params=copy.deepcopy(rom_params_list)

		curr_module=modules[obj.module_name+"_rom"]
		rom_params_list=copy.deepcopy(obj.rom_params)
		for item in curr_module.items:
			if type(item) is vast.Decl:
				for it in item.list:
					if type(it) is vast.Parameter:
						value=it.value.var
						rom_params_list[it.name]=value
		obj.rom_params=copy.deepcopy(rom_params_list)

		#print("ROM_PARAMS:::",obj.rom_params)

#.................................... EXTRACT INTIAL ROM VALUES FOR ARRAY  ................................................................
def find_file_name_rom(modules,obj,top_module_name,file_loc):	
	obj.file_name=file_loc + obj.module_name+"_rom.dat"
	value=[]
	i=0
	lines = open(obj.file_name).read().splitlines()
	while i<len(lines)-1:
		res=int(lines[i],16)
		value.append(res)
		i=i+1

	obj.file_values=value

#.................................... EXTRACT PORT MAPPING FOR RAM INSTANCE  ..............................................................
def ram_mapping(modules,obj,top_module_name):    
	top_module=modules[top_module_name]
	top_instancelist = []
	ram_instancelist=[]
	for item in top_module.items:
		if type(item) is vast.InstanceList:
			top_instancelist.append(item)

	top_ports = {}
	ram_ports = {}

	#print("ARRAY NAME:",obj.array_name)
	#print(obj.identifier)
	for l in top_instancelist:		
		for i in l.instances:				
				temp=obj.identifier+"_U"
				if temp==i.name or obj.module_name == l.module:                                     
					for port in i.portlist:
						top_ports[str(port.portname)] = str(port.argname)


					curr_module=modules[obj.module_name]

					for item in curr_module.items:
						if type(item) is vast.InstanceList:
							ram_instancelist.append(item)
					
						for l in ram_instancelist:        
							for i in l.instances:
								for port1 in i.portlist:
									ram_ports[str(port1.portname)] = str(port1.argname) 


	port_final_mapping = {}
	for r in ram_ports:

		if ram_ports[r] in top_ports.keys():            
			port_final_mapping[r] = top_ports[ram_ports[r]]
	
	obj.port_mapping=port_final_mapping    
	#print(obj.port_mapping)

#.................................... EXTRACT PORT MAPPING FOR ROM INSTANCE  ..............................................................
def rom_mapping(modules,obj,top_module_name):    
	top_module=modules[top_module_name]
	top_instancelist = []
	rom_instancelist=[]
	for item in top_module.items:
		if type(item) is vast.InstanceList:
			top_instancelist.append(item)

	top_ports = {}
	rom_ports = {}
	for l in top_instancelist:     
		#print(l.module)
		for i in l.instances:
				temp=obj.module_name   				
				if temp==l.module:                                     
					for port in i.portlist:
						top_ports[str(port.portname)] = str(port.argname)
					curr_module=modules[obj.module_name]
					for item in curr_module.items:                        
						if type(item) is vast.InstanceList:
							rom_instancelist.append(item)                                
						for l in rom_instancelist:        
							for i in l.instances:
								for port1 in i.portlist:
									rom_ports[str(port1.portname)] = str(port1.argname) 


	port_final_mapping = {}
	for r in rom_ports:

		if rom_ports[r] in top_ports.keys():            
			port_final_mapping[r] = top_ports[rom_ports[r]]

	obj.port_mapping=port_final_mapping

#.................................... EXTRACT PORT MAPPING FOR FUNCTION INSTANCE  ..........................................................
def find_func_port_mapping(modules,obj,top_module_name):    
	top_module=modules[top_module_name]
	top_instancelist = []
	func_instancelist=[]
	for item in top_module.items:
		if type(item) is vast.InstanceList:
			top_instancelist.append(copy.deepcopy(item))

	top_ports = {}
	#func_ports = {}
	for l in top_instancelist:             
		for i in l.instances:
			temp=obj.module_name               			
			if temp==l.module: 
				obj.identifier=i.name
				for port in i.portlist:
					top_ports[str(port.argname)] = str(port.portname)                
	

	obj.port_mapping=copy.deepcopy(top_ports)
	#print("FUNC PORTS",obj.port_mapping)

#.................................... EXTRACT D0 OR ADDRESS ASSIGN OPERATIONS IF NOT PRESENT IN ALWAYS BLOCK  ..............................
def find_ram_rom_assign_operations(top_module,obj):
	temp_regs=[]
	return_op=[]
	inputs={}	

	#.............................................. DO INPUT EXTRACTION LOCALLY ............................................................
	for p in top_module.items:
		if type(p) is vast.Decl:
			for d in p.list:
				if type(d) is vast.Input and d.name != "working_key" and (d.name.startswith("Min_") or d.name.startswith("Mout_") or d.name == "M_DataRdy" or d.name.endswith("data_ram") or d.name == "start_port" or d.name == "clock" or d.name == "reset") == False:					
					temp={}
					temp["width"]=0
					if d.width is not None:						
						temp["width"]=(int(str(d.width.msb)))
					temp["signed"]=(str(d.signed))
					inputs[d.name]=copy.deepcopy(temp)						

	#............................ FIND OPERATIONS FOR D0,D1,ETC. EXPLICITLY IF NOT PRESENT IN ALWAYS BLOCK .................................
	for item in top_module.items:
		if type(item) is vast.Assign:			
			address_list = copy.deepcopy(obj.addr_lines)
			data_list = copy.deepcopy(obj.data_lines)
			assign_ops = copy.deepcopy(obj.assign_ops)
			for wire in address_list:					
				if (obj.identifier+"_"+wire) == str(item.left.var):
					op = rewrite("",str(item.left.var),return_op,inputs,top_module,temp_regs)
					final_op = str(item.left.var) + " = " + op
					assign_ops.append(final_op)
			for wire in data_list:					
				if (obj.identifier+"_"+wire) == str(item.left.var):
					op = rewrite("",str(item.left.var),return_op,inputs,top_module,temp_regs)
					final_op = str(item.left.var) + " = " + op
					assign_ops.append(final_op)
			obj.assign_ops = copy.deepcopy(assign_ops)
	#print("RAM/ROM Assign ops:",obj.assign_ops)

#.................................... DRIVER FUNCTION FOR PROCESS RAM MODULE .............................................................
def process_ram_module(modules,ram_module_objs,top_module_name):
	top_module=modules[top_module_name]
	find_array_identifier_name(ram_module_objs,"_ram",top_module)
	find_parameters_ram(modules,ram_module_objs,top_module_name)
	for obj in ram_module_objs:
		ram_mapping(modules,obj,top_module_name)		
		if_blocks=get_rr_if_blocks(modules,obj.module_name,obj.module_name+"_ram")
		obj.if_blocks=if_blocks  		         
		get_rr_operations(modules,obj.module_name,obj.module_name+"_ram",obj)
		find_ram_rom_assign_operations(top_module,obj)

#.................................... DRIVER FUNCTION FOR PROCESS ROM MODULE .............................................................
def process_rom_module(modules,rom_module_objs,top_module_name,file_loc):
	top_module=modules[top_module_name]
	find_array_identifier_name(rom_module_objs,"_rom",top_module)
	find_parameters_rom(modules,rom_module_objs,top_module_name)
	for obj in rom_module_objs:
		rom_mapping(modules,obj,top_module_name)
		find_file_name_rom(modules,obj,top_module_name,file_loc)				
		if_blocks=get_rr_if_blocks(modules,obj.module_name,obj.module_name+"_rom")
		obj.if_blocks=if_blocks		
		get_rr_operations(modules,obj.module_name,obj.module_name+"_rom",obj)
		find_ram_rom_assign_operations(top_module,obj)

#.................................... DRIVER FUNCTION FOR PROCESS FUNCTION MODULE .......................................................
def process_function_module(modules,func_module_objs,top_module_name):
	top_module=modules[top_module_name]
	for obj in func_module_objs:
		find_func_port_mapping(modules,obj,top_module_name)	
		
#.................................... MAIN FUNCTION .....................................................................................
def main():
	INFO = "RTL2C: Convert RTL to C Code"
	VERSION = 1.0
	USAGE = "Usage: python3 rtl2cdfg.py -x(optional) -f(optional) -t <top_name> [<verilog_file.v>...]"

	def showVersion():
		print(INFO)
		print(VERSION)
		print(USAGE)
		sys.exit()


	#......................................................... PARSER RUN-TIME OPTIONS ...................................................
	optparser = OptionParser()
	optparser.add_option("-V","--version",action="store_true",dest="showversion",default=False,help="Show the version")
	optparser.add_option("-v","--verbose",action="store_true",dest="verbose",default=False,help="Verbose execution")
	optparser.add_option("-I","--include",dest="include",action="append",default=[],help="Include path")
	optparser.add_option("-D",dest="define",action="append",default=[],help="Macro Definition")
	optparser.add_option("-t","--top", dest="top",action="store",help="Specify top module")
	optparser.add_option("-x","--twos_logic", dest="twos_flag",action="store_true",default=False,help="Write 2's Complement logic in code")
	optparser.add_option("-f","--file_input", dest="file_input_flag",action="store",default="none",help="User input from File")	

	(options, args) = optparser.parse_args()

	if options.showversion:
		showVersion()

	#......................................................... GETTING FILE NAMES INTO FILELIST ...........................................	
	filelist = args
	print(filelist)
	if len(filelist) == 0:
		showVersion()
	for f in filelist:
		if not os.path.exists(f): raise IOError("file not found: " + f)

	temp_list = filelist[0].split("/")
	file_loc=""
	for i in range(len(temp_list)-1):
		file_loc += temp_list[i]
		file_loc = file_loc + "/"   
	print("FILE LOC:",file_loc)		
	generate_c_code = True    


	#......................................................... GENERATE AST FOR THE VERILOG ...............................................	
	codeparser = VerilogCodeParser(filelist, preprocess_include=options.include, preprocess_define=options.define)
	ast = codeparser.parse()
	print(ast.show())        

	
	#.................................................... RAM,ROM AND FUNCTION MODULE INPUT ...............................................	
	ram_module_objs=[]
	rom_module_objs=[]
	func_module_objs=[]


	#.................................................... -f OPTION SET THEN USE INPUT FROM FILE ..........................................	
	if(options.file_input_flag != "none"):
		input_file_name = options.file_input_flag
		file_obj = open(input_file_name,"r")
		
		no_of_ram_modules = int(file_obj.readline()[:-1])
		
		for i in range(no_of_ram_modules):        
			m_name = file_obj.readline()[:-1]
			m_ports = file_obj.readline()[:-1]
			ram_obj=ram_module_info(m_name,m_ports)
			ram_module_objs.append(ram_obj)

		no_of_rom_modules = int(file_obj.readline()[:-1])
		
		for i in range(no_of_rom_modules):        
			m_name = file_obj.readline()[:-1]
			m_ports = file_obj.readline()[:-1]
			rom_obj=rom_module_info(m_name,m_ports)
			rom_module_objs.append(rom_obj)
		
		no_of_func_modules = int(file_obj.readline()[:-1])
		
		for i in range(no_of_func_modules):
			m_name = file_obj.readline()[:-1]              
			func_obj=function_module_info(m_name)
			func_module_objs.append(func_obj)

	#.................................................... ELSE INPUT FROM USER IN CONSOLE ..................................................
	else:		
		no_of_ram_modules = int(input("How many RAM modules are there?\n"))
		
		for i in range(no_of_ram_modules):        
			m_name = input("Enter name of RAM module ?\n")
			m_ports = input("Enter number of ports in RAM ?\n")
			ram_obj=ram_module_info(m_name,m_ports)
			ram_module_objs.append(ram_obj)

		no_of_rom_modules = int(input("How many ROM modules are there?\n"))
		
		for i in range(no_of_rom_modules):        
			m_name = input("Enter name of ROM module ?\n")
			m_ports = input("Enter number of ports in ROM ?\n")
			rom_obj=rom_module_info(m_name,m_ports)
			rom_module_objs.append(rom_obj)
		
		no_of_func_modules = int(input("How many Function modules are there?\n"))
		
		for i in range(no_of_func_modules):
			m_name = input("Enter name of Function module ?\n")                
			func_obj=function_module_info(m_name)
			func_module_objs.append(func_obj)

	start_time = time.clock()

	#....................................................... FIND AND STORE MODULES .......................................................
	modules = {}
	top_module=""        
	for m in ast.description.definitions:        
		if type(m) is vast.ModuleDef:            
			modules[m.name] = m            
			if m.name in options.top:                
				top_module = m.name                            
		
	
	#..................................................... CALL THE PROCESSING FUNCTIONS  .................................................
	process_ram_module(modules,ram_module_objs,top_module)
	process_rom_module(modules,rom_module_objs,top_module,file_loc)
	process_function_module(modules,func_module_objs,top_module)	
	process_module(modules, ast, top_module, generate_c_code,ram_module_objs,rom_module_objs,top_module,func_module_objs,options.twos_flag)

	
	end_time = time.clock()	
	print("Execution Time:",end_time-start_time)	
		

if __name__ == '__main__':
	main()

