#include<stdio.h>
#define output_r_DWIDTH 32
void histogram_reduce(unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,unsigned long long int *hist1_address0__1,unsigned long long int *hist1_ce0__1,unsigned long long int *hist1_q0__1,unsigned long long int *hist2_address0__1,unsigned long long int *hist2_ce0__1,unsigned long long int *hist2_q0__1,unsigned long long int *output_r_address0__1,unsigned long long int *output_r_ce0__1,unsigned long long int *output_r_d0__1,unsigned long long int *output_r_we0__1,unsigned long long int  *output_r_ram , int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
unsigned long long int hist1_address0=*hist1_address0__1;
unsigned long long int hist1_ce0=*hist1_ce0__1;
unsigned long long int hist1_q0=*hist1_q0__1;
unsigned long long int hist2_address0=*hist2_address0__1;
unsigned long long int hist2_ce0=*hist2_ce0__1;
unsigned long long int hist2_q0=*hist2_q0__1;
unsigned long long int output_r_address0=*output_r_address0__1;
unsigned long long int output_r_ce0=*output_r_ce0__1;
unsigned long long int output_r_d0=*output_r_d0__1;
unsigned long long int output_r_we0=*output_r_we0__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   static unsigned long long int add_ln27_fu_86_p2=0;
   static unsigned long long int add_ln27_fu_86_p2__temp=0;
   static unsigned long long int add_ln27_reg_115=0;
   static unsigned long long int add_ln27_reg_115__temp=0;
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
   static unsigned long long int hist1_address0__temp=0;
   static unsigned long long int hist1_ce0__temp=0;
   static unsigned long long int hist1_q0__temp=0;
   static unsigned long long int hist2_address0__temp=0;
   static unsigned long long int hist2_ce0__temp=0;
   static unsigned long long int hist2_q0__temp=0;
   static unsigned long long int i_0_reg_57=0;
   static unsigned long long int i_0_reg_57__temp=0;
   static unsigned long long int i_fu_74_p2=0;
   static unsigned long long int i_fu_74_p2__temp=0;
   static unsigned long long int i_reg_95=0;
   static unsigned long long int i_reg_95__temp=0;
   static unsigned long long int icmp_ln25_fu_68_p2=0;
   static unsigned long long int icmp_ln25_fu_68_p2__temp=0;
   static unsigned long long int output_r_address0__temp=0;
   static unsigned long long int output_r_ce0__temp=0;
   static unsigned long long int output_r_d0__temp=0;
   static unsigned long long int output_r_q0=0;
   static unsigned long long int output_r_q0__temp=0;
   static unsigned long long int output_r_we0__temp=0;
   static unsigned long long int zext_ln27_fu_80_p1=0;
   static unsigned long long int zext_ln27_fu_80_p1__temp=0;
   static unsigned long long int zext_ln27_fu_80_p1_temp_0=0;
   static unsigned long long int zext_ln27_fu_80_p1_temp_0__temp=0;
   static unsigned long long int zext_ln27_fu_80_p1_temp_0_temp_2=0;
   static unsigned long long int zext_ln27_fu_80_p1_temp_0_temp_2__temp=0;
   static unsigned long long int zext_ln27_reg_100=0;
   static unsigned long long int zext_ln27_reg_100__temp=0;
   static unsigned long long int zext_ln27_reg_100_temp_1=0;
   static unsigned long long int zext_ln27_reg_100_temp_1__temp=0;
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
   ap_done_reg__temp = ap_done_reg ;
   hist2_ce0__temp = hist2_ce0 ;
   add_ln27_reg_115__temp = add_ln27_reg_115 ;
   icmp_ln25_fu_68_p2__temp = icmp_ln25_fu_68_p2 ;
   ap_rst__temp = ap_rst ;
   hist1_address0__temp = hist1_address0 ;
   hist2_address0__temp = hist2_address0 ;
   hist2_q0__temp = hist2_q0 ;
   zext_ln27_fu_80_p1__temp = zext_ln27_fu_80_p1 ;
   hist1_ce0__temp = hist1_ce0 ;
   ap_status__temp = ap_status ;
   i_0_reg_57__temp = i_0_reg_57 ;
   ap_idle__temp = ap_idle ;
   ap_ready__temp = ap_ready ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   ap_clk__temp = ap_clk ;
   output_r_ce0__temp = output_r_ce0 ;
   zext_ln27_fu_80_p1_temp_0__temp = zext_ln27_fu_80_p1_temp_0 ;
   ap_done__temp = ap_done ;
   ap_start__temp = ap_start ;
   ap_continue__temp = ap_continue ;
   add_ln27_fu_86_p2__temp = add_ln27_fu_86_p2 ;
   zext_ln27_reg_100_temp_1__temp = zext_ln27_reg_100_temp_1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   output_r_d0__temp = output_r_d0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln27_fu_80_p1_temp_0_temp_2__temp = zext_ln27_fu_80_p1_temp_0_temp_2 ;
   output_r_q0__temp = output_r_q0 ;
   i_reg_95__temp = i_reg_95 ;
   ap_block_state1__temp = ap_block_state1 ;
   output_r_we0__temp = output_r_we0 ;
   output_r_address0__temp = output_r_address0 ;
   hist1_q0__temp = hist1_q0 ;
   zext_ln27_reg_100__temp = zext_ln27_reg_100 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       output_r_ce0 = 0;
       output_r_we0 = 0;
       output_r_address0 =   ( zext_ln27_reg_100__temp  & 18446744073709551615 ) ;
       output_r_d0 =   ( add_ln27_reg_115__temp  & 18446744073709551615 ) ;
       hist1_address0 = i_0_reg_57 ;
       hist2_address0 = i_0_reg_57 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
hist1_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
hist2_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
output_r_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
output_r_we0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln27_reg_100 =  ( (  ( ( zext_ln27_reg_100 & 511 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_57 =  0;
       }
       hist1_address0 = i_0_reg_57 ;
       hist2_address0 = i_0_reg_57 ;
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_57 =  0;
       }
       hist1_address0 = i_0_reg_57 ;
       hist2_address0 = i_0_reg_57 ;
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
   ap_done_reg__temp = ap_done_reg ;
   hist2_ce0__temp = hist2_ce0 ;
   add_ln27_reg_115__temp = add_ln27_reg_115 ;
   icmp_ln25_fu_68_p2__temp = icmp_ln25_fu_68_p2 ;
   ap_rst__temp = ap_rst ;
   hist1_address0__temp = hist1_address0 ;
   hist2_address0__temp = hist2_address0 ;
   hist2_q0__temp = hist2_q0 ;
   zext_ln27_fu_80_p1__temp = zext_ln27_fu_80_p1 ;
   hist1_ce0__temp = hist1_ce0 ;
   ap_status__temp = ap_status ;
   i_0_reg_57__temp = i_0_reg_57 ;
   ap_idle__temp = ap_idle ;
   ap_ready__temp = ap_ready ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   ap_clk__temp = ap_clk ;
   output_r_ce0__temp = output_r_ce0 ;
   zext_ln27_fu_80_p1_temp_0__temp = zext_ln27_fu_80_p1_temp_0 ;
   ap_done__temp = ap_done ;
   ap_start__temp = ap_start ;
   ap_continue__temp = ap_continue ;
   add_ln27_fu_86_p2__temp = add_ln27_fu_86_p2 ;
   zext_ln27_reg_100_temp_1__temp = zext_ln27_reg_100_temp_1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   output_r_d0__temp = output_r_d0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln27_fu_80_p1_temp_0_temp_2__temp = zext_ln27_fu_80_p1_temp_0_temp_2 ;
   output_r_q0__temp = output_r_q0 ;
   i_reg_95__temp = i_reg_95 ;
   ap_block_state1__temp = ap_block_state1 ;
   output_r_we0__temp = output_r_we0 ;
   output_r_address0__temp = output_r_address0 ;
   hist1_q0__temp = hist1_q0 ;
   zext_ln27_reg_100__temp = zext_ln27_reg_100 ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       output_r_ce0 = 0;
       output_r_we0 = 0;
       output_r_address0 =   ( zext_ln27_reg_100__temp  & 18446744073709551615 ) ;
       output_r_d0 =   ( add_ln27_reg_115__temp  & 18446744073709551615 ) ;
       hist1_address0 = i_0_reg_57 ;
       hist2_address0 = i_0_reg_57 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
hist1_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
hist2_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
output_r_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
output_r_we0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln27_reg_100 =  ( (  ( ( zext_ln27_reg_100 & 511 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
               icmp_ln25_fu_68_p2 =   ( i_0_reg_57__temp  == 256 ? 1 :  0 ) ;
       if((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           hist1_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           hist2_ce0 =  1;
       }
               icmp_ln25_fu_68_p2 =   ( i_0_reg_57__temp  == 256 ? 1 :  0 ) ;
   if(((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_95 =   ( ( i_0_reg_57__temp  + 1 ) & 511 ) ;
       }
       if((icmp_ln25_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           zext_ln27_reg_100 =   ( (  ( (  ( i_0_reg_57__temp  & 18446744073709551615 )  & 511 ) & 18446744073709551615 )  |  ( ( zext_ln27_reg_100__temp  & 18446744073709551104 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(ap_done==1){
        //   ap_status = 0;
        //   goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_95 =   ( ( i_0_reg_57__temp  + 1 ) & 511 ) ;
       }
       if((icmp_ln25_fu_68_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               zext_ln27_reg_100 =   ( (  ( (  ( i_0_reg_57__temp  & 18446744073709551615 )  & 511 ) & 18446744073709551615 )  |  ( ( zext_ln27_reg_100__temp  & 18446744073709551104 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
   ap_done_reg__temp = ap_done_reg ;
   hist2_ce0__temp = hist2_ce0 ;
   add_ln27_reg_115__temp = add_ln27_reg_115 ;
   icmp_ln25_fu_68_p2__temp = icmp_ln25_fu_68_p2 ;
   ap_rst__temp = ap_rst ;
   hist1_address0__temp = hist1_address0 ;
   hist2_address0__temp = hist2_address0 ;
   hist2_q0__temp = hist2_q0 ;
   zext_ln27_fu_80_p1__temp = zext_ln27_fu_80_p1 ;
   hist1_ce0__temp = hist1_ce0 ;
   ap_status__temp = ap_status ;
   i_0_reg_57__temp = i_0_reg_57 ;
   ap_idle__temp = ap_idle ;
   ap_ready__temp = ap_ready ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   ap_clk__temp = ap_clk ;
   output_r_ce0__temp = output_r_ce0 ;
   zext_ln27_fu_80_p1_temp_0__temp = zext_ln27_fu_80_p1_temp_0 ;
   ap_done__temp = ap_done ;
   ap_start__temp = ap_start ;
   ap_continue__temp = ap_continue ;
   add_ln27_fu_86_p2__temp = add_ln27_fu_86_p2 ;
   zext_ln27_reg_100_temp_1__temp = zext_ln27_reg_100_temp_1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   output_r_d0__temp = output_r_d0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln27_fu_80_p1_temp_0_temp_2__temp = zext_ln27_fu_80_p1_temp_0_temp_2 ;
   output_r_q0__temp = output_r_q0 ;
   i_reg_95__temp = i_reg_95 ;
   ap_block_state1__temp = ap_block_state1 ;
   output_r_we0__temp = output_r_we0 ;
   output_r_address0__temp = output_r_address0 ;
   hist1_q0__temp = hist1_q0 ;
   zext_ln27_reg_100__temp = zext_ln27_reg_100 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       output_r_ce0 = 0;
       output_r_we0 = 0;
       output_r_address0 =   ( zext_ln27_reg_100__temp  & 18446744073709551615 ) ;
       output_r_d0 =   ( add_ln27_reg_115__temp  & 18446744073709551615 ) ;
       hist1_address0 = i_0_reg_57 ;
       hist2_address0 = i_0_reg_57 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
hist1_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
hist2_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
output_r_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
output_r_we0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln27_reg_100 =  ( (  ( ( zext_ln27_reg_100 & 511 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           add_ln27_reg_115 =   ( ( ( hist1_q0__temp  & 4294967295 )  + ( hist2_q0__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
   ap_done_reg__temp = ap_done_reg ;
   hist2_ce0__temp = hist2_ce0 ;
   add_ln27_reg_115__temp = add_ln27_reg_115 ;
   icmp_ln25_fu_68_p2__temp = icmp_ln25_fu_68_p2 ;
   ap_rst__temp = ap_rst ;
   hist1_address0__temp = hist1_address0 ;
   hist2_address0__temp = hist2_address0 ;
   hist2_q0__temp = hist2_q0 ;
   zext_ln27_fu_80_p1__temp = zext_ln27_fu_80_p1 ;
   hist1_ce0__temp = hist1_ce0 ;
   ap_status__temp = ap_status ;
   i_0_reg_57__temp = i_0_reg_57 ;
   ap_idle__temp = ap_idle ;
   ap_ready__temp = ap_ready ;
   i_fu_74_p2__temp = i_fu_74_p2 ;
   ap_clk__temp = ap_clk ;
   output_r_ce0__temp = output_r_ce0 ;
   zext_ln27_fu_80_p1_temp_0__temp = zext_ln27_fu_80_p1_temp_0 ;
   ap_done__temp = ap_done ;
   ap_start__temp = ap_start ;
   ap_continue__temp = ap_continue ;
   add_ln27_fu_86_p2__temp = add_ln27_fu_86_p2 ;
   zext_ln27_reg_100_temp_1__temp = zext_ln27_reg_100_temp_1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   output_r_d0__temp = output_r_d0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln27_fu_80_p1_temp_0_temp_2__temp = zext_ln27_fu_80_p1_temp_0_temp_2 ;
   output_r_q0__temp = output_r_q0 ;
   i_reg_95__temp = i_reg_95 ;
   ap_block_state1__temp = ap_block_state1 ;
   output_r_we0__temp = output_r_we0 ;
   output_r_address0__temp = output_r_address0 ;
   hist1_q0__temp = hist1_q0 ;
   zext_ln27_reg_100__temp = zext_ln27_reg_100 ;

  if(ap_clk_count == 1 ){
       ap_status = 4;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       output_r_ce0 = 0;
       output_r_we0 = 0;
       output_r_address0 =   ( zext_ln27_reg_100__temp  & 18446744073709551615 ) ;
       output_r_d0 =   ( add_ln27_reg_115__temp  & 18446744073709551615 ) ;
       hist1_address0 = i_0_reg_57 ;
       hist2_address0 = i_0_reg_57 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln25_fu_68_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
hist1_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
hist2_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
output_r_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
output_r_we0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       zext_ln27_reg_100 =  ( (  ( ( zext_ln27_reg_100 & 511 ) & 18446744073709551615 )  | 0 ) & 18446744073709551615 )  ; 
       if(1 == ap_CS_fsm_state4)
       {
           output_r_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           output_r_we0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           i_0_reg_57 =  i_reg_95__temp ;
       }
       hist1_address0 = i_0_reg_57 ;
       hist2_address0 = i_0_reg_57 ;
       if(output_r_ce0){
          output_r_q0 = output_r_ram[output_r_address0];
           if(output_r_we0){
              output_r_ram[output_r_address0] = output_r_d0;
           }
       }
       goto ap_ST_fsm_state2;
   end:
    *ap_clk__1=ap_clk;
    *ap_continue__1=ap_continue;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *ap_status__1=ap_status;
    *hist1_address0__1=hist1_address0;
    *hist1_ce0__1=hist1_ce0;
    *hist1_q0__1=hist1_q0;
    *hist2_address0__1=hist2_address0;
    *hist2_ce0__1=hist2_ce0;
    *hist2_q0__1=hist2_q0;
    *output_r_address0__1=output_r_address0;
    *output_r_ce0__1=output_r_ce0;
    *output_r_d0__1=output_r_d0;
    *output_r_we0__1=output_r_we0;
       return;
}
