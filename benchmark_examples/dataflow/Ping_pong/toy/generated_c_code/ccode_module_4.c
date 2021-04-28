#include<stdio.h>
#define F_DWIDTH 32
void module_4(unsigned long long int *D_address0__1,unsigned long long int *D_ce0__1,unsigned long long int *D_q0__1,unsigned long long int *E_address0__1,unsigned long long int *E_ce0__1,unsigned long long int *E_q0__1,unsigned long long int *F_address0__1,unsigned long long int *F_ce0__1,unsigned long long int *F_d0__1,unsigned long long int *F_we0__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,long long int  *F_ram , int dummy){
unsigned long long int D_address0=*D_address0__1;
unsigned long long int D_ce0=*D_ce0__1;
unsigned long long int D_q0=*D_q0__1;
unsigned long long int E_address0=*E_address0__1;
unsigned long long int E_ce0=*E_ce0__1;
unsigned long long int E_q0=*E_q0__1;
unsigned long long int F_address0=*F_address0__1;
unsigned long long int F_ce0=*F_ce0__1;
unsigned long long int F_d0=*F_d0__1;
unsigned long long int F_we0=*F_we0__1;
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
   static unsigned long long int D_address0__temp=0;
   static unsigned long long int D_ce0__temp=0;
   static unsigned long long int D_q0__temp=0;
   static unsigned long long int E_address0__temp=0;
   static unsigned long long int E_ce0__temp=0;
   static unsigned long long int E_q0__temp=0;
   static unsigned long long int F_address0__temp=0;
   static unsigned long long int F_ce0__temp=0;
   static unsigned long long int F_d0__temp=0;
   static unsigned long long int F_q0=0;
   static unsigned long long int F_q0__temp=0;
   static unsigned long long int F_we0__temp=0;
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
   static unsigned long long int i_0_reg_57=0;
   static unsigned long long int i_0_reg_57__temp=0;
   static unsigned long long int i_fu_74_p2=0;
   static unsigned long long int i_fu_74_p2__temp=0;
   static unsigned long long int i_reg_96=0;
   static unsigned long long int i_reg_96__temp=0;
   static unsigned long long int icmp_ln27_fu_68_p2=0;
   static unsigned long long int icmp_ln27_fu_68_p2__temp=0;
   static unsigned long long int zext_ln28_fu_80_p1=0;
   static unsigned long long int zext_ln28_fu_80_p1__temp=0;
   static unsigned long long int zext_ln28_fu_80_p1_temp_0=0;
   static unsigned long long int zext_ln28_fu_80_p1_temp_0__temp=0;
   static unsigned long long int zext_ln28_fu_80_p1_temp_0_temp_2=0;
   static unsigned long long int zext_ln28_fu_80_p1_temp_0_temp_2__temp=0;
   static unsigned long long int zext_ln28_reg_101=0;
   static unsigned long long int zext_ln28_reg_101__temp=0;
   static unsigned long long int zext_ln28_reg_101_temp_1=0;
   static unsigned long long int zext_ln28_reg_101_temp_1__temp=0;
    unsigned long long int  ap_clk_count = 0;
    

switch(ap_status){
	case 1:
		goto ap_ST_fsm_state1;
	case 2:
		goto ap_ST_fsm_state2;
	case 3:
		goto ap_ST_fsm_state3;
	default: 
		 goto end;
}

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
   zext_ln28_fu_80_p1__temp = zext_ln28_fu_80_p1 ;
   E_ce0__temp = E_ce0 ;
   i_reg_96__temp = i_reg_96 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_idle__temp = ap_idle ;
   F_d0__temp = F_d0 ;
   zext_ln28_reg_101__temp = zext_ln28_reg_101 ;
   zext_ln28_fu_80_p1_temp_0_temp_2__temp = zext_ln28_fu_80_p1_temp_0_temp_2 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_block_state1__temp = ap_block_state1 ;
   F_we0__temp = F_we0 ;
   E_q0__temp = E_q0 ;
   ap_start__temp = ap_start ;
   zext_ln28_reg_101_temp_1__temp = zext_ln28_reg_101_temp_1 ;
   ap_rst__temp = ap_rst ;
   D_q0__temp = D_q0 ;
   F_ce0__temp = F_ce0 ;
   F_q0__temp = F_q0 ;
   E_address0__temp = E_address0 ;
   ap_status__temp = ap_status ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   icmp_ln27_fu_68_p2__temp = icmp_ln27_fu_68_p2 ;
   i_0_reg_57__temp = i_0_reg_57 ;
   zext_ln28_fu_80_p1_temp_0__temp = zext_ln28_fu_80_p1_temp_0 ;
   ap_continue__temp = ap_continue ;
   ap_ready__temp = ap_ready ;
   D_address0__temp = D_address0 ;
   F_address0__temp = F_address0 ;
   D_ce0__temp = D_ce0 ;
   ap_done__temp = ap_done ;
   ap_clk__temp = ap_clk ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       F_ce0 = 0;
       F_we0 = 0;
       F_address0 =   ( zext_ln28_reg_101__temp  & 18446744073709551615 ) ;
       F_d0 =   ( ( ( D_q0 & 4294967295 )  + ( E_q0 & 4294967295 )  ) & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
D_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
E_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
F_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
F_we0 = 0 ; 
}
       if(!((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln28_reg_101 =  ( (  ( ( zext_ln28_reg_101 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_57 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_57 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
   zext_ln28_fu_80_p1__temp = zext_ln28_fu_80_p1 ;
   E_ce0__temp = E_ce0 ;
   i_reg_96__temp = i_reg_96 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_idle__temp = ap_idle ;
   F_d0__temp = F_d0 ;
   zext_ln28_reg_101__temp = zext_ln28_reg_101 ;
   zext_ln28_fu_80_p1_temp_0_temp_2__temp = zext_ln28_fu_80_p1_temp_0_temp_2 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_block_state1__temp = ap_block_state1 ;
   F_we0__temp = F_we0 ;
   E_q0__temp = E_q0 ;
   ap_start__temp = ap_start ;
   zext_ln28_reg_101_temp_1__temp = zext_ln28_reg_101_temp_1 ;
   ap_rst__temp = ap_rst ;
   D_q0__temp = D_q0 ;
   F_ce0__temp = F_ce0 ;
   F_q0__temp = F_q0 ;
   E_address0__temp = E_address0 ;
   ap_status__temp = ap_status ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   icmp_ln27_fu_68_p2__temp = icmp_ln27_fu_68_p2 ;
   i_0_reg_57__temp = i_0_reg_57 ;
   zext_ln28_fu_80_p1_temp_0__temp = zext_ln28_fu_80_p1_temp_0 ;
   ap_continue__temp = ap_continue ;
   ap_ready__temp = ap_ready ;
   D_address0__temp = D_address0 ;
   F_address0__temp = F_address0 ;
   D_ce0__temp = D_ce0 ;
   ap_done__temp = ap_done ;
   ap_clk__temp = ap_clk ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       F_ce0 = 0;
       F_we0 = 0;
       F_address0 =   ( zext_ln28_reg_101__temp  & 18446744073709551615 ) ;
       F_d0 =   ( ( ( D_q0 & 4294967295 )  + ( E_q0 & 4294967295 )  ) & 18446744073709551615 ) ;
       D_address0 = i_0_reg_57__temp;
       E_address0 = i_0_reg_57__temp;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
D_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
E_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
F_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
F_we0 = 0 ; 
}
       if(!((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln28_reg_101 =  ( (  ( ( zext_ln28_reg_101 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
               icmp_ln27_fu_68_p2 =   ( i_0_reg_57__temp  == 5 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           D_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           E_ce0 =  1;
       }
       if((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               icmp_ln27_fu_68_p2 =   ( i_0_reg_57__temp  == 5 ? 1 :  0 ) ;
   if(((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_96 =   ( ( i_0_reg_57__temp  + 1 ) & 7 ) ;
       }
       if((icmp_ln27_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           zext_ln28_reg_101 =   ( (  ( (  ( i_0_reg_57__temp  & 18446744073709551615 )  & 7 ) & 18446744073709551615 )  |  ( ( zext_ln28_reg_101__temp  & 18446744073709551608 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(ap_done==1){
         //  ap_status = 0;
         //  goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_96 =   ( ( i_0_reg_57__temp  + 1 ) & 7 ) ;
       }
       if((icmp_ln27_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               zext_ln28_reg_101 =   ( (  ( (  ( i_0_reg_57__temp  & 18446744073709551615 )  & 7 ) & 18446744073709551615 )  |  ( ( zext_ln28_reg_101__temp  & 18446744073709551608 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
   zext_ln28_fu_80_p1__temp = zext_ln28_fu_80_p1 ;
   E_ce0__temp = E_ce0 ;
   i_reg_96__temp = i_reg_96 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_idle__temp = ap_idle ;
   F_d0__temp = F_d0 ;
   zext_ln28_reg_101__temp = zext_ln28_reg_101 ;
   zext_ln28_fu_80_p1_temp_0_temp_2__temp = zext_ln28_fu_80_p1_temp_0_temp_2 ;
   ap_done_reg__temp = ap_done_reg ;
   ap_block_state1__temp = ap_block_state1 ;
   F_we0__temp = F_we0 ;
   E_q0__temp = E_q0 ;
   ap_start__temp = ap_start ;
   zext_ln28_reg_101_temp_1__temp = zext_ln28_reg_101_temp_1 ;
   ap_rst__temp = ap_rst ;
   D_q0__temp = D_q0 ;
   F_ce0__temp = F_ce0 ;
   F_q0__temp = F_q0 ;
   E_address0__temp = E_address0 ;
   ap_status__temp = ap_status ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   icmp_ln27_fu_68_p2__temp = icmp_ln27_fu_68_p2 ;
   i_0_reg_57__temp = i_0_reg_57 ;
   zext_ln28_fu_80_p1_temp_0__temp = zext_ln28_fu_80_p1_temp_0 ;
   ap_continue__temp = ap_continue ;
   ap_ready__temp = ap_ready ;
   D_address0__temp = D_address0 ;
   F_address0__temp = F_address0 ;
   D_ce0__temp = D_ce0 ;
   ap_done__temp = ap_done ;
   ap_clk__temp = ap_clk ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       F_ce0 = 0;
       F_we0 = 0;
       F_address0 =   ( zext_ln28_reg_101__temp  & 18446744073709551615 ) ;
       F_d0 =   ( ( ( D_q0 & 4294967295 )  + ( E_q0 & 4294967295 )  ) & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
D_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
E_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
F_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
F_we0 = 0 ; 
}
       if(!((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln27_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln28_reg_101 =  ( (  ( ( zext_ln28_reg_101 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           F_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           F_we0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i_0_reg_57 =  i_reg_96__temp ;
       }
       if(F_ce0){
          F_q0 = F_ram[F_address0];
           if(F_we0){
              F_ram[F_address0] = F_d0;
           }
       }
       goto ap_ST_fsm_state2;
   end:
    *D_address0__1=D_address0;
    *D_ce0__1=D_ce0;
    *D_q0__1=D_q0;
    *E_address0__1=E_address0;
    *E_ce0__1=E_ce0;
    *E_q0__1=E_q0;
    *F_address0__1=F_address0;
    *F_ce0__1=F_ce0;
    *F_d0__1=F_d0;
    *F_we0__1=F_we0;
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
