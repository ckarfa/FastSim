#include<stdio.h>
#define B_DWIDTH 32
void merge4(long long int *ap_status__1,unsigned long long int *ap_clk__1, unsigned long long int *ap_rst__1, unsigned long long int *ap_start__1, unsigned long long int *ap_done__1, unsigned long long int *ap_continue__1,unsigned long long int *ap_idle__1,  long long int *ap_ready__1, long long int *input3_address0__1,long long int *input3_ce0__1, long long int *input3_q0__1,long long int *input3_address1__1,long long int *input3_ce1__1,long long int *input3_q1__1,unsigned long long int *B_address0__1,unsigned long long int *B_ce0__1,unsigned long long int *B_we0__1, long long int *B_d0__1,long long int *B_ram,int dummy){
unsigned long long int B_address0=*B_address0__1;
unsigned long long int B_ce0=*B_ce0__1;
 long long int B_d0=*B_d0__1;
unsigned long long int B_we0=*B_we0__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
 long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
long long int input3_address0=*input3_address0__1;
long long int input3_ce0=*input3_ce0__1;
long long int input3_q0=*input3_q0__1;
long long int input3_address1=*input3_address1__1;
long long int input3_ce1=*input3_ce1__1;
long long int input3_q1=*input3_q1__1;
   static long long int ap_CS_fsm_state1=0;
   static long long int ap_CS_fsm_state2=0;
   static long long int ap_CS_fsm_state3=0;
   static long long int f1_0_reg_93__temp=0;
   static long long int f2_0_reg_81__temp=0;
   static long long int sext_ln112_fu_173_p1=0;
   static long long int sext_ln112_fu_173_p1__temp=0;
   static long long int sext_ln113_fu_178_p1=0;
   static long long int sext_ln113_fu_178_p1__temp=0;
   static unsigned long long int B_address0__temp=0;
   static unsigned long long int B_ce0__temp=0;
   static unsigned long long int B_d0__temp=0;
   static unsigned long long int B_q0=0;
   static unsigned long long int B_q0__temp=0;
   static unsigned long long int B_we0__temp=0;
   static unsigned long long int and_ln122_fu_258_p2=0;
   static unsigned long long int and_ln122_fu_258_p2__temp=0;
   static unsigned long long int and_ln122_fu_258_p2_temp_0=0;
   static unsigned long long int and_ln122_fu_258_p2_temp_0__temp=0;
   static unsigned long long int and_ln122_fu_258_p2_temp_2=0;
   static unsigned long long int and_ln122_fu_258_p2_temp_2__temp=0;
   static unsigned long long int and_ln122_fu_258_p2_temp_3=0;
   static unsigned long long int and_ln122_fu_258_p2_temp_3__temp=0;
   static unsigned long long int and_ln122_fu_258_p2_temp_5=0;
   static unsigned long long int and_ln122_fu_258_p2_temp_5__temp=0;
   static unsigned long long int ap_CS_fsm=0;
   static unsigned long long int ap_CS_fsm__temp=0;
   static unsigned long long int ap_NS_fsm=0;
   static unsigned long long int ap_NS_fsm__temp=0;
   static unsigned long long int ap_block_state1=0;
   static unsigned long long int ap_block_state1__temp=0;
   static unsigned long long int ap_clk__temp=0;
   static unsigned long long int ap_continue__temp=0;
   static unsigned long long int ap_done__temp=0;
    unsigned long long int ap_done_reg=0;
    unsigned long long int ap_done_reg__temp=0;
   static unsigned long long int ap_idle__temp=0;
   static unsigned long long int ap_phi_mux_f1_1_phi_fu_154_p4=0;
   static unsigned long long int ap_phi_mux_f1_1_phi_fu_154_p4__temp=0;
   static unsigned long long int ap_phi_mux_f2_1_phi_fu_144_p4=0;
   static unsigned long long int ap_phi_mux_f2_1_phi_fu_144_p4__temp=0;
   static unsigned long long int ap_ready__temp=0;
   static unsigned long long int ap_rst__temp=0;
   static unsigned long long int ap_start__temp=0;
   static unsigned long long int ap_status__temp=0;
   static unsigned long long int clk_input3__temp=0;
   static unsigned long long int f1_2_reg_117__temp=0;
   static unsigned long long int f1_3_fu_332_p3=0;
   static unsigned long long int f1_3_fu_332_p3__temp=0;
   static unsigned long long int f1_fu_239_p2=0;
   static unsigned long long int f1_fu_239_p2__temp=0;
   static unsigned long long int f2_2_fu_292_p3=0;
   static unsigned long long int f2_2_fu_292_p3__temp=0;
   static unsigned long long int f2_3_fu_324_p3=0;
   static unsigned long long int f2_3_fu_324_p3__temp=0;
   static unsigned long long int f2_4_fu_340_p3=0;
   static unsigned long long int f2_4_fu_340_p3__temp=0;
   static unsigned long long int f2_fu_227_p2=0;
   static unsigned long long int f2_fu_227_p2__temp=0;
   static unsigned long long int i2_1_reg_105__temp=0;
   static unsigned long long int i2_fu_264_p2=0;
   static unsigned long long int i2_fu_264_p2__temp=0;
   static unsigned long long int i2_fu_264_p2_temp_10=0;
   static unsigned long long int i2_fu_264_p2_temp_10__temp=0;
   static unsigned long long int i2_fu_264_p2_temp_9=0;
   static unsigned long long int i2_fu_264_p2_temp_9__temp=0;
   static unsigned long long int i3_1_fu_316_p3=0;
   static unsigned long long int i3_1_fu_316_p3__temp=0;
   static unsigned long long int i3_2_fu_348_p3=0;
   static unsigned long long int i3_2_fu_348_p3__temp=0;
   static unsigned long long int i3_fu_270_p2=0;
   static unsigned long long int i3_fu_270_p2__temp=0;
   static unsigned long long int i3_fu_270_p2_temp_7=0;
   static unsigned long long int i3_fu_270_p2_temp_7__temp=0;
   static unsigned long long int i3_fu_270_p2_temp_8=0;
   static unsigned long long int i3_fu_270_p2_temp_8__temp=0;
   static unsigned long long int i_0_reg_129__temp=0;
   static unsigned long long int i_address0_input3__temp=0;
   static unsigned long long int i_address1_input3__temp=0;
   static unsigned long long int i_ce0_input3__temp=0;
   static unsigned long long int i_ce1_input3__temp=0;
   static unsigned long long int i_ce_input3__temp=0;
   static unsigned long long int i_d0_input3__temp=0;
   static unsigned long long int i_fu_167_p2=0;
   static unsigned long long int i_fu_167_p2__temp=0;
   static unsigned long long int i_full_n_input3__temp=0;
   static unsigned long long int i_q0_input3__temp=0;
   static unsigned long long int i_q1_input3__temp=0;
   static unsigned long long int i_reg_359__temp=0;
   static unsigned long long int i_we0_input3__temp=0;
   static unsigned long long int i_write_input3__temp=0;
   static unsigned long long int icmp_ln111_fu_161_p2=0;
   static unsigned long long int icmp_ln111_fu_161_p2__temp=0;
   static unsigned long long int icmp_ln113_fu_183_p2=0;
   static unsigned long long int icmp_ln113_fu_183_p2__temp=0;
   static unsigned long long int icmp_ln113_fu_183_p2_temp_6=0;
   static unsigned long long int icmp_ln113_fu_183_p2_temp_6__temp=0;
   static unsigned long long int icmp_ln114_1_fu_210_p2=0;
   static unsigned long long int icmp_ln114_1_fu_210_p2__temp=0;
   static unsigned long long int icmp_ln114_fu_198_p2=0;
   static unsigned long long int icmp_ln114_fu_198_p2__temp=0;
   static unsigned long long int icmp_ln122_1_fu_252_p2=0;
   static unsigned long long int icmp_ln122_1_fu_252_p2__temp=0;
   static unsigned long long int icmp_ln122_fu_246_p2=0;
   static unsigned long long int icmp_ln122_fu_246_p2__temp=0;
   static unsigned long long int icmp_ln126_fu_286_p2=0;
   static unsigned long long int icmp_ln126_fu_286_p2__temp=0;
   static unsigned long long int icmp_ln126_fu_286_p2_temp_1=0;
   static unsigned long long int icmp_ln126_fu_286_p2_temp_1__temp=0;
   static unsigned long long int icmp_ln127_fu_310_p2=0;
   static unsigned long long int icmp_ln127_fu_310_p2__temp=0;
   static unsigned long long int icmp_ln127_fu_310_p2_temp_4=0;
   static unsigned long long int icmp_ln127_fu_310_p2_temp_4__temp=0;
    long long int input3_address0__temp=0;
    long long int input3_address1__temp=0;
    long long int input3_ce0__temp=0;
    long long int input3_ce1__temp=0;
    long long int input3_q0__temp=0;
    long long int input3_q1__temp=0;
   static unsigned long long int or_ln114_fu_216_p2=0;
   static unsigned long long int or_ln114_fu_216_p2__temp=0;
   static unsigned long long int reset_input3__temp=0;
   static unsigned long long int t2_fu_189_p3=0;
   static unsigned long long int t2_fu_189_p3__temp=0;
   static unsigned long long int t_address0_input3__temp=0;
   static unsigned long long int t_address1_input3__temp=0;
   static unsigned long long int t_ce0_input3__temp=0;
   static unsigned long long int t_ce1_input3__temp=0;
   static unsigned long long int t_ce_input3__temp=0;
   static unsigned long long int t_d0_input3__temp=0;
   static unsigned long long int t_empty_n_input3__temp=0;
   static unsigned long long int t_q0_input3__temp=0;
   static unsigned long long int t_q1_input3__temp=0;
   static unsigned long long int t_read_input3__temp=0;
   static unsigned long long int t_we0_input3__temp=0;
   static unsigned long long int tmp_1_fu_300_p4=0;
   static unsigned long long int tmp_1_fu_300_p4__temp=0;
   static unsigned long long int tmp_fu_276_p4=0;
   static unsigned long long int tmp_fu_276_p4__temp=0;
   static unsigned long long int xor_ln114_fu_204_p2=0;
   static unsigned long long int xor_ln114_fu_204_p2__temp=0;
   static unsigned long long int zext_ln115_fu_234_p1=0;
   static unsigned long long int zext_ln115_fu_234_p1__temp=0;
   static unsigned long long int zext_ln119_fu_222_p1=0;
   static unsigned long long int zext_ln119_fu_222_p1__temp=0;
   static unsigned long long int f2_0_reg_81=0;
   static unsigned long long int f1_2_reg_117=0;
   static unsigned long long int i_0_reg_129=0;
   static unsigned long long int i2_1_reg_105=0;
   static unsigned long long int f1_0_reg_93=0;
   static unsigned long long int i_reg_359=0;
    unsigned long long int  ap_clk_count = 0;
    long long int merge_sort_parallbkb_input_ap_done = 0;

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
   f1_0_reg_93__temp = f1_0_reg_93 ;
   sext_ln113_fu_178_p1__temp = sext_ln113_fu_178_p1 ;
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln112_fu_173_p1__temp = sext_ln112_fu_173_p1 ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   input3_ce0__temp = input3_ce0 ;
   ap_done__temp = ap_done ;
   and_ln122_fu_258_p2_temp_5__temp = and_ln122_fu_258_p2_temp_5 ;
   ap_start__temp = ap_start ;
   input3_address0__temp = input3_address0 ;
   i_reg_359__temp = i_reg_359 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   icmp_ln122_1_fu_252_p2__temp = icmp_ln122_1_fu_252_p2 ;
   B_ce0__temp = B_ce0 ;
   i2_fu_264_p2_temp_9__temp = i2_fu_264_p2_temp_9 ;
   i3_2_fu_348_p3__temp = i3_2_fu_348_p3 ;
   ap_idle__temp = ap_idle ;
   and_ln122_fu_258_p2_temp_3__temp = and_ln122_fu_258_p2_temp_3 ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   icmp_ln127_fu_310_p2__temp = icmp_ln127_fu_310_p2 ;
   f2_3_fu_324_p3__temp = f2_3_fu_324_p3 ;
   B_q0__temp = B_q0 ;
   icmp_ln114_fu_198_p2__temp = icmp_ln114_fu_198_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   input3_q0__temp = input3_q0 ;
   i3_1_fu_316_p3__temp = i3_1_fu_316_p3 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln113_fu_183_p2__temp = icmp_ln113_fu_183_p2 ;
   f1_2_reg_117__temp = f1_2_reg_117 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   B_d0__temp = B_d0 ;
   ap_ready__temp = ap_ready ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   or_ln114_fu_216_p2__temp = or_ln114_fu_216_p2 ;
   zext_ln115_fu_234_p1__temp = zext_ln115_fu_234_p1 ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   input3_address1__temp = input3_address1 ;
   ap_clk__temp = ap_clk ;
   and_ln122_fu_258_p2__temp = and_ln122_fu_258_p2 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   f1_3_fu_332_p3__temp = f1_3_fu_332_p3 ;
   f2_2_fu_292_p3__temp = f2_2_fu_292_p3 ;
   xor_ln114_fu_204_p2__temp = xor_ln114_fu_204_p2 ;
   i3_fu_270_p2_temp_8__temp = i3_fu_270_p2_temp_8 ;
   tmp_1_fu_300_p4__temp = tmp_1_fu_300_p4 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   icmp_ln127_fu_310_p2_temp_4__temp = icmp_ln127_fu_310_p2_temp_4 ;
   B_we0__temp = B_we0 ;
   and_ln122_fu_258_p2_temp_2__temp = and_ln122_fu_258_p2_temp_2 ;
   icmp_ln126_fu_286_p2_temp_1__temp = icmp_ln126_fu_286_p2_temp_1 ;
   input3_ce1__temp = input3_ce1 ;
   ap_status__temp = ap_status ;
   B_address0__temp = B_address0 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   icmp_ln122_fu_246_p2__temp = icmp_ln122_fu_246_p2 ;
   icmp_ln126_fu_286_p2__temp = icmp_ln126_fu_286_p2 ;
   i2_fu_264_p2_temp_10__temp = i2_fu_264_p2_temp_10 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   zext_ln119_fu_222_p1__temp = zext_ln119_fu_222_p1 ;
   ap_rst__temp = ap_rst ;
   input3_q1__temp = input3_q1 ;
   and_ln122_fu_258_p2_temp_0__temp = and_ln122_fu_258_p2_temp_0 ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   icmp_ln114_1_fu_210_p2__temp = icmp_ln114_1_fu_210_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i3_fu_270_p2_temp_7__temp = i3_fu_270_p2_temp_7 ;
   f2_4_fu_340_p3__temp = f2_4_fu_340_p3 ;
   icmp_ln111_fu_161_p2__temp = icmp_ln111_fu_161_p2 ;
   ap_continue__temp = ap_continue ;
   icmp_ln113_fu_183_p2_temp_6__temp = icmp_ln113_fu_183_p2_temp_6 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       B_ce0 = 0;
       B_we0 = 0;
       input3_address0  = f1_0_reg_93 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
B_address0 = 0 ; 
}
}
}
       if(!((((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0))))){
B_ce0 = 0 ; 
}
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
B_d0 = 0 ; 
}
}
}
       if(!((((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0))))){
B_we0 = 0 ; 
}
       if(!((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input3_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input3_ce1 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 1){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           f1_0_reg_93 =  0;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           f1_2_reg_117 =  16;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           f2_0_reg_81 =  8;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i2_1_reg_105 =  8;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_129 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1)) == 0){
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               f1_0_reg_93 =  0;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               f1_2_reg_117 =  16;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               f2_0_reg_81 =  8;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i2_1_reg_105 =  8;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_129 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
   f1_0_reg_93__temp = f1_0_reg_93 ;
   sext_ln113_fu_178_p1__temp = sext_ln113_fu_178_p1 ;
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln112_fu_173_p1__temp = sext_ln112_fu_173_p1 ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   input3_ce0__temp = input3_ce0 ;
   ap_done__temp = ap_done ;
   and_ln122_fu_258_p2_temp_5__temp = and_ln122_fu_258_p2_temp_5 ;
   ap_start__temp = ap_start ;
   input3_address0__temp = input3_address0 ;
   i_reg_359__temp = i_reg_359 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   icmp_ln122_1_fu_252_p2__temp = icmp_ln122_1_fu_252_p2 ;
   B_ce0__temp = B_ce0 ;
   i2_fu_264_p2_temp_9__temp = i2_fu_264_p2_temp_9 ;
   i3_2_fu_348_p3__temp = i3_2_fu_348_p3 ;
   ap_idle__temp = ap_idle ;
   and_ln122_fu_258_p2_temp_3__temp = and_ln122_fu_258_p2_temp_3 ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   icmp_ln127_fu_310_p2__temp = icmp_ln127_fu_310_p2 ;
   f2_3_fu_324_p3__temp = f2_3_fu_324_p3 ;
   B_q0__temp = B_q0 ;
   icmp_ln114_fu_198_p2__temp = icmp_ln114_fu_198_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   input3_q0__temp = input3_q0 ;
   i3_1_fu_316_p3__temp = i3_1_fu_316_p3 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln113_fu_183_p2__temp = icmp_ln113_fu_183_p2 ;
   f1_2_reg_117__temp = f1_2_reg_117 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   B_d0__temp = B_d0 ;
   ap_ready__temp = ap_ready ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   or_ln114_fu_216_p2__temp = or_ln114_fu_216_p2 ;
   zext_ln115_fu_234_p1__temp = zext_ln115_fu_234_p1 ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   input3_address1__temp = input3_address1 ;
   ap_clk__temp = ap_clk ;
   and_ln122_fu_258_p2__temp = and_ln122_fu_258_p2 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   f1_3_fu_332_p3__temp = f1_3_fu_332_p3 ;
   f2_2_fu_292_p3__temp = f2_2_fu_292_p3 ;
   xor_ln114_fu_204_p2__temp = xor_ln114_fu_204_p2 ;
   i3_fu_270_p2_temp_8__temp = i3_fu_270_p2_temp_8 ;
   tmp_1_fu_300_p4__temp = tmp_1_fu_300_p4 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   icmp_ln127_fu_310_p2_temp_4__temp = icmp_ln127_fu_310_p2_temp_4 ;
   B_we0__temp = B_we0 ;
   and_ln122_fu_258_p2_temp_2__temp = and_ln122_fu_258_p2_temp_2 ;
   icmp_ln126_fu_286_p2_temp_1__temp = icmp_ln126_fu_286_p2_temp_1 ;
   input3_ce1__temp = input3_ce1 ;
   ap_status__temp = ap_status ;
   B_address0__temp = B_address0 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   icmp_ln122_fu_246_p2__temp = icmp_ln122_fu_246_p2 ;
   icmp_ln126_fu_286_p2__temp = icmp_ln126_fu_286_p2 ;
   i2_fu_264_p2_temp_10__temp = i2_fu_264_p2_temp_10 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   zext_ln119_fu_222_p1__temp = zext_ln119_fu_222_p1 ;
   ap_rst__temp = ap_rst ;
   input3_q1__temp = input3_q1 ;
   and_ln122_fu_258_p2_temp_0__temp = and_ln122_fu_258_p2_temp_0 ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   icmp_ln114_1_fu_210_p2__temp = icmp_ln114_1_fu_210_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i3_fu_270_p2_temp_7__temp = i3_fu_270_p2_temp_7 ;
   f2_4_fu_340_p3__temp = f2_4_fu_340_p3 ;
   icmp_ln111_fu_161_p2__temp = icmp_ln111_fu_161_p2 ;
   ap_continue__temp = ap_continue ;
   icmp_ln113_fu_183_p2_temp_6__temp = icmp_ln113_fu_183_p2_temp_6 ;
  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       B_ce0 = 0;
       B_we0 = 0;
       input3_address0  = f1_0_reg_93 ;
       input3_address1 = f2_0_reg_81 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
B_address0 = 0 ; 
}
}
}
       if(!((((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0))))){
B_ce0 = 0 ; 
}
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
B_d0 = 0 ; 
}
}
}
       if(!((((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0))))){
B_we0 = 0 ; 
}
       if(!((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input3_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input3_ce1 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               icmp_ln111_fu_161_p2 =   ( i_0_reg_129__temp  == 16 ? 1 :  0 ) ;
       if((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           input3_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           input3_ce1 =  1;
       }
               icmp_ln111_fu_161_p2 =   ( i_0_reg_129__temp  == 16 ? 1 :  0 ) ;
   if(((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_359 =   ( ( i_0_reg_129__temp  + 1 ) & 31 ) ;
       }

       if(ap_done==1){
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_359 =   ( ( i_0_reg_129__temp  + 1 ) & 31 ) ;
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
   f1_0_reg_93__temp = f1_0_reg_93 ;
   sext_ln113_fu_178_p1__temp = sext_ln113_fu_178_p1 ;
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln112_fu_173_p1__temp = sext_ln112_fu_173_p1 ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   input3_ce0__temp = input3_ce0 ;
   ap_done__temp = ap_done ;
   and_ln122_fu_258_p2_temp_5__temp = and_ln122_fu_258_p2_temp_5 ;
   ap_start__temp = ap_start ;
   input3_address0__temp = input3_address0 ;
   i_reg_359__temp = i_reg_359 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   icmp_ln122_1_fu_252_p2__temp = icmp_ln122_1_fu_252_p2 ;
   B_ce0__temp = B_ce0 ;
   i2_fu_264_p2_temp_9__temp = i2_fu_264_p2_temp_9 ;
   i3_2_fu_348_p3__temp = i3_2_fu_348_p3 ;
   ap_idle__temp = ap_idle ;
   and_ln122_fu_258_p2_temp_3__temp = and_ln122_fu_258_p2_temp_3 ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   icmp_ln127_fu_310_p2__temp = icmp_ln127_fu_310_p2 ;
   f2_3_fu_324_p3__temp = f2_3_fu_324_p3 ;
   B_q0__temp = B_q0 ;
   icmp_ln114_fu_198_p2__temp = icmp_ln114_fu_198_p2 ;
   ap_done_reg__temp = ap_done_reg ;
   input3_q0__temp = input3_q0 ;
   i3_1_fu_316_p3__temp = i3_1_fu_316_p3 ;
   ap_block_state1__temp = ap_block_state1 ;
   icmp_ln113_fu_183_p2__temp = icmp_ln113_fu_183_p2 ;
   f1_2_reg_117__temp = f1_2_reg_117 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   B_d0__temp = B_d0 ;
   ap_ready__temp = ap_ready ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   or_ln114_fu_216_p2__temp = or_ln114_fu_216_p2 ;
   zext_ln115_fu_234_p1__temp = zext_ln115_fu_234_p1 ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   input3_address1__temp = input3_address1 ;
   ap_clk__temp = ap_clk ;
   and_ln122_fu_258_p2__temp = and_ln122_fu_258_p2 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   f1_3_fu_332_p3__temp = f1_3_fu_332_p3 ;
   f2_2_fu_292_p3__temp = f2_2_fu_292_p3 ;
   xor_ln114_fu_204_p2__temp = xor_ln114_fu_204_p2 ;
   i3_fu_270_p2_temp_8__temp = i3_fu_270_p2_temp_8 ;
   tmp_1_fu_300_p4__temp = tmp_1_fu_300_p4 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   icmp_ln127_fu_310_p2_temp_4__temp = icmp_ln127_fu_310_p2_temp_4 ;
   B_we0__temp = B_we0 ;
   and_ln122_fu_258_p2_temp_2__temp = and_ln122_fu_258_p2_temp_2 ;
   icmp_ln126_fu_286_p2_temp_1__temp = icmp_ln126_fu_286_p2_temp_1 ;
   input3_ce1__temp = input3_ce1 ;
   ap_status__temp = ap_status ;
   B_address0__temp = B_address0 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   icmp_ln122_fu_246_p2__temp = icmp_ln122_fu_246_p2 ;
   icmp_ln126_fu_286_p2__temp = icmp_ln126_fu_286_p2 ;
   i2_fu_264_p2_temp_10__temp = i2_fu_264_p2_temp_10 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   zext_ln119_fu_222_p1__temp = zext_ln119_fu_222_p1 ;
   ap_rst__temp = ap_rst ;
   input3_q1__temp = input3_q1 ;
   and_ln122_fu_258_p2_temp_0__temp = and_ln122_fu_258_p2_temp_0 ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   icmp_ln114_1_fu_210_p2__temp = icmp_ln114_1_fu_210_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i3_fu_270_p2_temp_7__temp = i3_fu_270_p2_temp_7 ;
   f2_4_fu_340_p3__temp = f2_4_fu_340_p3 ;
   icmp_ln111_fu_161_p2__temp = icmp_ln111_fu_161_p2 ;
   ap_continue__temp = ap_continue ;
   icmp_ln113_fu_183_p2_temp_6__temp = icmp_ln113_fu_183_p2_temp_6 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       B_ce0 = 0;
       B_we0 = 0;
       input3_address0  = f1_0_reg_93 ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
B_address0 = 0 ; 
}
}
}
       if(!((((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0))))){
B_ce0 = 0 ; 
}
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
B_d0 = 0 ; 
}
}
}
       if(!((((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0))))){
B_we0 = 0 ; 
}
       if(!((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln111_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input3_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input3_ce1 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               or_ln114_fu_216_p2 =   ( (  ( (  ( do_twos_complement( f1_0_reg_93__temp  , 63 )  < do_twos_complement( i2_1_reg_105__temp  , 63 )  ? 1 : 0 )  ^ 1 ) & 1 )  |  (  ( input3_q0  )   >   (  ( (  ( f2_0_reg_81__temp  == f1_2_reg_117__temp  ? 1 : 0 )  & 1 )  )  == 1 ? 0 :  ( input3_q1__temp  )  )   ? 1 : 0 )  ) & 1 ) ;
               icmp_ln113_fu_183_p2 =   ( f2_0_reg_81__temp  == f1_2_reg_117__temp  ? 1 : 0 ) ;
       if(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           B_address0 =   ( i_0_reg_129__temp  & 18446744073709551615 ) ;
       }
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           B_address0 =   ( i_0_reg_129__temp  & 18446744073709551615 ) ;
       }
       }
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           B_address0 =  0;
       }
       }
       }
       if((((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0))))
       {
           B_ce0 =  1;
       }
       if(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           B_d0 =  ( input3_q0 ) ;
       }
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           B_d0 =   (  ( (  ( f2_0_reg_81__temp  == f1_2_reg_117__temp  ? 1 : 0 )  & 1 )  )  == 1 ? 0 :  ( input3_q1__temp  )  ) ;
       }
       }
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           B_d0 =  0;
       }
       }
       }
       if((((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0))))
       {
           B_we0 =  1;
       }
       if(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =  f1_0_reg_93__temp ;
       }
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =   ( ( do_twos_complement( f1_0_reg_93__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 ) ;
       }
       }
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =  0;
       }
       }
       }
       if(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =   ( ( do_twos_complement( f2_0_reg_81__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 ) ;
       }
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =  f2_0_reg_81__temp ;
       }
       }
       if(!(((or_ln114_fu_216_p2 == 1) && (icmp_ln113_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((icmp_ln113_fu_183_p2 == 1) || (or_ln114_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =  0;
       }
       }
       }
       if(1 == ap_CS_fsm_state3)
       {
           f1_0_reg_93 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_2_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ? f1_2_reg_117__temp  :  ap_phi_mux_f1_1_phi_fu_154_p4 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           f1_2_reg_117 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_2_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( f1_2_reg_117__temp  + 16 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( f1_2_reg_117__temp  + 16 ) & 4294967295 )  :  16 )  :  f1_2_reg_117__temp  ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           f2_0_reg_81 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_2_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( i2_1_reg_105__temp  + 16 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( i2_1_reg_105__temp  + 16 ) & 4294967295 )  :  16 )  :  ap_phi_mux_f2_1_phi_fu_144_p4 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i2_1_reg_105 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_2_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( i2_1_reg_105__temp  + 16 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( i2_1_reg_105__temp  + 16 ) & 4294967295 )  :  16 )  :  i2_1_reg_105__temp  ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i_0_reg_129 =  i_reg_359__temp ;
       }
       if(B_ce0){
          B_q0 = B_ram[B_address0];
           if(B_we0){
              B_ram[B_address0] = B_d0;
           }
       }
       goto ap_ST_fsm_state2;
   end:
    *B_address0__1=B_address0;
    *B_ce0__1=B_ce0;
    *B_d0__1=B_d0;
    *B_we0__1=B_we0;
    *ap_clk__1=ap_clk;
    *ap_continue__1=ap_continue;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *ap_status__1=ap_status;
    *input3_address0__1=input3_address0;
    *input3_ce0__1=input3_ce0;
    *input3_q0__1=input3_q0;
    *input3_address1__1=input3_address1;
    *input3_ce1__1=input3_ce1;
    *input3_q1__1=input3_q1;
    
       return;
}
