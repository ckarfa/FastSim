#include<stdio.h>
void fft_stage6(unsigned long long int *Out_I_address0__1,unsigned long long int *Out_I_address1__1,unsigned long long int *Out_I_ce0__1,unsigned long long int *Out_I_ce1__1,unsigned long long int *Out_I_d0__1,unsigned long long int *Out_I_d1__1,unsigned long long int *Out_I_we0__1,unsigned long long int *Out_I_we1__1,unsigned long long int *Out_R_address0__1,unsigned long long int *Out_R_address1__1,unsigned long long int *Out_R_ce0__1,unsigned long long int *Out_R_ce1__1,unsigned long long int *Out_R_d0__1,unsigned long long int *Out_R_d1__1,unsigned long long int *Out_R_we0__1,unsigned long long int *Out_R_we1__1,unsigned long long int *X_I_address0__1,unsigned long long int *X_I_ce0__1,unsigned long long int *X_I_q0__1,unsigned long long int *X_R_address0__1,unsigned long long int *X_R_ce0__1,unsigned long long int *X_R_q0__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,int dummy){
unsigned long long int Out_I_address0=*Out_I_address0__1;
unsigned long long int Out_I_address1=*Out_I_address1__1;
unsigned long long int Out_I_ce0=*Out_I_ce0__1;
unsigned long long int Out_I_ce1=*Out_I_ce1__1;
unsigned long long int Out_I_d0=*Out_I_d0__1;
unsigned long long int Out_I_d1=*Out_I_d1__1;
unsigned long long int Out_I_we0=*Out_I_we0__1;
unsigned long long int Out_I_we1=*Out_I_we1__1;
unsigned long long int Out_R_address0=*Out_R_address0__1;
unsigned long long int Out_R_address1=*Out_R_address1__1;
unsigned long long int Out_R_ce0=*Out_R_ce0__1;
unsigned long long int Out_R_ce1=*Out_R_ce1__1;
unsigned long long int Out_R_d0=*Out_R_d0__1;
unsigned long long int Out_R_d1=*Out_R_d1__1;
unsigned long long int Out_R_we0=*Out_R_we0__1;
unsigned long long int Out_R_we1=*Out_R_we1__1;
unsigned long long int X_I_address0=*X_I_address0__1;
unsigned long long int X_I_ce0=*X_I_ce0__1;
unsigned long long int X_I_q0=*X_I_q0__1;
unsigned long long int X_R_address0=*X_R_address0__1;
unsigned long long int X_R_ce0=*X_R_ce0__1;
unsigned long long int X_R_q0=*X_R_q0__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
   static long long int add_ln54_fu_215_p2=0;
   static long long int add_ln54_fu_215_p2__temp=0;
   static long long int add_ln54_reg_301=0;
   static long long int add_ln54_reg_301__temp=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   static long long int i_0_reg_161=0;
   static long long int i_0_reg_161__temp=0;
   static long long int sext_ln53_fu_203_p1=0;
   static long long int sext_ln53_fu_203_p1__temp=0;
   static long long int sext_ln53_reg_280=0;
   static long long int sext_ln53_reg_280__temp=0;
   static long long int sext_ln55_fu_221_p1=0;
   static long long int sext_ln55_fu_221_p1__temp=0;
   static long long int sext_ln55_reg_306=0;
   static long long int sext_ln55_reg_306__temp=0;
   static long long int sub_ln53_fu_209_p2=0;
   static long long int sub_ln53_fu_209_p2__temp=0;
   static long long int sub_ln53_reg_296=0;
   static long long int sub_ln53_reg_296__temp=0;
   static unsigned long long int Out_I_address0__temp=0;
   static unsigned long long int Out_I_address1__temp=0;
   static unsigned long long int Out_I_ce0__temp=0;
   static unsigned long long int Out_I_ce1__temp=0;
   static unsigned long long int Out_I_d0__temp=0;
   static unsigned long long int Out_I_d1__temp=0;
   static unsigned long long int Out_I_we0__temp=0;
   static unsigned long long int Out_I_we1__temp=0;
   static unsigned long long int Out_R_address0__temp=0;
   static unsigned long long int Out_R_address1__temp=0;
   static unsigned long long int Out_R_ce0__temp=0;
   static unsigned long long int Out_R_ce1__temp=0;
   static unsigned long long int Out_R_d0__temp=0;
   static unsigned long long int Out_R_d1__temp=0;
   static unsigned long long int Out_R_we0__temp=0;
   static unsigned long long int Out_R_we1__temp=0;
   static unsigned long long int X_I_address0__temp=0;
   static unsigned long long int X_I_ce0__temp=0;
   static unsigned long long int X_I_load_1_reg_345=0;
   static unsigned long long int X_I_load_1_reg_345__temp=0;
   static unsigned long long int X_I_q0__temp=0;
   static unsigned long long int X_R_address0__temp=0;
   static unsigned long long int X_R_ce0__temp=0;
   static unsigned long long int X_R_load_1_reg_339=0;
   static unsigned long long int X_R_load_1_reg_339__temp=0;
   static unsigned long long int X_R_q0__temp=0;
   static unsigned long long int a_fu_175_p2=0;
   static unsigned long long int a_fu_175_p2__temp=0;
   static unsigned long long int a_reg_272=0;
   static unsigned long long int a_reg_272__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   static unsigned long long int ap_NS_fsm=0;
   static unsigned long long int ap_NS_fsm__temp=0;
   static unsigned long long int ap_block_state1=0;
   static unsigned long long int ap_block_state1__temp=0;
   static unsigned long long int ap_clk__temp=0;
   static unsigned long long int ap_continue__temp=0;
   static unsigned long long int ap_done__temp=0;
   static unsigned long long int ap_done_reg=0;
   static unsigned long long int ap_done_reg__temp=0;
   static unsigned long long int ap_idle__temp=0;
   static unsigned long long int ap_phi_mux_i_phi_fu_153_p4=0;
   static unsigned long long int ap_phi_mux_i_phi_fu_153_p4__temp=0;
   static unsigned long long int ap_ready__temp=0;
   static unsigned long long int ap_rst__temp=0;
   static unsigned long long int ap_start__temp=0;
   static unsigned long long int ap_status__temp=0;
   static unsigned long long int c_reg_136=0;
   static unsigned long long int c_reg_136__temp=0;
   static unsigned long long int i_0_reg_161_temp_7=0;
   static unsigned long long int i_0_reg_161_temp_7__temp=0;
   static unsigned long long int i_0_reg_161_temp_8=0;
   static unsigned long long int i_0_reg_161_temp_8__temp=0;
   static unsigned long long int i_3_fu_227_p2=0;
   static unsigned long long int i_3_fu_227_p2__temp=0;
   static unsigned long long int i_3_reg_322=0;
   static unsigned long long int i_3_reg_322__temp=0;
   static unsigned long long int i_lower_fu_197_p2=0;
   static unsigned long long int i_lower_fu_197_p2__temp=0;
   static unsigned long long int i_reg_148=0;
   static unsigned long long int i_reg_148__temp=0;
   static unsigned long long int icmp_ln51_fu_191_p2=0;
   static unsigned long long int icmp_ln51_fu_191_p2__temp=0;
   static unsigned long long int temp_I_fu_242_p1=0;
   static unsigned long long int temp_I_fu_242_p1__temp=0;
   static unsigned long long int temp_I_fu_242_p1__temp0=0;
   static unsigned long long int temp_I_fu_242_p1__temp0__temp=0;
   static unsigned long long int temp_I_fu_242_p1_temp_4=0;
   static unsigned long long int temp_I_fu_242_p1_temp_4__temp=0;
   static unsigned long long int temp_I_fu_242_p1_temp_5=0;
   static unsigned long long int temp_I_fu_242_p1_temp_5__temp=0;
   static unsigned long long int temp_I_fu_242_p2=0;
   static unsigned long long int temp_I_fu_242_p2__temp=0;
   static unsigned long long int temp_I_reg_333=0;
   static unsigned long long int temp_I_reg_333__temp=0;
   static unsigned long long int temp_R_fu_237_p1=0;
   static unsigned long long int temp_R_fu_237_p1__temp=0;
   static unsigned long long int temp_R_fu_237_p1__temp0=0;
   static unsigned long long int temp_R_fu_237_p1__temp0__temp=0;
   static unsigned long long int temp_R_fu_237_p1_temp_6=0;
   static unsigned long long int temp_R_fu_237_p1_temp_6__temp=0;
   static unsigned long long int temp_R_fu_237_p1_temp_7=0;
   static unsigned long long int temp_R_fu_237_p1_temp_7__temp=0;
   static unsigned long long int temp_R_fu_237_p2=0;
   static unsigned long long int temp_R_fu_237_p2__temp=0;
   static unsigned long long int temp_R_reg_327=0;
   static unsigned long long int temp_R_reg_327__temp=0;
   static unsigned long long int tmp_3_fu_181_p4=0;
   static unsigned long long int tmp_3_fu_181_p4__temp=0;
   static unsigned long long int zext_ln45_2_fu_233_p1=0;
   static unsigned long long int zext_ln45_2_fu_233_p1__temp=0;
   static unsigned long long int zext_ln45_fu_171_p1=0;
   static unsigned long long int zext_ln45_fu_171_p1__temp=0;
    unsigned long long int  ap_clk_count = 0;
   

switch(ap_status){
	case 1:
		goto ap_ST_fsm_state1;
	case 2:
		goto ap_ST_fsm_state2;
	case 3:
		goto ap_ST_fsm_state3;
	case 4:
		goto ap_ST_fsm_state4;
	case 5:
		goto ap_ST_fsm_state5;
	case 6:
		goto ap_ST_fsm_state6;
	default: 
		 goto end;
}

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   sext_ln53_fu_203_p1__temp = sext_ln53_fu_203_p1 ;
   add_ln54_fu_215_p2__temp = add_ln54_fu_215_p2 ;
   sext_ln55_reg_306__temp = sext_ln55_reg_306 ;
   sub_ln53_reg_296__temp = sub_ln53_reg_296 ;
   add_ln54_reg_301__temp = add_ln54_reg_301 ;
   i_0_reg_161__temp = i_0_reg_161 ;
   sext_ln53_reg_280__temp = sext_ln53_reg_280 ;
   sub_ln53_fu_209_p2__temp = sub_ln53_fu_209_p2 ;
   sext_ln55_fu_221_p1__temp = sext_ln55_fu_221_p1 ;
   X_I_address0__temp = X_I_address0 ;
   temp_I_fu_242_p1__temp0__temp = temp_I_fu_242_p1__temp0 ;
   temp_I_fu_242_p1__temp = temp_I_fu_242_p1 ;
   Out_I_we0__temp = Out_I_we0 ;
   i_0_reg_161_temp_8__temp = i_0_reg_161_temp_8 ;
   Out_R_address0__temp = Out_R_address0 ;
   X_I_ce0__temp = X_I_ce0 ;
   i_lower_fu_197_p2__temp = i_lower_fu_197_p2 ;
   temp_I_fu_242_p1_temp_4__temp = temp_I_fu_242_p1_temp_4 ;
   temp_R_fu_237_p1__temp0__temp = temp_R_fu_237_p1__temp0 ;
   Out_R_address1__temp = Out_R_address1 ;
   temp_R_fu_237_p2__temp = temp_R_fu_237_p2 ;
   temp_R_fu_237_p1_temp_7__temp = temp_R_fu_237_p1_temp_7 ;
   i_3_fu_227_p2__temp = i_3_fu_227_p2 ;
   temp_R_fu_237_p1_temp_6__temp = temp_R_fu_237_p1_temp_6 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_333__temp = temp_I_reg_333 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_rst__temp = ap_rst ;
   Out_I_address1__temp = Out_I_address1 ;
   X_I_q0__temp = X_I_q0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   a_fu_175_p2__temp = a_fu_175_p2 ;
   X_R_q0__temp = X_R_q0 ;
   ap_clk__temp = ap_clk ;
   Out_R_ce0__temp = Out_R_ce0 ;
   X_I_load_1_reg_345__temp = X_I_load_1_reg_345 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   ap_ready__temp = ap_ready ;
   c_reg_136__temp = c_reg_136 ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_191_p2__temp = icmp_ln51_fu_191_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   X_R_ce0__temp = X_R_ce0 ;
   temp_I_fu_242_p2__temp = temp_I_fu_242_p2 ;
   i_0_reg_161_temp_7__temp = i_0_reg_161_temp_7 ;
   ap_done__temp = ap_done ;
   Out_R_we0__temp = Out_R_we0 ;
   ap_idle__temp = ap_idle ;
   Out_I_d0__temp = Out_I_d0 ;
   Out_R_we1__temp = Out_R_we1 ;
   temp_R_reg_327__temp = temp_R_reg_327 ;
   ap_start__temp = ap_start ;
   tmp_3_fu_181_p4__temp = tmp_3_fu_181_p4 ;
   Out_I_d1__temp = Out_I_d1 ;
   a_reg_272__temp = a_reg_272 ;
   i_3_reg_322__temp = i_3_reg_322 ;
   ap_continue__temp = ap_continue ;
   Out_R_d0__temp = Out_R_d0 ;
   zext_ln45_fu_171_p1__temp = zext_ln45_fu_171_p1 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_d1__temp = Out_R_d1 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   X_R_load_1_reg_339__temp = X_R_load_1_reg_339 ;
   zext_ln45_2_fu_233_p1__temp = zext_ln45_2_fu_233_p1 ;
   temp_I_fu_242_p1_temp_5__temp = temp_I_fu_242_p1_temp_5 ;
   temp_R_fu_237_p1__temp = temp_R_fu_237_p1 ;
   i_reg_148__temp = i_reg_148 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   ap_phi_mux_i_phi_fu_153_p4__temp = ap_phi_mux_i_phi_fu_153_p4 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_I_address0 = sext_ln53_reg_280;
       Out_I_address1 = sext_ln55_reg_306;
       Out_I_d0 = X_I_load_1_reg_345 - temp_I_reg_333;
       Out_I_d1 = X_I_load_1_reg_345 + temp_I_reg_333;
       Out_R_address0 = sext_ln53_reg_280;
       Out_R_address1 = sext_ln55_reg_306;
       Out_R_d0 = X_R_load_1_reg_339 - temp_R_reg_327;
       Out_R_d1 = X_R_load_1_reg_339 + temp_R_reg_327;
       ap_phi_mux_i_phi_fu_153_p4 = i_reg_148;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_R_ce0 = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               icmp_ln51_fu_191_p2 =   ( do_twos_complement(  (  ( (  ( ( i_0_reg_161__temp  >> 10 )  & 18446744073709551615 )  & 4194303 ) & 18446744073709551615 )  & 4194303 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 ) ;
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           c_reg_136 =  0;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_reg_148 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               c_reg_136 =  0;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_reg_148 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   sext_ln53_fu_203_p1__temp = sext_ln53_fu_203_p1 ;
   add_ln54_fu_215_p2__temp = add_ln54_fu_215_p2 ;
   sext_ln55_reg_306__temp = sext_ln55_reg_306 ;
   sub_ln53_reg_296__temp = sub_ln53_reg_296 ;
   add_ln54_reg_301__temp = add_ln54_reg_301 ;
   i_0_reg_161__temp = i_0_reg_161 ;
   sext_ln53_reg_280__temp = sext_ln53_reg_280 ;
   sub_ln53_fu_209_p2__temp = sub_ln53_fu_209_p2 ;
   sext_ln55_fu_221_p1__temp = sext_ln55_fu_221_p1 ;
   X_I_address0__temp = X_I_address0 ;
   temp_I_fu_242_p1__temp0__temp = temp_I_fu_242_p1__temp0 ;
   temp_I_fu_242_p1__temp = temp_I_fu_242_p1 ;
   Out_I_we0__temp = Out_I_we0 ;
   i_0_reg_161_temp_8__temp = i_0_reg_161_temp_8 ;
   Out_R_address0__temp = Out_R_address0 ;
   X_I_ce0__temp = X_I_ce0 ;
   i_lower_fu_197_p2__temp = i_lower_fu_197_p2 ;
   temp_I_fu_242_p1_temp_4__temp = temp_I_fu_242_p1_temp_4 ;
   temp_R_fu_237_p1__temp0__temp = temp_R_fu_237_p1__temp0 ;
   Out_R_address1__temp = Out_R_address1 ;
   temp_R_fu_237_p2__temp = temp_R_fu_237_p2 ;
   temp_R_fu_237_p1_temp_7__temp = temp_R_fu_237_p1_temp_7 ;
   i_3_fu_227_p2__temp = i_3_fu_227_p2 ;
   temp_R_fu_237_p1_temp_6__temp = temp_R_fu_237_p1_temp_6 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_333__temp = temp_I_reg_333 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_rst__temp = ap_rst ;
   Out_I_address1__temp = Out_I_address1 ;
   X_I_q0__temp = X_I_q0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   a_fu_175_p2__temp = a_fu_175_p2 ;
   X_R_q0__temp = X_R_q0 ;
   ap_clk__temp = ap_clk ;
   Out_R_ce0__temp = Out_R_ce0 ;
   X_I_load_1_reg_345__temp = X_I_load_1_reg_345 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   ap_ready__temp = ap_ready ;
   c_reg_136__temp = c_reg_136 ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_191_p2__temp = icmp_ln51_fu_191_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   X_R_ce0__temp = X_R_ce0 ;
   temp_I_fu_242_p2__temp = temp_I_fu_242_p2 ;
   i_0_reg_161_temp_7__temp = i_0_reg_161_temp_7 ;
   ap_done__temp = ap_done ;
   Out_R_we0__temp = Out_R_we0 ;
   ap_idle__temp = ap_idle ;
   Out_I_d0__temp = Out_I_d0 ;
   Out_R_we1__temp = Out_R_we1 ;
   temp_R_reg_327__temp = temp_R_reg_327 ;
   ap_start__temp = ap_start ;
   tmp_3_fu_181_p4__temp = tmp_3_fu_181_p4 ;
   Out_I_d1__temp = Out_I_d1 ;
   a_reg_272__temp = a_reg_272 ;
   i_3_reg_322__temp = i_3_reg_322 ;
   ap_continue__temp = ap_continue ;
   Out_R_d0__temp = Out_R_d0 ;
   zext_ln45_fu_171_p1__temp = zext_ln45_fu_171_p1 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_d1__temp = Out_R_d1 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   X_R_load_1_reg_339__temp = X_R_load_1_reg_339 ;
   zext_ln45_2_fu_233_p1__temp = zext_ln45_2_fu_233_p1 ;
   temp_I_fu_242_p1_temp_5__temp = temp_I_fu_242_p1_temp_5 ;
   temp_R_fu_237_p1__temp = temp_R_fu_237_p1 ;
   i_reg_148__temp = i_reg_148 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   ap_phi_mux_i_phi_fu_153_p4__temp = ap_phi_mux_i_phi_fu_153_p4 ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_I_address0 = sext_ln53_reg_280;
       Out_I_address1 = sext_ln55_reg_306;
       Out_I_d0 = X_I_load_1_reg_345 - temp_I_reg_333;
       Out_I_d1 = X_I_load_1_reg_345 + temp_I_reg_333;
       Out_R_address0 = sext_ln53_reg_280;
       Out_R_address1 = sext_ln55_reg_306;
       Out_R_d0 = X_R_load_1_reg_339 - temp_R_reg_327;
       Out_R_d1 = X_R_load_1_reg_339 + temp_R_reg_327;
       ap_phi_mux_i_phi_fu_153_p4 = i_reg_148;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_R_ce0 = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
   if(((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if((ap_phi_mux_i_phi_fu_153_p4 == 0) && (1 == ap_CS_fsm_state2))
       {
           i_0_reg_161 =   ( i_reg_148__temp  & 4294967295 ) ;
       }
       if((ap_phi_mux_i_phi_fu_153_p4 == 0) && (1 == ap_CS_fsm_state2))
       {
           a_reg_272 =   ( ( c_reg_136__temp  ^ 4 ) & 7 ) ;
       }
       if(ap_done==1){
         //  ap_status = 0;
          // goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if((ap_phi_mux_i_phi_fu_153_p4 == 0) && (1 == ap_CS_fsm_state2))
       {
               i_0_reg_161 =   ( i_reg_148__temp  & 4294967295 ) ;
       }
       if((ap_phi_mux_i_phi_fu_153_p4 == 0) && (1 == ap_CS_fsm_state2))
       {
               a_reg_272 =   ( ( c_reg_136__temp  ^ 4 ) & 7 ) ;
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   sext_ln53_fu_203_p1__temp = sext_ln53_fu_203_p1 ;
   add_ln54_fu_215_p2__temp = add_ln54_fu_215_p2 ;
   sext_ln55_reg_306__temp = sext_ln55_reg_306 ;
   sub_ln53_reg_296__temp = sub_ln53_reg_296 ;
   add_ln54_reg_301__temp = add_ln54_reg_301 ;
   i_0_reg_161__temp = i_0_reg_161 ;
   sext_ln53_reg_280__temp = sext_ln53_reg_280 ;
   sub_ln53_fu_209_p2__temp = sub_ln53_fu_209_p2 ;
   sext_ln55_fu_221_p1__temp = sext_ln55_fu_221_p1 ;
   X_I_address0__temp = X_I_address0 ;
   temp_I_fu_242_p1__temp0__temp = temp_I_fu_242_p1__temp0 ;
   temp_I_fu_242_p1__temp = temp_I_fu_242_p1 ;
   Out_I_we0__temp = Out_I_we0 ;
   i_0_reg_161_temp_8__temp = i_0_reg_161_temp_8 ;
   Out_R_address0__temp = Out_R_address0 ;
   X_I_ce0__temp = X_I_ce0 ;
   i_lower_fu_197_p2__temp = i_lower_fu_197_p2 ;
   temp_I_fu_242_p1_temp_4__temp = temp_I_fu_242_p1_temp_4 ;
   temp_R_fu_237_p1__temp0__temp = temp_R_fu_237_p1__temp0 ;
   Out_R_address1__temp = Out_R_address1 ;
   temp_R_fu_237_p2__temp = temp_R_fu_237_p2 ;
   temp_R_fu_237_p1_temp_7__temp = temp_R_fu_237_p1_temp_7 ;
   i_3_fu_227_p2__temp = i_3_fu_227_p2 ;
   temp_R_fu_237_p1_temp_6__temp = temp_R_fu_237_p1_temp_6 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_333__temp = temp_I_reg_333 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_rst__temp = ap_rst ;
   Out_I_address1__temp = Out_I_address1 ;
   X_I_q0__temp = X_I_q0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   a_fu_175_p2__temp = a_fu_175_p2 ;
   X_R_q0__temp = X_R_q0 ;
   ap_clk__temp = ap_clk ;
   Out_R_ce0__temp = Out_R_ce0 ;
   X_I_load_1_reg_345__temp = X_I_load_1_reg_345 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   ap_ready__temp = ap_ready ;
   c_reg_136__temp = c_reg_136 ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_191_p2__temp = icmp_ln51_fu_191_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   X_R_ce0__temp = X_R_ce0 ;
   temp_I_fu_242_p2__temp = temp_I_fu_242_p2 ;
   i_0_reg_161_temp_7__temp = i_0_reg_161_temp_7 ;
   ap_done__temp = ap_done ;
   Out_R_we0__temp = Out_R_we0 ;
   ap_idle__temp = ap_idle ;
   Out_I_d0__temp = Out_I_d0 ;
   Out_R_we1__temp = Out_R_we1 ;
   temp_R_reg_327__temp = temp_R_reg_327 ;
   ap_start__temp = ap_start ;
   tmp_3_fu_181_p4__temp = tmp_3_fu_181_p4 ;
   Out_I_d1__temp = Out_I_d1 ;
   a_reg_272__temp = a_reg_272 ;
   i_3_reg_322__temp = i_3_reg_322 ;
   ap_continue__temp = ap_continue ;
   Out_R_d0__temp = Out_R_d0 ;
   zext_ln45_fu_171_p1__temp = zext_ln45_fu_171_p1 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_d1__temp = Out_R_d1 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   X_R_load_1_reg_339__temp = X_R_load_1_reg_339 ;
   zext_ln45_2_fu_233_p1__temp = zext_ln45_2_fu_233_p1 ;
   temp_I_fu_242_p1_temp_5__temp = temp_I_fu_242_p1_temp_5 ;
   temp_R_fu_237_p1__temp = temp_R_fu_237_p1 ;
   i_reg_148__temp = i_reg_148 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   ap_phi_mux_i_phi_fu_153_p4__temp = ap_phi_mux_i_phi_fu_153_p4 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_I_address0 = sext_ln53_reg_280;
       Out_I_address1 = sext_ln55_reg_306;
       Out_I_d0 = X_I_load_1_reg_345 - temp_I_reg_333;
       Out_I_d1 = X_I_load_1_reg_345 + temp_I_reg_333;
       Out_R_address0 = sext_ln53_reg_280;
       Out_R_address1 = sext_ln55_reg_306;
       Out_R_d0 = X_R_load_1_reg_339 - temp_R_reg_327;
       Out_R_d1 = X_R_load_1_reg_339 + temp_R_reg_327;
       ap_phi_mux_i_phi_fu_153_p4 = i_reg_148;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_R_ce0 = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           X_I_address0 =  ( do_twos_complement(  ( ( do_twos_complement( i_0_reg_161__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 )  , 32 ) & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_I_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           X_R_address0 =  ( do_twos_complement(  ( ( do_twos_complement( i_0_reg_161__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 )  , 32 ) & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_R_ce0 =  1;
       }
               icmp_ln51_fu_191_p2 =   ( do_twos_complement(  (  ( (  ( ( i_0_reg_161__temp  >> 10 )  & 18446744073709551615 )  & 4194303 ) & 18446744073709551615 )  & 4194303 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 ) ;
   if(((icmp_ln51_fu_191_p2 == 0) && (1 == ap_CS_fsm_state3)) == 1){
       if((icmp_ln51_fu_191_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           c_reg_136 =  a_reg_272__temp ;
       }
       if((icmp_ln51_fu_191_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           i_reg_148 =  1;
       }
       if((icmp_ln51_fu_191_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           sext_ln53_reg_280 =  ( do_twos_complement(  ( ( do_twos_complement( i_0_reg_161__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 )  , 32 ) & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((icmp_ln51_fu_191_p2 == 0) && (1 == ap_CS_fsm_state3)) == 0){
       if((icmp_ln51_fu_191_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
               c_reg_136 =  a_reg_272__temp ;
       }
       if((icmp_ln51_fu_191_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
               i_reg_148 =  1;
       }
       if((icmp_ln51_fu_191_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               sext_ln53_reg_280 =  ( do_twos_complement(  ( ( do_twos_complement( i_0_reg_161__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 )  , 32 ) & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state4;
   }

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   sext_ln53_fu_203_p1__temp = sext_ln53_fu_203_p1 ;
   add_ln54_fu_215_p2__temp = add_ln54_fu_215_p2 ;
   sext_ln55_reg_306__temp = sext_ln55_reg_306 ;
   sub_ln53_reg_296__temp = sub_ln53_reg_296 ;
   add_ln54_reg_301__temp = add_ln54_reg_301 ;
   i_0_reg_161__temp = i_0_reg_161 ;
   sext_ln53_reg_280__temp = sext_ln53_reg_280 ;
   sub_ln53_fu_209_p2__temp = sub_ln53_fu_209_p2 ;
   sext_ln55_fu_221_p1__temp = sext_ln55_fu_221_p1 ;
   X_I_address0__temp = X_I_address0 ;
   temp_I_fu_242_p1__temp0__temp = temp_I_fu_242_p1__temp0 ;
   temp_I_fu_242_p1__temp = temp_I_fu_242_p1 ;
   Out_I_we0__temp = Out_I_we0 ;
   i_0_reg_161_temp_8__temp = i_0_reg_161_temp_8 ;
   Out_R_address0__temp = Out_R_address0 ;
   X_I_ce0__temp = X_I_ce0 ;
   i_lower_fu_197_p2__temp = i_lower_fu_197_p2 ;
   temp_I_fu_242_p1_temp_4__temp = temp_I_fu_242_p1_temp_4 ;
   temp_R_fu_237_p1__temp0__temp = temp_R_fu_237_p1__temp0 ;
   Out_R_address1__temp = Out_R_address1 ;
   temp_R_fu_237_p2__temp = temp_R_fu_237_p2 ;
   temp_R_fu_237_p1_temp_7__temp = temp_R_fu_237_p1_temp_7 ;
   i_3_fu_227_p2__temp = i_3_fu_227_p2 ;
   temp_R_fu_237_p1_temp_6__temp = temp_R_fu_237_p1_temp_6 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_333__temp = temp_I_reg_333 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_rst__temp = ap_rst ;
   Out_I_address1__temp = Out_I_address1 ;
   X_I_q0__temp = X_I_q0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   a_fu_175_p2__temp = a_fu_175_p2 ;
   X_R_q0__temp = X_R_q0 ;
   ap_clk__temp = ap_clk ;
   Out_R_ce0__temp = Out_R_ce0 ;
   X_I_load_1_reg_345__temp = X_I_load_1_reg_345 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   ap_ready__temp = ap_ready ;
   c_reg_136__temp = c_reg_136 ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_191_p2__temp = icmp_ln51_fu_191_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   X_R_ce0__temp = X_R_ce0 ;
   temp_I_fu_242_p2__temp = temp_I_fu_242_p2 ;
   i_0_reg_161_temp_7__temp = i_0_reg_161_temp_7 ;
   ap_done__temp = ap_done ;
   Out_R_we0__temp = Out_R_we0 ;
   ap_idle__temp = ap_idle ;
   Out_I_d0__temp = Out_I_d0 ;
   Out_R_we1__temp = Out_R_we1 ;
   temp_R_reg_327__temp = temp_R_reg_327 ;
   ap_start__temp = ap_start ;
   tmp_3_fu_181_p4__temp = tmp_3_fu_181_p4 ;
   Out_I_d1__temp = Out_I_d1 ;
   a_reg_272__temp = a_reg_272 ;
   i_3_reg_322__temp = i_3_reg_322 ;
   ap_continue__temp = ap_continue ;
   Out_R_d0__temp = Out_R_d0 ;
   zext_ln45_fu_171_p1__temp = zext_ln45_fu_171_p1 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_d1__temp = Out_R_d1 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   X_R_load_1_reg_339__temp = X_R_load_1_reg_339 ;
   zext_ln45_2_fu_233_p1__temp = zext_ln45_2_fu_233_p1 ;
   temp_I_fu_242_p1_temp_5__temp = temp_I_fu_242_p1_temp_5 ;
   temp_R_fu_237_p1__temp = temp_R_fu_237_p1 ;
   i_reg_148__temp = i_reg_148 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   ap_phi_mux_i_phi_fu_153_p4__temp = ap_phi_mux_i_phi_fu_153_p4 ;

  if(ap_clk_count == 1 ){
       ap_status = 4;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_I_address0 = sext_ln53_reg_280;
       Out_I_address1 = sext_ln55_reg_306;
       Out_I_d0 = X_I_load_1_reg_345 - temp_I_reg_333;
       Out_I_d1 = X_I_load_1_reg_345 + temp_I_reg_333;
       Out_R_address0 = sext_ln53_reg_280;
       Out_R_address1 = sext_ln55_reg_306;
       Out_R_d0 = X_R_load_1_reg_339 - temp_R_reg_327;
       Out_R_d1 = X_R_load_1_reg_339 + temp_R_reg_327;
       ap_phi_mux_i_phi_fu_153_p4 = i_reg_148;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_R_ce0 = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if(1 == ap_CS_fsm_state4)
       {
           X_I_address0 =   ( i_0_reg_161__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_I_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           X_R_address0 =   ( i_0_reg_161__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_R_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           sub_ln53_reg_296 =   ( ( ( X_R_q0__temp  & 4294967295 )  - ( X_I_q0__temp  & 4294967295 )  ) & 4294967295 ) ;
           sext_ln55_reg_306 =   ( i_0_reg_161__temp  & 18446744073709551615 ) ;
           i_3_reg_322 =   ( ( do_twos_complement( i_0_reg_161__temp  , 32 )  + do_twos_complement( 2 , 32 )  ) & 4294967295 ) ;
           add_ln54_reg_301 =   ( ( ( X_I_q0__temp  & 4294967295 )  + ( X_R_q0__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
    ap_CS_fsm_state6 = 0;
   sext_ln53_fu_203_p1__temp = sext_ln53_fu_203_p1 ;
   add_ln54_fu_215_p2__temp = add_ln54_fu_215_p2 ;
   sext_ln55_reg_306__temp = sext_ln55_reg_306 ;
   sub_ln53_reg_296__temp = sub_ln53_reg_296 ;
   add_ln54_reg_301__temp = add_ln54_reg_301 ;
   i_0_reg_161__temp = i_0_reg_161 ;
   sext_ln53_reg_280__temp = sext_ln53_reg_280 ;
   sub_ln53_fu_209_p2__temp = sub_ln53_fu_209_p2 ;
   sext_ln55_fu_221_p1__temp = sext_ln55_fu_221_p1 ;
   X_I_address0__temp = X_I_address0 ;
   temp_I_fu_242_p1__temp0__temp = temp_I_fu_242_p1__temp0 ;
   temp_I_fu_242_p1__temp = temp_I_fu_242_p1 ;
   Out_I_we0__temp = Out_I_we0 ;
   i_0_reg_161_temp_8__temp = i_0_reg_161_temp_8 ;
   Out_R_address0__temp = Out_R_address0 ;
   X_I_ce0__temp = X_I_ce0 ;
   i_lower_fu_197_p2__temp = i_lower_fu_197_p2 ;
   temp_I_fu_242_p1_temp_4__temp = temp_I_fu_242_p1_temp_4 ;
   temp_R_fu_237_p1__temp0__temp = temp_R_fu_237_p1__temp0 ;
   Out_R_address1__temp = Out_R_address1 ;
   temp_R_fu_237_p2__temp = temp_R_fu_237_p2 ;
   temp_R_fu_237_p1_temp_7__temp = temp_R_fu_237_p1_temp_7 ;
   i_3_fu_227_p2__temp = i_3_fu_227_p2 ;
   temp_R_fu_237_p1_temp_6__temp = temp_R_fu_237_p1_temp_6 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_333__temp = temp_I_reg_333 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_rst__temp = ap_rst ;
   Out_I_address1__temp = Out_I_address1 ;
   X_I_q0__temp = X_I_q0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   a_fu_175_p2__temp = a_fu_175_p2 ;
   X_R_q0__temp = X_R_q0 ;
   ap_clk__temp = ap_clk ;
   Out_R_ce0__temp = Out_R_ce0 ;
   X_I_load_1_reg_345__temp = X_I_load_1_reg_345 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   ap_ready__temp = ap_ready ;
   c_reg_136__temp = c_reg_136 ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_191_p2__temp = icmp_ln51_fu_191_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   X_R_ce0__temp = X_R_ce0 ;
   temp_I_fu_242_p2__temp = temp_I_fu_242_p2 ;
   i_0_reg_161_temp_7__temp = i_0_reg_161_temp_7 ;
   ap_done__temp = ap_done ;
   Out_R_we0__temp = Out_R_we0 ;
   ap_idle__temp = ap_idle ;
   Out_I_d0__temp = Out_I_d0 ;
   Out_R_we1__temp = Out_R_we1 ;
   temp_R_reg_327__temp = temp_R_reg_327 ;
   ap_start__temp = ap_start ;
   tmp_3_fu_181_p4__temp = tmp_3_fu_181_p4 ;
   Out_I_d1__temp = Out_I_d1 ;
   a_reg_272__temp = a_reg_272 ;
   i_3_reg_322__temp = i_3_reg_322 ;
   ap_continue__temp = ap_continue ;
   Out_R_d0__temp = Out_R_d0 ;
   zext_ln45_fu_171_p1__temp = zext_ln45_fu_171_p1 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_d1__temp = Out_R_d1 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   X_R_load_1_reg_339__temp = X_R_load_1_reg_339 ;
   zext_ln45_2_fu_233_p1__temp = zext_ln45_2_fu_233_p1 ;
   temp_I_fu_242_p1_temp_5__temp = temp_I_fu_242_p1_temp_5 ;
   temp_R_fu_237_p1__temp = temp_R_fu_237_p1 ;
   i_reg_148__temp = i_reg_148 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   ap_phi_mux_i_phi_fu_153_p4__temp = ap_phi_mux_i_phi_fu_153_p4 ;

  if(ap_clk_count == 1 ){
       ap_status = 5;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_I_address0 = sext_ln53_reg_280;
       Out_I_address1 = sext_ln55_reg_306;
       Out_I_d0 = X_I_load_1_reg_345 - temp_I_reg_333;
       Out_I_d1 = X_I_load_1_reg_345 + temp_I_reg_333;
       Out_R_address0 = sext_ln53_reg_280;
       Out_R_address1 = sext_ln55_reg_306;
       Out_R_d0 = X_R_load_1_reg_339 - temp_R_reg_327;
       Out_R_d1 = X_R_load_1_reg_339 + temp_R_reg_327;
       ap_phi_mux_i_phi_fu_153_p4 = i_reg_148;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_R_ce0 = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if(1 == ap_CS_fsm_state5)
       {
           temp_R_reg_327 =   ( ( do_twos_complement( sub_ln53_reg_296__temp  , 32 )  * do_twos_complement(  (  ( (  ( ( 0 << 2 )  & 18446744073709551615 )  |  (  ( c_reg_136__temp  & 4294967295 )  & 7 )  ) & 18446744073709551615 )  & 18446744073709551615 )  , 63 )  ) & 4294967295 ) ;
           temp_I_reg_333 =   ( ( do_twos_complement( add_ln54_reg_301__temp  , 32 )  * do_twos_complement(  (  ( (  ( ( 0 << 2 )  & 18446744073709551615 )  |  (  ( c_reg_136__temp  & 4294967295 )  & 7 )  ) & 18446744073709551615 )  & 18446744073709551615 )  , 63 )  ) & 4294967295 ) ;
           X_R_load_1_reg_339 =  ( X_R_q0__temp  & 4294967295 ) ;
           X_I_load_1_reg_345 =  ( X_I_q0__temp  & 4294967295 ) ;
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 1;
   sext_ln53_fu_203_p1__temp = sext_ln53_fu_203_p1 ;
   add_ln54_fu_215_p2__temp = add_ln54_fu_215_p2 ;
   sext_ln55_reg_306__temp = sext_ln55_reg_306 ;
   sub_ln53_reg_296__temp = sub_ln53_reg_296 ;
   add_ln54_reg_301__temp = add_ln54_reg_301 ;
   i_0_reg_161__temp = i_0_reg_161 ;
   sext_ln53_reg_280__temp = sext_ln53_reg_280 ;
   sub_ln53_fu_209_p2__temp = sub_ln53_fu_209_p2 ;
   sext_ln55_fu_221_p1__temp = sext_ln55_fu_221_p1 ;
   X_I_address0__temp = X_I_address0 ;
   temp_I_fu_242_p1__temp0__temp = temp_I_fu_242_p1__temp0 ;
   temp_I_fu_242_p1__temp = temp_I_fu_242_p1 ;
   Out_I_we0__temp = Out_I_we0 ;
   i_0_reg_161_temp_8__temp = i_0_reg_161_temp_8 ;
   Out_R_address0__temp = Out_R_address0 ;
   X_I_ce0__temp = X_I_ce0 ;
   i_lower_fu_197_p2__temp = i_lower_fu_197_p2 ;
   temp_I_fu_242_p1_temp_4__temp = temp_I_fu_242_p1_temp_4 ;
   temp_R_fu_237_p1__temp0__temp = temp_R_fu_237_p1__temp0 ;
   Out_R_address1__temp = Out_R_address1 ;
   temp_R_fu_237_p2__temp = temp_R_fu_237_p2 ;
   temp_R_fu_237_p1_temp_7__temp = temp_R_fu_237_p1_temp_7 ;
   i_3_fu_227_p2__temp = i_3_fu_227_p2 ;
   temp_R_fu_237_p1_temp_6__temp = temp_R_fu_237_p1_temp_6 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_333__temp = temp_I_reg_333 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_rst__temp = ap_rst ;
   Out_I_address1__temp = Out_I_address1 ;
   X_I_q0__temp = X_I_q0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   a_fu_175_p2__temp = a_fu_175_p2 ;
   X_R_q0__temp = X_R_q0 ;
   ap_clk__temp = ap_clk ;
   Out_R_ce0__temp = Out_R_ce0 ;
   X_I_load_1_reg_345__temp = X_I_load_1_reg_345 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   ap_ready__temp = ap_ready ;
   c_reg_136__temp = c_reg_136 ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_191_p2__temp = icmp_ln51_fu_191_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   X_R_ce0__temp = X_R_ce0 ;
   temp_I_fu_242_p2__temp = temp_I_fu_242_p2 ;
   i_0_reg_161_temp_7__temp = i_0_reg_161_temp_7 ;
   ap_done__temp = ap_done ;
   Out_R_we0__temp = Out_R_we0 ;
   ap_idle__temp = ap_idle ;
   Out_I_d0__temp = Out_I_d0 ;
   Out_R_we1__temp = Out_R_we1 ;
   temp_R_reg_327__temp = temp_R_reg_327 ;
   ap_start__temp = ap_start ;
   tmp_3_fu_181_p4__temp = tmp_3_fu_181_p4 ;
   Out_I_d1__temp = Out_I_d1 ;
   a_reg_272__temp = a_reg_272 ;
   i_3_reg_322__temp = i_3_reg_322 ;
   ap_continue__temp = ap_continue ;
   Out_R_d0__temp = Out_R_d0 ;
   zext_ln45_fu_171_p1__temp = zext_ln45_fu_171_p1 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_d1__temp = Out_R_d1 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   X_R_load_1_reg_339__temp = X_R_load_1_reg_339 ;
   zext_ln45_2_fu_233_p1__temp = zext_ln45_2_fu_233_p1 ;
   temp_I_fu_242_p1_temp_5__temp = temp_I_fu_242_p1_temp_5 ;
   temp_R_fu_237_p1__temp = temp_R_fu_237_p1 ;
   i_reg_148__temp = i_reg_148 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   ap_phi_mux_i_phi_fu_153_p4__temp = ap_phi_mux_i_phi_fu_153_p4 ;

  if(ap_clk_count == 1 ){
       ap_status = 6;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_I_address0 = sext_ln53_reg_280;
       Out_I_address1 = sext_ln55_reg_306;
       Out_I_d0 = X_I_load_1_reg_345 - temp_I_reg_333;
       Out_I_d1 = X_I_load_1_reg_345 + temp_I_reg_333;
       Out_R_address0 = sext_ln53_reg_280;
       Out_R_address1 = sext_ln55_reg_306;
       Out_R_d0 = X_R_load_1_reg_339 - temp_R_reg_327;
       Out_R_d1 = X_R_load_1_reg_339 + temp_R_reg_327;
       ap_phi_mux_i_phi_fu_153_p4 = i_reg_148;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_I_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state6)){
Out_R_we1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_I_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
X_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
X_R_ce0 = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((ap_phi_mux_i_phi_fu_153_p4 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if(1 == ap_CS_fsm_state6)
       {
           Out_I_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           Out_I_ce1 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           Out_I_we0 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           Out_I_we1 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           Out_R_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           Out_R_ce1 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           Out_R_we0 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           Out_R_we1 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           i_0_reg_161 =  i_3_reg_322__temp ;
       }
       goto ap_ST_fsm_state3;
   end:
    *Out_I_address0__1=Out_I_address0;
    *Out_I_address1__1=Out_I_address1;
    *Out_I_ce0__1=Out_I_ce0;
    *Out_I_ce1__1=Out_I_ce1;
    *Out_I_d0__1=Out_I_d0;
    *Out_I_d1__1=Out_I_d1;
    *Out_I_we0__1=Out_I_we0;
    *Out_I_we1__1=Out_I_we1;
    *Out_R_address0__1=Out_R_address0;
    *Out_R_address1__1=Out_R_address1;
    *Out_R_ce0__1=Out_R_ce0;
    *Out_R_ce1__1=Out_R_ce1;
    *Out_R_d0__1=Out_R_d0;
    *Out_R_d1__1=Out_R_d1;
    *Out_R_we0__1=Out_R_we0;
    *Out_R_we1__1=Out_R_we1;
    *X_I_address0__1=X_I_address0;
    *X_I_ce0__1=X_I_ce0;
    *X_I_q0__1=X_I_q0;
    *X_R_address0__1=X_R_address0;
    *X_R_ce0__1=X_R_ce0;
    *X_R_q0__1=X_R_q0;
    *ap_clk__1=ap_clk;
    *ap_continue__1=ap_continue;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *ap_status__1=ap_status;
       return;
}
