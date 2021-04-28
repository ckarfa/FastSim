#include<stdio.h>
long long int do_twos_complement( unsigned long long int a ,int width){
    int msb = (a >> (width-1)) & 1;
    if(msb==1){
        int bit[width];int ans[width];
        unsigned long long int a1=a;
        int i=0;
        for(i=0;i<width;i++){
            bit[i]=0;
            ans[i]=0;
        }
        i=0;
        while(a1>0){
            bit[i]=a1%2;
            i++;
            a1/=2;
        }
        int flag=0;
        for(i=0;i<width;i++){
            if(bit[i]==1 && flag==0){
                ans[i]=1;
                flag=1;
            }
            else if(flag==0)
                ans[i]=bit[i];
            else
                ans[i]=1 ^ bit[i];
        }
        long long int fans=0;
        for(i=0;i<width;i++)
            fans+=ans[i]*(1<<i);
        fans = -fans;    
        return fans;
    }else{     
        return a;
    }
}
void cell0(unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,unsigned long long int *in_V_dout__1,unsigned long long int *in_V_empty_n__1,unsigned long long int *in_V_read__1,unsigned long long int *out_V_din__1,unsigned long long int *out_V_full_n__1,unsigned long long int *out_V_write__1,unsigned long long int *start_full_n__1,unsigned long long int *start_out__1,unsigned long long int *start_write__1,int dummy){
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
   static unsigned long long int icmp_ln7_fu_41_p2=0;
   static unsigned long long int icmp_ln7_fu_41_p2__temp=0;
   static unsigned long long int in_V_blk_n=0;
   static unsigned long long int in_V_blk_n__temp=0;
   static unsigned long long int in_V_dout__temp=0;
   static unsigned long long int in_V_empty_n__temp=0;
   static unsigned long long int in_V_read__temp=0;
   static unsigned long long int internal_ap_ready=0;
   static unsigned long long int internal_ap_ready__temp=0;
   static unsigned long long int localCopy_2=0;
   static unsigned long long int localCopy_2__temp=0;
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
   ap_idle__temp = ap_idle ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln7_fu_41_p2__temp = icmp_ln7_fu_41_p2 ;
   out_V_write__temp = out_V_write ;
   ap_done_reg__temp = ap_done_reg ;
   start_full_n__temp = start_full_n ;
   in_V_empty_n__temp = in_V_empty_n ;
   out_V_full_n__temp = out_V_full_n ;
   ap_ready__temp = ap_ready ;
   out_V_din__temp = out_V_din ;
   start_once_reg__temp = start_once_reg ;
   out_V_blk_n__temp = out_V_blk_n ;
   ap_done__temp = ap_done ;
   ap_continue__temp = ap_continue ;
   ap_rst__temp = ap_rst ;
   in_V_read__temp = in_V_read ;
   ap_condition_72__temp = ap_condition_72 ;
   in_V_blk_n__temp = in_V_blk_n ;
   start_write__temp = start_write ;
   localCopy_2__temp = localCopy_2 ;
   start_out__temp = start_out ;
   internal_ap_ready__temp = internal_ap_ready ;
   real_start__temp = real_start ;
   ap_clk__temp = ap_clk ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_start__temp = ap_start ;
   ap_status__temp = ap_status ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   in_V_dout__temp = in_V_dout ;

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
       if(!((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))){
ap_done = ap_done_reg ; 
}
       if(!((real_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((!((real_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))){
in_V_blk_n = 1 ; 
}
       if(!((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))){
in_V_read = 0 ; 
}
      
       if(!((((!((real_start == 0) || (ap_done_reg == 1))) && (icmp_ln7_fu_41_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((!((real_start == 0) || (ap_done_reg == 1))) && (icmp_ln7_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1)))){
out_V_blk_n = 1 ; 
}
       


       if(!((((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln7_fu_41_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln7_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1)))){
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
       ap_block_state1 =  ( (  ( (  ( (  ( (  ( ( real_start == 0 ) & 1 )  |  ( ( ( in_V_empty_n & 1 )  == 0 ) & 1 )  ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  |  ( (  ( (  ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_2 , 63 )  ? 1 : 0 )  == 0 ) & 1 )  &  ( ( ( out_V_full_n & 1 )  == 0 ) & 1 )  ) & 1 )  ) & 1 )  |  ( (  ( (  ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_2 , 63 )  ? 1 : 0 )  == 1 ) & 1 )  &  ( ( ( out_V_full_n & 1 )  == 0 ) & 1 )  ) & 1 )  ) & 1 )  ; 
       ap_condition_72 =  ( ( ( ( ! (  ( (  ( (  ( (  ( (  ( ( real_start == 0 ) & 1 )  |  ( ( ( in_V_empty_n & 1 )  == 0 ) & 1 )  ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  |  ( (  ( (  ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_2 , 63 )  ? 1 : 0 )  == 0 ) & 1 )  &  ( ( ( out_V_full_n & 1 )  == 0 ) & 1 )  ) & 1 )  ) & 1 )  |  ( (  ( (  ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_2 , 63 )  ? 1 : 0 )  == 1 ) & 1 )  &  ( ( ( out_V_full_n & 1 )  == 0 ) & 1 )  ) & 1 )  ) & 1 )  ) ) & 1 )  &  ( ( 1 == ap_CS_fsm_state1 ) & 1 )  ) & 1 )  ; 
               out_V_full_n =  ( out_V_full_n & 1 ) ;
               
               start_out = real_start;
               icmp_ln7_fu_41_p2 =   ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_2__temp  , 63 )  ? 1 : 0 ) ;
               in_V_empty_n =  ( in_V_empty_n & 1 ) ;
       if((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))
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
       if((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))
       {
           in_V_read =  1;
       }
       if((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))
       {
           internal_ap_ready =  1;
       }
       if(!((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1)))
       {
            internal_ap_ready = 0 ; 
        }
       if((((!((real_start == 0) || (ap_done_reg == 1))) && (icmp_ln7_fu_41_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((!((real_start == 0) || (ap_done_reg == 1))) && (icmp_ln7_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1)))
       {
           out_V_blk_n =  ( out_V_full_n & 1 ) ;
       }
       if((((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln7_fu_41_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln7_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1)))
       {
           out_V_write =  1;
       }
               in_V_empty_n =  ( in_V_empty_n & 1 ) ;
               icmp_ln7_fu_41_p2 =   ( do_twos_complement( ( in_V_dout & 4294967295 )  , 63 )  > do_twos_complement( localCopy_2__temp  , 63 )  ? 1 : 0 ) ;
              ap_ready = internal_ap_ready;
               out_V_full_n =  ( out_V_full_n & 1 ) ;
        
       if((icmp_ln7_fu_41_p2 == 1) && (1 == ap_condition_72)){
            out_V_din = localCopy_2 ; 
        }
        if(!((icmp_ln7_fu_41_p2 == 1) && (1 == ap_condition_72)))
        {
            if((icmp_ln7_fu_41_p2 == 0) && (1 == ap_condition_72)){
            out_V_din = ( in_V_dout & 4294967295 )  ; 
            }
            if(!((icmp_ln7_fu_41_p2 == 0) && (1 == ap_condition_72))){
            if(1 == ap_condition_72){
            out_V_din = 0 ; 
            }
            if(!(1 == ap_condition_72)){
            out_V_din = 0 ; 
            }
            }   
        }

    if(((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (icmp_ln7_fu_41_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           localCopy_2 =  ( in_V_dout & 4294967295 ) ;
       }
       if(!(ap_continue == 1)){
       if((!(((((real_start == 0) || (in_V_empty_n == 0)) || (ap_done_reg == 1)) || ((icmp_ln7_fu_41_p2 == 0) && (out_V_full_n == 0))) || ((icmp_ln7_fu_41_p2 == 1) && (out_V_full_n == 0)))) && (1 == ap_CS_fsm_state1))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       }
       
       if(ap_done==1){
           //ap_status = 0;
           //goto end;
       }
       if(in_V_read == 1)
       {
           in_V_empty_n = 0;
       }
       if(in_V_read == 0)
       {
           in_V_empty_n = 1;
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
