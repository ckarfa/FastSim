#include<stdio.h>
#define X_R_DWIDTH 32
#define X_I_DWIDTH 32
void bit_reverse(unsigned long long int *OUT_I_address0__1,unsigned long long int *OUT_I_ce0__1,unsigned long long int *OUT_I_d0__1,unsigned long long int *OUT_I_we0__1,unsigned long long int *OUT_R_address0__1,unsigned long long int *OUT_R_ce0__1,unsigned long long int *OUT_R_d0__1,unsigned long long int *OUT_R_we0__1,unsigned long long int *X_I_address0__1,unsigned long long int *X_I_ce0__1,unsigned long long int *X_I_q0__1,unsigned long long int *X_R_address0__1,unsigned long long int *X_R_ce0__1,unsigned long long int *X_R_q0__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,unsigned long long int  *X_R_ram ,unsigned long long int  *X_I_ram , int dummy){
unsigned long long int OUT_I_address0=*OUT_I_address0__1;
unsigned long long int OUT_I_ce0=*OUT_I_ce0__1;
unsigned long long int OUT_I_d0=*OUT_I_d0__1;
unsigned long long int OUT_I_we0=*OUT_I_we0__1;
unsigned long long int OUT_R_address0=*OUT_R_address0__1;
unsigned long long int OUT_R_ce0=*OUT_R_ce0__1;
unsigned long long int OUT_R_d0=*OUT_R_d0__1;
unsigned long long int OUT_R_we0=*OUT_R_we0__1;
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
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   static unsigned long long int OUT_I_address0__temp=0;
   static unsigned long long int OUT_I_ce0__temp=0;
   static unsigned long long int OUT_I_d0__temp=0;
   static unsigned long long int OUT_I_we0__temp=0;
   static unsigned long long int OUT_R_address0__temp=0;
   static unsigned long long int OUT_R_ce0__temp=0;
   static unsigned long long int OUT_R_d0__temp=0;
   static unsigned long long int OUT_R_we0__temp=0;
   static unsigned long long int X_I_address0__temp=0;
   static unsigned long long int X_I_ce0__temp=0;
   static unsigned long long int X_I_d0=0;
   static unsigned long long int X_I_d0__temp=0;
   static unsigned long long int X_I_q0__temp=0;
   static unsigned long long int X_I_we0=0;
   static unsigned long long int X_I_we0__temp=0;
   static unsigned long long int X_R_address0__temp=0;
   static unsigned long long int X_R_ce0__temp=0;
   static unsigned long long int X_R_d0=0;
   static unsigned long long int X_R_d0__temp=0;
   static unsigned long long int X_R_q0__temp=0;
   static unsigned long long int X_R_we0=0;
   static unsigned long long int X_R_we0__temp=0;
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
   static unsigned long long int ap_ready__temp=0;
   static unsigned long long int ap_rst__temp=0;
   static unsigned long long int ap_start__temp=0;
   static unsigned long long int ap_status__temp=0;
   static unsigned long long int i_0_i_reg_147=0;
   static unsigned long long int i_0_i_reg_147__temp=0;
   static unsigned long long int i_4_fu_181_p2=0;
   static unsigned long long int i_4_fu_181_p2__temp=0;
   static unsigned long long int i_4_reg_261=0;
   static unsigned long long int i_4_reg_261__temp=0;
   static unsigned long long int i_fu_193_p2=0;
   static unsigned long long int i_fu_193_p2__temp=0;
   static unsigned long long int icmp_ln19_fu_175_p2=0;
   static unsigned long long int icmp_ln19_fu_175_p2__temp=0;
   static unsigned long long int icmp_ln21_fu_229_p2=0;
   static unsigned long long int icmp_ln21_fu_229_p2__temp=0;
   static unsigned long long int icmp_ln21_reg_284=0;
   static unsigned long long int icmp_ln21_reg_284__temp=0;
   static unsigned long long int icmp_ln6_fu_187_p2=0;
   static unsigned long long int icmp_ln6_fu_187_p2__temp=0;
   static unsigned long long int input_assign_1_fu_215_p4=0;
   static unsigned long long int input_assign_1_fu_215_p4__temp=0;
   static unsigned long long int input_assign_reg_124=0;
   static unsigned long long int input_assign_reg_124__temp=0;
   static unsigned long long int p_0_i_reg_158=0;
   static unsigned long long int p_0_i_reg_158__temp=0;
   static unsigned long long int p_0_i_reg_158_temp_15=0;
   static unsigned long long int p_0_i_reg_158_temp_15__temp=0;
   static unsigned long long int p_0_i_reg_158_temp_16=0;
   static unsigned long long int p_0_i_reg_158_temp_16__temp=0;
   static unsigned long long int rev_fu_207_p3=0;
   static unsigned long long int rev_fu_207_p3__temp=0;
   static unsigned long long int reversed_reg_136=0;
   static unsigned long long int reversed_reg_136__temp=0;
   static unsigned long long int trunc_ln4_fu_167_p1=0;
   static unsigned long long int trunc_ln4_fu_167_p1__temp=0;
   static unsigned long long int trunc_ln6_fu_203_p1=0;
   static unsigned long long int trunc_ln6_fu_203_p1__temp=0;
   static unsigned long long int trunc_ln7_fu_199_p1=0;
   static unsigned long long int trunc_ln7_fu_199_p1__temp=0;
   static unsigned long long int trunc_ln7_fu_199_p1_temp_17=0;
   static unsigned long long int trunc_ln7_fu_199_p1_temp_17__temp=0;
   static unsigned long long int trunc_ln7_fu_199_p1_temp_18=0;
   static unsigned long long int trunc_ln7_fu_199_p1_temp_18__temp=0;
   static unsigned long long int zext_ln23_fu_240_p1=0;
   static unsigned long long int zext_ln23_fu_240_p1__temp=0;
   static unsigned long long int zext_ln24_fu_234_p1=0;
   static unsigned long long int zext_ln24_fu_234_p1__temp=0;
   static unsigned long long int zext_ln24_fu_234_p1_temp_12=0;
   static unsigned long long int zext_ln24_fu_234_p1_temp_12__temp=0;
   static unsigned long long int zext_ln24_fu_234_p1_temp_12_temp_14=0;
   static unsigned long long int zext_ln24_fu_234_p1_temp_12_temp_14__temp=0;
   static unsigned long long int zext_ln24_reg_288=0;
   static unsigned long long int zext_ln24_reg_288__temp=0;
   static unsigned long long int zext_ln24_reg_288_temp_13=0;
   static unsigned long long int zext_ln24_reg_288_temp_13__temp=0;
   static unsigned long long int zext_ln4_fu_171_p1=0;
   static unsigned long long int zext_ln4_fu_171_p1__temp=0;
   static unsigned long long int zext_ln4_fu_171_p1_temp_9=0;
   static unsigned long long int zext_ln4_fu_171_p1_temp_9__temp=0;
   static unsigned long long int zext_ln4_fu_171_p1_temp_9_temp_11=0;
   static unsigned long long int zext_ln4_fu_171_p1_temp_9_temp_11__temp=0;
   static unsigned long long int zext_ln4_reg_253=0;
   static unsigned long long int zext_ln4_reg_253__temp=0;
   static unsigned long long int zext_ln4_reg_253_temp_10=0;
   static unsigned long long int zext_ln4_reg_253_temp_10__temp=0;
   static unsigned long long int zext_ln8_fu_225_p1=0;
   static unsigned long long int zext_ln8_fu_225_p1__temp=0;
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
	default: 
		 goto end;
}

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   ap_start__temp = ap_start ;
   X_R_q0__temp = X_R_q0 ;
   i_4_fu_181_p2__temp = i_4_fu_181_p2 ;
   X_I_we0__temp = X_I_we0 ;
   OUT_I_we0__temp = OUT_I_we0 ;
   X_I_address0__temp = X_I_address0 ;
   p_0_i_reg_158__temp = p_0_i_reg_158 ;
   input_assign_reg_124__temp = input_assign_reg_124 ;
   zext_ln24_reg_288_temp_13__temp = zext_ln24_reg_288_temp_13 ;
   trunc_ln4_fu_167_p1__temp = trunc_ln4_fu_167_p1 ;
   icmp_ln19_fu_175_p2__temp = icmp_ln19_fu_175_p2 ;
   X_I_ce0__temp = X_I_ce0 ;
   zext_ln24_reg_288__temp = zext_ln24_reg_288 ;
   ap_clk__temp = ap_clk ;
   OUT_R_ce0__temp = OUT_R_ce0 ;
   zext_ln4_fu_171_p1_temp_9__temp = zext_ln4_fu_171_p1_temp_9 ;
   ap_continue__temp = ap_continue ;
   ap_status__temp = ap_status ;
   X_R_we0__temp = X_R_we0 ;
   reversed_reg_136__temp = reversed_reg_136 ;
   p_0_i_reg_158_temp_16__temp = p_0_i_reg_158_temp_16 ;
   X_I_q0__temp = X_I_q0 ;
   icmp_ln21_fu_229_p2__temp = icmp_ln21_fu_229_p2 ;
   trunc_ln6_fu_203_p1__temp = trunc_ln6_fu_203_p1 ;
   trunc_ln7_fu_199_p1_temp_18__temp = trunc_ln7_fu_199_p1_temp_18 ;
   zext_ln4_fu_171_p1_temp_9_temp_11__temp = zext_ln4_fu_171_p1_temp_9_temp_11 ;
   zext_ln4_reg_253_temp_10__temp = zext_ln4_reg_253_temp_10 ;
   OUT_I_d0__temp = OUT_I_d0 ;
   zext_ln23_fu_240_p1__temp = zext_ln23_fu_240_p1 ;
   X_R_address0__temp = X_R_address0 ;
   OUT_R_address0__temp = OUT_R_address0 ;
   ap_done__temp = ap_done ;
   zext_ln4_fu_171_p1__temp = zext_ln4_fu_171_p1 ;
   OUT_I_address0__temp = OUT_I_address0 ;
   icmp_ln6_fu_187_p2__temp = icmp_ln6_fu_187_p2 ;
   zext_ln4_reg_253__temp = zext_ln4_reg_253 ;
   X_R_ce0__temp = X_R_ce0 ;
   zext_ln24_fu_234_p1__temp = zext_ln24_fu_234_p1 ;
   zext_ln8_fu_225_p1__temp = zext_ln8_fu_225_p1 ;
   ap_ready__temp = ap_ready ;
   ap_idle__temp = ap_idle ;
   trunc_ln7_fu_199_p1__temp = trunc_ln7_fu_199_p1 ;
   OUT_I_ce0__temp = OUT_I_ce0 ;
   i_0_i_reg_147__temp = i_0_i_reg_147 ;
   zext_ln24_fu_234_p1_temp_12_temp_14__temp = zext_ln24_fu_234_p1_temp_12_temp_14 ;
   ap_rst__temp = ap_rst ;
   ap_done_reg__temp = ap_done_reg ;
   input_assign_1_fu_215_p4__temp = input_assign_1_fu_215_p4 ;
   OUT_R_we0__temp = OUT_R_we0 ;
   i_fu_193_p2__temp = i_fu_193_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   trunc_ln7_fu_199_p1_temp_17__temp = trunc_ln7_fu_199_p1_temp_17 ;
   X_I_d0__temp = X_I_d0 ;
   i_4_reg_261__temp = i_4_reg_261 ;
   rev_fu_207_p3__temp = rev_fu_207_p3 ;
   OUT_R_d0__temp = OUT_R_d0 ;
   X_R_d0__temp = X_R_d0 ;
   icmp_ln21_reg_284__temp = icmp_ln21_reg_284 ;
   p_0_i_reg_158_temp_15__temp = p_0_i_reg_158_temp_15 ;
   zext_ln24_fu_234_p1_temp_12__temp = zext_ln24_fu_234_p1_temp_12 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       X_R_ce0 = 0;
       X_R_we0 = 0;
       X_I_ce0 = 0;
       X_I_we0 = 0;
       OUT_I_d0 = X_I_q0;
       OUT_R_d0 = X_R_q0;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_I_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_R_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_R_we0 = 0 ; 
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
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln4_reg_253 =  ( (  ( ( zext_ln4_reg_253 & 2047 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
zext_ln24_reg_288 =  ( (  ( ( zext_ln24_reg_288 & 4294967295 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           input_assign_reg_124 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               input_assign_reg_124 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   ap_start__temp = ap_start ;
   X_R_q0__temp = X_R_q0 ;
   i_4_fu_181_p2__temp = i_4_fu_181_p2 ;
   X_I_we0__temp = X_I_we0 ;
   OUT_I_we0__temp = OUT_I_we0 ;
   X_I_address0__temp = X_I_address0 ;
   p_0_i_reg_158__temp = p_0_i_reg_158 ;
   input_assign_reg_124__temp = input_assign_reg_124 ;
   zext_ln24_reg_288_temp_13__temp = zext_ln24_reg_288_temp_13 ;
   trunc_ln4_fu_167_p1__temp = trunc_ln4_fu_167_p1 ;
   icmp_ln19_fu_175_p2__temp = icmp_ln19_fu_175_p2 ;
   X_I_ce0__temp = X_I_ce0 ;
   zext_ln24_reg_288__temp = zext_ln24_reg_288 ;
   ap_clk__temp = ap_clk ;
   OUT_R_ce0__temp = OUT_R_ce0 ;
   zext_ln4_fu_171_p1_temp_9__temp = zext_ln4_fu_171_p1_temp_9 ;
   ap_continue__temp = ap_continue ;
   ap_status__temp = ap_status ;
   X_R_we0__temp = X_R_we0 ;
   reversed_reg_136__temp = reversed_reg_136 ;
   p_0_i_reg_158_temp_16__temp = p_0_i_reg_158_temp_16 ;
   X_I_q0__temp = X_I_q0 ;
   icmp_ln21_fu_229_p2__temp = icmp_ln21_fu_229_p2 ;
   trunc_ln6_fu_203_p1__temp = trunc_ln6_fu_203_p1 ;
   trunc_ln7_fu_199_p1_temp_18__temp = trunc_ln7_fu_199_p1_temp_18 ;
   zext_ln4_fu_171_p1_temp_9_temp_11__temp = zext_ln4_fu_171_p1_temp_9_temp_11 ;
   zext_ln4_reg_253_temp_10__temp = zext_ln4_reg_253_temp_10 ;
   OUT_I_d0__temp = OUT_I_d0 ;
   zext_ln23_fu_240_p1__temp = zext_ln23_fu_240_p1 ;
   X_R_address0__temp = X_R_address0 ;
   OUT_R_address0__temp = OUT_R_address0 ;
   ap_done__temp = ap_done ;
   zext_ln4_fu_171_p1__temp = zext_ln4_fu_171_p1 ;
   OUT_I_address0__temp = OUT_I_address0 ;
   icmp_ln6_fu_187_p2__temp = icmp_ln6_fu_187_p2 ;
   zext_ln4_reg_253__temp = zext_ln4_reg_253 ;
   X_R_ce0__temp = X_R_ce0 ;
   zext_ln24_fu_234_p1__temp = zext_ln24_fu_234_p1 ;
   zext_ln8_fu_225_p1__temp = zext_ln8_fu_225_p1 ;
   ap_ready__temp = ap_ready ;
   ap_idle__temp = ap_idle ;
   trunc_ln7_fu_199_p1__temp = trunc_ln7_fu_199_p1 ;
   OUT_I_ce0__temp = OUT_I_ce0 ;
   i_0_i_reg_147__temp = i_0_i_reg_147 ;
   zext_ln24_fu_234_p1_temp_12_temp_14__temp = zext_ln24_fu_234_p1_temp_12_temp_14 ;
   ap_rst__temp = ap_rst ;
   ap_done_reg__temp = ap_done_reg ;
   input_assign_1_fu_215_p4__temp = input_assign_1_fu_215_p4 ;
   OUT_R_we0__temp = OUT_R_we0 ;
   i_fu_193_p2__temp = i_fu_193_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   trunc_ln7_fu_199_p1_temp_17__temp = trunc_ln7_fu_199_p1_temp_17 ;
   X_I_d0__temp = X_I_d0 ;
   i_4_reg_261__temp = i_4_reg_261 ;
   rev_fu_207_p3__temp = rev_fu_207_p3 ;
   OUT_R_d0__temp = OUT_R_d0 ;
   X_R_d0__temp = X_R_d0 ;
   icmp_ln21_reg_284__temp = icmp_ln21_reg_284 ;
   p_0_i_reg_158_temp_15__temp = p_0_i_reg_158_temp_15 ;
   zext_ln24_fu_234_p1_temp_12__temp = zext_ln24_fu_234_p1_temp_12 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       X_R_ce0 = 0;
       X_R_we0 = 0;
       X_I_ce0 = 0;
       X_I_we0 = 0;
       OUT_I_d0 = X_I_q0;
       OUT_R_d0 = X_R_q0;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_I_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_R_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_R_we0 = 0 ; 
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
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln4_reg_253 =  ( (  ( ( zext_ln4_reg_253 & 2047 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
zext_ln24_reg_288 =  ( (  ( ( zext_ln24_reg_288 & 4294967295 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
               icmp_ln19_fu_175_p2 =   ( input_assign_reg_124__temp  == 1024 ? 1 :  0 ) ;
       if((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               icmp_ln19_fu_175_p2 =   ( input_assign_reg_124__temp  == 1024 ? 1 :  0 ) ;
   if(((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln19_fu_175_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           i_0_i_reg_147 =  0;
       }
       if((icmp_ln19_fu_175_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           p_0_i_reg_158 =   ( ( input_assign_reg_124__temp  & 1023 ) & 1023 ) ;
       }
       if((icmp_ln19_fu_175_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           reversed_reg_136 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
           zext_ln4_reg_253 =   ( (  ( (  ( input_assign_reg_124__temp  & 4294967295 )  & 2047 ) & 18446744073709551615 )  |  ( ( zext_ln4_reg_253__temp  & 4294965248 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
           i_4_reg_261 =   ( ( 1 + input_assign_reg_124__temp  ) & 2047 ) ;
       }
       if(ap_done==1){
       //    ap_status = 0;
       //    goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if((icmp_ln19_fu_175_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               i_0_i_reg_147 =  0;
       }
       if((icmp_ln19_fu_175_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               p_0_i_reg_158 =   ( ( input_assign_reg_124__temp  & 1023 ) & 1023 ) ;
       }
       if((icmp_ln19_fu_175_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               reversed_reg_136 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
               zext_ln4_reg_253 =   ( (  ( (  ( input_assign_reg_124__temp  & 4294967295 )  & 2047 ) & 18446744073709551615 )  |  ( ( zext_ln4_reg_253__temp  & 4294965248 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               i_4_reg_261 =   ( ( 1 + input_assign_reg_124__temp  ) & 2047 ) ;
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   ap_start__temp = ap_start ;
   X_R_q0__temp = X_R_q0 ;
   i_4_fu_181_p2__temp = i_4_fu_181_p2 ;
   X_I_we0__temp = X_I_we0 ;
   OUT_I_we0__temp = OUT_I_we0 ;
   X_I_address0__temp = X_I_address0 ;
   p_0_i_reg_158__temp = p_0_i_reg_158 ;
   input_assign_reg_124__temp = input_assign_reg_124 ;
   zext_ln24_reg_288_temp_13__temp = zext_ln24_reg_288_temp_13 ;
   trunc_ln4_fu_167_p1__temp = trunc_ln4_fu_167_p1 ;
   icmp_ln19_fu_175_p2__temp = icmp_ln19_fu_175_p2 ;
   X_I_ce0__temp = X_I_ce0 ;
   zext_ln24_reg_288__temp = zext_ln24_reg_288 ;
   ap_clk__temp = ap_clk ;
   OUT_R_ce0__temp = OUT_R_ce0 ;
   zext_ln4_fu_171_p1_temp_9__temp = zext_ln4_fu_171_p1_temp_9 ;
   ap_continue__temp = ap_continue ;
   ap_status__temp = ap_status ;
   X_R_we0__temp = X_R_we0 ;
   reversed_reg_136__temp = reversed_reg_136 ;
   p_0_i_reg_158_temp_16__temp = p_0_i_reg_158_temp_16 ;
   X_I_q0__temp = X_I_q0 ;
   icmp_ln21_fu_229_p2__temp = icmp_ln21_fu_229_p2 ;
   trunc_ln6_fu_203_p1__temp = trunc_ln6_fu_203_p1 ;
   trunc_ln7_fu_199_p1_temp_18__temp = trunc_ln7_fu_199_p1_temp_18 ;
   zext_ln4_fu_171_p1_temp_9_temp_11__temp = zext_ln4_fu_171_p1_temp_9_temp_11 ;
   zext_ln4_reg_253_temp_10__temp = zext_ln4_reg_253_temp_10 ;
   OUT_I_d0__temp = OUT_I_d0 ;
   zext_ln23_fu_240_p1__temp = zext_ln23_fu_240_p1 ;
   X_R_address0__temp = X_R_address0 ;
   OUT_R_address0__temp = OUT_R_address0 ;
   ap_done__temp = ap_done ;
   zext_ln4_fu_171_p1__temp = zext_ln4_fu_171_p1 ;
   OUT_I_address0__temp = OUT_I_address0 ;
   icmp_ln6_fu_187_p2__temp = icmp_ln6_fu_187_p2 ;
   zext_ln4_reg_253__temp = zext_ln4_reg_253 ;
   X_R_ce0__temp = X_R_ce0 ;
   zext_ln24_fu_234_p1__temp = zext_ln24_fu_234_p1 ;
   zext_ln8_fu_225_p1__temp = zext_ln8_fu_225_p1 ;
   ap_ready__temp = ap_ready ;
   ap_idle__temp = ap_idle ;
   trunc_ln7_fu_199_p1__temp = trunc_ln7_fu_199_p1 ;
   OUT_I_ce0__temp = OUT_I_ce0 ;
   i_0_i_reg_147__temp = i_0_i_reg_147 ;
   zext_ln24_fu_234_p1_temp_12_temp_14__temp = zext_ln24_fu_234_p1_temp_12_temp_14 ;
   ap_rst__temp = ap_rst ;
   ap_done_reg__temp = ap_done_reg ;
   input_assign_1_fu_215_p4__temp = input_assign_1_fu_215_p4 ;
   OUT_R_we0__temp = OUT_R_we0 ;
   i_fu_193_p2__temp = i_fu_193_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   trunc_ln7_fu_199_p1_temp_17__temp = trunc_ln7_fu_199_p1_temp_17 ;
   X_I_d0__temp = X_I_d0 ;
   i_4_reg_261__temp = i_4_reg_261 ;
   rev_fu_207_p3__temp = rev_fu_207_p3 ;
   OUT_R_d0__temp = OUT_R_d0 ;
   X_R_d0__temp = X_R_d0 ;
   icmp_ln21_reg_284__temp = icmp_ln21_reg_284 ;
   p_0_i_reg_158_temp_15__temp = p_0_i_reg_158_temp_15 ;
   zext_ln24_fu_234_p1_temp_12__temp = zext_ln24_fu_234_p1_temp_12 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       X_R_ce0 = 0;
       X_R_we0 = 0;
       X_I_ce0 = 0;
       X_I_we0 = 0;
       OUT_I_d0 = X_I_q0;
       OUT_R_d0 = X_R_q0;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_I_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_R_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_R_we0 = 0 ; 
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
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln4_reg_253 =  ( (  ( ( zext_ln4_reg_253 & 2047 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
zext_ln24_reg_288 =  ( (  ( ( zext_ln24_reg_288 & 4294967295 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           X_I_address0 =   ( reversed_reg_136__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_I_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           X_R_address0 =   ( reversed_reg_136__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_R_ce0 =  1;
       }
               icmp_ln21_fu_229_p2 =   ( zext_ln4_reg_253__temp  > reversed_reg_136__temp  ? 1 : 0 ) ;
               icmp_ln6_fu_187_p2 =   ( i_0_i_reg_147__temp  == 10 ? 1 :  0 ) ;
               icmp_ln19_fu_175_p2 =   ( input_assign_reg_124__temp  == 1024 ? 1 :  0 ) ;
   if((((icmp_ln21_fu_229_p2 == 1) && (icmp_ln6_fu_187_p2 == 1)) && (1 == ap_CS_fsm_state3)) == 1){
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           i_0_i_reg_147 =   ( ( i_0_i_reg_147__temp  + 1 ) & 15 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           p_0_i_reg_158 =   (  (  ( (  ( ( p_0_i_reg_158__temp  >> 1 )  & 18446744073709551615 )  & 511 ) & 18446744073709551615 )  & 511 )  & 1023 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           reversed_reg_136 =   (  ( (  ( (  ( ( reversed_reg_136__temp  & 2147483647 ) & 2147483647 )  << 1 )  & 18446744073709551615 )  |  ( ( p_0_i_reg_158__temp  & 1 ) & 1 )  ) & 18446744073709551615 )  & 4294967295 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           icmp_ln21_reg_284 =   ( zext_ln4_reg_253__temp  > reversed_reg_136__temp  ? 1 : 0 ) ;
       }
       if(((icmp_ln21_fu_229_p2 == 0) && (icmp_ln6_fu_187_p2 == 1)) && (1 == ap_CS_fsm_state3))
       {
           zext_ln24_reg_288 =   ( (  ( (  ( reversed_reg_136__temp  & 18446744073709551615 )  & 4294967295 ) & 18446744073709551615 )  |  ( ( zext_ln24_reg_288__temp  & 18446744069414584320 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(X_R_ce0){
          X_R_q0 = X_R_ram[X_R_address0];
           if(X_R_we0){
              X_R_ram[X_R_address0] = X_R_d0;
           }
       }
       if(X_I_ce0){
          X_I_q0 = X_I_ram[X_I_address0];
           if(X_I_we0){
              X_I_ram[X_I_address0] = X_I_d0;
           }
       }
       goto ap_ST_fsm_state5;
   }
   if((((icmp_ln21_fu_229_p2 == 0) && (icmp_ln6_fu_187_p2 == 1)) && (1 == ap_CS_fsm_state3)) == 1){
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
               i_0_i_reg_147 =   ( ( i_0_i_reg_147__temp  + 1 ) & 15 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
               p_0_i_reg_158 =   (  (  ( (  ( ( p_0_i_reg_158__temp  >> 1 )  & 18446744073709551615 )  & 511 ) & 18446744073709551615 )  & 511 )  & 1023 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
               reversed_reg_136 =   (  ( (  ( (  ( ( reversed_reg_136__temp  & 2147483647 ) & 2147483647 )  << 1 )  & 18446744073709551615 )  |  ( ( p_0_i_reg_158__temp  & 1 ) & 1 )  ) & 18446744073709551615 )  & 4294967295 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               icmp_ln21_reg_284 =   ( zext_ln4_reg_253__temp  > reversed_reg_136__temp  ? 1 : 0 ) ;
       }
       if(((icmp_ln21_fu_229_p2 == 0) && (icmp_ln6_fu_187_p2 == 1)) && (1 == ap_CS_fsm_state3))
       {
               zext_ln24_reg_288 =   ( (  ( (  ( reversed_reg_136__temp  & 18446744073709551615 )  & 4294967295 ) & 18446744073709551615 )  |  ( ( zext_ln24_reg_288__temp  & 18446744069414584320 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(X_R_ce0){
          X_R_q0 = X_R_ram[X_R_address0];
           if(X_R_we0){
              X_R_ram[X_R_address0] = X_R_d0;
           }
       }
       if(X_I_ce0){
          X_I_q0 = X_I_ram[X_I_address0];
           if(X_I_we0){
              X_I_ram[X_I_address0] = X_I_d0;
           }
       }
       goto ap_ST_fsm_state4;
   }
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           i_0_i_reg_147 =   ( ( i_0_i_reg_147__temp  + 1 ) & 15 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           p_0_i_reg_158 =   (  (  ( (  ( ( p_0_i_reg_158__temp  >> 1 )  & 18446744073709551615 )  & 511 ) & 18446744073709551615 )  & 511 )  & 1023 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           reversed_reg_136 =   (  ( (  ( (  ( ( reversed_reg_136__temp  & 2147483647 ) & 2147483647 )  << 1 )  & 18446744073709551615 )  |  ( ( p_0_i_reg_158__temp  & 1 ) & 1 )  ) & 18446744073709551615 )  & 4294967295 ) ;
       }
       if((icmp_ln6_fu_187_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           icmp_ln21_reg_284 =   ( zext_ln4_reg_253__temp  > reversed_reg_136__temp  ? 1 : 0 ) ;
       }
       if(((icmp_ln21_fu_229_p2 == 0) && (icmp_ln6_fu_187_p2 == 1)) && (1 == ap_CS_fsm_state3))
       {
           zext_ln24_reg_288 =   ( (  ( (  ( reversed_reg_136__temp  & 18446744073709551615 )  & 4294967295 ) & 18446744073709551615 )  |  ( ( zext_ln24_reg_288__temp  & 18446744069414584320 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(X_R_ce0){
          X_R_q0 = X_R_ram[X_R_address0];
           if(X_R_we0){
              X_R_ram[X_R_address0] = X_R_d0;
           }
       }
       if(X_I_ce0){
          X_I_q0 = X_I_ram[X_I_address0];
           if(X_I_we0){
              X_I_ram[X_I_address0] = X_I_d0;
           }
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
   ap_start__temp = ap_start ;
   X_R_q0__temp = X_R_q0 ;
   i_4_fu_181_p2__temp = i_4_fu_181_p2 ;
   X_I_we0__temp = X_I_we0 ;
   OUT_I_we0__temp = OUT_I_we0 ;
   X_I_address0__temp = X_I_address0 ;
   p_0_i_reg_158__temp = p_0_i_reg_158 ;
   input_assign_reg_124__temp = input_assign_reg_124 ;
   zext_ln24_reg_288_temp_13__temp = zext_ln24_reg_288_temp_13 ;
   trunc_ln4_fu_167_p1__temp = trunc_ln4_fu_167_p1 ;
   icmp_ln19_fu_175_p2__temp = icmp_ln19_fu_175_p2 ;
   X_I_ce0__temp = X_I_ce0 ;
   zext_ln24_reg_288__temp = zext_ln24_reg_288 ;
   ap_clk__temp = ap_clk ;
   OUT_R_ce0__temp = OUT_R_ce0 ;
   zext_ln4_fu_171_p1_temp_9__temp = zext_ln4_fu_171_p1_temp_9 ;
   ap_continue__temp = ap_continue ;
   ap_status__temp = ap_status ;
   X_R_we0__temp = X_R_we0 ;
   reversed_reg_136__temp = reversed_reg_136 ;
   p_0_i_reg_158_temp_16__temp = p_0_i_reg_158_temp_16 ;
   X_I_q0__temp = X_I_q0 ;
   icmp_ln21_fu_229_p2__temp = icmp_ln21_fu_229_p2 ;
   trunc_ln6_fu_203_p1__temp = trunc_ln6_fu_203_p1 ;
   trunc_ln7_fu_199_p1_temp_18__temp = trunc_ln7_fu_199_p1_temp_18 ;
   zext_ln4_fu_171_p1_temp_9_temp_11__temp = zext_ln4_fu_171_p1_temp_9_temp_11 ;
   zext_ln4_reg_253_temp_10__temp = zext_ln4_reg_253_temp_10 ;
   OUT_I_d0__temp = OUT_I_d0 ;
   zext_ln23_fu_240_p1__temp = zext_ln23_fu_240_p1 ;
   X_R_address0__temp = X_R_address0 ;
   OUT_R_address0__temp = OUT_R_address0 ;
   ap_done__temp = ap_done ;
   zext_ln4_fu_171_p1__temp = zext_ln4_fu_171_p1 ;
   OUT_I_address0__temp = OUT_I_address0 ;
   icmp_ln6_fu_187_p2__temp = icmp_ln6_fu_187_p2 ;
   zext_ln4_reg_253__temp = zext_ln4_reg_253 ;
   X_R_ce0__temp = X_R_ce0 ;
   zext_ln24_fu_234_p1__temp = zext_ln24_fu_234_p1 ;
   zext_ln8_fu_225_p1__temp = zext_ln8_fu_225_p1 ;
   ap_ready__temp = ap_ready ;
   ap_idle__temp = ap_idle ;
   trunc_ln7_fu_199_p1__temp = trunc_ln7_fu_199_p1 ;
   OUT_I_ce0__temp = OUT_I_ce0 ;
   i_0_i_reg_147__temp = i_0_i_reg_147 ;
   zext_ln24_fu_234_p1_temp_12_temp_14__temp = zext_ln24_fu_234_p1_temp_12_temp_14 ;
   ap_rst__temp = ap_rst ;
   ap_done_reg__temp = ap_done_reg ;
   input_assign_1_fu_215_p4__temp = input_assign_1_fu_215_p4 ;
   OUT_R_we0__temp = OUT_R_we0 ;
   i_fu_193_p2__temp = i_fu_193_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   trunc_ln7_fu_199_p1_temp_17__temp = trunc_ln7_fu_199_p1_temp_17 ;
   X_I_d0__temp = X_I_d0 ;
   i_4_reg_261__temp = i_4_reg_261 ;
   rev_fu_207_p3__temp = rev_fu_207_p3 ;
   OUT_R_d0__temp = OUT_R_d0 ;
   X_R_d0__temp = X_R_d0 ;
   icmp_ln21_reg_284__temp = icmp_ln21_reg_284 ;
   p_0_i_reg_158_temp_15__temp = p_0_i_reg_158_temp_15 ;
   zext_ln24_fu_234_p1_temp_12__temp = zext_ln24_fu_234_p1_temp_12 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;

  if(ap_clk_count == 1 ){
       ap_status = 4;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       X_R_ce0 = 0;
       X_R_we0 = 0;
       X_I_ce0 = 0;
       X_I_we0 = 0;
       OUT_I_d0 = X_I_q0;
       OUT_R_d0 = X_R_q0;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_I_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_R_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_R_we0 = 0 ; 
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
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln4_reg_253 =  ( (  ( ( zext_ln4_reg_253 & 2047 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
zext_ln24_reg_288 =  ( (  ( ( zext_ln24_reg_288 & 4294967295 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
               icmp_ln21_reg_284 =  icmp_ln21_reg_284__temp ;
       if(1 == ap_CS_fsm_state4)
       {
           OUT_I_address0 =   ( input_assign_reg_124__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))
       {
           OUT_I_ce0 =  1;
       }
       if((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))
       {
           OUT_I_we0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           OUT_R_address0 =   ( input_assign_reg_124__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))
       {
           OUT_R_ce0 =  1;
       }
       if((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))
       {
           OUT_R_we0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           X_I_address0 =   ( input_assign_reg_124__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_I_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           X_R_address0 =   ( input_assign_reg_124__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_R_ce0 =  1;
       }
       if(X_R_ce0){
          X_R_q0 = X_R_ram[X_R_address0];
           if(X_R_we0){
              X_R_ram[X_R_address0] = X_R_d0;
           }
       }
       if(X_I_ce0){
          X_I_q0 = X_I_ram[X_I_address0];
           if(X_I_we0){
              X_I_ram[X_I_address0] = X_I_d0;
           }
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
   ap_start__temp = ap_start ;
   X_R_q0__temp = X_R_q0 ;
   i_4_fu_181_p2__temp = i_4_fu_181_p2 ;
   X_I_we0__temp = X_I_we0 ;
   OUT_I_we0__temp = OUT_I_we0 ;
   X_I_address0__temp = X_I_address0 ;
   p_0_i_reg_158__temp = p_0_i_reg_158 ;
   input_assign_reg_124__temp = input_assign_reg_124 ;
   zext_ln24_reg_288_temp_13__temp = zext_ln24_reg_288_temp_13 ;
   trunc_ln4_fu_167_p1__temp = trunc_ln4_fu_167_p1 ;
   icmp_ln19_fu_175_p2__temp = icmp_ln19_fu_175_p2 ;
   X_I_ce0__temp = X_I_ce0 ;
   zext_ln24_reg_288__temp = zext_ln24_reg_288 ;
   ap_clk__temp = ap_clk ;
   OUT_R_ce0__temp = OUT_R_ce0 ;
   zext_ln4_fu_171_p1_temp_9__temp = zext_ln4_fu_171_p1_temp_9 ;
   ap_continue__temp = ap_continue ;
   ap_status__temp = ap_status ;
   X_R_we0__temp = X_R_we0 ;
   reversed_reg_136__temp = reversed_reg_136 ;
   p_0_i_reg_158_temp_16__temp = p_0_i_reg_158_temp_16 ;
   X_I_q0__temp = X_I_q0 ;
   icmp_ln21_fu_229_p2__temp = icmp_ln21_fu_229_p2 ;
   trunc_ln6_fu_203_p1__temp = trunc_ln6_fu_203_p1 ;
   trunc_ln7_fu_199_p1_temp_18__temp = trunc_ln7_fu_199_p1_temp_18 ;
   zext_ln4_fu_171_p1_temp_9_temp_11__temp = zext_ln4_fu_171_p1_temp_9_temp_11 ;
   zext_ln4_reg_253_temp_10__temp = zext_ln4_reg_253_temp_10 ;
   OUT_I_d0__temp = OUT_I_d0 ;
   zext_ln23_fu_240_p1__temp = zext_ln23_fu_240_p1 ;
   X_R_address0__temp = X_R_address0 ;
   OUT_R_address0__temp = OUT_R_address0 ;
   ap_done__temp = ap_done ;
   zext_ln4_fu_171_p1__temp = zext_ln4_fu_171_p1 ;
   OUT_I_address0__temp = OUT_I_address0 ;
   icmp_ln6_fu_187_p2__temp = icmp_ln6_fu_187_p2 ;
   zext_ln4_reg_253__temp = zext_ln4_reg_253 ;
   X_R_ce0__temp = X_R_ce0 ;
   zext_ln24_fu_234_p1__temp = zext_ln24_fu_234_p1 ;
   zext_ln8_fu_225_p1__temp = zext_ln8_fu_225_p1 ;
   ap_ready__temp = ap_ready ;
   ap_idle__temp = ap_idle ;
   trunc_ln7_fu_199_p1__temp = trunc_ln7_fu_199_p1 ;
   OUT_I_ce0__temp = OUT_I_ce0 ;
   i_0_i_reg_147__temp = i_0_i_reg_147 ;
   zext_ln24_fu_234_p1_temp_12_temp_14__temp = zext_ln24_fu_234_p1_temp_12_temp_14 ;
   ap_rst__temp = ap_rst ;
   ap_done_reg__temp = ap_done_reg ;
   input_assign_1_fu_215_p4__temp = input_assign_1_fu_215_p4 ;
   OUT_R_we0__temp = OUT_R_we0 ;
   i_fu_193_p2__temp = i_fu_193_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   trunc_ln7_fu_199_p1_temp_17__temp = trunc_ln7_fu_199_p1_temp_17 ;
   X_I_d0__temp = X_I_d0 ;
   i_4_reg_261__temp = i_4_reg_261 ;
   rev_fu_207_p3__temp = rev_fu_207_p3 ;
   OUT_R_d0__temp = OUT_R_d0 ;
   X_R_d0__temp = X_R_d0 ;
   icmp_ln21_reg_284__temp = icmp_ln21_reg_284 ;
   p_0_i_reg_158_temp_15__temp = p_0_i_reg_158_temp_15 ;
   zext_ln24_fu_234_p1_temp_12__temp = zext_ln24_fu_234_p1_temp_12 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;

  if(ap_clk_count == 1 ){
       ap_status = 5;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       X_R_ce0 = 0;
       X_R_we0 = 0;
       X_I_ce0 = 0;
       X_I_we0 = 0;
       OUT_I_d0 = X_I_q0;
       OUT_R_d0 = X_R_q0;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_I_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_I_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_I_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
OUT_R_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))){
OUT_R_ce0 = 0 ; 
}
       if(!((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))){
OUT_R_we0 = 0 ; 
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
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln19_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln4_reg_253 =  ( (  ( ( zext_ln4_reg_253 & 2047 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
zext_ln24_reg_288 =  ( (  ( ( zext_ln24_reg_288 & 4294967295 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
               icmp_ln21_reg_284 =  icmp_ln21_reg_284__temp ;
       if(1 == ap_CS_fsm_state5)
       {
           OUT_I_address0 =  zext_ln24_reg_288__temp ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))
       {
           OUT_I_ce0 =  1;
       }
       if((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))
       {
           OUT_I_we0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           OUT_R_address0 =  zext_ln24_reg_288__temp ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))
       {
           OUT_R_ce0 =  1;
       }
       if((1 == ap_CS_fsm_state4) || ((icmp_ln21_reg_284 == 0) && (1 == ap_CS_fsm_state5)))
       {
           OUT_R_we0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           input_assign_reg_124 =  i_4_reg_261__temp ;
       }
       goto ap_ST_fsm_state2;
   end:
    *OUT_I_address0__1=OUT_I_address0;
    *OUT_I_ce0__1=OUT_I_ce0;
    *OUT_I_d0__1=OUT_I_d0;
    *OUT_I_we0__1=OUT_I_we0;
    *OUT_R_address0__1=OUT_R_address0;
    *OUT_R_ce0__1=OUT_R_ce0;
    *OUT_R_d0__1=OUT_R_d0;
    *OUT_R_we0__1=OUT_R_we0;
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
