#include<stdio.h>
#define A_DWIDTH 32
void module_1(unsigned long long int *A_address0__1,unsigned long long int *A_ce0__1,unsigned long long int *A_q0__1,unsigned long long int *B_din__1,unsigned long long int *B_full_n__1,unsigned long long int *B_write__1,unsigned long long int *C_din__1,unsigned long long int *C_full_n__1,unsigned long long int *C_write__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,unsigned long long int *start_full_n__1,unsigned long long int *start_out__1,unsigned long long int *start_write__1,long long int  *A_ram , int dummy){
unsigned long long int A_address0=*A_address0__1;
unsigned long long int A_ce0=*A_ce0__1;
unsigned long long int A_q0=*A_q0__1;
unsigned long long int B_din=*B_din__1;
unsigned long long int B_full_n=*B_full_n__1;
unsigned long long int B_write=*B_write__1;
unsigned long long int C_din=*C_din__1;
unsigned long long int C_full_n=*C_full_n__1;
unsigned long long int C_write=*C_write__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
unsigned long long int start_full_n=*start_full_n__1;
unsigned long long int start_out=*start_out__1;
unsigned long long int start_write=*start_write__1;
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
   static unsigned long long int B_blk_n=0;
   static unsigned long long int B_blk_n__temp=0;
   static unsigned long long int B_din__temp=0;
   static unsigned long long int B_full_n__temp=0;
   static unsigned long long int B_write__temp=0;
   static unsigned long long int C_blk_n=0;
   static unsigned long long int C_blk_n__temp=0;
   static unsigned long long int C_din__temp=0;
   static unsigned long long int C_full_n__temp=0;
   static unsigned long long int C_write__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   static unsigned long long int ap_NS_fsm=0;
   static unsigned long long int ap_NS_fsm__temp=0;
   static unsigned long long int ap_block_state1=0;
   static unsigned long long int ap_block_state1__temp=0;
   static unsigned long long int ap_block_state3=0;
   static unsigned long long int ap_block_state3__temp=0;
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
   static unsigned long long int i_0_reg_63=0;
   static unsigned long long int i_0_reg_63__temp=0;
   static unsigned long long int i_fu_80_p2=0;
   static unsigned long long int i_fu_80_p2__temp=0;
   static unsigned long long int i_reg_114=0;
   static unsigned long long int i_reg_114__temp=0;
   static unsigned long long int icmp_ln7_fu_74_p2=0;
   static unsigned long long int icmp_ln7_fu_74_p2__temp=0;
   static unsigned long long int internal_ap_ready=0;
   static unsigned long long int internal_ap_ready__temp=0;
   static unsigned long long int real_start=0;
   static unsigned long long int real_start__temp=0;
   static unsigned long long int shl_ln8_fu_91_p2=0;
   static unsigned long long int shl_ln8_fu_91_p2__temp=0;
   static unsigned long long int start_full_n__temp=0;
   static unsigned long long int start_once_reg=0;
   static unsigned long long int start_once_reg__temp=0;
   static unsigned long long int start_out__temp=0;
   static unsigned long long int start_write__temp=0;
   static unsigned long long int zext_ln8_fu_86_p1=0;
   static unsigned long long int zext_ln8_fu_86_p1__temp=0;
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
   B_write__temp = B_write ;
   C_blk_n__temp = C_blk_n ;
   ap_block_state1__temp = ap_block_state1 ;
   B_din__temp = B_din ;
   A_q0__temp = A_q0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   start_out__temp = start_out ;
   C_full_n__temp = C_full_n ;
   A_address1__temp = A_address1 ;
   real_start__temp = real_start ;
   ap_continue__temp = ap_continue ;
   start_full_n__temp = start_full_n ;
   B_full_n__temp = B_full_n ;
   A_address0__temp = A_address0 ;
   start_once_reg__temp = start_once_reg ;
   ap_idle__temp = ap_idle ;
   A_ce0__temp = A_ce0 ;
   i_reg_114__temp = i_reg_114 ;
   icmp_ln7_fu_74_p2__temp = icmp_ln7_fu_74_p2 ;
   i_fu_80_p2__temp = i_fu_80_p2 ;
   shl_ln8_fu_91_p2__temp = shl_ln8_fu_91_p2 ;
   A_we0__temp = A_we0 ;
   A_q1__temp = A_q1 ;
   ap_block_state3__temp = ap_block_state3 ;
   B_blk_n__temp = B_blk_n ;
   A_we1__temp = A_we1 ;
   C_din__temp = C_din ;
   C_write__temp = C_write ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln8_fu_86_p1__temp = zext_ln8_fu_86_p1 ;
   A_ce1__temp = A_ce1 ;
   ap_clk__temp = ap_clk ;
   ap_ready__temp = ap_ready ;
   internal_ap_ready__temp = internal_ap_ready ;
   A_d1__temp = A_d1 ;
   ap_rst__temp = ap_rst ;
   ap_start__temp = ap_start ;
   A_d0__temp = A_d0 ;
   ap_done__temp = ap_done ;
   ap_done_reg__temp = ap_done_reg ;
   i_0_reg_63__temp = i_0_reg_63 ;
   start_write__temp = start_write ;
   ap_status__temp = ap_status ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( i_0_reg_63__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(ap_rst == 1){
start_once_reg = 0 ; 
}
if(!(ap_rst == 1)){
if((internal_ap_ready == 0) && (real_start == 1)){
start_once_reg = 1 ; 
}
if(!((internal_ap_ready == 0) && (real_start == 1))){
if(internal_ap_ready == 1){
start_once_reg = 0 ; 
}
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_blk_n = 1 ; 
}
       if(!((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))){
B_write = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_blk_n = 1 ; 
}
       if(!((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))){
C_write = 0 ; 
}
       if(!((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))){
internal_ap_ready = 0 ; 
}
       if((start_once_reg == 0) && (start_full_n == 0)){
real_start = 0 ; 
}
if(!((start_once_reg == 0) && (start_full_n == 0))){
real_start = ( ap_start & 1 )  ; 
}
       if((start_once_reg == 0) && (real_start == 1)){
start_write = 1 ; 
}
if(!((start_once_reg == 0) && (real_start == 1))){
start_write = 0 ; 
}
       ap_block_state1 =  ( (  ( ( real_start == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state3 =  ( (  ( ( 0 == ( C_full_n & 1 )  ) & 1 )  |  ( ( 0 == ( B_full_n & 1 )  ) & 1 )  ) & 1 )  ; 
               
       if((real_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               C_full_n =  ( C_full_n & 1 ) ;
              ap_ready = internal_ap_ready;
               B_full_n =  ( B_full_n & 1 ) ;
               start_out = real_start;
   if(((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_63 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_63 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
   B_write__temp = B_write ;
   C_blk_n__temp = C_blk_n ;
   ap_block_state1__temp = ap_block_state1 ;
   B_din__temp = B_din ;
   A_q0__temp = A_q0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   start_out__temp = start_out ;
   C_full_n__temp = C_full_n ;
   A_address1__temp = A_address1 ;
   real_start__temp = real_start ;
   ap_continue__temp = ap_continue ;
   start_full_n__temp = start_full_n ;
   B_full_n__temp = B_full_n ;
   A_address0__temp = A_address0 ;
   start_once_reg__temp = start_once_reg ;
   ap_idle__temp = ap_idle ;
   A_ce0__temp = A_ce0 ;
   i_reg_114__temp = i_reg_114 ;
   icmp_ln7_fu_74_p2__temp = icmp_ln7_fu_74_p2 ;
   i_fu_80_p2__temp = i_fu_80_p2 ;
   shl_ln8_fu_91_p2__temp = shl_ln8_fu_91_p2 ;
   A_we0__temp = A_we0 ;
   A_q1__temp = A_q1 ;
   ap_block_state3__temp = ap_block_state3 ;
   B_blk_n__temp = B_blk_n ;
   A_we1__temp = A_we1 ;
   C_din__temp = C_din ;
   C_write__temp = C_write ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln8_fu_86_p1__temp = zext_ln8_fu_86_p1 ;
   A_ce1__temp = A_ce1 ;
   ap_clk__temp = ap_clk ;
   ap_ready__temp = ap_ready ;
   internal_ap_ready__temp = internal_ap_ready ;
   A_d1__temp = A_d1 ;
   ap_rst__temp = ap_rst ;
   ap_start__temp = ap_start ;
   A_d0__temp = A_d0 ;
   ap_done__temp = ap_done ;
   ap_done_reg__temp = ap_done_reg ;
   i_0_reg_63__temp = i_0_reg_63 ;
   start_write__temp = start_write ;
   ap_status__temp = ap_status ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( i_0_reg_63__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(ap_rst == 1){
start_once_reg = 0 ; 
}
if(!(ap_rst == 1)){
if((internal_ap_ready == 0) && (real_start == 1)){
start_once_reg = 1 ; 
}
if(!((internal_ap_ready == 0) && (real_start == 1))){
if(internal_ap_ready == 1){
start_once_reg = 0 ; 
}
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_blk_n = 1 ; 
}
       if(!((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))){
B_write = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_blk_n = 1 ; 
}
       if(!((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))){
C_write = 0 ; 
}
       if(!((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))){
internal_ap_ready = 0 ; 
}
       if((start_once_reg == 0) && (start_full_n == 0)){
real_start = 0 ; 
}
if(!((start_once_reg == 0) && (start_full_n == 0))){
real_start = ( ap_start & 1 )  ; 
}
       if((start_once_reg == 0) && (real_start == 1)){
start_write = 1 ; 
}
if(!((start_once_reg == 0) && (real_start == 1))){
start_write = 0 ; 
}
       ap_block_state1 =  ( (  ( ( real_start == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state3 =  ( (  ( ( 0 == ( C_full_n & 1 )  ) & 1 )  |  ( ( 0 == ( B_full_n & 1 )  ) & 1 )  ) & 1 )  ; 
               icmp_ln7_fu_74_p2 =   ( i_0_reg_63__temp  == 5 ? 1 :  0 ) ;
       start_out = real_start;
       if(1 == ap_CS_fsm_state2)
       {
           A_ce0 =  1;
       }
       if((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           internal_ap_ready =  1;
       }
              ap_ready = internal_ap_ready;
               icmp_ln7_fu_74_p2 =   ( i_0_reg_63__temp  == 5 ? 1 :  0 ) ;
   if(((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_114 =   ( ( i_0_reg_63__temp  + 1 ) & 7 ) ;
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
   if(((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_114 =   ( ( i_0_reg_63__temp  + 1 ) & 7 ) ;
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
   B_write__temp = B_write ;
   C_blk_n__temp = C_blk_n ;
   ap_block_state1__temp = ap_block_state1 ;
   B_din__temp = B_din ;
   A_q0__temp = A_q0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   start_out__temp = start_out ;
   C_full_n__temp = C_full_n ;
   A_address1__temp = A_address1 ;
   real_start__temp = real_start ;
   ap_continue__temp = ap_continue ;
   start_full_n__temp = start_full_n ;
   B_full_n__temp = B_full_n ;
   A_address0__temp = A_address0 ;
   start_once_reg__temp = start_once_reg ;
   ap_idle__temp = ap_idle ;
   A_ce0__temp = A_ce0 ;
   i_reg_114__temp = i_reg_114 ;
   icmp_ln7_fu_74_p2__temp = icmp_ln7_fu_74_p2 ;
   i_fu_80_p2__temp = i_fu_80_p2 ;
   shl_ln8_fu_91_p2__temp = shl_ln8_fu_91_p2 ;
   A_we0__temp = A_we0 ;
   A_q1__temp = A_q1 ;
   ap_block_state3__temp = ap_block_state3 ;
   B_blk_n__temp = B_blk_n ;
   A_we1__temp = A_we1 ;
   C_din__temp = C_din ;
   C_write__temp = C_write ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln8_fu_86_p1__temp = zext_ln8_fu_86_p1 ;
   A_ce1__temp = A_ce1 ;
   ap_clk__temp = ap_clk ;
   ap_ready__temp = ap_ready ;
   internal_ap_ready__temp = internal_ap_ready ;
   A_d1__temp = A_d1 ;
   ap_rst__temp = ap_rst ;
   ap_start__temp = ap_start ;
   A_d0__temp = A_d0 ;
   ap_done__temp = ap_done ;
   ap_done_reg__temp = ap_done_reg ;
   i_0_reg_63__temp = i_0_reg_63 ;
   start_write__temp = start_write ;
   ap_status__temp = ap_status ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( i_0_reg_63__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(ap_rst == 1){
start_once_reg = 0 ; 
}
if(!(ap_rst == 1)){
if((internal_ap_ready == 0) && (real_start == 1)){
start_once_reg = 1 ; 
}
if(!((internal_ap_ready == 0) && (real_start == 1))){
if(internal_ap_ready == 1){
start_once_reg = 0 ; 
}
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
B_blk_n = 1 ; 
}
       if(!((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))){
B_write = 0 ; 
}
       if(!(1 == ap_CS_fsm_state3)){
C_blk_n = 1 ; 
}
       if(!((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))){
C_write = 0 ; 
}
       if(!((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln7_fu_74_p2 == 1) && (1 == ap_CS_fsm_state2))){
internal_ap_ready = 0 ; 
}
       if((start_once_reg == 0) && (start_full_n == 0)){
real_start = 0 ; 
}
if(!((start_once_reg == 0) && (start_full_n == 0))){
real_start = ( ap_start & 1 )  ; 
}
       if((start_once_reg == 0) && (real_start == 1)){
start_write = 1 ; 
}
if(!((start_once_reg == 0) && (real_start == 1))){
start_write = 0 ; 
}
       ap_block_state1 =  ( (  ( ( real_start == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state3 =  ( (  ( ( 0 == ( C_full_n & 1 )  ) & 1 )  |  ( ( 0 == ( B_full_n & 1 )  ) & 1 )  ) & 1 )  ; 
               B_full_n =  ( B_full_n & 1 ) ;
               C_full_n =  ( C_full_n & 1 ) ;
                B_din = A_q0 + (A_q0 << 3);
                C_din = A_q0 << 1;
                ap_ready = internal_ap_ready;
                start_out = real_start;
       if(1 == ap_CS_fsm_state3)
       {
           B_blk_n =  ( B_full_n & 1 ) ;
       }
       if((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))
       {
           B_write =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           C_blk_n =  ( C_full_n & 1 ) ;
       }
       if((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))
       {
           C_write =  1;
       }
               C_full_n =  ( C_full_n & 1 ) ;
               B_full_n =  ( B_full_n & 1 ) ;
   if(((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3)) == 1){
       if((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))
       {
           i_0_reg_63 =  i_reg_114__temp ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3)) == 0){
       if((!((0 == C_full_n) || (0 == B_full_n))) && (1 == ap_CS_fsm_state3))
       {
               i_0_reg_63 =  i_reg_114__temp ;
       }
       goto ap_ST_fsm_state3;
   }
   end:
    *A_address0__1=A_address0;
    *A_ce0__1=A_ce0;
    *A_q0__1=A_q0;
    *B_din__1=B_din;
    *B_full_n__1=B_full_n;
    *B_write__1=B_write;
    *C_din__1=C_din;
    *C_full_n__1=C_full_n;
    *C_write__1=C_write;
    *ap_clk__1=ap_clk;
    *ap_continue__1=ap_continue;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *ap_status__1=ap_status;
    *start_full_n__1=start_full_n;
    *start_out__1=start_out;
    *start_write__1=start_write;
       return;
}
