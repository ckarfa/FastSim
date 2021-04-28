#include<stdio.h>
#define A_DWIDTH 32
void module_1(unsigned long long int *A_address0__1,unsigned long long int *A_ce0__1,unsigned long long int *A_q0__1,unsigned long long int *B_address0__1,unsigned long long int *B_ce0__1,unsigned long long int *B_d0__1,unsigned long long int *B_we0__1,unsigned long long int *C_address0__1,unsigned long long int *C_ce0__1,unsigned long long int *C_d0__1,unsigned long long int *C_we0__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,long long int  *A_ram , int dummy){
unsigned long long int A_address0=*A_address0__1;
unsigned long long int A_ce0=*A_ce0__1;
unsigned long long int A_q0=*A_q0__1;
unsigned long long int B_address0=*B_address0__1;
unsigned long long int B_ce0=*B_ce0__1;
unsigned long long int B_d0=*B_d0__1;
unsigned long long int B_we0=*B_we0__1;
unsigned long long int C_address0=*C_address0__1;
unsigned long long int C_ce0=*C_ce0__1;
unsigned long long int C_d0=*C_d0__1;
unsigned long long int C_we0=*C_we0__1;
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
   static unsigned long long int A_address0__temp=0;
   static unsigned long long int A_address1=0;
   static unsigned long long int A_address1__temp=0;
   static unsigned long long int A_ce0__temp=0;
   static unsigned long long int A_ce1=0;
   static unsigned long long int A_ce1__temp=0;
   static unsigned long long int A_d0=0;
   static unsigned long long int A_d0__temp=0;
   static unsigned long long int A_d1=0;
   static unsigned long long int A_d1__temp=0;
   static unsigned long long int A_q0__temp=0;
   static unsigned long long int A_q1=0;
   static unsigned long long int A_q1__temp=0;
   static unsigned long long int A_we0=0;
   static unsigned long long int A_we0__temp=0;
   static unsigned long long int A_we1=0;
   static unsigned long long int A_we1__temp=0;
   static unsigned long long int B_address0__temp=0;
   static unsigned long long int B_ce0__temp=0;
   static unsigned long long int B_d0__temp=0;
   static unsigned long long int B_we0__temp=0;
   static unsigned long long int C_address0__temp=0;
   static unsigned long long int C_ce0__temp=0;
   static unsigned long long int C_d0__temp=0;
   static unsigned long long int C_we0__temp=0;
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
   static unsigned long long int i_0_reg_61=0;
   static unsigned long long int i_0_reg_61__temp=0;
   static unsigned long long int i_fu_78_p2=0;
   static unsigned long long int i_fu_78_p2__temp=0;
   static unsigned long long int i_reg_112=0;
   static unsigned long long int i_reg_112__temp=0;
   static unsigned long long int icmp_ln7_fu_72_p2=0;
   static unsigned long long int icmp_ln7_fu_72_p2__temp=0;
   static unsigned long long int shl_ln8_fu_89_p2=0;
   static unsigned long long int shl_ln8_fu_89_p2__temp=0;
   static unsigned long long int zext_ln8_fu_84_p1=0;
   static unsigned long long int zext_ln8_fu_84_p1__temp=0;
   static unsigned long long int zext_ln8_fu_84_p1_temp_9=0;
   static unsigned long long int zext_ln8_fu_84_p1_temp_9__temp=0;
   static unsigned long long int zext_ln8_fu_84_p1_temp_9_temp_11=0;
   static unsigned long long int zext_ln8_fu_84_p1_temp_9_temp_11__temp=0;
   static unsigned long long int zext_ln8_reg_117=0;
   static unsigned long long int zext_ln8_reg_117__temp=0;
   static unsigned long long int zext_ln8_reg_117_temp_10=0;
   static unsigned long long int zext_ln8_reg_117_temp_10__temp=0;
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
   A_we0__temp = A_we0 ;
   ap_done_reg__temp = ap_done_reg ;
   C_address0__temp = C_address0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   A_we1__temp = A_we1 ;
   i_reg_112__temp = i_reg_112 ;
   A_address1__temp = A_address1 ;
   A_d1__temp = A_d1 ;
   ap_rst__temp = ap_rst ;
   zext_ln8_fu_84_p1_temp_9_temp_11__temp = zext_ln8_fu_84_p1_temp_9_temp_11 ;
   C_ce0__temp = C_ce0 ;
   B_ce0__temp = B_ce0 ;
   zext_ln8_fu_84_p1__temp = zext_ln8_fu_84_p1 ;
   zext_ln8_reg_117_temp_10__temp = zext_ln8_reg_117_temp_10 ;
   B_we0__temp = B_we0 ;
   zext_ln8_fu_84_p1_temp_9__temp = zext_ln8_fu_84_p1_temp_9 ;
   i_0_reg_61__temp = i_0_reg_61 ;
   C_d0__temp = C_d0 ;
   ap_start__temp = ap_start ;
   ap_continue__temp = ap_continue ;
   B_address0__temp = B_address0 ;
   A_ce1__temp = A_ce1 ;
   A_ce0__temp = A_ce0 ;
   A_d0__temp = A_d0 ;
   A_address0__temp = A_address0 ;
   A_q1__temp = A_q1 ;
   zext_ln8_reg_117__temp = zext_ln8_reg_117 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_fu_78_p2__temp = i_fu_78_p2 ;
   A_q0__temp = A_q0 ;
   shl_ln8_fu_89_p2__temp = shl_ln8_fu_89_p2 ;
   ap_done__temp = ap_done ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_ready__temp = ap_ready ;
   ap_idle__temp = ap_idle ;
   icmp_ln7_fu_72_p2__temp = icmp_ln7_fu_72_p2 ;
   ap_status__temp = ap_status ;
   B_d0__temp = B_d0 ;
   ap_clk__temp = ap_clk ;
   C_we0__temp = C_we0 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( i_0_reg_61__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_we0 = 0 ; 
}
       if(!((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln8_reg_117 =  ( (  ( ( zext_ln8_reg_117 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
      
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_61 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!(((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))) == 0){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_61 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
   A_we0__temp = A_we0 ;
   ap_done_reg__temp = ap_done_reg ;
   C_address0__temp = C_address0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   A_we1__temp = A_we1 ;
   i_reg_112__temp = i_reg_112 ;
   A_address1__temp = A_address1 ;
   A_d1__temp = A_d1 ;
   ap_rst__temp = ap_rst ;
   zext_ln8_fu_84_p1_temp_9_temp_11__temp = zext_ln8_fu_84_p1_temp_9_temp_11 ;
   C_ce0__temp = C_ce0 ;
   B_ce0__temp = B_ce0 ;
   zext_ln8_fu_84_p1__temp = zext_ln8_fu_84_p1 ;
   zext_ln8_reg_117_temp_10__temp = zext_ln8_reg_117_temp_10 ;
   B_we0__temp = B_we0 ;
   zext_ln8_fu_84_p1_temp_9__temp = zext_ln8_fu_84_p1_temp_9 ;
   i_0_reg_61__temp = i_0_reg_61 ;
   C_d0__temp = C_d0 ;
   ap_start__temp = ap_start ;
   ap_continue__temp = ap_continue ;
   B_address0__temp = B_address0 ;
   A_ce1__temp = A_ce1 ;
   A_ce0__temp = A_ce0 ;
   A_d0__temp = A_d0 ;
   A_address0__temp = A_address0 ;
   A_q1__temp = A_q1 ;
   zext_ln8_reg_117__temp = zext_ln8_reg_117 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_fu_78_p2__temp = i_fu_78_p2 ;
   A_q0__temp = A_q0 ;
   shl_ln8_fu_89_p2__temp = shl_ln8_fu_89_p2 ;
   ap_done__temp = ap_done ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_ready__temp = ap_ready ;
   ap_idle__temp = ap_idle ;
   icmp_ln7_fu_72_p2__temp = icmp_ln7_fu_72_p2 ;
   ap_status__temp = ap_status ;
   B_d0__temp = B_d0 ;
   ap_clk__temp = ap_clk ;
   C_we0__temp = C_we0 ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( i_0_reg_61__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_we0 = 0 ; 
}
       if(!((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln8_reg_117 =  ( (  ( ( zext_ln8_reg_117 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
               icmp_ln7_fu_72_p2 =   ( i_0_reg_61__temp  == 5 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           A_ce0 =  1;
       }
       if((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               icmp_ln7_fu_72_p2 =   ( i_0_reg_61__temp  == 5 ? 1 :  0 ) ;
   if(((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_112 =   ( ( i_0_reg_61__temp  + 1 ) & 7 ) ;
       }
       if((icmp_ln7_fu_72_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           zext_ln8_reg_117 =   ( (  ( (  ( i_0_reg_61__temp  & 18446744073709551615 )  & 7 ) & 18446744073709551615 )  |  ( ( zext_ln8_reg_117__temp  & 18446744073709551608 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(A_ce0){
          A_q0 = A_ram[A_address0];
           if(A_we0){
              A_ram[A_address0] = A_d0;
           }
       }
       if(ap_done==1){
           //ap_status = 0;
           //goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_112 =   ( ( i_0_reg_61__temp  + 1 ) & 7 ) ;
       }
       if((icmp_ln7_fu_72_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               zext_ln8_reg_117 =   ( (  ( (  ( i_0_reg_61__temp  & 18446744073709551615 )  & 7 ) & 18446744073709551615 )  |  ( ( zext_ln8_reg_117__temp  & 18446744073709551608 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(A_ce0){
          A_q0 = A_ram[A_address0];
           if(A_we0){
              A_ram[A_address0] = A_d0;
           }
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
   A_we0__temp = A_we0 ;
   ap_done_reg__temp = ap_done_reg ;
   C_address0__temp = C_address0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   A_we1__temp = A_we1 ;
   i_reg_112__temp = i_reg_112 ;
   A_address1__temp = A_address1 ;
   A_d1__temp = A_d1 ;
   ap_rst__temp = ap_rst ;
   zext_ln8_fu_84_p1_temp_9_temp_11__temp = zext_ln8_fu_84_p1_temp_9_temp_11 ;
   C_ce0__temp = C_ce0 ;
   B_ce0__temp = B_ce0 ;
   zext_ln8_fu_84_p1__temp = zext_ln8_fu_84_p1 ;
   zext_ln8_reg_117_temp_10__temp = zext_ln8_reg_117_temp_10 ;
   B_we0__temp = B_we0 ;
   zext_ln8_fu_84_p1_temp_9__temp = zext_ln8_fu_84_p1_temp_9 ;
   i_0_reg_61__temp = i_0_reg_61 ;
   C_d0__temp = C_d0 ;
   ap_start__temp = ap_start ;
   ap_continue__temp = ap_continue ;
   B_address0__temp = B_address0 ;
   A_ce1__temp = A_ce1 ;
   A_ce0__temp = A_ce0 ;
   A_d0__temp = A_d0 ;
   A_address0__temp = A_address0 ;
   A_q1__temp = A_q1 ;
   zext_ln8_reg_117__temp = zext_ln8_reg_117 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_fu_78_p2__temp = i_fu_78_p2 ;
   A_q0__temp = A_q0 ;
   shl_ln8_fu_89_p2__temp = shl_ln8_fu_89_p2 ;
   ap_done__temp = ap_done ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_ready__temp = ap_ready ;
   ap_idle__temp = ap_idle ;
   icmp_ln7_fu_72_p2__temp = icmp_ln7_fu_72_p2 ;
   ap_status__temp = ap_status ;
   B_d0__temp = B_d0 ;
   ap_clk__temp = ap_clk ;
   C_we0__temp = C_we0 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( i_0_reg_61__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_we0 = 0 ; 
}
       if(!((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln7_fu_72_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln8_reg_117 =  ( (  ( ( zext_ln8_reg_117 & 7 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       B_address0 = zext_ln8_reg_117;
       C_address0 = zext_ln8_reg_117;
       B_d0 = A_q0 + (A_q0 << 3);
       C_d0 = A_q0 << 1;
       if(1 == ap_CS_fsm_state3)
       {
           B_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           B_we0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           C_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           C_we0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i_0_reg_61 =  i_reg_112__temp ;
       }
       goto ap_ST_fsm_state2;
   end:
    *A_address0__1=A_address0;
    *A_ce0__1=A_ce0;
    *A_q0__1=A_q0;
    *B_address0__1=B_address0;
    *B_ce0__1=B_ce0;
    *B_d0__1=B_d0;
    *B_we0__1=B_we0;
    *C_address0__1=C_address0;
    *C_ce0__1=C_ce0;
    *C_d0__1=C_d0;
    *C_we0__1=C_we0;
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
