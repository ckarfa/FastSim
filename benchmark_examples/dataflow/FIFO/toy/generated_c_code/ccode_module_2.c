#include<stdio.h>
void module_2(unsigned long long int *B_dout__1,unsigned long long int *B_empty_n__1,unsigned long long int *B_read__1,unsigned long long int *D_din__1,unsigned long long int *D_full_n__1,unsigned long long int *D_write__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,unsigned long long int *start_full_n__1,unsigned long long int *start_out__1,unsigned long long int *start_write__1,int dummy){
unsigned long long int B_dout=*B_dout__1;
unsigned long long int B_empty_n=*B_empty_n__1;
unsigned long long int B_read=*B_read__1;
unsigned long long int D_din=*D_din__1;
unsigned long long int D_full_n=*D_full_n__1;
unsigned long long int D_write=*D_write__1;
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
   static long long int B_read_reg_78=0;
   static long long int B_read_reg_78__temp=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   static unsigned long long int B_blk_n=0;
   static unsigned long long int B_blk_n__temp=0;
   static unsigned long long int B_dout__temp=0;
   static unsigned long long int B_empty_n__temp=0;
   static unsigned long long int B_read__temp=0;
   static unsigned long long int D_blk_n=0;
   static unsigned long long int D_blk_n__temp=0;
   static unsigned long long int D_din__temp=0;
   static unsigned long long int D_full_n__temp=0;
   static unsigned long long int D_write__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   static unsigned long long int ap_NS_fsm=0;
   static unsigned long long int ap_NS_fsm__temp=0;
   static unsigned long long int ap_block_state1=0;
   static unsigned long long int ap_block_state1__temp=0;
   static unsigned long long int ap_block_state2=0;
   static unsigned long long int ap_block_state2__temp=0;
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
   static unsigned long long int i_0_reg_43=0;
   static unsigned long long int i_0_reg_43__temp=0;
   static unsigned long long int i_fu_60_p2=0;
   static unsigned long long int i_fu_60_p2__temp=0;
   static unsigned long long int i_reg_73=0;
   static unsigned long long int i_reg_73__temp=0;
   static unsigned long long int icmp_ln15_fu_54_p2=0;
   static unsigned long long int icmp_ln15_fu_54_p2__temp=0;
   static unsigned long long int internal_ap_ready=0;
   static unsigned long long int internal_ap_ready__temp=0;
   static unsigned long long int mul_ln16_fu_66_p2=0;
   static unsigned long long int mul_ln16_fu_66_p2__temp=0;
   static unsigned long long int mul_ln16_reg_84=0;
   static unsigned long long int mul_ln16_reg_84__temp=0;
   static unsigned long long int real_start=0;
   static unsigned long long int real_start__temp=0;
   static unsigned long long int start_full_n__temp=0;
   static unsigned long long int start_once_reg=0;
   static unsigned long long int start_once_reg__temp=0;
   static unsigned long long int start_out__temp=0;
   static unsigned long long int start_write__temp=0;
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
	default: 
		 goto end;
}

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
   B_read_reg_78__temp = B_read_reg_78 ;
   B_blk_n__temp = B_blk_n ;
   ap_block_state2__temp = ap_block_state2 ;
   B_empty_n__temp = B_empty_n ;
   mul_ln16_reg_84__temp = mul_ln16_reg_84 ;
   ap_rst__temp = ap_rst ;
   i_0_reg_43__temp = i_0_reg_43 ;
   B_read__temp = B_read ;
   ap_idle__temp = ap_idle ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   D_write__temp = D_write ;
   ap_done_reg__temp = ap_done_reg ;
   D_blk_n__temp = D_blk_n ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   start_out__temp = start_out ;
   internal_ap_ready__temp = internal_ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   D_din__temp = D_din ;
   ap_continue__temp = ap_continue ;
   B_dout__temp = B_dout ;
   D_full_n__temp = D_full_n ;
   ap_done__temp = ap_done ;
   start_full_n__temp = start_full_n ;
   start_once_reg__temp = start_once_reg ;
   i_reg_73__temp = i_reg_73 ;
   mul_ln16_fu_66_p2__temp = mul_ln16_fu_66_p2 ;
   icmp_ln15_fu_54_p2__temp = icmp_ln15_fu_54_p2 ;
   i_fu_60_p2__temp = i_fu_60_p2 ;
   start_write__temp = start_write ;
   ap_status__temp = ap_status ;
   real_start__temp = real_start ;
   ap_block_state1__temp = ap_block_state1 ;

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
       if(!((icmp_ln15_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))){
B_blk_n = 1 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))){
B_read = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
D_blk_n = 1 ; 
}
       if(!((1 == D_full_n) && (1 == ap_CS_fsm_state4))){
D_write = 0 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
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
       ap_block_state2 =  ( (  ( (  ( i_0_reg_43 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( B_empty_n & 1 )  ) & 1 )  ) & 1 )  ; 
               
       if((real_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               ap_ready = internal_ap_ready;
               start_out = real_start;
               D_full_n =  ( D_full_n & 1 ) ;
   if(((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_43 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_43 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
   B_read_reg_78__temp = B_read_reg_78 ;
   B_blk_n__temp = B_blk_n ;
   ap_block_state2__temp = ap_block_state2 ;
   B_empty_n__temp = B_empty_n ;
   mul_ln16_reg_84__temp = mul_ln16_reg_84 ;
   ap_rst__temp = ap_rst ;
   i_0_reg_43__temp = i_0_reg_43 ;
   B_read__temp = B_read ;
   ap_idle__temp = ap_idle ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   D_write__temp = D_write ;
   ap_done_reg__temp = ap_done_reg ;
   D_blk_n__temp = D_blk_n ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   start_out__temp = start_out ;
   internal_ap_ready__temp = internal_ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   D_din__temp = D_din ;
   ap_continue__temp = ap_continue ;
   B_dout__temp = B_dout ;
   D_full_n__temp = D_full_n ;
   ap_done__temp = ap_done ;
   start_full_n__temp = start_full_n ;
   start_once_reg__temp = start_once_reg ;
   i_reg_73__temp = i_reg_73 ;
   mul_ln16_fu_66_p2__temp = mul_ln16_fu_66_p2 ;
   icmp_ln15_fu_54_p2__temp = icmp_ln15_fu_54_p2 ;
   i_fu_60_p2__temp = i_fu_60_p2 ;
   start_write__temp = start_write ;
   ap_status__temp = ap_status ;
   real_start__temp = real_start ;
   ap_block_state1__temp = ap_block_state1 ;


  if(ap_clk_count == 1 ){
       ap_status = 2;
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
       if(!((icmp_ln15_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))){
B_blk_n = 1 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))){
B_read = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
D_blk_n = 1 ; 
}
       if(!((1 == D_full_n) && (1 == ap_CS_fsm_state4))){
D_write = 0 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
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
       ap_block_state2 =  ( (  ( (  ( i_0_reg_43 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( B_empty_n & 1 )  ) & 1 )  ) & 1 )  ; 
               B_empty_n =  ( B_empty_n & 1 ) ;
               icmp_ln15_fu_54_p2 =   ( i_0_reg_43__temp  == 5 ? 1 :  0 ) ;
       if((icmp_ln15_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           B_blk_n =  ( B_empty_n & 1 ) ;
       }
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           B_read =  1;
       }
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           internal_ap_ready =  1;
       }
               ap_ready = internal_ap_ready;
               start_out = real_start;
               icmp_ln15_fu_54_p2 =   ( i_0_reg_43__temp  == 5 ? 1 :  0 ) ;
               B_empty_n =  ( B_empty_n & 1 ) ;
   if((((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2)) == 1){
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           B_read_reg_78 =  ( B_dout__temp & 4294967295 ) ;
       }
       if((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (1 == ap_CS_fsm_state2))
       {
           i_reg_73 =   ( ( i_0_reg_43__temp  + 1 ) & 7 ) ;
       }
       if(ap_done==1){
          // ap_status = 0;
         //  goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if((((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2)) == 1){
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
               B_read_reg_78 =  ( B_dout__temp & 4294967295 ) ;
       }
       if((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (1 == ap_CS_fsm_state2))
       {
               i_reg_73 =   ( ( i_0_reg_43__temp  + 1 ) & 7 ) ;
       }
       goto ap_ST_fsm_state3;
   }
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           B_read_reg_78 =  ( B_dout__temp & 4294967295 ) ;
       }
       if((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (1 == ap_CS_fsm_state2))
       {
           i_reg_73 =   ( ( i_0_reg_43__temp  + 1 ) & 7 ) ;
       }
       goto ap_ST_fsm_state2;

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
   B_read_reg_78__temp = B_read_reg_78 ;
   B_blk_n__temp = B_blk_n ;
   ap_block_state2__temp = ap_block_state2 ;
   B_empty_n__temp = B_empty_n ;
   mul_ln16_reg_84__temp = mul_ln16_reg_84 ;
   ap_rst__temp = ap_rst ;
   i_0_reg_43__temp = i_0_reg_43 ;
   B_read__temp = B_read ;
   ap_idle__temp = ap_idle ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   D_write__temp = D_write ;
   ap_done_reg__temp = ap_done_reg ;
   D_blk_n__temp = D_blk_n ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   start_out__temp = start_out ;
   internal_ap_ready__temp = internal_ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   D_din__temp = D_din ;
   ap_continue__temp = ap_continue ;
   B_dout__temp = B_dout ;
   D_full_n__temp = D_full_n ;
   ap_done__temp = ap_done ;
   start_full_n__temp = start_full_n ;
   start_once_reg__temp = start_once_reg ;
   i_reg_73__temp = i_reg_73 ;
   mul_ln16_fu_66_p2__temp = mul_ln16_fu_66_p2 ;
   icmp_ln15_fu_54_p2__temp = icmp_ln15_fu_54_p2 ;
   i_fu_60_p2__temp = i_fu_60_p2 ;
   start_write__temp = start_write ;
   ap_status__temp = ap_status ;
   real_start__temp = real_start ;
   ap_block_state1__temp = ap_block_state1 ;

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
       if(!((icmp_ln15_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))){
B_blk_n = 1 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))){
B_read = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
D_blk_n = 1 ; 
}
       if(!((1 == D_full_n) && (1 == ap_CS_fsm_state4))){
D_write = 0 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
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
       ap_block_state2 =  ( (  ( (  ( i_0_reg_43 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( B_empty_n & 1 )  ) & 1 )  ) & 1 )  ; 
       //B_read_reg_78__temp = B_dout ;
       ap_ready = internal_ap_ready;
       start_out = real_start;
       if(1 == ap_CS_fsm_state3)
       {
           mul_ln16_reg_84 =   ( ( do_twos_complement( B_read_reg_78__temp  , 32 )  * do_twos_complement( B_read_reg_78__temp  , 32 )  ) & 4294967295 ) ;
       }
        D_din = mul_ln16_reg_84;
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
   B_read_reg_78__temp = B_read_reg_78 ;
   B_blk_n__temp = B_blk_n ;
   ap_block_state2__temp = ap_block_state2 ;
   B_empty_n__temp = B_empty_n ;
   mul_ln16_reg_84__temp = mul_ln16_reg_84 ;
   ap_rst__temp = ap_rst ;
   i_0_reg_43__temp = i_0_reg_43 ;
   B_read__temp = B_read ;
   ap_idle__temp = ap_idle ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   D_write__temp = D_write ;
   ap_done_reg__temp = ap_done_reg ;
   D_blk_n__temp = D_blk_n ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   start_out__temp = start_out ;
   internal_ap_ready__temp = internal_ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   D_din__temp = D_din ;
   ap_continue__temp = ap_continue ;
   B_dout__temp = B_dout ;
   D_full_n__temp = D_full_n ;
   ap_done__temp = ap_done ;
   start_full_n__temp = start_full_n ;
   start_once_reg__temp = start_once_reg ;
   i_reg_73__temp = i_reg_73 ;
   mul_ln16_fu_66_p2__temp = mul_ln16_fu_66_p2 ;
   icmp_ln15_fu_54_p2__temp = icmp_ln15_fu_54_p2 ;
   i_fu_60_p2__temp = i_fu_60_p2 ;
   start_write__temp = start_write ;
   ap_status__temp = ap_status ;
   real_start__temp = real_start ;
   ap_block_state1__temp = ap_block_state1 ;

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
       if(!((icmp_ln15_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))){
B_blk_n = 1 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))){
B_read = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
D_blk_n = 1 ; 
}
       if(!((1 == D_full_n) && (1 == ap_CS_fsm_state4))){
D_write = 0 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!((icmp_ln15_fu_54_p2 == 0) && (0 == B_empty_n))) && (icmp_ln15_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
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
       ap_block_state2 =  ( (  ( (  ( i_0_reg_43 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( B_empty_n & 1 )  ) & 1 )  ) & 1 )  ; 
               D_full_n =  ( D_full_n & 1 ) ;
               ap_ready = internal_ap_ready;
               start_out = real_start;
       if(1 == ap_CS_fsm_state4)
       {
           D_blk_n =  ( D_full_n & 1 ) ;
       }
       if((1 == D_full_n) && (1 == ap_CS_fsm_state4))
       {
           D_write =  1;
       }
              
               D_full_n =  ( D_full_n & 1 ) ;
   if(((1 == D_full_n) && (1 == ap_CS_fsm_state4)) == 1){
       if((1 == D_full_n) && (1 == ap_CS_fsm_state4))
       {
           i_0_reg_43 =  i_reg_73__temp ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == D_full_n) && (1 == ap_CS_fsm_state4)) == 0){
       if((1 == D_full_n) && (1 == ap_CS_fsm_state4))
       {
               i_0_reg_43 =  i_reg_73__temp ;
       }
       goto ap_ST_fsm_state4;
   }
   end:
     //   B_dout__temp = B_dout ;
    
    *B_dout__1=B_dout;
    *B_empty_n__1=B_empty_n;
    *B_read__1=B_read;
    *D_din__1=D_din;
    *D_full_n__1=D_full_n;
    *D_write__1=D_write;
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
