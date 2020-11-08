

# RTL to C Parser: Version 1.0

#### This tool is used to parse RTL Verilog generated using Xilinx Vivado into an equivalent C Code.

Requirements
--------------------

- Python version: 3.6 or later

- Icarus Verilog: 10.1 or later

```
sudo apt install iverilog
```

- Jinja2: 2.10 or later

```
pip3 install jinja2
```
Folder Structure
--------------------
Main Directory Structure:
1.	**Benchmarks_Original_Source**: Unchanged benchmark test-cases.
2. **MTP_Data**: Jay MTP Thesis and related docs. 
3. **README**: meeting notes and other text files.
4. **rtl2cdfg-master/src**: PARSER source and all related files.

The sub-directory structure for "rtl2cdfg-master/src" folder:
1. **benchmark_examples** - running benchmark examples from CHStone, Bambu, etc.
2. **code_backup** - contains all the older versions of parser code.
3. **execution_time_benchmarks** - text files containing running time for examples.
4. **other_examples** - other small examples compatible with parser.
5. **output** - generated C code is placed here after running parser.
6. **preprocessing_module**- contains files for pre-processing module.
7. **Pyverilog** - "ast.py" present inside pyverilog/vparser/ast.py.
8. **Utils** - small program utilities, includes demo testbench for Vivado and C program.
9. **parser.py** - main parser program.
10. **parser_clock.py** - parser with clock information in generated c code.
11.  **generated_c_code.c** - outline for main function for generated c code files.

1.Preprocessing Verilog
-------------------

Some operations in Verilog RTL may contain direct bit-level manipulation and the equivalent for such operations is not directly available in C program.
We have developed a pre-processing module which does this task however some operations maybe left out which are not yet discovered in the test-cases and must be operated manually.

* "preprocessing_module" folder contains preprocess.py and supporting directories.

* "hld2" folder contains pre-processed file stored after execution.

```
Command: python preprocess.py
User input: number of verilog files and their names.
```

2.Parser Usage
--------------------
After preprocessing to run the Parser use the following command:
```
python parser.py -x -f <path_to_user_input_file> -t <top_module_name> [<top_verilog_file.v> ... <other_verilog_file.v>]
-t = mention top module name
-x = to write 2's complement function in generated c code
-f = to read the input directly from file.

For example:
python parser.py -x -f benchmark_examples/des_level/console_input/top_function_input.txt -t top_function benchmark_examples/des_level/verilog/top_function.v benchmark_examples/des_level/verilog/top_function_IP.v benchmark_examples/des_level/verilog/top_function_PC1.v
```
NOTE: 
1. All the benchmarks inside "benchmark_examples" directory are running and each testcase folder contains a "parser_command.txt" file which contains the python command shown above for running that particular testcase.
2. If you do not want to use -f option which reads prededined input from the file you can use following information for user input.
3. For entering user input by hand you can refer text files present in "console_input" directory in every test case.


User Input Format
-------------------
There are two cases for user input considering the type of program. 

#### 1. No RAM,ROM or Function module present: 


If not RAM/ROM module is present we just require the top module name from the user and the location of the verilog file. 

The code to run the program is as follows: 

```
> If reading user input from file:
python parser.py -x -f ../user_input_file.txt -t “top_module_name” [./../../top_module_location]  
								OR
> If reading user input from console:							
python parser.py -x -t “top_module_name” [./../../top_module_location]  
console input:
0	(No. of RAM modules)
0	(No. of ROM modules)
0	(No. of function modules)
```
 

#### 2. RAM,ROM or Function module present: 

If RAM/ROM module is present then along with the top module name we require the following information as user input: 

1. No, of RAM modules.

2. Name of all the RAM modules. 

3. No. of ports in each of the RAM module. 

4. No. of ROM modules. 

5. Name of all the ROM modules. 

6. No. of ports in each of the ROM module. 

7. No. of Function modules.

8. Name of all the function modules.

The code to run the program is as follows: 

```
> If reading user input from file:
python parser.py -x -f ../user_input_file.txt -t “top_module_name” [./../../top_module_location]

								OR
								
> If reading user input from console:							
python parser.py -x -t “top_module_name” [./../../top_module_location]  
console input:
2					(No. of RAM modules)
ram1_module_name 	(Name of the RAM module)
2   				(No. of ports in that module)
ram2_module_name	(Name of the RAM module)
2   				(No. of ports in that module)
1					(No. of ROM modules)
rom1_module_name	(Name of the ROM module)
1					(No. of ports in that module)
1					(No. of function modules)
another_module_name (Name of the Function module)
```
NOTE:
 -x option will be used in command of 1st top module only if function modules are present otherwise it will give already declared error in generated c code.

