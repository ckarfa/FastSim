#include<stdio.h>
void module_3(unsigned long long int *C_dout__1,unsigned long long int *C_empty_n__1,unsigned long long int *C_read__1,unsigned long long int *E_din__1,unsigned long long int *E_full_n__1,unsigned long long int *E_write__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,int dummy){
unsigned long long int C_dout=*C_dout__1;
unsigned long long int C_empty_n=*C_empty_n__1;
unsigned long long int C_read=*C_read__1;
unsigned long long int E_din=*E_din__1;
unsigned long long int E_full_n=*E_full_n__1;
unsigned long long int E_write=*E_write__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
   static long long int C_read_reg_78=0;
   static long long int C_read_reg_78__temp=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   static unsigned long long int C_blk_n=0;
   static unsigned long long int C_blk_n__temp=0;
   static unsigned long long int C_dout__temp=0;
   static unsigned long long int C_empty_n__temp=0;
   static unsigned long long int C_read__temp=0;
   static unsigned long long int E_blk_n=0;
   static unsigned long long int E_blk_n__temp=0;
   static unsigned long long int E_din__temp=0;
   static unsigned long long int E_full_n__temp=0;
   static unsigned long long int E_write__temp=0;
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
   static unsigned long long int icmp_ln21_fu_54_p2=0;
   static unsigned long long int icmp_ln21_fu_54_p2__temp=0;
   static unsigned long long int mul_ln22_fu_66_p2=0;
   static unsigned long long int mul_ln22_fu_66_p2__temp=0;
   static unsigned long long int mul_ln22_reg_84=0;
   static unsigned long long int mul_ln22_reg_84__temp=0;
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
   C_read_reg_78__temp = C_read_reg_78 ;
   E_full_n__temp = E_full_n ;
   ap_done_reg__temp = ap_done_reg ;
   icmp_ln21_fu_54_p2__temp = icmp_ln21_fu_54_p2 ;
   ap_done__temp = ap_done ;
   i_0_reg_43__temp = i_0_reg_43 ;
   ap_block_state1__temp = ap_block_state1 ;
   C_dout__temp = C_dout ;
   C_blk_n__temp = C_blk_n ;
   mul_ln22_reg_84__temp = mul_ln22_reg_84 ;
   E_din__temp = E_din ;
   ap_start__temp = ap_start ;
   ap_block_state2__temp = ap_block_state2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   E_blk_n__temp = E_blk_n ;
   ap_continue__temp = ap_continue ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   i_fu_60_p2__temp = i_fu_60_p2 ;
   C_empty_n__temp = C_empty_n ;
   mul_ln22_fu_66_p2__temp = mul_ln22_fu_66_p2 ;
   i_reg_73__temp = i_reg_73 ;
   ap_rst__temp = ap_rst ;
   ap_status__temp = ap_status ;
   C_read__temp = C_read ;
   E_write__temp = E_write ;
   ap_ready__temp = ap_ready ;

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
       if(!((icmp_ln21_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))){
C_blk_n = 1 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))){
C_read = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
E_blk_n = 1 ; 
}
       if(!((1 == E_full_n) && (1 == ap_CS_fsm_state4))){
E_write = 0 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state2 =  ( (  ( (  ( i_0_reg_43 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( C_empty_n & 1 )  ) & 1 )  ) & 1 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               E_full_n =  ( E_full_n & 1 ) ;
   if(((!((ap_start__temp == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start__temp == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_43 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start__temp == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start__temp == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
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
   C_read_reg_78__temp = C_read_reg_78 ;
   E_full_n__temp = E_full_n ;
   ap_done_reg__temp = ap_done_reg ;
   icmp_ln21_fu_54_p2__temp = icmp_ln21_fu_54_p2 ;
   ap_done__temp = ap_done ;
   i_0_reg_43__temp = i_0_reg_43 ;
   ap_block_state1__temp = ap_block_state1 ;
   C_dout__temp = C_dout ;
   C_blk_n__temp = C_blk_n ;
   mul_ln22_reg_84__temp = mul_ln22_reg_84 ;
   E_din__temp = E_din ;
   ap_start__temp = ap_start ;
   ap_block_state2__temp = ap_block_state2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   E_blk_n__temp = E_blk_n ;
   ap_continue__temp = ap_continue ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   i_fu_60_p2__temp = i_fu_60_p2 ;
   C_empty_n__temp = C_empty_n ;
   mul_ln22_fu_66_p2__temp = mul_ln22_fu_66_p2 ;
   i_reg_73__temp = i_reg_73 ;
   ap_rst__temp = ap_rst ;
   ap_status__temp = ap_status ;
   C_read__temp = C_read ;
   E_write__temp = E_write ;
   ap_ready__temp = ap_ready ;

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
       if(!((icmp_ln21_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))){
C_blk_n = 1 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))){
C_read = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
E_blk_n = 1 ; 
}
       if(!((1 == E_full_n) && (1 == ap_CS_fsm_state4))){
E_write = 0 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state2 =  ( (  ( (  ( i_0_reg_43 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( C_empty_n & 1 )  ) & 1 )  ) & 1 )  ; 
               icmp_ln21_fu_54_p2 =   ( i_0_reg_43__temp  == 5 ? 1 :  0 ) ;
               C_empty_n =  ( C_empty_n & 1 ) ;
       if((icmp_ln21_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           C_blk_n =  ( C_empty_n & 1 ) ;
       }
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           C_read =  1;
       }
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               C_empty_n =  ( C_empty_n & 1 ) ;
               icmp_ln21_fu_54_p2 =   ( i_0_reg_43__temp  == 5 ? 1 :  0 ) ;
   if((((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2)) == 1){
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           C_read_reg_78 =  ( C_dout__temp & 4294967295 ) ;
       }
       if((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (1 == ap_CS_fsm_state2))
       {
           i_reg_73 =   ( ( i_0_reg_43__temp  + 1 ) & 7 ) ;
       }
       if(ap_done==1){
        //   ap_status = 0;
       //    goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if((((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2)) == 1){
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
               C_read_reg_78 =  ( C_dout__temp & 4294967295 ) ;
       }
       if((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (1 == ap_CS_fsm_state2))
       {
               i_reg_73 =   ( ( i_0_reg_43__temp  + 1 ) & 7 ) ;
       }
       goto ap_ST_fsm_state3;
   }
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           C_read_reg_78 =  ( C_dout__temp & 4294967295 ) ;
       }
       if((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (1 == ap_CS_fsm_state2))
       {
           i_reg_73 =   ( ( i_0_reg_43__temp  + 1 ) & 7 ) ;
       }
       goto ap_ST_fsm_state2;

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
   C_read_reg_78__temp = C_read_reg_78 ;
   E_full_n__temp = E_full_n ;
   ap_done_reg__temp = ap_done_reg ;
   icmp_ln21_fu_54_p2__temp = icmp_ln21_fu_54_p2 ;
   ap_done__temp = ap_done ;
   i_0_reg_43__temp = i_0_reg_43 ;
   ap_block_state1__temp = ap_block_state1 ;
   C_dout__temp = C_dout ;
   C_blk_n__temp = C_blk_n ;
   mul_ln22_reg_84__temp = mul_ln22_reg_84 ;
   E_din__temp = E_din ;
   ap_start__temp = ap_start ;
   ap_block_state2__temp = ap_block_state2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   E_blk_n__temp = E_blk_n ;
   ap_continue__temp = ap_continue ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   i_fu_60_p2__temp = i_fu_60_p2 ;
   C_empty_n__temp = C_empty_n ;
   mul_ln22_fu_66_p2__temp = mul_ln22_fu_66_p2 ;
   i_reg_73__temp = i_reg_73 ;
   ap_rst__temp = ap_rst ;
   ap_status__temp = ap_status ;
   C_read__temp = C_read ;
   E_write__temp = E_write ;
   ap_ready__temp = ap_ready ;

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
       if(!((icmp_ln21_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))){
C_blk_n = 1 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))){
C_read = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
E_blk_n = 1 ; 
}
       if(!((1 == E_full_n) && (1 == ap_CS_fsm_state4))){
E_write = 0 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state2 =  ( (  ( (  ( i_0_reg_43 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( C_empty_n & 1 )  ) & 1 )  ) & 1 )  ; 
      // C_read_reg_78__temp = C_dout;
       if(1 == ap_CS_fsm_state3)
       {
           mul_ln22_reg_84 =   ( ( do_twos_complement( C_read_reg_78__temp  , 32 )  * do_twos_complement( C_read_reg_78__temp  , 32 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
   C_read_reg_78__temp = C_read_reg_78 ;
   E_full_n__temp = E_full_n ;
   ap_done_reg__temp = ap_done_reg ;
   icmp_ln21_fu_54_p2__temp = icmp_ln21_fu_54_p2 ;
   ap_done__temp = ap_done ;
   i_0_reg_43__temp = i_0_reg_43 ;
   ap_block_state1__temp = ap_block_state1 ;
   C_dout__temp = C_dout ;
   C_blk_n__temp = C_blk_n ;
   mul_ln22_reg_84__temp = mul_ln22_reg_84 ;
   E_din__temp = E_din ;
   ap_start__temp = ap_start ;
   ap_block_state2__temp = ap_block_state2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   E_blk_n__temp = E_blk_n ;
   ap_continue__temp = ap_continue ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   i_fu_60_p2__temp = i_fu_60_p2 ;
   C_empty_n__temp = C_empty_n ;
   mul_ln22_fu_66_p2__temp = mul_ln22_fu_66_p2 ;
   i_reg_73__temp = i_reg_73 ;
   ap_rst__temp = ap_rst ;
   ap_status__temp = ap_status ;
   C_read__temp = C_read ;
   E_write__temp = E_write ;
   ap_ready__temp = ap_ready ;

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
       if(!((icmp_ln21_fu_54_p2 == 0) && (1 == ap_CS_fsm_state2))){
C_blk_n = 1 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 0)) && (1 == ap_CS_fsm_state2))){
C_read = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
E_blk_n = 1 ; 
}
       if(!((1 == E_full_n) && (1 == ap_CS_fsm_state4))){
E_write = 0 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!((icmp_ln21_fu_54_p2 == 0) && (0 == C_empty_n))) && (icmp_ln21_fu_54_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state2 =  ( (  ( (  ( i_0_reg_43 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( C_empty_n & 1 )  ) & 1 )  ) & 1 )  ; 
               E_full_n =  ( E_full_n & 1 ) ;
       if(1 == ap_CS_fsm_state4)
       {
           E_blk_n =  ( E_full_n & 1 ) ;
       }
       if((1 == E_full_n) && (1 == ap_CS_fsm_state4))
       {
           E_write =  1;
       }
               E_din = mul_ln22_reg_84;
               E_full_n =  ( E_full_n & 1 ) ;
   if(((1 == E_full_n) && (1 == ap_CS_fsm_state4)) == 1){
       if((1 == E_full_n) && (1 == ap_CS_fsm_state4))
       {
           i_0_reg_43 =  i_reg_73__temp ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == E_full_n) && (1 == ap_CS_fsm_state4)) == 0){
       if((1 == E_full_n) && (1 == ap_CS_fsm_state4))
       {
               i_0_reg_43 =  i_reg_73__temp ;
       }
       goto ap_ST_fsm_state4;
   }
   end:
   // C_dout__temp = C_dout ;
    *C_dout__1=C_dout;
    *C_empty_n__1=C_empty_n;
    *C_read__1=C_read;
    *E_din__1=E_din;
    *E_full_n__1=E_full_n;
    *E_write__1=E_write;
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
