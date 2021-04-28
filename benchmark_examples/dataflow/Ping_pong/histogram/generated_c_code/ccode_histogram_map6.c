#include<stdio.h>
#define in_r_DWIDTH 32
void histogram_map6(unsigned long long int *ap_clk__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_status__1,unsigned long long int *hist_address0__1,unsigned long long int *hist_address1__1,unsigned long long int *hist_ce0__1,unsigned long long int *hist_ce1__1,unsigned long long int *hist_d0__1,unsigned long long int *hist_q1__1,unsigned long long int *hist_we0__1,unsigned long long int *in_r_address0__1,unsigned long long int *in_r_ce0__1,unsigned long long int *in_r_q0__1,unsigned long long int  *in_r_ram , int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
unsigned long long int hist_address0=*hist_address0__1;
unsigned long long int hist_address1=*hist_address1__1;
unsigned long long int hist_ce0=*hist_ce0__1;
unsigned long long int hist_ce1=*hist_ce1__1;
unsigned long long int hist_d0=*hist_d0__1;
unsigned long long int hist_q1=*hist_q1__1;
unsigned long long int hist_we0=*hist_we0__1;
unsigned long long int in_r_address0=*in_r_address0__1;
unsigned long long int in_r_ce0=*in_r_ce0__1;
unsigned long long int in_r_q0=*in_r_q0__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   static long long int icmp_ln13_fu_187_p1=0;
   static long long int icmp_ln13_fu_187_p1__temp=0;
   static long long int old_0_reg_102=0;
   static long long int old_0_reg_102__temp=0;
   static long long int sext_ln16_fu_193_p1=0;
   static long long int sext_ln16_fu_193_p1__temp=0;
   static long long int sext_ln17_fu_198_p0=0;
   static long long int sext_ln17_fu_198_p0__temp=0;
   static long long int sext_ln17_fu_198_p1=0;
   static long long int sext_ln17_fu_198_p1__temp=0;
   static long long int sext_ln21_fu_182_p1=0;
   static long long int sext_ln21_fu_182_p1__temp=0;
   static long long int val_reg_240=0;
   static long long int val_reg_240__temp=0;
   static unsigned long long int acc_0_reg_112=0;
   static unsigned long long int acc_0_reg_112__temp=0;
   static unsigned long long int acc_1_in_reg_137=0;
   static unsigned long long int acc_1_in_reg_137__temp=0;
   static unsigned long long int acc_fu_203_p2=0;
   static unsigned long long int acc_fu_203_p2__temp=0;
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
   static unsigned long long int ap_phi_mux_acc_0_phi_fu_117_p4=0;
   static unsigned long long int ap_phi_mux_acc_0_phi_fu_117_p4__temp=0;
   static unsigned long long int ap_phi_mux_acc_1_in_phi_fu_140_p4=0;
   static unsigned long long int ap_phi_mux_acc_1_in_phi_fu_140_p4__temp=0;
   static unsigned long long int ap_ready__temp=0;
   static unsigned long long int ap_rst__temp=0;
   static unsigned long long int ap_start__temp=0;
   static unsigned long long int ap_status__temp=0;
   static unsigned long long int hist_address0__temp=0;
   static unsigned long long int hist_address1__temp=0;
   static unsigned long long int hist_ce0__temp=0;
   static unsigned long long int hist_ce1__temp=0;
   static unsigned long long int hist_d0__temp=0;
   static unsigned long long int hist_q1__temp=0;
   static unsigned long long int hist_we0__temp=0;
   static unsigned long long int i1_0_reg_126=0;
   static unsigned long long int i1_0_reg_126__temp=0;
   static unsigned long long int i_0_reg_91=0;
   static unsigned long long int i_0_reg_91__temp=0;
   static unsigned long long int i_1_fu_171_p2=0;
   static unsigned long long int i_1_fu_171_p2__temp=0;
   static unsigned long long int i_1_reg_230=0;
   static unsigned long long int i_1_reg_230__temp=0;
   static unsigned long long int i_fu_154_p2=0;
   static unsigned long long int i_fu_154_p2__temp=0;
   static unsigned long long int icmp_ln10_fu_165_p2=0;
   static unsigned long long int icmp_ln10_fu_165_p2__temp=0;
   static unsigned long long int icmp_ln13_fu_187_p2=0;
   static unsigned long long int icmp_ln13_fu_187_p2__temp=0;
   static unsigned long long int icmp_ln13_reg_245=0;
   static unsigned long long int icmp_ln13_reg_245__temp=0;
   static unsigned long long int icmp_ln4_fu_148_p2=0;
   static unsigned long long int icmp_ln4_fu_148_p2__temp=0;
   static unsigned long long int in_r_address0__temp=0;
   static unsigned long long int in_r_ce0__temp=0;
   static unsigned long long int in_r_d0=0;
   static unsigned long long int in_r_d0__temp=0;
   static unsigned long long int in_r_q0__temp=0;
   static unsigned long long int in_r_we0=0;
   static unsigned long long int in_r_we0__temp=0;
   static unsigned long long int zext_ln12_fu_177_p1=0;
   static unsigned long long int zext_ln12_fu_177_p1__temp=0;
   static unsigned long long int zext_ln6_fu_160_p1=0;
   static unsigned long long int zext_ln6_fu_160_p1__temp=0;
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
	case 6:
		goto ap_ST_fsm_state6;
	default: 
		 goto end;
}

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   sext_ln21_fu_182_p1__temp = sext_ln21_fu_182_p1 ;
   sext_ln17_fu_198_p1__temp = sext_ln17_fu_198_p1 ;
   old_0_reg_102__temp = old_0_reg_102 ;
   sext_ln17_fu_198_p0__temp = sext_ln17_fu_198_p0 ;
   icmp_ln13_fu_187_p1__temp = icmp_ln13_fu_187_p1 ;
   val_reg_240__temp = val_reg_240 ;
   sext_ln16_fu_193_p1__temp = sext_ln16_fu_193_p1 ;
   i_0_reg_91__temp = i_0_reg_91 ;
   hist_ce1__temp = hist_ce1 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   zext_ln6_fu_160_p1__temp = zext_ln6_fu_160_p1 ;
   icmp_ln4_fu_148_p2__temp = icmp_ln4_fu_148_p2 ;
   ap_phi_mux_acc_0_phi_fu_117_p4__temp = ap_phi_mux_acc_0_phi_fu_117_p4 ;
   in_r_ce0__temp = in_r_ce0 ;
   acc_fu_203_p2__temp = acc_fu_203_p2 ;
   acc_0_reg_112__temp = acc_0_reg_112 ;
   ap_status__temp = ap_status ;
   zext_ln12_fu_177_p1__temp = zext_ln12_fu_177_p1 ;
   hist_d0__temp = hist_d0 ;
   in_r_d0__temp = in_r_d0 ;
   ap_clk__temp = ap_clk ;
   i_1_fu_171_p2__temp = i_1_fu_171_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln13_reg_245__temp = icmp_ln13_reg_245 ;
   ap_done_reg__temp = ap_done_reg ;
   hist_address1__temp = hist_address1 ;
   ap_continue__temp = ap_continue ;
   ap_start__temp = ap_start ;
   hist_ce0__temp = hist_ce0 ;
   in_r_we0__temp = in_r_we0 ;
   acc_1_in_reg_137__temp = acc_1_in_reg_137 ;
   in_r_q0__temp = in_r_q0 ;
   icmp_ln13_fu_187_p2__temp = icmp_ln13_fu_187_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_1_reg_230__temp = i_1_reg_230 ;
   i_fu_154_p2__temp = i_fu_154_p2 ;
   icmp_ln10_fu_165_p2__temp = icmp_ln10_fu_165_p2 ;
   hist_q1__temp = hist_q1 ;
   in_r_address0__temp = in_r_address0 ;
   hist_address0__temp = hist_address0 ;
   ap_ready__temp = ap_ready ;
   hist_we0__temp = hist_we0 ;
   ap_done__temp = ap_done ;
   ap_phi_mux_acc_1_in_phi_fu_140_p4__temp = ap_phi_mux_acc_1_in_phi_fu_140_p4 ;
   i1_0_reg_126__temp = i1_0_reg_126 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       in_r_ce0 = 0;
       in_r_we0 = 0;
       hist_address1 = in_r_q0 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln13_reg_245 == 0) && (1 == ap_CS_fsm_state6))){
ap_phi_mux_acc_1_in_phi_fu_140_p4 = acc_1_in_reg_137 ; 
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_address0 = 0 ; 
}
}
}
       if(!(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))){
hist_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
hist_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_d0 = 0 ; 
}
}
}
       if(!((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))){
hist_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
in_r_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state2))){
in_r_ce0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               icmp_ln4_fu_148_p2 =   ( i_0_reg_91__temp  == 256 ? 1 :  0 ) ;
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_91 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_91 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   sext_ln21_fu_182_p1__temp = sext_ln21_fu_182_p1 ;
   sext_ln17_fu_198_p1__temp = sext_ln17_fu_198_p1 ;
   old_0_reg_102__temp = old_0_reg_102 ;
   sext_ln17_fu_198_p0__temp = sext_ln17_fu_198_p0 ;
   icmp_ln13_fu_187_p1__temp = icmp_ln13_fu_187_p1 ;
   val_reg_240__temp = val_reg_240 ;
   sext_ln16_fu_193_p1__temp = sext_ln16_fu_193_p1 ;
   i_0_reg_91__temp = i_0_reg_91 ;
   hist_ce1__temp = hist_ce1 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   zext_ln6_fu_160_p1__temp = zext_ln6_fu_160_p1 ;
   icmp_ln4_fu_148_p2__temp = icmp_ln4_fu_148_p2 ;
   ap_phi_mux_acc_0_phi_fu_117_p4__temp = ap_phi_mux_acc_0_phi_fu_117_p4 ;
   in_r_ce0__temp = in_r_ce0 ;
   acc_fu_203_p2__temp = acc_fu_203_p2 ;
   acc_0_reg_112__temp = acc_0_reg_112 ;
   ap_status__temp = ap_status ;
   zext_ln12_fu_177_p1__temp = zext_ln12_fu_177_p1 ;
   hist_d0__temp = hist_d0 ;
   in_r_d0__temp = in_r_d0 ;
   ap_clk__temp = ap_clk ;
   i_1_fu_171_p2__temp = i_1_fu_171_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln13_reg_245__temp = icmp_ln13_reg_245 ;
   ap_done_reg__temp = ap_done_reg ;
   hist_address1__temp = hist_address1 ;
   ap_continue__temp = ap_continue ;
   ap_start__temp = ap_start ;
   hist_ce0__temp = hist_ce0 ;
   in_r_we0__temp = in_r_we0 ;
   acc_1_in_reg_137__temp = acc_1_in_reg_137 ;
   in_r_q0__temp = in_r_q0 ;
   icmp_ln13_fu_187_p2__temp = icmp_ln13_fu_187_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_1_reg_230__temp = i_1_reg_230 ;
   i_fu_154_p2__temp = i_fu_154_p2 ;
   icmp_ln10_fu_165_p2__temp = icmp_ln10_fu_165_p2 ;
   hist_q1__temp = hist_q1 ;
   in_r_address0__temp = in_r_address0 ;
   hist_address0__temp = hist_address0 ;
   ap_ready__temp = ap_ready ;
   hist_we0__temp = hist_we0 ;
   ap_done__temp = ap_done ;
   ap_phi_mux_acc_1_in_phi_fu_140_p4__temp = ap_phi_mux_acc_1_in_phi_fu_140_p4 ;
   i1_0_reg_126__temp = i1_0_reg_126 ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       in_r_ce0 = 0;
       in_r_we0 = 0;
       hist_address1 = in_r_q0 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln13_reg_245 == 0) && (1 == ap_CS_fsm_state6))){
ap_phi_mux_acc_1_in_phi_fu_140_p4 = acc_1_in_reg_137 ; 
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_address0 = 0 ; 
}
}
}
       if(!(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))){
hist_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
hist_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_d0 = 0 ; 
}
}
}
       if(!((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))){
hist_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
in_r_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state2))){
in_r_ce0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               icmp_ln4_fu_148_p2 =   ( i_0_reg_91__temp  == 256 ? 1 :  0 ) ;
               icmp_ln13_fu_187_p2 =   ( old_0_reg_102__temp  ==  ( in_r_q0 & 4294967295 )  ? 1 : 0 ) ;
               icmp_ln10_fu_165_p2 =   ( i1_0_reg_126__temp  == 4 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           hist_address0 =   ( i_0_reg_91__temp  & 18446744073709551615 ) ;
       }
       if(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))
       {
           hist_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           hist_d0 =  0;
       }
       if((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))
       {
           hist_we0 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           in_r_address0 =  0;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state2))
       {
           in_r_ce0 =  1;
       }
               icmp_ln4_fu_148_p2 =   ( i_0_reg_91__temp  == 256 ? 1 :  0 ) ;
   if(((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           i_0_reg_91 =   ( ( i_0_reg_91__temp  + 1 ) & 511 ) ;
       }
       
       if(in_r_ce0){
          in_r_q0 = in_r_ram[in_r_address0];
           if(in_r_we0){
              in_r_ram[in_r_address0] = in_r_d0;
           }
       }
        hist_address1 = in_r_q0 ;
       goto ap_ST_fsm_state2;
   }
   if(((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               i_0_reg_91 =   ( ( i_0_reg_91__temp  + 1 ) & 511 ) ;
       }
       
       if(in_r_ce0){
          in_r_q0 = in_r_ram[in_r_address0];
           if(in_r_we0){
              in_r_ram[in_r_address0] = in_r_d0;
           }
       }
        hist_address1 = in_r_q0 ;
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   sext_ln21_fu_182_p1__temp = sext_ln21_fu_182_p1 ;
   sext_ln17_fu_198_p1__temp = sext_ln17_fu_198_p1 ;
   old_0_reg_102__temp = old_0_reg_102 ;
   sext_ln17_fu_198_p0__temp = sext_ln17_fu_198_p0 ;
   icmp_ln13_fu_187_p1__temp = icmp_ln13_fu_187_p1 ;
   val_reg_240__temp = val_reg_240 ;
   sext_ln16_fu_193_p1__temp = sext_ln16_fu_193_p1 ;
   i_0_reg_91__temp = i_0_reg_91 ;
   hist_ce1__temp = hist_ce1 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   zext_ln6_fu_160_p1__temp = zext_ln6_fu_160_p1 ;
   icmp_ln4_fu_148_p2__temp = icmp_ln4_fu_148_p2 ;
   ap_phi_mux_acc_0_phi_fu_117_p4__temp = ap_phi_mux_acc_0_phi_fu_117_p4 ;
   in_r_ce0__temp = in_r_ce0 ;
   acc_fu_203_p2__temp = acc_fu_203_p2 ;
   acc_0_reg_112__temp = acc_0_reg_112 ;
   ap_status__temp = ap_status ;
   zext_ln12_fu_177_p1__temp = zext_ln12_fu_177_p1 ;
   hist_d0__temp = hist_d0 ;
   in_r_d0__temp = in_r_d0 ;
   ap_clk__temp = ap_clk ;
   i_1_fu_171_p2__temp = i_1_fu_171_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln13_reg_245__temp = icmp_ln13_reg_245 ;
   ap_done_reg__temp = ap_done_reg ;
   hist_address1__temp = hist_address1 ;
   ap_continue__temp = ap_continue ;
   ap_start__temp = ap_start ;
   hist_ce0__temp = hist_ce0 ;
   in_r_we0__temp = in_r_we0 ;
   acc_1_in_reg_137__temp = acc_1_in_reg_137 ;
   in_r_q0__temp = in_r_q0 ;
   icmp_ln13_fu_187_p2__temp = icmp_ln13_fu_187_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_1_reg_230__temp = i_1_reg_230 ;
   i_fu_154_p2__temp = i_fu_154_p2 ;
   icmp_ln10_fu_165_p2__temp = icmp_ln10_fu_165_p2 ;
   hist_q1__temp = hist_q1 ;
   in_r_address0__temp = in_r_address0 ;
   hist_address0__temp = hist_address0 ;
   ap_ready__temp = ap_ready ;
   hist_we0__temp = hist_we0 ;
   ap_done__temp = ap_done ;
   ap_phi_mux_acc_1_in_phi_fu_140_p4__temp = ap_phi_mux_acc_1_in_phi_fu_140_p4 ;
   i1_0_reg_126__temp = i1_0_reg_126 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       in_r_ce0 = 0;
       in_r_we0 = 0;
       hist_address1 = in_r_q0 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln13_reg_245 == 0) && (1 == ap_CS_fsm_state6))){
ap_phi_mux_acc_1_in_phi_fu_140_p4 = acc_1_in_reg_137 ; 
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_address0 = 0 ; 
}
}
}
       if(!(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))){
hist_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
hist_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_d0 = 0 ; 
}
}
}
       if(!((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))){
hist_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
in_r_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state2))){
in_r_ce0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           acc_0_reg_112 =  0;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i1_0_reg_126 =  0;
       }
       if(1 == ap_CS_fsm_state3)
       {
           old_0_reg_102 =  ( in_r_q0 & 4294967295 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   sext_ln21_fu_182_p1__temp = sext_ln21_fu_182_p1 ;
   sext_ln17_fu_198_p1__temp = sext_ln17_fu_198_p1 ;
   old_0_reg_102__temp = old_0_reg_102 ;
   sext_ln17_fu_198_p0__temp = sext_ln17_fu_198_p0 ;
   icmp_ln13_fu_187_p1__temp = icmp_ln13_fu_187_p1 ;
   val_reg_240__temp = val_reg_240 ;
   sext_ln16_fu_193_p1__temp = sext_ln16_fu_193_p1 ;
   i_0_reg_91__temp = i_0_reg_91 ;
   hist_ce1__temp = hist_ce1 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   zext_ln6_fu_160_p1__temp = zext_ln6_fu_160_p1 ;
   icmp_ln4_fu_148_p2__temp = icmp_ln4_fu_148_p2 ;
   ap_phi_mux_acc_0_phi_fu_117_p4__temp = ap_phi_mux_acc_0_phi_fu_117_p4 ;
   in_r_ce0__temp = in_r_ce0 ;
   acc_fu_203_p2__temp = acc_fu_203_p2 ;
   acc_0_reg_112__temp = acc_0_reg_112 ;
   ap_status__temp = ap_status ;
   zext_ln12_fu_177_p1__temp = zext_ln12_fu_177_p1 ;
   hist_d0__temp = hist_d0 ;
   in_r_d0__temp = in_r_d0 ;
   ap_clk__temp = ap_clk ;
   i_1_fu_171_p2__temp = i_1_fu_171_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln13_reg_245__temp = icmp_ln13_reg_245 ;
   ap_done_reg__temp = ap_done_reg ;
   hist_address1__temp = hist_address1 ;
   ap_continue__temp = ap_continue ;
   ap_start__temp = ap_start ;
   hist_ce0__temp = hist_ce0 ;
   in_r_we0__temp = in_r_we0 ;
   acc_1_in_reg_137__temp = acc_1_in_reg_137 ;
   in_r_q0__temp = in_r_q0 ;
   icmp_ln13_fu_187_p2__temp = icmp_ln13_fu_187_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_1_reg_230__temp = i_1_reg_230 ;
   i_fu_154_p2__temp = i_fu_154_p2 ;
   icmp_ln10_fu_165_p2__temp = icmp_ln10_fu_165_p2 ;
   hist_q1__temp = hist_q1 ;
   in_r_address0__temp = in_r_address0 ;
   hist_address0__temp = hist_address0 ;
   ap_ready__temp = ap_ready ;
   hist_we0__temp = hist_we0 ;
   ap_done__temp = ap_done ;
   ap_phi_mux_acc_1_in_phi_fu_140_p4__temp = ap_phi_mux_acc_1_in_phi_fu_140_p4 ;
   i1_0_reg_126__temp = i1_0_reg_126 ;

  if(ap_clk_count == 1 ){
       ap_status = 4;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       in_r_ce0 = 0;
       in_r_we0 = 0;
       hist_address1 = in_r_q0 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln13_reg_245 == 0) && (1 == ap_CS_fsm_state6))){
ap_phi_mux_acc_1_in_phi_fu_140_p4 = acc_1_in_reg_137 ; 
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_address0 = 0 ; 
}
}
}
       if(!(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))){
hist_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
hist_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_d0 = 0 ; 
}
}
}
       if(!((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))){
hist_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
in_r_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state2))){
in_r_ce0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               icmp_ln4_fu_148_p2 =   ( i_0_reg_91__temp  == 256 ? 1 :  0 ) ;
               icmp_ln10_fu_165_p2 =   ( i1_0_reg_126__temp  == 4 ? 1 :  0 ) ;
               icmp_ln13_fu_187_p2 =   ( old_0_reg_102__temp  ==  ( in_r_q0 & 4294967295 )  ? 1 : 0 ) ;
       if((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           hist_address0 =   ( old_0_reg_102__temp  & 18446744073709551615 ) ;
       }
       if(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))
       {
           hist_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           hist_d0 =   ( acc_0_reg_112__temp  & 4294967295 ) ;
       }
       if((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))
       {
           hist_we0 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           in_r_address0 =   ( i1_0_reg_126__temp  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state2))
       {
           in_r_ce0 =  1;
       }
               icmp_ln10_fu_165_p2 =   ( i1_0_reg_126__temp  == 4 ? 1 :  0 ) ;
   if(((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4)) == 1){
       if((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state4)
       {
           i_1_reg_230 =   ( ( i1_0_reg_126__temp  + 1 ) & 7 ) ;
       }
       if(in_r_ce0){
          in_r_q0 = in_r_ram[in_r_address0];
           if(in_r_we0){
              in_r_ram[in_r_address0] = in_r_d0;
           }
       }
        hist_address1 = in_r_q0 ;
       if(ap_done==1){
         //  ap_status = 0;
         //  goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4)) == 0){
       if((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
               ap_done_reg =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
               i_1_reg_230 =   ( ( i1_0_reg_126__temp  + 1 ) & 7 ) ;
       }
       if(in_r_ce0){
          in_r_q0 = in_r_ram[in_r_address0];
           if(in_r_we0){
              in_r_ram[in_r_address0] = in_r_d0;
           }
       }
        hist_address1 = in_r_q0 ;
       goto ap_ST_fsm_state5;
   }

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
    ap_CS_fsm_state6 = 0;
   sext_ln21_fu_182_p1__temp = sext_ln21_fu_182_p1 ;
   sext_ln17_fu_198_p1__temp = sext_ln17_fu_198_p1 ;
   old_0_reg_102__temp = old_0_reg_102 ;
   sext_ln17_fu_198_p0__temp = sext_ln17_fu_198_p0 ;
   icmp_ln13_fu_187_p1__temp = icmp_ln13_fu_187_p1 ;
   val_reg_240__temp = val_reg_240 ;
   sext_ln16_fu_193_p1__temp = sext_ln16_fu_193_p1 ;
   i_0_reg_91__temp = i_0_reg_91 ;
   hist_ce1__temp = hist_ce1 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   zext_ln6_fu_160_p1__temp = zext_ln6_fu_160_p1 ;
   icmp_ln4_fu_148_p2__temp = icmp_ln4_fu_148_p2 ;
   ap_phi_mux_acc_0_phi_fu_117_p4__temp = ap_phi_mux_acc_0_phi_fu_117_p4 ;
   in_r_ce0__temp = in_r_ce0 ;
   acc_fu_203_p2__temp = acc_fu_203_p2 ;
   acc_0_reg_112__temp = acc_0_reg_112 ;
   ap_status__temp = ap_status ;
   zext_ln12_fu_177_p1__temp = zext_ln12_fu_177_p1 ;
   hist_d0__temp = hist_d0 ;
   in_r_d0__temp = in_r_d0 ;
   ap_clk__temp = ap_clk ;
   i_1_fu_171_p2__temp = i_1_fu_171_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln13_reg_245__temp = icmp_ln13_reg_245 ;
   ap_done_reg__temp = ap_done_reg ;
   hist_address1__temp = hist_address1 ;
   ap_continue__temp = ap_continue ;
   ap_start__temp = ap_start ;
   hist_ce0__temp = hist_ce0 ;
   in_r_we0__temp = in_r_we0 ;
   acc_1_in_reg_137__temp = acc_1_in_reg_137 ;
   in_r_q0__temp = in_r_q0 ;
   icmp_ln13_fu_187_p2__temp = icmp_ln13_fu_187_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_1_reg_230__temp = i_1_reg_230 ;
   i_fu_154_p2__temp = i_fu_154_p2 ;
   icmp_ln10_fu_165_p2__temp = icmp_ln10_fu_165_p2 ;
   hist_q1__temp = hist_q1 ;
   in_r_address0__temp = in_r_address0 ;
   hist_address0__temp = hist_address0 ;
   ap_ready__temp = ap_ready ;
   hist_we0__temp = hist_we0 ;
   ap_done__temp = ap_done ;
   ap_phi_mux_acc_1_in_phi_fu_140_p4__temp = ap_phi_mux_acc_1_in_phi_fu_140_p4 ;
   i1_0_reg_126__temp = i1_0_reg_126 ;

  if(ap_clk_count == 1 ){
       ap_status = 5;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       in_r_ce0 = 0;
       in_r_we0 = 0;
       hist_address1 = in_r_q0 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln13_reg_245 == 0) && (1 == ap_CS_fsm_state6))){
ap_phi_mux_acc_1_in_phi_fu_140_p4 = acc_1_in_reg_137 ; 
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_address0 = 0 ; 
}
}
}
       if(!(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))){
hist_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
hist_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_d0 = 0 ; 
}
}
}
       if(!((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))){
hist_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
in_r_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state2))){
in_r_ce0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               icmp_ln4_fu_148_p2 =   ( i_0_reg_91__temp  == 256 ? 1 :  0 ) ;
               icmp_ln13_fu_187_p2 =   ( old_0_reg_102__temp  ==  ( in_r_q0 & 4294967295 )  ? 1 : 0 ) ;
               icmp_ln10_fu_165_p2 =   ( i1_0_reg_126__temp  == 4 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state5)
       {
           hist_address0 =   ( old_0_reg_102__temp  & 18446744073709551615 ) ;
       }
       if(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))
       {
           hist_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           hist_ce1 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           hist_d0 =  acc_0_reg_112__temp ;
       }
       if((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))
       {
           hist_we0 =  1;
       }
               icmp_ln13_fu_187_p2 =   ( old_0_reg_102__temp  ==  ( in_r_q0 & 4294967295 )  ? 1 : 0 ) ;
       if((icmp_ln13_fu_187_p2 == 1) && (1 == ap_CS_fsm_state5))
       {
           acc_1_in_reg_137 =  acc_0_reg_112__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           val_reg_240 =  ( in_r_q0 & 4294967295 ) ;
           icmp_ln13_reg_245 =   ( old_0_reg_102__temp  ==  ( in_r_q0 & 4294967295 )  ? 1 : 0 ) ;
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 1;
   sext_ln21_fu_182_p1__temp = sext_ln21_fu_182_p1 ;
   sext_ln17_fu_198_p1__temp = sext_ln17_fu_198_p1 ;
   old_0_reg_102__temp = old_0_reg_102 ;
   sext_ln17_fu_198_p0__temp = sext_ln17_fu_198_p0 ;
   icmp_ln13_fu_187_p1__temp = icmp_ln13_fu_187_p1 ;
   val_reg_240__temp = val_reg_240 ;
   sext_ln16_fu_193_p1__temp = sext_ln16_fu_193_p1 ;
   i_0_reg_91__temp = i_0_reg_91 ;
   hist_ce1__temp = hist_ce1 ;
   ap_block_state1__temp = ap_block_state1 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   zext_ln6_fu_160_p1__temp = zext_ln6_fu_160_p1 ;
   icmp_ln4_fu_148_p2__temp = icmp_ln4_fu_148_p2 ;
   ap_phi_mux_acc_0_phi_fu_117_p4__temp = ap_phi_mux_acc_0_phi_fu_117_p4 ;
   in_r_ce0__temp = in_r_ce0 ;
   acc_fu_203_p2__temp = acc_fu_203_p2 ;
   acc_0_reg_112__temp = acc_0_reg_112 ;
   ap_status__temp = ap_status ;
   zext_ln12_fu_177_p1__temp = zext_ln12_fu_177_p1 ;
   hist_d0__temp = hist_d0 ;
   in_r_d0__temp = in_r_d0 ;
   ap_clk__temp = ap_clk ;
   i_1_fu_171_p2__temp = i_1_fu_171_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln13_reg_245__temp = icmp_ln13_reg_245 ;
   ap_done_reg__temp = ap_done_reg ;
   hist_address1__temp = hist_address1 ;
   ap_continue__temp = ap_continue ;
   ap_start__temp = ap_start ;
   hist_ce0__temp = hist_ce0 ;
   in_r_we0__temp = in_r_we0 ;
   acc_1_in_reg_137__temp = acc_1_in_reg_137 ;
   in_r_q0__temp = in_r_q0 ;
   icmp_ln13_fu_187_p2__temp = icmp_ln13_fu_187_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_1_reg_230__temp = i_1_reg_230 ;
   i_fu_154_p2__temp = i_fu_154_p2 ;
   icmp_ln10_fu_165_p2__temp = icmp_ln10_fu_165_p2 ;
   hist_q1__temp = hist_q1 ;
   in_r_address0__temp = in_r_address0 ;
   hist_address0__temp = hist_address0 ;
   ap_ready__temp = ap_ready ;
   hist_we0__temp = hist_we0 ;
   ap_done__temp = ap_done ;
   ap_phi_mux_acc_1_in_phi_fu_140_p4__temp = ap_phi_mux_acc_1_in_phi_fu_140_p4 ;
   i1_0_reg_126__temp = i1_0_reg_126 ;

  if(ap_clk_count == 1 ){
       ap_status = 6;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       in_r_ce0 = 0;
       in_r_we0 = 0;
       hist_address1 = in_r_q0 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!((icmp_ln13_reg_245 == 0) && (1 == ap_CS_fsm_state6))){
ap_phi_mux_acc_1_in_phi_fu_140_p4 = acc_1_in_reg_137 ; 
}
       if(!((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_address0 = 0 ; 
}
}
}
       if(!(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state2))){
hist_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
hist_ce1 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
hist_d0 = 0 ; 
}
}
}
       if(!((((icmp_ln13_fu_187_p2 == 0) && (1 == ap_CS_fsm_state5)) || ((icmp_ln10_fu_165_p2 == 1) && (1 == ap_CS_fsm_state4))) || ((icmp_ln4_fu_148_p2 == 0) && (1 == ap_CS_fsm_state2)))){
hist_we0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state2)){
in_r_address0 = 0 ; 
}
}
       if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state2))){
in_r_ce0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               icmp_ln13_reg_245 =  icmp_ln13_reg_245__temp ;
       if((icmp_ln13_reg_245 == 0) && (1 == ap_CS_fsm_state6))
       {
           ap_phi_mux_acc_1_in_phi_fu_140_p4 =  ( hist_q1 & 4294967295 ) ;
       }
               icmp_ln13_fu_187_p2 =   ( old_0_reg_102__temp  ==  ( in_r_q0 & 4294967295 )  ? 1 : 0 ) ;
               icmp_ln13_reg_245 =  icmp_ln13_reg_245__temp ;
       if(1 == ap_CS_fsm_state6)
       {
           acc_0_reg_112 =   ( ( ap_phi_mux_acc_1_in_phi_fu_140_p4 + 1 ) & 4294967295 ) ;
       }
       if((icmp_ln13_reg_245 == 0) && (1 == ap_CS_fsm_state6))
       {
           acc_1_in_reg_137 =  ( hist_q1 & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state6)
       {
           i1_0_reg_126 =  i_1_reg_230__temp ;
       }
       if(1 == ap_CS_fsm_state6)
       {
           old_0_reg_102 =  val_reg_240__temp ;
       }
       goto ap_ST_fsm_state4;
   end:
    *ap_clk__1=ap_clk;
    *ap_continue__1=ap_continue;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *ap_status__1=ap_status;
    *hist_address0__1=hist_address0;
    *hist_address1__1=hist_address1;
    *hist_ce0__1=hist_ce0;
    *hist_ce1__1=hist_ce1;
    *hist_d0__1=hist_d0;
    *hist_q1__1=hist_q1;
    *hist_we0__1=hist_we0;
    *in_r_address0__1=in_r_address0;
    *in_r_ce0__1=in_r_ce0;
    *in_r_q0__1=in_r_q0;
       return;
}
