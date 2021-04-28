#include<stdio.h>
void module_3(unsigned long long int *C_address0__1,unsigned long long int *C_ce0__1,unsigned long long int *C_q0__1,unsigned long long int *E_address0__1,unsigned long long int *E_ce0__1,unsigned long long int *E_d0__1,unsigned long long int *E_we0__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,int dummy){
unsigned long long int C_address0=*C_address0__1;
unsigned long long int C_ce0=*C_ce0__1;
unsigned long long int C_q0=*C_q0__1;
unsigned long long int E_address0=*E_address0__1;
unsigned long long int E_ce0=*E_ce0__1;
unsigned long long int E_d0=*E_d0__1;
unsigned long long int E_we0=*E_we0__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
   static long long int C_load_reg_92=0;
   static long long int C_load_reg_92__temp=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   static unsigned long long int C_address0__temp=0;
   static unsigned long long int C_ce0__temp=0;
   static unsigned long long int C_q0__temp=0;
   static unsigned long long int E_address0__temp=0;
   static unsigned long long int E_ce0__temp=0;
   static unsigned long long int E_d0__temp=0;
   static unsigned long long int E_we0__temp=0;
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
   static unsigned long long int i_0_reg_42=0;
   static unsigned long long int i_0_reg_42__temp=0;
   static unsigned long long int i_fu_59_p2=0;
   static unsigned long long int i_fu_59_p2__temp=0;
   static unsigned long long int i_reg_77=0;
   static unsigned long long int i_reg_77__temp=0;
   static unsigned long long int icmp_ln21_fu_53_p2=0;
   static unsigned long long int icmp_ln21_fu_53_p2__temp=0;
   static unsigned long long int mul_ln22_fu_70_p2=0;
   static unsigned long long int mul_ln22_fu_70_p2__temp=0;
   static unsigned long long int mul_ln22_reg_98=0;
   static unsigned long long int mul_ln22_reg_98__temp=0;
   static unsigned long long int zext_ln22_fu_65_p1=0;
   static unsigned long long int zext_ln22_fu_65_p1__temp=0;
   static unsigned long long int zext_ln22_fu_65_p1_temp_3=0;
   static unsigned long long int zext_ln22_fu_65_p1_temp_3__temp=0;
   static unsigned long long int zext_ln22_fu_65_p1_temp_3_temp_5=0;
   static unsigned long long int zext_ln22_fu_65_p1_temp_3_temp_5__temp=0;
   static unsigned long long int zext_ln22_reg_82=0;
   static unsigned long long int zext_ln22_reg_82__temp=0;
   static unsigned long long int zext_ln22_reg_82_temp_4=0;
   static unsigned long long int zext_ln22_reg_82_temp_4__temp=0;
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
   C_load_reg_92__temp = C_load_reg_92 ;
   E_address0__temp = E_address0 ;
   ap_rst__temp = ap_rst ;
   ap_continue__temp = ap_continue ;
   ap_ready__temp = ap_ready ;
   E_ce0__temp = E_ce0 ;
   zext_ln22_reg_82_temp_4__temp = zext_ln22_reg_82_temp_4 ;
   C_ce0__temp = C_ce0 ;
   E_we0__temp = E_we0 ;
   ap_done__temp = ap_done ;
   i_fu_59_p2__temp = i_fu_59_p2 ;
   ap_status__temp = ap_status ;
   ap_done_reg__temp = ap_done_reg ;
   ap_start__temp = ap_start ;
   mul_ln22_fu_70_p2__temp = mul_ln22_fu_70_p2 ;
   zext_ln22_fu_65_p1_temp_3_temp_5__temp = zext_ln22_fu_65_p1_temp_3_temp_5 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   mul_ln22_reg_98__temp = mul_ln22_reg_98 ;
   i_0_reg_42__temp = i_0_reg_42 ;
   zext_ln22_fu_65_p1__temp = zext_ln22_fu_65_p1 ;
   zext_ln22_fu_65_p1_temp_3__temp = zext_ln22_fu_65_p1_temp_3 ;
   C_address0__temp = C_address0 ;
   ap_clk__temp = ap_clk ;
   icmp_ln21_fu_53_p2__temp = icmp_ln21_fu_53_p2 ;
   E_d0__temp = E_d0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C_q0__temp = C_q0 ;
   i_reg_77__temp = i_reg_77 ;
   ap_idle__temp = ap_idle ;
   zext_ln22_reg_82__temp = zext_ln22_reg_82 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
C_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_we0 = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln22_reg_82 =  ( (  ( ( zext_ln22_reg_82 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_42 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_42 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   C_load_reg_92__temp = C_load_reg_92 ;
   E_address0__temp = E_address0 ;
   ap_rst__temp = ap_rst ;
   ap_continue__temp = ap_continue ;
   ap_ready__temp = ap_ready ;
   E_ce0__temp = E_ce0 ;
   zext_ln22_reg_82_temp_4__temp = zext_ln22_reg_82_temp_4 ;
   C_ce0__temp = C_ce0 ;
   E_we0__temp = E_we0 ;
   ap_done__temp = ap_done ;
   i_fu_59_p2__temp = i_fu_59_p2 ;
   ap_status__temp = ap_status ;
   ap_done_reg__temp = ap_done_reg ;
   ap_start__temp = ap_start ;
   mul_ln22_fu_70_p2__temp = mul_ln22_fu_70_p2 ;
   zext_ln22_fu_65_p1_temp_3_temp_5__temp = zext_ln22_fu_65_p1_temp_3_temp_5 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   mul_ln22_reg_98__temp = mul_ln22_reg_98 ;
   i_0_reg_42__temp = i_0_reg_42 ;
   zext_ln22_fu_65_p1__temp = zext_ln22_fu_65_p1 ;
   zext_ln22_fu_65_p1_temp_3__temp = zext_ln22_fu_65_p1_temp_3 ;
   C_address0__temp = C_address0 ;
   ap_clk__temp = ap_clk ;
   icmp_ln21_fu_53_p2__temp = icmp_ln21_fu_53_p2 ;
   E_d0__temp = E_d0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C_q0__temp = C_q0 ;
   i_reg_77__temp = i_reg_77 ;
   ap_idle__temp = ap_idle ;
   zext_ln22_reg_82__temp = zext_ln22_reg_82 ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 
       C_address0 = i_0_reg_42__temp;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
C_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_we0 = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln22_reg_82 =  ( (  ( ( zext_ln22_reg_82 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
               icmp_ln21_fu_53_p2 =   ( i_0_reg_42__temp  == 5 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           C_ce0 =  1;
       }
       if((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               icmp_ln21_fu_53_p2 =   ( i_0_reg_42__temp  == 5 ? 1 :  0 ) ;
   if(((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_77 =   ( ( i_0_reg_42__temp  + 1 ) & 7 ) ;
       }
       if((icmp_ln21_fu_53_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           zext_ln22_reg_82 =   ( (  ( (  ( i_0_reg_42__temp  & 18446744073709551615 )  & 7 ) & 18446744073709551615 )  |  ( ( zext_ln22_reg_82__temp  & 18446744073709551608 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(ap_done==1){
          // ap_status = 0;
         //  goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_77 =   ( ( i_0_reg_42__temp  + 1 ) & 7 ) ;
       }
       if((icmp_ln21_fu_53_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               zext_ln22_reg_82 =   ( (  ( (  ( i_0_reg_42__temp  & 18446744073709551615 )  & 7 ) & 18446744073709551615 )  |  ( ( zext_ln22_reg_82__temp  & 18446744073709551608 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   C_load_reg_92__temp = C_load_reg_92 ;
   E_address0__temp = E_address0 ;
   ap_rst__temp = ap_rst ;
   ap_continue__temp = ap_continue ;
   ap_ready__temp = ap_ready ;
   E_ce0__temp = E_ce0 ;
   zext_ln22_reg_82_temp_4__temp = zext_ln22_reg_82_temp_4 ;
   C_ce0__temp = C_ce0 ;
   E_we0__temp = E_we0 ;
   ap_done__temp = ap_done ;
   i_fu_59_p2__temp = i_fu_59_p2 ;
   ap_status__temp = ap_status ;
   ap_done_reg__temp = ap_done_reg ;
   ap_start__temp = ap_start ;
   mul_ln22_fu_70_p2__temp = mul_ln22_fu_70_p2 ;
   zext_ln22_fu_65_p1_temp_3_temp_5__temp = zext_ln22_fu_65_p1_temp_3_temp_5 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   mul_ln22_reg_98__temp = mul_ln22_reg_98 ;
   i_0_reg_42__temp = i_0_reg_42 ;
   zext_ln22_fu_65_p1__temp = zext_ln22_fu_65_p1 ;
   zext_ln22_fu_65_p1_temp_3__temp = zext_ln22_fu_65_p1_temp_3 ;
   C_address0__temp = C_address0 ;
   ap_clk__temp = ap_clk ;
   icmp_ln21_fu_53_p2__temp = icmp_ln21_fu_53_p2 ;
   E_d0__temp = E_d0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C_q0__temp = C_q0 ;
   i_reg_77__temp = i_reg_77 ;
   ap_idle__temp = ap_idle ;
   zext_ln22_reg_82__temp = zext_ln22_reg_82 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
C_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_we0 = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln22_reg_82 =  ( (  ( ( zext_ln22_reg_82 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           C_load_reg_92 =  ( C_q0 & 4294967295 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
   C_load_reg_92__temp = C_load_reg_92 ;
   E_address0__temp = E_address0 ;
   ap_rst__temp = ap_rst ;
   ap_continue__temp = ap_continue ;
   ap_ready__temp = ap_ready ;
   E_ce0__temp = E_ce0 ;
   zext_ln22_reg_82_temp_4__temp = zext_ln22_reg_82_temp_4 ;
   C_ce0__temp = C_ce0 ;
   E_we0__temp = E_we0 ;
   ap_done__temp = ap_done ;
   i_fu_59_p2__temp = i_fu_59_p2 ;
   ap_status__temp = ap_status ;
   ap_done_reg__temp = ap_done_reg ;
   ap_start__temp = ap_start ;
   mul_ln22_fu_70_p2__temp = mul_ln22_fu_70_p2 ;
   zext_ln22_fu_65_p1_temp_3_temp_5__temp = zext_ln22_fu_65_p1_temp_3_temp_5 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   mul_ln22_reg_98__temp = mul_ln22_reg_98 ;
   i_0_reg_42__temp = i_0_reg_42 ;
   zext_ln22_fu_65_p1__temp = zext_ln22_fu_65_p1 ;
   zext_ln22_fu_65_p1_temp_3__temp = zext_ln22_fu_65_p1_temp_3 ;
   C_address0__temp = C_address0 ;
   ap_clk__temp = ap_clk ;
   icmp_ln21_fu_53_p2__temp = icmp_ln21_fu_53_p2 ;
   E_d0__temp = E_d0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C_q0__temp = C_q0 ;
   i_reg_77__temp = i_reg_77 ;
   ap_idle__temp = ap_idle ;
   zext_ln22_reg_82__temp = zext_ln22_reg_82 ;

  if(ap_clk_count == 1 ){
       ap_status = 4;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
C_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_we0 = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln22_reg_82 =  ( (  ( ( zext_ln22_reg_82 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if(1 == ap_CS_fsm_state4)
       {
           mul_ln22_reg_98 =   ( ( do_twos_complement( C_load_reg_92__temp  , 32 )  * do_twos_complement( C_load_reg_92__temp  , 32 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
   C_load_reg_92__temp = C_load_reg_92 ;
   E_address0__temp = E_address0 ;
   ap_rst__temp = ap_rst ;
   ap_continue__temp = ap_continue ;
   ap_ready__temp = ap_ready ;
   E_ce0__temp = E_ce0 ;
   zext_ln22_reg_82_temp_4__temp = zext_ln22_reg_82_temp_4 ;
   C_ce0__temp = C_ce0 ;
   E_we0__temp = E_we0 ;
   ap_done__temp = ap_done ;
   i_fu_59_p2__temp = i_fu_59_p2 ;
   ap_status__temp = ap_status ;
   ap_done_reg__temp = ap_done_reg ;
   ap_start__temp = ap_start ;
   mul_ln22_fu_70_p2__temp = mul_ln22_fu_70_p2 ;
   zext_ln22_fu_65_p1_temp_3_temp_5__temp = zext_ln22_fu_65_p1_temp_3_temp_5 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   mul_ln22_reg_98__temp = mul_ln22_reg_98 ;
   i_0_reg_42__temp = i_0_reg_42 ;
   zext_ln22_fu_65_p1__temp = zext_ln22_fu_65_p1 ;
   zext_ln22_fu_65_p1_temp_3__temp = zext_ln22_fu_65_p1_temp_3 ;
   C_address0__temp = C_address0 ;
   ap_clk__temp = ap_clk ;
   icmp_ln21_fu_53_p2__temp = icmp_ln21_fu_53_p2 ;
   E_d0__temp = E_d0 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C_q0__temp = C_q0 ;
   i_reg_77__temp = i_reg_77 ;
   ap_idle__temp = ap_idle ;
   zext_ln22_reg_82__temp = zext_ln22_reg_82 ;

  if(ap_clk_count == 1 ){
       ap_status = 5;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
C_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
E_we0 = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln21_fu_53_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln22_reg_82 =  ( (  ( ( zext_ln22_reg_82 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       E_address0 = zext_ln22_reg_82;
       E_d0 = mul_ln22_reg_98;
       if(1 == ap_CS_fsm_state5)
       {
           E_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           E_we0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           i_0_reg_42 =  i_reg_77__temp ;
       }
       goto ap_ST_fsm_state2;
   end:
    *C_address0__1=C_address0;
    *C_ce0__1=C_ce0;
    *C_q0__1=C_q0;
    *E_address0__1=E_address0;
    *E_ce0__1=E_ce0;
    *E_d0__1=E_d0;
    *E_we0__1=E_we0;
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
