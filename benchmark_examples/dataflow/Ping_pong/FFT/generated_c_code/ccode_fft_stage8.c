#include<stdio.h>
#define Out_R_DWIDTH 32
#define Out_I_DWIDTH 32
void fft_stage8(unsigned long long int *Out_I_address0__1,unsigned long long int *Out_I_address1__1,unsigned long long int *Out_I_ce0__1,unsigned long long int *Out_I_ce1__1,unsigned long long int *Out_I_d0__1,unsigned long long int *Out_I_d1__1,unsigned long long int *Out_I_we0__1,unsigned long long int *Out_I_we1__1,unsigned long long int *Out_R_address0__1,unsigned long long int *Out_R_address1__1,unsigned long long int *Out_R_ce0__1,unsigned long long int *Out_R_ce1__1,unsigned long long int *Out_R_d0__1,unsigned long long int *Out_R_d1__1,unsigned long long int *Out_R_we0__1,unsigned long long int *Out_R_we1__1,unsigned long long int *X_I_address0__1,unsigned long long int *X_I_ce0__1,unsigned long long int *X_I_q0__1,unsigned long long int *X_R_address0__1,unsigned long long int *X_R_ce0__1,unsigned long long int *X_R_q0__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,unsigned long long int  *Out_R_ram ,unsigned long long int  *Out_I_ram , int dummy){
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
   static long long int add_ln54_fu_205_p2=0;
   static long long int add_ln54_fu_205_p2__temp=0;
   static long long int add_ln54_reg_290=0;
   static long long int add_ln54_reg_290__temp=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   static long long int i_0_reg_145=0;
   static long long int i_0_reg_145__temp=0;
   static long long int sext_ln53_fu_193_p1=0;
   static long long int sext_ln53_fu_193_p1__temp=0;
   static long long int sext_ln53_reg_269=0;
   static long long int sext_ln53_reg_269__temp=0;
   static long long int sext_ln55_fu_211_p1=0;
   static long long int sext_ln55_fu_211_p1__temp=0;
   static long long int sext_ln55_reg_295=0;
   static long long int sext_ln55_reg_295__temp=0;
   static long long int sub_ln53_fu_199_p2=0;
   static long long int sub_ln53_fu_199_p2__temp=0;
   static long long int sub_ln53_reg_285=0;
   static long long int sub_ln53_reg_285__temp=0;
   static unsigned long long int Out_I_address0__temp=0;
   static unsigned long long int Out_I_address1__temp=0;
   static unsigned long long int Out_I_ce0__temp=0;
   static unsigned long long int Out_I_ce1__temp=0;
   static unsigned long long int Out_I_d0__temp=0;
   static unsigned long long int Out_I_d1__temp=0;
   static unsigned long long int Out_I_q0=0;
   static unsigned long long int Out_I_q0__temp=0;
   static unsigned long long int Out_I_q1=0;
   static unsigned long long int Out_I_q1__temp=0;
   static unsigned long long int Out_I_we0__temp=0;
   static unsigned long long int Out_I_we1__temp=0;
   static unsigned long long int Out_R_address0__temp=0;
   static unsigned long long int Out_R_address1__temp=0;
   static unsigned long long int Out_R_ce0__temp=0;
   static unsigned long long int Out_R_ce1__temp=0;
   static unsigned long long int Out_R_d0__temp=0;
   static unsigned long long int Out_R_d1__temp=0;
   static unsigned long long int Out_R_q0=0;
   static unsigned long long int Out_R_q0__temp=0;
   static unsigned long long int Out_R_q1=0;
   static unsigned long long int Out_R_q1__temp=0;
   static unsigned long long int Out_R_we0__temp=0;
   static unsigned long long int Out_R_we1__temp=0;
   static unsigned long long int X_I_address0__temp=0;
   static unsigned long long int X_I_ce0__temp=0;
   static unsigned long long int X_I_load_1_reg_334=0;
   static unsigned long long int X_I_load_1_reg_334__temp=0;
   static unsigned long long int X_I_q0__temp=0;
   static unsigned long long int X_R_address0__temp=0;
   static unsigned long long int X_R_ce0__temp=0;
   static unsigned long long int X_R_load_1_reg_328=0;
   static unsigned long long int X_R_load_1_reg_328__temp=0;
   static unsigned long long int X_R_q0__temp=0;
   static unsigned long long int a_fu_165_p2=0;
   static unsigned long long int a_fu_165_p2__temp=0;
   static unsigned long long int a_reg_261=0;
   static unsigned long long int a_reg_261__temp=0;
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
   static unsigned long long int c_reg_134=0;
   static unsigned long long int c_reg_134__temp=0;
   static unsigned long long int i_0_reg_145_temp_3=0;
   static unsigned long long int i_0_reg_145_temp_3__temp=0;
   static unsigned long long int i_0_reg_145_temp_4=0;
   static unsigned long long int i_0_reg_145_temp_4__temp=0;
   static unsigned long long int i_1_fu_217_p2=0;
   static unsigned long long int i_1_fu_217_p2__temp=0;
   static unsigned long long int i_1_reg_311=0;
   static unsigned long long int i_1_reg_311__temp=0;
   static unsigned long long int i_lower_fu_187_p2=0;
   static unsigned long long int i_lower_fu_187_p2__temp=0;
   static unsigned long long int icmp_ln45_fu_159_p2=0;
   static unsigned long long int icmp_ln45_fu_159_p2__temp=0;
   static unsigned long long int icmp_ln51_fu_181_p2=0;
   static unsigned long long int icmp_ln51_fu_181_p2__temp=0;
   static unsigned long long int temp_I_fu_227_p1=0;
   static unsigned long long int temp_I_fu_227_p1__temp=0;
   static unsigned long long int temp_I_fu_227_p1__temp0=0;
   static unsigned long long int temp_I_fu_227_p1__temp0__temp=0;
   static unsigned long long int temp_I_fu_227_p1_temp_0=0;
   static unsigned long long int temp_I_fu_227_p1_temp_0__temp=0;
   static unsigned long long int temp_I_fu_227_p1_temp_1=0;
   static unsigned long long int temp_I_fu_227_p1_temp_1__temp=0;
   static unsigned long long int temp_I_fu_227_p2=0;
   static unsigned long long int temp_I_fu_227_p2__temp=0;
   static unsigned long long int temp_I_reg_322=0;
   static unsigned long long int temp_I_reg_322__temp=0;
   static unsigned long long int temp_R_fu_223_p1=0;
   static unsigned long long int temp_R_fu_223_p1__temp=0;
   static unsigned long long int temp_R_fu_223_p1__temp0=0;
   static unsigned long long int temp_R_fu_223_p1__temp0__temp=0;
   static unsigned long long int temp_R_fu_223_p1_temp_2=0;
   static unsigned long long int temp_R_fu_223_p1_temp_2__temp=0;
   static unsigned long long int temp_R_fu_223_p1_temp_3=0;
   static unsigned long long int temp_R_fu_223_p1_temp_3__temp=0;
   static unsigned long long int temp_R_fu_223_p2=0;
   static unsigned long long int temp_R_fu_223_p2__temp=0;
   static unsigned long long int temp_R_reg_316=0;
   static unsigned long long int temp_R_reg_316__temp=0;
   static unsigned long long int tmp_1_fu_171_p4=0;
   static unsigned long long int tmp_1_fu_171_p4__temp=0;
   static unsigned long long int zext_ln45_fu_155_p1=0;
   static unsigned long long int zext_ln45_fu_155_p1__temp=0;
   static unsigned long long int zext_ln45_fu_155_p1_temp_0=0;
   static unsigned long long int zext_ln45_fu_155_p1_temp_0__temp=0;
   static unsigned long long int zext_ln45_fu_155_p1_temp_0_temp_2=0;
   static unsigned long long int zext_ln45_fu_155_p1_temp_0_temp_2__temp=0;
   static unsigned long long int zext_ln45_reg_251=0;
   static unsigned long long int zext_ln45_reg_251__temp=0;
   static unsigned long long int zext_ln45_reg_251_temp_1=0;
   static unsigned long long int zext_ln45_reg_251_temp_1__temp=0;
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
   sub_ln53_fu_199_p2__temp = sub_ln53_fu_199_p2 ;
   add_ln54_fu_205_p2__temp = add_ln54_fu_205_p2 ;
   sext_ln55_fu_211_p1__temp = sext_ln55_fu_211_p1 ;
   sub_ln53_reg_285__temp = sub_ln53_reg_285 ;
   sext_ln55_reg_295__temp = sext_ln55_reg_295 ;
   i_0_reg_145__temp = i_0_reg_145 ;
   add_ln54_reg_290__temp = add_ln54_reg_290 ;
   sext_ln53_fu_193_p1__temp = sext_ln53_fu_193_p1 ;
   sext_ln53_reg_269__temp = sext_ln53_reg_269 ;
   temp_R_reg_316__temp = temp_R_reg_316 ;
   Out_R_q0__temp = Out_R_q0 ;
   ap_continue__temp = ap_continue ;
   ap_rst__temp = ap_rst ;
   temp_R_fu_223_p2__temp = temp_R_fu_223_p2 ;
   Out_R_address1__temp = Out_R_address1 ;
   ap_start__temp = ap_start ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_181_p2__temp = icmp_ln51_fu_181_p2 ;
   temp_I_fu_227_p1_temp_1__temp = temp_I_fu_227_p1_temp_1 ;
   i_1_reg_311__temp = i_1_reg_311 ;
   zext_ln45_fu_155_p1_temp_0__temp = zext_ln45_fu_155_p1_temp_0 ;
   Out_R_ce0__temp = Out_R_ce0 ;
   Out_I_q0__temp = Out_I_q0 ;
   Out_I_d0__temp = Out_I_d0 ;
   temp_I_fu_227_p1_temp_0__temp = temp_I_fu_227_p1_temp_0 ;
   temp_I_fu_227_p1__temp = temp_I_fu_227_p1 ;
   temp_R_fu_223_p1_temp_2__temp = temp_R_fu_223_p1_temp_2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   temp_R_fu_223_p1_temp_3__temp = temp_R_fu_223_p1_temp_3 ;
   temp_R_fu_223_p1__temp0__temp = temp_R_fu_223_p1__temp0 ;
   Out_I_address1__temp = Out_I_address1 ;
   zext_ln45_fu_155_p1_temp_0_temp_2__temp = zext_ln45_fu_155_p1_temp_0_temp_2 ;
   Out_R_we1__temp = Out_R_we1 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   Out_I_q1__temp = Out_I_q1 ;
   zext_ln45_reg_251_temp_1__temp = zext_ln45_reg_251_temp_1 ;
   ap_idle__temp = ap_idle ;
   X_I_load_1_reg_334__temp = X_I_load_1_reg_334 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   ap_ready__temp = ap_ready ;
   Out_I_we0__temp = Out_I_we0 ;
   Out_R_address0__temp = Out_R_address0 ;
   i_lower_fu_187_p2__temp = i_lower_fu_187_p2 ;
   i_0_reg_145_temp_4__temp = i_0_reg_145_temp_4 ;
   Out_R_we0__temp = Out_R_we0 ;
   a_reg_261__temp = a_reg_261 ;
   X_R_q0__temp = X_R_q0 ;
   a_fu_165_p2__temp = a_fu_165_p2 ;
   Out_R_d0__temp = Out_R_d0 ;
   ap_done__temp = ap_done ;
   X_R_load_1_reg_328__temp = X_R_load_1_reg_328 ;
   zext_ln45_reg_251__temp = zext_ln45_reg_251 ;
   temp_R_fu_223_p1__temp = temp_R_fu_223_p1 ;
   X_I_address0__temp = X_I_address0 ;
   c_reg_134__temp = c_reg_134 ;
   temp_I_fu_227_p1__temp0__temp = temp_I_fu_227_p1__temp0 ;
   ap_clk__temp = ap_clk ;
   tmp_1_fu_171_p4__temp = tmp_1_fu_171_p4 ;
   i_1_fu_217_p2__temp = i_1_fu_217_p2 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_322__temp = temp_I_reg_322 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_d1__temp = Out_I_d1 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln45_fu_159_p2__temp = icmp_ln45_fu_159_p2 ;
   Out_R_d1__temp = Out_R_d1 ;
   i_0_reg_145_temp_3__temp = i_0_reg_145_temp_3 ;
   X_I_ce0__temp = X_I_ce0 ;
   X_I_q0__temp = X_I_q0 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   Out_R_q1__temp = Out_R_q1 ;
   zext_ln45_fu_155_p1__temp = zext_ln45_fu_155_p1 ;
   temp_I_fu_227_p2__temp = temp_I_fu_227_p2 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   X_R_ce0__temp = X_R_ce0 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_R_ce0 = 0;
       Out_R_we0 = 0;
       Out_R_ce1 = 0;
       Out_R_we1 = 0;
       Out_R_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_R_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_R_d0 =   ( ( X_R_load_1_reg_328__temp  - temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_R_d1 =   ( ( X_R_load_1_reg_328__temp  + temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_I_ce0 = 0;
       Out_I_we0 = 0;
       Out_I_ce1 = 0;
       Out_I_we1 = 0;
       Out_I_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_I_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_I_d0 =   ( ( X_I_load_1_reg_334__temp  - temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
       Out_I_d1 =   ( ( X_I_load_1_reg_334__temp  + temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
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
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln45_reg_251 =  ( (  ( ( zext_ln45_reg_251 & 7 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               icmp_ln51_fu_181_p2 =   ( do_twos_complement(  (  ( (  ( ( i_0_reg_145__temp  >> 10 )  & 18446744073709551615 )  & 4194303 ) & 18446744073709551615 )  & 4194303 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 ) ;
   if(((!((ap_start == 0) || (ap_done_reg__temp == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg__temp == 1))) && (1 == ap_CS_fsm_state1))
       {
           c_reg_134 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start == 0) || (ap_done_reg__temp == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start == 0) || (ap_done_reg__temp == 1))) && (1 == ap_CS_fsm_state1))
       {
               c_reg_134 =  0;
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
   sub_ln53_fu_199_p2__temp = sub_ln53_fu_199_p2 ;
   add_ln54_fu_205_p2__temp = add_ln54_fu_205_p2 ;
   sext_ln55_fu_211_p1__temp = sext_ln55_fu_211_p1 ;
   sub_ln53_reg_285__temp = sub_ln53_reg_285 ;
   sext_ln55_reg_295__temp = sext_ln55_reg_295 ;
   i_0_reg_145__temp = i_0_reg_145 ;
   add_ln54_reg_290__temp = add_ln54_reg_290 ;
   sext_ln53_fu_193_p1__temp = sext_ln53_fu_193_p1 ;
   sext_ln53_reg_269__temp = sext_ln53_reg_269 ;
   temp_R_reg_316__temp = temp_R_reg_316 ;
   Out_R_q0__temp = Out_R_q0 ;
   ap_continue__temp = ap_continue ;
   ap_rst__temp = ap_rst ;
   temp_R_fu_223_p2__temp = temp_R_fu_223_p2 ;
   Out_R_address1__temp = Out_R_address1 ;
   ap_start__temp = ap_start ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_181_p2__temp = icmp_ln51_fu_181_p2 ;
   temp_I_fu_227_p1_temp_1__temp = temp_I_fu_227_p1_temp_1 ;
   i_1_reg_311__temp = i_1_reg_311 ;
   zext_ln45_fu_155_p1_temp_0__temp = zext_ln45_fu_155_p1_temp_0 ;
   Out_R_ce0__temp = Out_R_ce0 ;
   Out_I_q0__temp = Out_I_q0 ;
   Out_I_d0__temp = Out_I_d0 ;
   temp_I_fu_227_p1_temp_0__temp = temp_I_fu_227_p1_temp_0 ;
   temp_I_fu_227_p1__temp = temp_I_fu_227_p1 ;
   temp_R_fu_223_p1_temp_2__temp = temp_R_fu_223_p1_temp_2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   temp_R_fu_223_p1_temp_3__temp = temp_R_fu_223_p1_temp_3 ;
   temp_R_fu_223_p1__temp0__temp = temp_R_fu_223_p1__temp0 ;
   Out_I_address1__temp = Out_I_address1 ;
   zext_ln45_fu_155_p1_temp_0_temp_2__temp = zext_ln45_fu_155_p1_temp_0_temp_2 ;
   Out_R_we1__temp = Out_R_we1 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   Out_I_q1__temp = Out_I_q1 ;
   zext_ln45_reg_251_temp_1__temp = zext_ln45_reg_251_temp_1 ;
   ap_idle__temp = ap_idle ;
   X_I_load_1_reg_334__temp = X_I_load_1_reg_334 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   ap_ready__temp = ap_ready ;
   Out_I_we0__temp = Out_I_we0 ;
   Out_R_address0__temp = Out_R_address0 ;
   i_lower_fu_187_p2__temp = i_lower_fu_187_p2 ;
   i_0_reg_145_temp_4__temp = i_0_reg_145_temp_4 ;
   Out_R_we0__temp = Out_R_we0 ;
   a_reg_261__temp = a_reg_261 ;
   X_R_q0__temp = X_R_q0 ;
   a_fu_165_p2__temp = a_fu_165_p2 ;
   Out_R_d0__temp = Out_R_d0 ;
   ap_done__temp = ap_done ;
   X_R_load_1_reg_328__temp = X_R_load_1_reg_328 ;
   zext_ln45_reg_251__temp = zext_ln45_reg_251 ;
   temp_R_fu_223_p1__temp = temp_R_fu_223_p1 ;
   X_I_address0__temp = X_I_address0 ;
   c_reg_134__temp = c_reg_134 ;
   temp_I_fu_227_p1__temp0__temp = temp_I_fu_227_p1__temp0 ;
   ap_clk__temp = ap_clk ;
   tmp_1_fu_171_p4__temp = tmp_1_fu_171_p4 ;
   i_1_fu_217_p2__temp = i_1_fu_217_p2 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_322__temp = temp_I_reg_322 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_d1__temp = Out_I_d1 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln45_fu_159_p2__temp = icmp_ln45_fu_159_p2 ;
   Out_R_d1__temp = Out_R_d1 ;
   i_0_reg_145_temp_3__temp = i_0_reg_145_temp_3 ;
   X_I_ce0__temp = X_I_ce0 ;
   X_I_q0__temp = X_I_q0 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   Out_R_q1__temp = Out_R_q1 ;
   zext_ln45_fu_155_p1__temp = zext_ln45_fu_155_p1 ;
   temp_I_fu_227_p2__temp = temp_I_fu_227_p2 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   X_R_ce0__temp = X_R_ce0 ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_R_ce0 = 0;
       Out_R_we0 = 0;
       Out_R_ce1 = 0;
       Out_R_we1 = 0;
       Out_R_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_R_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_R_d0 =   ( ( X_R_load_1_reg_328__temp  - temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_R_d1 =   ( ( X_R_load_1_reg_328__temp  + temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_I_ce0 = 0;
       Out_I_we0 = 0;
       Out_I_ce1 = 0;
       Out_I_we1 = 0;
       Out_I_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_I_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_I_d0 =   ( ( X_I_load_1_reg_334__temp  - temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
       Out_I_d1 =   ( ( X_I_load_1_reg_334__temp  + temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
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
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln45_reg_251 =  ( (  ( ( zext_ln45_reg_251 & 7 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
               icmp_ln45_fu_159_p2 =   ( c_reg_134__temp  == 4 ? 1 :  0 ) ;
       if((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               icmp_ln45_fu_159_p2 =   ( c_reg_134__temp  == 4 ? 1 :  0 ) ;
   if(((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if((1 == ap_CS_fsm_state2) && (icmp_ln45_fu_159_p2 == 0))
       {
           i_0_reg_145 =   ( c_reg_134__temp  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           zext_ln45_reg_251 =   ( (  ( (  ( c_reg_134__temp  & 4294967295 )  & 7 ) & 18446744073709551615 )  |  ( ( zext_ln45_reg_251__temp  & 4294967288 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
           a_reg_261 =   ( ( c_reg_134__temp  + 1 ) & 7 ) ;
       }
       if(ap_done==1){
          // ap_status = 0;
         //  goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if((1 == ap_CS_fsm_state2) && (icmp_ln45_fu_159_p2 == 0))
       {
               i_0_reg_145 =   ( c_reg_134__temp  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
               zext_ln45_reg_251 =   ( (  ( (  ( c_reg_134__temp  & 4294967295 )  & 7 ) & 18446744073709551615 )  |  ( ( zext_ln45_reg_251__temp  & 4294967288 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               a_reg_261 =   ( ( c_reg_134__temp  + 1 ) & 7 ) ;
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
   sub_ln53_fu_199_p2__temp = sub_ln53_fu_199_p2 ;
   add_ln54_fu_205_p2__temp = add_ln54_fu_205_p2 ;
   sext_ln55_fu_211_p1__temp = sext_ln55_fu_211_p1 ;
   sub_ln53_reg_285__temp = sub_ln53_reg_285 ;
   sext_ln55_reg_295__temp = sext_ln55_reg_295 ;
   i_0_reg_145__temp = i_0_reg_145 ;
   add_ln54_reg_290__temp = add_ln54_reg_290 ;
   sext_ln53_fu_193_p1__temp = sext_ln53_fu_193_p1 ;
   sext_ln53_reg_269__temp = sext_ln53_reg_269 ;
   temp_R_reg_316__temp = temp_R_reg_316 ;
   Out_R_q0__temp = Out_R_q0 ;
   ap_continue__temp = ap_continue ;
   ap_rst__temp = ap_rst ;
   temp_R_fu_223_p2__temp = temp_R_fu_223_p2 ;
   Out_R_address1__temp = Out_R_address1 ;
   ap_start__temp = ap_start ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_181_p2__temp = icmp_ln51_fu_181_p2 ;
   temp_I_fu_227_p1_temp_1__temp = temp_I_fu_227_p1_temp_1 ;
   i_1_reg_311__temp = i_1_reg_311 ;
   zext_ln45_fu_155_p1_temp_0__temp = zext_ln45_fu_155_p1_temp_0 ;
   Out_R_ce0__temp = Out_R_ce0 ;
   Out_I_q0__temp = Out_I_q0 ;
   Out_I_d0__temp = Out_I_d0 ;
   temp_I_fu_227_p1_temp_0__temp = temp_I_fu_227_p1_temp_0 ;
   temp_I_fu_227_p1__temp = temp_I_fu_227_p1 ;
   temp_R_fu_223_p1_temp_2__temp = temp_R_fu_223_p1_temp_2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   temp_R_fu_223_p1_temp_3__temp = temp_R_fu_223_p1_temp_3 ;
   temp_R_fu_223_p1__temp0__temp = temp_R_fu_223_p1__temp0 ;
   Out_I_address1__temp = Out_I_address1 ;
   zext_ln45_fu_155_p1_temp_0_temp_2__temp = zext_ln45_fu_155_p1_temp_0_temp_2 ;
   Out_R_we1__temp = Out_R_we1 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   Out_I_q1__temp = Out_I_q1 ;
   zext_ln45_reg_251_temp_1__temp = zext_ln45_reg_251_temp_1 ;
   ap_idle__temp = ap_idle ;
   X_I_load_1_reg_334__temp = X_I_load_1_reg_334 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   ap_ready__temp = ap_ready ;
   Out_I_we0__temp = Out_I_we0 ;
   Out_R_address0__temp = Out_R_address0 ;
   i_lower_fu_187_p2__temp = i_lower_fu_187_p2 ;
   i_0_reg_145_temp_4__temp = i_0_reg_145_temp_4 ;
   Out_R_we0__temp = Out_R_we0 ;
   a_reg_261__temp = a_reg_261 ;
   X_R_q0__temp = X_R_q0 ;
   a_fu_165_p2__temp = a_fu_165_p2 ;
   Out_R_d0__temp = Out_R_d0 ;
   ap_done__temp = ap_done ;
   X_R_load_1_reg_328__temp = X_R_load_1_reg_328 ;
   zext_ln45_reg_251__temp = zext_ln45_reg_251 ;
   temp_R_fu_223_p1__temp = temp_R_fu_223_p1 ;
   X_I_address0__temp = X_I_address0 ;
   c_reg_134__temp = c_reg_134 ;
   temp_I_fu_227_p1__temp0__temp = temp_I_fu_227_p1__temp0 ;
   ap_clk__temp = ap_clk ;
   tmp_1_fu_171_p4__temp = tmp_1_fu_171_p4 ;
   i_1_fu_217_p2__temp = i_1_fu_217_p2 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_322__temp = temp_I_reg_322 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_d1__temp = Out_I_d1 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln45_fu_159_p2__temp = icmp_ln45_fu_159_p2 ;
   Out_R_d1__temp = Out_R_d1 ;
   i_0_reg_145_temp_3__temp = i_0_reg_145_temp_3 ;
   X_I_ce0__temp = X_I_ce0 ;
   X_I_q0__temp = X_I_q0 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   Out_R_q1__temp = Out_R_q1 ;
   zext_ln45_fu_155_p1__temp = zext_ln45_fu_155_p1 ;
   temp_I_fu_227_p2__temp = temp_I_fu_227_p2 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   X_R_ce0__temp = X_R_ce0 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_R_ce0 = 0;
       Out_R_we0 = 0;
       Out_R_ce1 = 0;
       Out_R_we1 = 0;
       Out_R_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_R_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_R_d0 =   ( ( X_R_load_1_reg_328__temp  - temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_R_d1 =   ( ( X_R_load_1_reg_328__temp  + temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_I_ce0 = 0;
       Out_I_we0 = 0;
       Out_I_ce1 = 0;
       Out_I_we1 = 0;
       Out_I_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_I_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_I_d0 =   ( ( X_I_load_1_reg_334__temp  - temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
       Out_I_d1 =   ( ( X_I_load_1_reg_334__temp  + temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
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
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln45_reg_251 =  ( (  ( ( zext_ln45_reg_251 & 7 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           X_I_address0 =  ( do_twos_complement(  ( ( do_twos_complement( i_0_reg_145__temp  , 32 )  + do_twos_complement( 4 , 32 )  ) & 4294967295 )  , 32 ) & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_I_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           X_R_address0 =  ( do_twos_complement(  ( ( do_twos_complement( i_0_reg_145__temp  , 32 )  + do_twos_complement( 4 , 32 )  ) & 4294967295 )  , 32 ) & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_R_ce0 =  1;
       }
               icmp_ln51_fu_181_p2 =   ( do_twos_complement(  (  ( (  ( ( i_0_reg_145__temp  >> 10 )  & 18446744073709551615 )  & 4194303 ) & 18446744073709551615 )  & 4194303 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 ) ;
   if(((icmp_ln51_fu_181_p2 == 0) && (1 == ap_CS_fsm_state3)) == 1){
       if((icmp_ln51_fu_181_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           c_reg_134 =  a_reg_261__temp ;
       }
       if((icmp_ln51_fu_181_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           sext_ln53_reg_269 =  ( do_twos_complement(  ( ( do_twos_complement( i_0_reg_145__temp  , 32 )  + do_twos_complement( 4 , 32 )  ) & 4294967295 )  , 32 ) & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((icmp_ln51_fu_181_p2 == 0) && (1 == ap_CS_fsm_state3)) == 0){
       if((icmp_ln51_fu_181_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
               c_reg_134 =  a_reg_261__temp ;
       }
       if((icmp_ln51_fu_181_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               sext_ln53_reg_269 =  ( do_twos_complement(  ( ( do_twos_complement( i_0_reg_145__temp  , 32 )  + do_twos_complement( 4 , 32 )  ) & 4294967295 )  , 32 ) & 18446744073709551615 ) ;
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
   sub_ln53_fu_199_p2__temp = sub_ln53_fu_199_p2 ;
   add_ln54_fu_205_p2__temp = add_ln54_fu_205_p2 ;
   sext_ln55_fu_211_p1__temp = sext_ln55_fu_211_p1 ;
   sub_ln53_reg_285__temp = sub_ln53_reg_285 ;
   sext_ln55_reg_295__temp = sext_ln55_reg_295 ;
   i_0_reg_145__temp = i_0_reg_145 ;
   add_ln54_reg_290__temp = add_ln54_reg_290 ;
   sext_ln53_fu_193_p1__temp = sext_ln53_fu_193_p1 ;
   sext_ln53_reg_269__temp = sext_ln53_reg_269 ;
   temp_R_reg_316__temp = temp_R_reg_316 ;
   Out_R_q0__temp = Out_R_q0 ;
   ap_continue__temp = ap_continue ;
   ap_rst__temp = ap_rst ;
   temp_R_fu_223_p2__temp = temp_R_fu_223_p2 ;
   Out_R_address1__temp = Out_R_address1 ;
   ap_start__temp = ap_start ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_181_p2__temp = icmp_ln51_fu_181_p2 ;
   temp_I_fu_227_p1_temp_1__temp = temp_I_fu_227_p1_temp_1 ;
   i_1_reg_311__temp = i_1_reg_311 ;
   zext_ln45_fu_155_p1_temp_0__temp = zext_ln45_fu_155_p1_temp_0 ;
   Out_R_ce0__temp = Out_R_ce0 ;
   Out_I_q0__temp = Out_I_q0 ;
   Out_I_d0__temp = Out_I_d0 ;
   temp_I_fu_227_p1_temp_0__temp = temp_I_fu_227_p1_temp_0 ;
   temp_I_fu_227_p1__temp = temp_I_fu_227_p1 ;
   temp_R_fu_223_p1_temp_2__temp = temp_R_fu_223_p1_temp_2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   temp_R_fu_223_p1_temp_3__temp = temp_R_fu_223_p1_temp_3 ;
   temp_R_fu_223_p1__temp0__temp = temp_R_fu_223_p1__temp0 ;
   Out_I_address1__temp = Out_I_address1 ;
   zext_ln45_fu_155_p1_temp_0_temp_2__temp = zext_ln45_fu_155_p1_temp_0_temp_2 ;
   Out_R_we1__temp = Out_R_we1 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   Out_I_q1__temp = Out_I_q1 ;
   zext_ln45_reg_251_temp_1__temp = zext_ln45_reg_251_temp_1 ;
   ap_idle__temp = ap_idle ;
   X_I_load_1_reg_334__temp = X_I_load_1_reg_334 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   ap_ready__temp = ap_ready ;
   Out_I_we0__temp = Out_I_we0 ;
   Out_R_address0__temp = Out_R_address0 ;
   i_lower_fu_187_p2__temp = i_lower_fu_187_p2 ;
   i_0_reg_145_temp_4__temp = i_0_reg_145_temp_4 ;
   Out_R_we0__temp = Out_R_we0 ;
   a_reg_261__temp = a_reg_261 ;
   X_R_q0__temp = X_R_q0 ;
   a_fu_165_p2__temp = a_fu_165_p2 ;
   Out_R_d0__temp = Out_R_d0 ;
   ap_done__temp = ap_done ;
   X_R_load_1_reg_328__temp = X_R_load_1_reg_328 ;
   zext_ln45_reg_251__temp = zext_ln45_reg_251 ;
   temp_R_fu_223_p1__temp = temp_R_fu_223_p1 ;
   X_I_address0__temp = X_I_address0 ;
   c_reg_134__temp = c_reg_134 ;
   temp_I_fu_227_p1__temp0__temp = temp_I_fu_227_p1__temp0 ;
   ap_clk__temp = ap_clk ;
   tmp_1_fu_171_p4__temp = tmp_1_fu_171_p4 ;
   i_1_fu_217_p2__temp = i_1_fu_217_p2 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_322__temp = temp_I_reg_322 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_d1__temp = Out_I_d1 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln45_fu_159_p2__temp = icmp_ln45_fu_159_p2 ;
   Out_R_d1__temp = Out_R_d1 ;
   i_0_reg_145_temp_3__temp = i_0_reg_145_temp_3 ;
   X_I_ce0__temp = X_I_ce0 ;
   X_I_q0__temp = X_I_q0 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   Out_R_q1__temp = Out_R_q1 ;
   zext_ln45_fu_155_p1__temp = zext_ln45_fu_155_p1 ;
   temp_I_fu_227_p2__temp = temp_I_fu_227_p2 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   X_R_ce0__temp = X_R_ce0 ;

  if(ap_clk_count == 1 ){
       ap_status = 4;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_R_ce0 = 0;
       Out_R_we0 = 0;
       Out_R_ce1 = 0;
       Out_R_we1 = 0;
       Out_R_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_R_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_R_d0 =   ( ( X_R_load_1_reg_328__temp  - temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_R_d1 =   ( ( X_R_load_1_reg_328__temp  + temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_I_ce0 = 0;
       Out_I_we0 = 0;
       Out_I_ce1 = 0;
       Out_I_we1 = 0;
       Out_I_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_I_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_I_d0 =   ( ( X_I_load_1_reg_334__temp  - temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
       Out_I_d1 =   ( ( X_I_load_1_reg_334__temp  + temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
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
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln45_reg_251 =  ( (  ( ( zext_ln45_reg_251 & 7 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
       if(1 == ap_CS_fsm_state4)
       {
           X_I_address0 =   ( i_0_reg_145__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_I_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           X_R_address0 =   ( i_0_reg_145__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           X_R_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           sub_ln53_reg_285 =   ( ( ( X_R_q0__temp  & 4294967295 )  - ( X_I_q0__temp  & 4294967295 )  ) & 4294967295 ) ;
           sext_ln55_reg_295 =   ( i_0_reg_145__temp  & 18446744073709551615 ) ;
           i_1_reg_311 =   ( ( do_twos_complement( i_0_reg_145__temp  , 32 )  + do_twos_complement( 8 , 32 )  ) & 4294967295 ) ;
           add_ln54_reg_290 =   ( ( ( X_I_q0__temp  & 4294967295 )  + ( X_R_q0__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
    ap_CS_fsm_state6 = 0;
   sub_ln53_fu_199_p2__temp = sub_ln53_fu_199_p2 ;
   add_ln54_fu_205_p2__temp = add_ln54_fu_205_p2 ;
   sext_ln55_fu_211_p1__temp = sext_ln55_fu_211_p1 ;
   sub_ln53_reg_285__temp = sub_ln53_reg_285 ;
   sext_ln55_reg_295__temp = sext_ln55_reg_295 ;
   i_0_reg_145__temp = i_0_reg_145 ;
   add_ln54_reg_290__temp = add_ln54_reg_290 ;
   sext_ln53_fu_193_p1__temp = sext_ln53_fu_193_p1 ;
   sext_ln53_reg_269__temp = sext_ln53_reg_269 ;
   temp_R_reg_316__temp = temp_R_reg_316 ;
   Out_R_q0__temp = Out_R_q0 ;
   ap_continue__temp = ap_continue ;
   ap_rst__temp = ap_rst ;
   temp_R_fu_223_p2__temp = temp_R_fu_223_p2 ;
   Out_R_address1__temp = Out_R_address1 ;
   ap_start__temp = ap_start ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_181_p2__temp = icmp_ln51_fu_181_p2 ;
   temp_I_fu_227_p1_temp_1__temp = temp_I_fu_227_p1_temp_1 ;
   i_1_reg_311__temp = i_1_reg_311 ;
   zext_ln45_fu_155_p1_temp_0__temp = zext_ln45_fu_155_p1_temp_0 ;
   Out_R_ce0__temp = Out_R_ce0 ;
   Out_I_q0__temp = Out_I_q0 ;
   Out_I_d0__temp = Out_I_d0 ;
   temp_I_fu_227_p1_temp_0__temp = temp_I_fu_227_p1_temp_0 ;
   temp_I_fu_227_p1__temp = temp_I_fu_227_p1 ;
   temp_R_fu_223_p1_temp_2__temp = temp_R_fu_223_p1_temp_2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   temp_R_fu_223_p1_temp_3__temp = temp_R_fu_223_p1_temp_3 ;
   temp_R_fu_223_p1__temp0__temp = temp_R_fu_223_p1__temp0 ;
   Out_I_address1__temp = Out_I_address1 ;
   zext_ln45_fu_155_p1_temp_0_temp_2__temp = zext_ln45_fu_155_p1_temp_0_temp_2 ;
   Out_R_we1__temp = Out_R_we1 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   Out_I_q1__temp = Out_I_q1 ;
   zext_ln45_reg_251_temp_1__temp = zext_ln45_reg_251_temp_1 ;
   ap_idle__temp = ap_idle ;
   X_I_load_1_reg_334__temp = X_I_load_1_reg_334 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   ap_ready__temp = ap_ready ;
   Out_I_we0__temp = Out_I_we0 ;
   Out_R_address0__temp = Out_R_address0 ;
   i_lower_fu_187_p2__temp = i_lower_fu_187_p2 ;
   i_0_reg_145_temp_4__temp = i_0_reg_145_temp_4 ;
   Out_R_we0__temp = Out_R_we0 ;
   a_reg_261__temp = a_reg_261 ;
   X_R_q0__temp = X_R_q0 ;
   a_fu_165_p2__temp = a_fu_165_p2 ;
   Out_R_d0__temp = Out_R_d0 ;
   ap_done__temp = ap_done ;
   X_R_load_1_reg_328__temp = X_R_load_1_reg_328 ;
   zext_ln45_reg_251__temp = zext_ln45_reg_251 ;
   temp_R_fu_223_p1__temp = temp_R_fu_223_p1 ;
   X_I_address0__temp = X_I_address0 ;
   c_reg_134__temp = c_reg_134 ;
   temp_I_fu_227_p1__temp0__temp = temp_I_fu_227_p1__temp0 ;
   ap_clk__temp = ap_clk ;
   tmp_1_fu_171_p4__temp = tmp_1_fu_171_p4 ;
   i_1_fu_217_p2__temp = i_1_fu_217_p2 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_322__temp = temp_I_reg_322 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_d1__temp = Out_I_d1 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln45_fu_159_p2__temp = icmp_ln45_fu_159_p2 ;
   Out_R_d1__temp = Out_R_d1 ;
   i_0_reg_145_temp_3__temp = i_0_reg_145_temp_3 ;
   X_I_ce0__temp = X_I_ce0 ;
   X_I_q0__temp = X_I_q0 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   Out_R_q1__temp = Out_R_q1 ;
   zext_ln45_fu_155_p1__temp = zext_ln45_fu_155_p1 ;
   temp_I_fu_227_p2__temp = temp_I_fu_227_p2 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   X_R_ce0__temp = X_R_ce0 ;

  if(ap_clk_count == 1 ){
       ap_status = 5;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_R_ce0 = 0;
       Out_R_we0 = 0;
       Out_R_ce1 = 0;
       Out_R_we1 = 0;
       Out_R_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_R_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_R_d0 =   ( ( X_R_load_1_reg_328__temp  - temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_R_d1 =   ( ( X_R_load_1_reg_328__temp  + temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_I_ce0 = 0;
       Out_I_we0 = 0;
       Out_I_ce1 = 0;
       Out_I_we1 = 0;
       Out_I_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_I_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_I_d0 =   ( ( X_I_load_1_reg_334__temp  - temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
       Out_I_d1 =   ( ( X_I_load_1_reg_334__temp  + temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
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
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln45_reg_251 =  ( (  ( ( zext_ln45_reg_251 & 7 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
       if(1 == ap_CS_fsm_state5)
       {
           temp_R_reg_316 =   ( ( do_twos_complement( sub_ln53_reg_285__temp  , 32 )  * do_twos_complement(  (  ( (  ( ( 0 << 2 )  & 18446744073709551615 )  |  ( zext_ln45_reg_251__temp  & 7 )  ) & 18446744073709551615 )  & 18446744073709551615 )  , 63 )  ) & 4294967295 ) ;
           temp_I_reg_322 =   ( ( do_twos_complement( add_ln54_reg_290__temp  , 32 )  * do_twos_complement(  (  ( (  ( ( 0 << 2 )  & 18446744073709551615 )  |  ( zext_ln45_reg_251__temp  & 7 )  ) & 18446744073709551615 )  & 18446744073709551615 )  , 63 )  ) & 4294967295 ) ;
           X_R_load_1_reg_328 =  ( X_R_q0__temp  & 4294967295 ) ;
           X_I_load_1_reg_334 =  ( X_I_q0__temp  & 4294967295 ) ;
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 1;
   sub_ln53_fu_199_p2__temp = sub_ln53_fu_199_p2 ;
   add_ln54_fu_205_p2__temp = add_ln54_fu_205_p2 ;
   sext_ln55_fu_211_p1__temp = sext_ln55_fu_211_p1 ;
   sub_ln53_reg_285__temp = sub_ln53_reg_285 ;
   sext_ln55_reg_295__temp = sext_ln55_reg_295 ;
   i_0_reg_145__temp = i_0_reg_145 ;
   add_ln54_reg_290__temp = add_ln54_reg_290 ;
   sext_ln53_fu_193_p1__temp = sext_ln53_fu_193_p1 ;
   sext_ln53_reg_269__temp = sext_ln53_reg_269 ;
   temp_R_reg_316__temp = temp_R_reg_316 ;
   Out_R_q0__temp = Out_R_q0 ;
   ap_continue__temp = ap_continue ;
   ap_rst__temp = ap_rst ;
   temp_R_fu_223_p2__temp = temp_R_fu_223_p2 ;
   Out_R_address1__temp = Out_R_address1 ;
   ap_start__temp = ap_start ;
   ap_status__temp = ap_status ;
   icmp_ln51_fu_181_p2__temp = icmp_ln51_fu_181_p2 ;
   temp_I_fu_227_p1_temp_1__temp = temp_I_fu_227_p1_temp_1 ;
   i_1_reg_311__temp = i_1_reg_311 ;
   zext_ln45_fu_155_p1_temp_0__temp = zext_ln45_fu_155_p1_temp_0 ;
   Out_R_ce0__temp = Out_R_ce0 ;
   Out_I_q0__temp = Out_I_q0 ;
   Out_I_d0__temp = Out_I_d0 ;
   temp_I_fu_227_p1_temp_0__temp = temp_I_fu_227_p1_temp_0 ;
   temp_I_fu_227_p1__temp = temp_I_fu_227_p1 ;
   temp_R_fu_223_p1_temp_2__temp = temp_R_fu_223_p1_temp_2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   temp_R_fu_223_p1_temp_3__temp = temp_R_fu_223_p1_temp_3 ;
   temp_R_fu_223_p1__temp0__temp = temp_R_fu_223_p1__temp0 ;
   Out_I_address1__temp = Out_I_address1 ;
   zext_ln45_fu_155_p1_temp_0_temp_2__temp = zext_ln45_fu_155_p1_temp_0_temp_2 ;
   Out_R_we1__temp = Out_R_we1 ;
   Out_I_ce1__temp = Out_I_ce1 ;
   Out_I_q1__temp = Out_I_q1 ;
   zext_ln45_reg_251_temp_1__temp = zext_ln45_reg_251_temp_1 ;
   ap_idle__temp = ap_idle ;
   X_I_load_1_reg_334__temp = X_I_load_1_reg_334 ;
   Out_I_address0__temp = Out_I_address0 ;
   Out_R_ce1__temp = Out_R_ce1 ;
   ap_ready__temp = ap_ready ;
   Out_I_we0__temp = Out_I_we0 ;
   Out_R_address0__temp = Out_R_address0 ;
   i_lower_fu_187_p2__temp = i_lower_fu_187_p2 ;
   i_0_reg_145_temp_4__temp = i_0_reg_145_temp_4 ;
   Out_R_we0__temp = Out_R_we0 ;
   a_reg_261__temp = a_reg_261 ;
   X_R_q0__temp = X_R_q0 ;
   a_fu_165_p2__temp = a_fu_165_p2 ;
   Out_R_d0__temp = Out_R_d0 ;
   ap_done__temp = ap_done ;
   X_R_load_1_reg_328__temp = X_R_load_1_reg_328 ;
   zext_ln45_reg_251__temp = zext_ln45_reg_251 ;
   temp_R_fu_223_p1__temp = temp_R_fu_223_p1 ;
   X_I_address0__temp = X_I_address0 ;
   c_reg_134__temp = c_reg_134 ;
   temp_I_fu_227_p1__temp0__temp = temp_I_fu_227_p1__temp0 ;
   ap_clk__temp = ap_clk ;
   tmp_1_fu_171_p4__temp = tmp_1_fu_171_p4 ;
   i_1_fu_217_p2__temp = i_1_fu_217_p2 ;
   Out_I_we1__temp = Out_I_we1 ;
   temp_I_reg_322__temp = temp_I_reg_322 ;
   X_R_address0__temp = X_R_address0 ;
   Out_I_d1__temp = Out_I_d1 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln45_fu_159_p2__temp = icmp_ln45_fu_159_p2 ;
   Out_R_d1__temp = Out_R_d1 ;
   i_0_reg_145_temp_3__temp = i_0_reg_145_temp_3 ;
   X_I_ce0__temp = X_I_ce0 ;
   X_I_q0__temp = X_I_q0 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   Out_R_q1__temp = Out_R_q1 ;
   zext_ln45_fu_155_p1__temp = zext_ln45_fu_155_p1 ;
   temp_I_fu_227_p2__temp = temp_I_fu_227_p2 ;
   Out_I_ce0__temp = Out_I_ce0 ;
   X_R_ce0__temp = X_R_ce0 ;

  if(ap_clk_count == 1 ){
       ap_status = 6;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       Out_R_ce0 = 0;
       Out_R_we0 = 0;
       Out_R_ce1 = 0;
       Out_R_we1 = 0;
       Out_R_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_R_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_R_d0 =   ( ( X_R_load_1_reg_328__temp  - temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_R_d1 =   ( ( X_R_load_1_reg_328__temp  + temp_R_reg_316__temp  ) & 18446744073709551615 ) ;
       Out_I_ce0 = 0;
       Out_I_we0 = 0;
       Out_I_ce1 = 0;
       Out_I_we1 = 0;
       Out_I_address0 =   ( sext_ln53_reg_269__temp  & 18446744073709551615 ) ;
       Out_I_address1 =   ( sext_ln55_reg_295__temp  & 18446744073709551615 ) ;
       Out_I_d0 =   ( ( X_I_load_1_reg_334__temp  - temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
       Out_I_d1 =   ( ( X_I_load_1_reg_334__temp  + temp_I_reg_322__temp  ) & 18446744073709551615 ) ;
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
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln45_fu_159_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln45_reg_251 =  ( (  ( ( zext_ln45_reg_251 & 7 ) & 4294967295 )  | 0 ) & 4294967295 )  ; 
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
           i_0_reg_145 =  i_1_reg_311__temp ;
       }
       if(Out_R_ce0){
          Out_R_q0 = Out_R_ram[Out_R_address0];
           if(Out_R_we0){
              Out_R_ram[Out_R_address0] = Out_R_d0;
           }
       }
       if(Out_R_ce1){
          Out_R_q1 = Out_R_ram[Out_R_address1];
           if(Out_R_we1){
              Out_R_ram[Out_R_address1] = Out_R_d1;
           }
       }
       if(Out_I_ce0){
          Out_I_q0 = Out_I_ram[Out_I_address0];
           if(Out_I_we0){
              Out_I_ram[Out_I_address0] = Out_I_d0;
           }
       }
       if(Out_I_ce1){
          Out_I_q1 = Out_I_ram[Out_I_address1];
           if(Out_I_we1){
              Out_I_ram[Out_I_address1] = Out_I_d1;
           }
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
