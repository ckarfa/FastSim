#include<stdio.h>
#define F_DWIDTH 32
void module_4(unsigned long long int *D_dout__1,unsigned long long int *D_empty_n__1,unsigned long long int *D_read__1,unsigned long long int *E_dout__1,unsigned long long int *E_empty_n__1,unsigned long long int *E_read__1,unsigned long long int *F_address0__1,unsigned long long int *F_ce0__1,unsigned long long int *F_d0__1,unsigned long long int *F_we0__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,long long int  *F_ram , int dummy){
unsigned long long int D_dout=*D_dout__1;
unsigned long long int D_empty_n=*D_empty_n__1;
unsigned long long int D_read=*D_read__1;
unsigned long long int E_dout=*E_dout__1;
unsigned long long int E_empty_n=*E_empty_n__1;
unsigned long long int E_read=*E_read__1;
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
   static unsigned long long int D_blk_n=0;
   static unsigned long long int D_blk_n__temp=0;
   static unsigned long long int D_dout__temp=0;
   static unsigned long long int D_empty_n__temp=0;
   static unsigned long long int D_read__temp=0;
   static unsigned long long int E_blk_n=0;
   static unsigned long long int E_blk_n__temp=0;
   static unsigned long long int E_dout__temp=0;
   static unsigned long long int E_empty_n__temp=0;
   static unsigned long long int E_read__temp=0;
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
   static unsigned long long int i_0_reg_57=0;
   static unsigned long long int i_0_reg_57__temp=0;
   static unsigned long long int i_fu_74_p2=0;
   static unsigned long long int i_fu_74_p2__temp=0;
   static unsigned long long int icmp_ln27_fu_68_p2=0;
   static unsigned long long int icmp_ln27_fu_68_p2__temp=0;
   static unsigned long long int zext_ln28_fu_80_p1=0;
   static unsigned long long int zext_ln28_fu_80_p1__temp=0;
    unsigned long long int  ap_clk_count = 0;
   

switch(ap_status){
	case 1:
		goto ap_ST_fsm_state1;
	case 2:
		goto ap_ST_fsm_state2;
	default: 
		 goto end;
}

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
   D_dout__temp = D_dout ;
   E_dout__temp = E_dout ;
   D_blk_n__temp = D_blk_n ;
   E_blk_n__temp = E_blk_n ;
   ap_clk__temp = ap_clk ;
   ap_status__temp = ap_status ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   D_empty_n__temp = D_empty_n ;
   F_d0__temp = F_d0 ;
   D_read__temp = D_read ;
   ap_continue__temp = ap_continue ;
   F_we0__temp = F_we0 ;
   ap_start__temp = ap_start ;
   E_read__temp = E_read ;
   F_address0__temp = F_address0 ;
   ap_done__temp = ap_done ;
   E_empty_n__temp = E_empty_n ;
   F_ce0__temp = F_ce0 ;
   i_0_reg_57__temp = i_0_reg_57 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_done_reg__temp = ap_done_reg ;
   icmp_ln27_fu_68_p2__temp = icmp_ln27_fu_68_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   zext_ln28_fu_80_p1__temp = zext_ln28_fu_80_p1 ;
   ap_block_state2__temp = ap_block_state2 ;
   ap_idle__temp = ap_idle ;
   F_q0__temp = F_q0 ;
   ap_rst__temp = ap_rst ;
   ap_ready__temp = ap_ready ;
   ap_CS_fsm__temp = ap_CS_fsm ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       F_ce0 = 0;
       F_we0 = 0;
       F_address0 =   (  ( i_0_reg_57__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       F_d0 =   ( ( ( D_dout & 4294967295 )  + ( E_dout & 4294967295 )  ) & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln27_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))){
D_blk_n = 1 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))){
D_read = 0 ; 
}
       if(!((icmp_ln27_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))){
E_blk_n = 1 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))){
E_read = 0 ; 
}
       if(!((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (1 == ap_CS_fsm_state2))){
F_ce0 = 0 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))){
F_we0 = 0 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state2 =  ( (  ( (  ( (  ( i_0_reg_57 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( E_empty_n & 1 )  ) & 1 )  ) & 1 )  |  ( (  ( (  ( i_0_reg_57 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( D_empty_n & 1 )  ) & 1 )  ) & 1 )  ) & 1 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               E_empty_n =  ( E_empty_n & 1 ) ;
               icmp_ln27_fu_68_p2 =   ( i_0_reg_57__temp  == 5 ? 1 :  0 ) ;
               D_empty_n =  ( D_empty_n & 1 ) ;
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
   D_dout__temp = D_dout ;
   E_dout__temp = E_dout ;
   D_blk_n__temp = D_blk_n ;
   E_blk_n__temp = E_blk_n ;
   ap_clk__temp = ap_clk ;
   ap_status__temp = ap_status ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   D_empty_n__temp = D_empty_n ;
   F_d0__temp = F_d0;
   D_read__temp = D_read ;
   ap_continue__temp = ap_continue ;
   F_we0__temp = F_we0 ;
   ap_start__temp = ap_start ;
   E_read__temp = E_read ;
   F_address0__temp = F_address0 ;
   ap_done__temp = ap_done ;
   E_empty_n__temp = E_empty_n ;
   F_ce0__temp = F_ce0 ;
   i_0_reg_57__temp = i_0_reg_57 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_done_reg__temp = ap_done_reg ;
   icmp_ln27_fu_68_p2__temp = icmp_ln27_fu_68_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   zext_ln28_fu_80_p1__temp = zext_ln28_fu_80_p1 ;
   ap_block_state2__temp = ap_block_state2 ;
   ap_idle__temp = ap_idle ;
   F_q0__temp = F_q0 ;
   ap_rst__temp = ap_rst ;
   ap_ready__temp = ap_ready ;
   ap_CS_fsm__temp = ap_CS_fsm ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       F_ce0 = 0;
       F_we0 = 0;
       F_address0 =   (  ( i_0_reg_57__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       F_d0 =   ( ( ( D_dout & 4294967295 )  + ( E_dout & 4294967295 )  ) & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln27_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))){
D_blk_n = 1 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))){
D_read = 0 ; 
}
       if(!((icmp_ln27_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))){
E_blk_n = 1 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))){
E_read = 0 ; 
}
       if(!((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (1 == ap_CS_fsm_state2))){
F_ce0 = 0 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))){
F_we0 = 0 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       ap_block_state2 =  ( (  ( (  ( (  ( i_0_reg_57 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( E_empty_n & 1 )  ) & 1 )  ) & 1 )  |  ( (  ( (  ( i_0_reg_57 == 5 ? 1 :  0 )  == 0 ) & 1 )  &  ( ( 0 == ( D_empty_n & 1 )  ) & 1 )  ) & 1 )  ) & 1 )  ; 
               D_empty_n =  ( D_empty_n & 1 ) ;
               icmp_ln27_fu_68_p2 =   ( i_0_reg_57__temp  == 5 ? 1 :  0 ) ;
               E_empty_n =  ( E_empty_n & 1 ) ;
       if((icmp_ln27_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           D_blk_n =  ( D_empty_n & 1 ) ;
       }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           D_read =  1;
       }
       if((icmp_ln27_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           E_blk_n =  ( E_empty_n & 1 ) ;
       }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           E_read =  1;
       }
       if((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (1 == ap_CS_fsm_state2))
       {
           F_ce0 =  1;
       }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           F_we0 =  1;
       }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               E_empty_n =  ( E_empty_n & 1 ) ;
               icmp_ln27_fu_68_p2 =   ( i_0_reg_57__temp  == 5 ? 1 :  0 ) ;
               D_empty_n =  ( D_empty_n & 1 ) ;
   if((((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2)) == 1){
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           i_0_reg_57 =   ( ( i_0_reg_57__temp  + 1 ) & 7 ) ;
       }
      /* if(F_ce0){
          F_q0 = F_ram[F_address0];
           if(F_we0){
              F_ram[F_address0] = F_d0;
           }
       }*/
       if(ap_done==1){
         //  ap_status = 0;
         //  goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if((((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2)) == 1){
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
               i_0_reg_57 =   ( ( i_0_reg_57__temp  + 1 ) & 7 ) ;
       }
       if(F_ce0){
          F_q0 = F_ram[F_address0];
           if(F_we0){
              F_ram[F_address0] = F_d0;
           }
       }
       goto ap_ST_fsm_state2;
   }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(((!(((icmp_ln27_fu_68_p2 == 0) && (0 == E_empty_n)) || ((icmp_ln27_fu_68_p2 == 0) && (0 == D_empty_n)))) && (icmp_ln27_fu_68_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           i_0_reg_57 =   ( ( i_0_reg_57__temp  + 1 ) & 7 ) ;
       }
       if(F_ce0){
          F_q0 = F_ram[F_address0];
           if(F_we0){
              F_ram[F_address0] = F_d0;
           }
       }
       goto ap_ST_fsm_state2;
   end:

   
    *D_dout__1=D_dout;
    *D_empty_n__1=D_empty_n;
    *D_read__1=D_read;
    *E_dout__1=E_dout;
    *E_empty_n__1=E_empty_n;
    *E_read__1=E_read;
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
