#include<stdio.h>
void cell4(unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,unsigned long long int *in_V_dout__1,unsigned long long int *in_V_empty_n__1,unsigned long long int *in_V_read__1,unsigned long long int *out_V_din__1,unsigned long long int *out_V_full_n__1,unsigned long long int *out_V_write__1,unsigned long long int *start_full_n__1,unsigned long long int *start_out__1,unsigned long long int *start_write__1,int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
unsigned long long int in_V_dout=*in_V_dout__1;
unsigned long long int in_V_empty_n=*in_V_empty_n__1;
unsigned long long int in_V_read=*in_V_read__1;
unsigned long long int out_V_din=*out_V_din__1;
unsigned long long int out_V_full_n=*out_V_full_n__1;
unsigned long long int out_V_write=*out_V_write__1;
unsigned long long int start_full_n=*start_full_n__1;
unsigned long long int start_out=*start_out__1;
unsigned long long int start_write=*start_write__1;
   long long int ap_CS_fsm_state1=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   static unsigned long long int ap_NS_fsm=0;
   static unsigned long long int ap_NS_fsm__temp=0;
   static unsigned long long int ap_block_state1=0;
   static unsigned long long int ap_block_state1__temp=0;
   static unsigned long long int ap_clk__temp=0;
   static unsigned long long int ap_condition_72=0;
   static unsigned long long int ap_condition_72__temp=0;
   static unsigned long long int ap_continue__temp=0;
   static unsigned long long int ap_done__temp=0;
   static unsigned long long int ap_done_reg=0;
   static unsigned long long int ap_done_reg__temp=0;
   static unsigned long long int ap_idle__temp=0;
   static unsigned long long int ap_ready__temp=0;
   static unsigned long long int ap_rst__temp=0;
   static unsigned long long int ap_start__temp=0;
   static unsigned long long int ap_status__temp=0;
   static unsigned long long int icmp_ln63_fu_41_p2=0;
   static unsigned long long int icmp_ln63_fu_41_p2__temp=0;
   static unsigned long long int in_V_blk_n=0;
   static unsigned long long int in_V_blk_n__temp=0;
   static unsigned long long int in_V_dout__temp=0;
   static unsigned long long int in_V_empty_n__temp=0;
   static unsigned long long int in_V_read__temp=0;
   static unsigned long long int internal_ap_ready=0;
   static unsigned long long int internal_ap_ready__temp=0;
   static unsigned long long int localCopy_5=0;
   static unsigned long long int localCopy_5__temp=0;
   static unsigned long long int out_V_blk_n=0;
   static unsigned long long int out_V_blk_n__temp=0;
   static unsigned long long int out_V_din__temp=0;
   static unsigned long long int out_V_full_n__temp=0;
   static unsigned long long int out_V_write__temp=0;
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
	default: 
		 goto end;
}

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
   internal_ap_ready__temp = internal_ap_ready ;
   ap_start__temp = ap_start ;
   ap_done_reg__temp = ap_done_reg ;
   out_V_din__temp = out_V_din ;
   out_V_blk_n__temp = out_V_blk_n ;
   ap_ready__temp = ap_ready ;
   ap_status__temp = ap_status ;
   real_start__temp = real_start ;
   in_V_empty_n__temp = in_V_empty_n ;
   in_V_read__temp = in_V_read ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   ap_condition_72__temp = ap_condition_72 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_done__temp = ap_done ;
   in_V_blk_n__temp = in_V_blk_n ;
   ap_rst__temp = ap_rst ;
   start_once_reg__temp = start_once_reg ;
   ap_block_state1__temp = ap_block_state1 ;
   start_full_n__temp = start_full_n ;
   ap_idle__temp = ap_idle ;
   localCopy_5__temp = localCopy_5 ;
   start_out__temp = start_out ;
   in_V_dout__temp = in_V_dout ;
   ap_continue__temp = ap_continue ;
   out_V_write__temp = out_V_write ;
   start_write__temp = start_write ;
   icmp_ln63_fu_41_p2__temp = icmp_ln63_fu_41_p2 ;
   out_V_full_n__temp = out_V_full_n ;

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
       if(!((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))){
in_V_blk_n = 1 ; 
}
       if(!((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))){
in_V_read = 0 ; 
}
       
       if(!((((!((real_start == 0) || (ap_done_reg == 1))) && (icmp_ln63_fu_41_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((!((real_start == 0) || (ap_done_reg == 1))) && (icmp_ln63_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1)))){
out_V_blk_n = 1 ; 
}
       
       if(!((((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln63_fu_41_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln63_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1)))){
out_V_write = 0 ; 
}
       if((start_full_n == 0) && (start_once_reg == 0)){
real_start = 0 ; 
}
if(!((start_full_n == 0) && (start_once_reg == 0))){
real_start = ( ap_start & 1 )  ; 
}
       if((start_once_reg == 0) && (real_start == 1)){
start_write = 1 ; 
}
if(!((start_once_reg == 0) && (real_start == 1))){
start_write = 0 ; 
}
       ap_block_state1 =  ( (  ( (  ( (  ( (  ( ( real_start == 0 ) & 1 )  |  ( ( ( in_V_empty_n & 1 )  == 0 ) & 1 )  ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  |  ( (  ( (  ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_5 , 63 )  ? 1 : 0 )  == 0 ) & 1 )  &  ( ( ( out_V_full_n & 1 )  == 0 ) & 1 )  ) & 1 )  ) & 1 )  |  ( (  ( (  ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_5 , 63 )  ? 1 : 0 )  == 1 ) & 1 )  &  ( ( ( out_V_full_n & 1 )  == 0 ) & 1 )  ) & 1 )  ) & 1 )  ; 
       ap_condition_72 =  ( ( ( ( ! (  ( (  ( (  ( (  ( (  ( ( real_start == 0 ) & 1 )  |  ( ( ( in_V_empty_n & 1 )  == 0 ) & 1 )  ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  |  ( (  ( (  ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_5 , 63 )  ? 1 : 0 )  == 0 ) & 1 )  &  ( ( ( out_V_full_n & 1 )  == 0 ) & 1 )  ) & 1 )  ) & 1 )  |  ( (  ( (  ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_5 , 63 )  ? 1 : 0 )  == 1 ) & 1 )  &  ( ( ( out_V_full_n & 1 )  == 0 ) & 1 )  ) & 1 )  ) & 1 )  ) ) & 1 )  &  ( ( 1 == ap_CS_fsm_state1 ) & 1 )  ) & 1 )  ; 
               out_V_full_n =  ( out_V_full_n & 1 ) ;
               in_V_empty_n =  ( in_V_empty_n & 1 ) ;
               
               icmp_ln63_fu_41_p2 =   ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_5__temp  , 63 )  ? 1 : 0 ) ;
       if((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((real_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       if((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           in_V_blk_n =  ( in_V_empty_n & 1 ) ;
       }
       if((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))
       {
           in_V_read =  1;
       }
       if((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))
       {
           internal_ap_ready =  1;
       }
       if(!((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))){
internal_ap_ready = 0 ; 
}
       if((((!((real_start == 0) || (ap_done_reg == 1))) && (icmp_ln63_fu_41_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((!((real_start == 0) || (ap_done_reg == 1))) && (icmp_ln63_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1)))
       {
           out_V_blk_n =  ( out_V_full_n & 1 ) ;
       }
       if((((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln63_fu_41_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln63_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1)))
       {
           out_V_write =  1;
       }
               icmp_ln63_fu_41_p2 =   ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_5__temp  , 63 )  ? 1 : 0 ) ;
               ap_ready = internal_ap_ready;
               start_out = real_start;
               in_V_empty_n =  ( in_V_empty_n & 1 ) ;
               out_V_full_n =  ( out_V_full_n & 1 ) ;
       if((icmp_ln63_fu_41_p2 == 1) && (1 == ap_condition_72)){
out_V_din = localCopy_5 ; 
}
if(!((icmp_ln63_fu_41_p2 == 1) && (1 == ap_condition_72))){
if((icmp_ln63_fu_41_p2 == 0) && (1 == ap_condition_72)){
out_V_din = ( in_V_dout & 4294967295 )  ; 
}
if(!((icmp_ln63_fu_41_p2 == 0) && (1 == ap_condition_72))){
if(1 == ap_condition_72){
out_V_din = 0 ; 
}
if(!(1 == ap_condition_72)){
out_V_din = 0 ; 
}
}
}
       if(((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln63_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           localCopy_5 =  ( in_V_dout & 4294967295 ) ;
       }
       if(!(ap_continue == 1)){
       if((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln63_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln63_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       }
       if(ap_done==1){
          // ap_status = 0;
         //  goto end;
       }
       goto ap_ST_fsm_state1;
   end:
    *ap_clk__1=ap_clk;
    *ap_continue__1=ap_continue;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *ap_status__1=ap_status;
    *in_V_dout__1=in_V_dout;
    *in_V_empty_n__1=in_V_empty_n;
    *in_V_read__1=in_V_read;
    *out_V_din__1=out_V_din;
    *out_V_full_n__1=out_V_full_n;
    *out_V_write__1=out_V_write;
    *start_full_n__1=start_full_n;
    *start_out__1=start_out;
    *start_write__1=start_write;
       return;
}