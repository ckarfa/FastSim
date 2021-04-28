#include<stdio.h>
void merge2(long long int *ap_status__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,long long int *ap_done__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_idle__1,long long int *ap_ready__1,long long int *input1_address0__1,long long int *input1_ce0__1,long long int *input1_q0__1,long long int *input1_address1__1,long long int *input1_ce1__1,long long int *input1_q1__1,long long int *input2_address0__1,long long int *input2_ce0__1,long long int *input2_we0__1,long long int *input2_d0__1,int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
 long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
 long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
long long int input1_address0=*input1_address0__1;
long long int input1_ce0=*input1_ce0__1;
long long int input1_q0=*input1_q0__1;
long long int input1_address1=*input1_address1__1;
long long int input1_ce1=*input1_ce1__1;
long long int input1_q1=*input1_q1__1;
long long int input2_address0=*input2_address0__1;
long long int input2_ce0=*input2_ce0__1;
long long int input2_we0=*input2_we0__1;
long long int input2_d0=*input2_d0__1;
   static long long int ap_CS_fsm_state1=0;
   static long long int ap_CS_fsm_state2=0;
   static long long int ap_CS_fsm_state3=0;
   static long long int f1_0_reg_93__temp=0;
   static long long int f2_0_reg_81__temp=0;
   static long long int sext_ln48_fu_173_p1=0;
   static long long int sext_ln48_fu_173_p1__temp=0;
   static long long int sext_ln49_fu_178_p1=0;
   static long long int sext_ln49_fu_178_p1__temp=0;
   static unsigned long long int and_ln58_fu_258_p2=0;
   static unsigned long long int and_ln58_fu_258_p2__temp=0;
   static unsigned long long int and_ln58_fu_258_p2_temp_22=0;
   static unsigned long long int and_ln58_fu_258_p2_temp_22__temp=0;
   static unsigned long long int and_ln58_fu_258_p2_temp_23=0;
   static unsigned long long int and_ln58_fu_258_p2_temp_23__temp=0;
   static unsigned long long int and_ln58_fu_258_p2_temp_25=0;
   static unsigned long long int and_ln58_fu_258_p2_temp_25__temp=0;
   static unsigned long long int and_ln58_fu_258_p2_temp_27=0;
   static unsigned long long int and_ln58_fu_258_p2_temp_27__temp=0;
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
   static unsigned long long int clk_input1__temp=0;
   static unsigned long long int clk_input2__temp=0;
   static unsigned long long int f1_5_reg_117__temp=0;
   static unsigned long long int f1_6_fu_332_p3=0;
   static unsigned long long int f1_6_fu_332_p3__temp=0;
   static unsigned long long int f1_fu_239_p2=0;
   static unsigned long long int f1_fu_239_p2__temp=0;
   static unsigned long long int f2_10_fu_340_p3=0;
   static unsigned long long int f2_10_fu_340_p3__temp=0;
   static unsigned long long int f2_8_fu_292_p3=0;
   static unsigned long long int f2_8_fu_292_p3__temp=0;
   static unsigned long long int f2_9_fu_324_p3=0;
   static unsigned long long int f2_9_fu_324_p3__temp=0;
   static unsigned long long int f2_fu_227_p2=0;
   static unsigned long long int f2_fu_227_p2__temp=0;
   static unsigned long long int i2_1_reg_105__temp=0;
   static unsigned long long int i2_fu_264_p2=0;
   static unsigned long long int i2_fu_264_p2__temp=0;
   static unsigned long long int i2_fu_264_p2_temp_31=0;
   static unsigned long long int i2_fu_264_p2_temp_31__temp=0;
   static unsigned long long int i2_fu_264_p2_temp_32=0;
   static unsigned long long int i2_fu_264_p2_temp_32__temp=0;
   static unsigned long long int i3_5_fu_316_p3=0;
   static unsigned long long int i3_5_fu_316_p3__temp=0;
   static unsigned long long int i3_6_fu_348_p3=0;
   static unsigned long long int i3_6_fu_348_p3__temp=0;
   static unsigned long long int i3_fu_270_p2=0;
   static unsigned long long int i3_fu_270_p2__temp=0;
   static unsigned long long int i3_fu_270_p2_temp_29=0;
   static unsigned long long int i3_fu_270_p2_temp_29__temp=0;
   static unsigned long long int i3_fu_270_p2_temp_30=0;
   static unsigned long long int i3_fu_270_p2_temp_30__temp=0;
   static unsigned long long int i_0_reg_129__temp=0;
   static unsigned long long int i_address0_input1__temp=0;
   static unsigned long long int i_address0_input2__temp=0;
   static unsigned long long int i_address1_input1__temp=0;
   static unsigned long long int i_address1_input2__temp=0;
   static unsigned long long int i_ce0_input1__temp=0;
   static unsigned long long int i_ce0_input2__temp=0;
   static unsigned long long int i_ce1_input1__temp=0;
   static unsigned long long int i_ce1_input2__temp=0;
   static unsigned long long int i_ce_input1__temp=0;
   static unsigned long long int i_ce_input2__temp=0;
   static unsigned long long int i_d0_input1__temp=0;
   static unsigned long long int i_d0_input2__temp=0;
   static unsigned long long int i_fu_167_p2=0;
   static unsigned long long int i_fu_167_p2__temp=0;
   static unsigned long long int i_full_n_input1__temp=0;
   static unsigned long long int i_full_n_input2__temp=0;
   static unsigned long long int i_q0_input1__temp=0;
   static unsigned long long int i_q0_input2__temp=0;
   static unsigned long long int i_q1_input1__temp=0;
   static unsigned long long int i_q1_input2__temp=0;
   static unsigned long long int i_reg_359__temp=0;
   static unsigned long long int i_we0_input1__temp=0;
   static unsigned long long int i_we0_input2__temp=0;
   static unsigned long long int i_write_input1__temp=0;
   static unsigned long long int i_write_input2__temp=0;
   static unsigned long long int icmp_ln47_fu_161_p2=0;
   static unsigned long long int icmp_ln47_fu_161_p2__temp=0;
   static unsigned long long int icmp_ln49_fu_183_p2=0;
   static unsigned long long int icmp_ln49_fu_183_p2__temp=0;
   static unsigned long long int icmp_ln49_fu_183_p2_temp_28=0;
   static unsigned long long int icmp_ln49_fu_183_p2_temp_28__temp=0;
   static unsigned long long int icmp_ln50_1_fu_210_p2=0;
   static unsigned long long int icmp_ln50_1_fu_210_p2__temp=0;
   static unsigned long long int icmp_ln50_fu_198_p2=0;
   static unsigned long long int icmp_ln50_fu_198_p2__temp=0;
   static unsigned long long int icmp_ln58_1_fu_252_p2=0;
   static unsigned long long int icmp_ln58_1_fu_252_p2__temp=0;
   static unsigned long long int icmp_ln58_fu_246_p2=0;
   static unsigned long long int icmp_ln58_fu_246_p2__temp=0;
   static unsigned long long int icmp_ln62_fu_286_p2=0;
   static unsigned long long int icmp_ln62_fu_286_p2__temp=0;
   static unsigned long long int icmp_ln62_fu_286_p2_temp_24=0;
   static unsigned long long int icmp_ln62_fu_286_p2_temp_24__temp=0;
   static unsigned long long int icmp_ln63_fu_310_p2=0;
   static unsigned long long int icmp_ln63_fu_310_p2__temp=0;
   static unsigned long long int icmp_ln63_fu_310_p2_temp_26=0;
   static unsigned long long int icmp_ln63_fu_310_p2_temp_26__temp=0;
    long long int input1_address0__temp=0;
    long long int input1_address1__temp=0;
    long long int input1_ce0__temp=0;
    long long int input1_ce1__temp=0;
    long long int input1_q0__temp=0;
    long long int input1_q1__temp=0;
    long long int input2_address0__temp=0;
    long long int input2_ce0__temp=0;
    long long int input2_d0__temp=0;
    long long int input2_we0__temp=0;
   static unsigned long long int or_ln50_fu_216_p2=0;
   static unsigned long long int or_ln50_fu_216_p2__temp=0;
   static unsigned long long int reset_input1__temp=0;
   static unsigned long long int reset_input2__temp=0;
   static unsigned long long int t2_fu_189_p3=0;
   static unsigned long long int t2_fu_189_p3__temp=0;
   static unsigned long long int t_address0_input1__temp=0;
   static unsigned long long int t_address0_input2__temp=0;
   static unsigned long long int t_address1_input1__temp=0;
   static unsigned long long int t_address1_input2__temp=0;
   static unsigned long long int t_ce0_input1__temp=0;
   static unsigned long long int t_ce0_input2__temp=0;
   static unsigned long long int t_ce1_input1__temp=0;
   static unsigned long long int t_ce1_input2__temp=0;
   static unsigned long long int t_ce_input1__temp=0;
   static unsigned long long int t_ce_input2__temp=0;
   static unsigned long long int t_d0_input1__temp=0;
   static unsigned long long int t_d0_input2__temp=0;
   static unsigned long long int t_empty_n_input1__temp=0;
   static unsigned long long int t_empty_n_input2__temp=0;
   static unsigned long long int t_q0_input1__temp=0;
   static unsigned long long int t_q0_input2__temp=0;
   static unsigned long long int t_q1_input1__temp=0;
   static unsigned long long int t_q1_input2__temp=0;
   static unsigned long long int t_read_input1__temp=0;
   static unsigned long long int t_read_input2__temp=0;
   static unsigned long long int t_we0_input1__temp=0;
   static unsigned long long int t_we0_input2__temp=0;
   static unsigned long long int tmp_3_fu_300_p4=0;
   static unsigned long long int tmp_3_fu_300_p4__temp=0;
   static unsigned long long int tmp_fu_276_p4=0;
   static unsigned long long int tmp_fu_276_p4__temp=0;
   static unsigned long long int xor_ln50_fu_204_p2=0;
   static unsigned long long int xor_ln50_fu_204_p2__temp=0;
   static unsigned long long int zext_ln51_fu_234_p1=0;
   static unsigned long long int zext_ln51_fu_234_p1__temp=0;
   static unsigned long long int zext_ln55_fu_222_p1=0;
   static unsigned long long int zext_ln55_fu_222_p1__temp=0;
   static unsigned long long int f1_0_reg_93=0;
   static unsigned long long int i2_1_reg_105=0;
   static unsigned long long int f2_0_reg_81=0;
   static unsigned long long int i_0_reg_129=0;
   static unsigned long long int f1_5_reg_117=0;
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
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln49_fu_178_p1__temp = sext_ln49_fu_178_p1 ;
   sext_ln48_fu_173_p1__temp = sext_ln48_fu_173_p1 ;
   input2_address0__temp = input2_address0 ;
   icmp_ln47_fu_161_p2__temp = icmp_ln47_fu_161_p2 ;
   i3_fu_270_p2_temp_30__temp = i3_fu_270_p2_temp_30 ;
   ap_done_reg__temp = ap_done_reg ;
   f2_10_fu_340_p3__temp = f2_10_fu_340_p3 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   i2_fu_264_p2_temp_31__temp = i2_fu_264_p2_temp_31 ;
   icmp_ln50_1_fu_210_p2__temp = icmp_ln50_1_fu_210_p2 ;
   and_ln58_fu_258_p2_temp_22__temp = and_ln58_fu_258_p2_temp_22 ;
   input2_ce0__temp = input2_ce0 ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   input1_ce0__temp = input1_ce0 ;
   zext_ln55_fu_222_p1__temp = zext_ln55_fu_222_p1 ;
   f1_5_reg_117__temp = f1_5_reg_117 ;
   ap_start__temp = ap_start ;
   input2_d0__temp = input2_d0 ;
   f2_9_fu_324_p3__temp = f2_9_fu_324_p3 ;
   zext_ln51_fu_234_p1__temp = zext_ln51_fu_234_p1 ;
   ap_clk__temp = ap_clk ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   f1_6_fu_332_p3__temp = f1_6_fu_332_p3 ;
   and_ln58_fu_258_p2_temp_23__temp = and_ln58_fu_258_p2_temp_23 ;
   f2_8_fu_292_p3__temp = f2_8_fu_292_p3 ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   ap_status__temp = ap_status ;
   and_ln58_fu_258_p2_temp_25__temp = and_ln58_fu_258_p2_temp_25 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   xor_ln50_fu_204_p2__temp = xor_ln50_fu_204_p2 ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   i3_fu_270_p2_temp_29__temp = i3_fu_270_p2_temp_29 ;
   ap_block_state1__temp = ap_block_state1 ;
   tmp_3_fu_300_p4__temp = tmp_3_fu_300_p4 ;
   i_reg_359__temp = i_reg_359 ;
   input1_q1__temp = input1_q1 ;
   and_ln58_fu_258_p2__temp = and_ln58_fu_258_p2 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   input1_address0__temp = input1_address0 ;
   icmp_ln58_1_fu_252_p2__temp = icmp_ln58_1_fu_252_p2 ;
   input1_q0__temp = input1_q0 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   ap_ready__temp = ap_ready ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   icmp_ln50_fu_198_p2__temp = icmp_ln50_fu_198_p2 ;
   and_ln58_fu_258_p2_temp_27__temp = and_ln58_fu_258_p2_temp_27 ;
   ap_continue__temp = ap_continue ;
   icmp_ln58_fu_246_p2__temp = icmp_ln58_fu_246_p2 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   icmp_ln63_fu_310_p2_temp_26__temp = icmp_ln63_fu_310_p2_temp_26 ;
   i3_6_fu_348_p3__temp = i3_6_fu_348_p3 ;
   input2_we0__temp = input2_we0 ;
   input1_address1__temp = input1_address1 ;
   ap_idle__temp = ap_idle ;
   input1_ce1__temp = input1_ce1 ;
   icmp_ln49_fu_183_p2_temp_28__temp = icmp_ln49_fu_183_p2_temp_28 ;
   icmp_ln49_fu_183_p2__temp = icmp_ln49_fu_183_p2 ;
   i3_5_fu_316_p3__temp = i3_5_fu_316_p3 ;
   ap_done__temp = ap_done ;
   or_ln50_fu_216_p2__temp = or_ln50_fu_216_p2 ;
   icmp_ln63_fu_310_p2__temp = icmp_ln63_fu_310_p2 ;
   ap_rst__temp = ap_rst ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i2_fu_264_p2_temp_32__temp = i2_fu_264_p2_temp_32 ;
   icmp_ln62_fu_286_p2__temp = icmp_ln62_fu_286_p2 ;
   icmp_ln62_fu_286_p2_temp_24__temp = icmp_ln62_fu_286_p2_temp_24 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 
       input1_address0 = f1_0_reg_93;
       input1_address1 = f2_0_reg_81;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input1_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input1_ce1 = 0 ; 
}
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input2_address0 = 0 ; 
}
}
}
       if(!((((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0))))){
input2_ce0 = 0 ; 
}
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input2_d0 = 0 ; 
}
}
}
       if(!((((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0))))){
input2_we0 = 0 ; 
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
           f1_5_reg_117 =  4;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           f2_0_reg_81 =  2;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i2_1_reg_105 =  2;
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
               f1_5_reg_117 =  4;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               f2_0_reg_81 =  2;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i2_1_reg_105 =  2;
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
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln49_fu_178_p1__temp = sext_ln49_fu_178_p1 ;
   sext_ln48_fu_173_p1__temp = sext_ln48_fu_173_p1 ;
   input2_address0__temp = input2_address0 ;
   icmp_ln47_fu_161_p2__temp = icmp_ln47_fu_161_p2 ;
   i3_fu_270_p2_temp_30__temp = i3_fu_270_p2_temp_30 ;
   ap_done_reg__temp = ap_done_reg ;
   f2_10_fu_340_p3__temp = f2_10_fu_340_p3 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   i2_fu_264_p2_temp_31__temp = i2_fu_264_p2_temp_31 ;
   icmp_ln50_1_fu_210_p2__temp = icmp_ln50_1_fu_210_p2 ;
   and_ln58_fu_258_p2_temp_22__temp = and_ln58_fu_258_p2_temp_22 ;
   input2_ce0__temp = input2_ce0 ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   input1_ce0__temp = input1_ce0 ;
   zext_ln55_fu_222_p1__temp = zext_ln55_fu_222_p1 ;
   f1_5_reg_117__temp = f1_5_reg_117 ;
   ap_start__temp = ap_start ;
   input2_d0__temp = input2_d0 ;
   f2_9_fu_324_p3__temp = f2_9_fu_324_p3 ;
   zext_ln51_fu_234_p1__temp = zext_ln51_fu_234_p1 ;
   ap_clk__temp = ap_clk ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   f1_6_fu_332_p3__temp = f1_6_fu_332_p3 ;
   and_ln58_fu_258_p2_temp_23__temp = and_ln58_fu_258_p2_temp_23 ;
   f2_8_fu_292_p3__temp = f2_8_fu_292_p3 ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   ap_status__temp = ap_status ;
   and_ln58_fu_258_p2_temp_25__temp = and_ln58_fu_258_p2_temp_25 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   xor_ln50_fu_204_p2__temp = xor_ln50_fu_204_p2 ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   i3_fu_270_p2_temp_29__temp = i3_fu_270_p2_temp_29 ;
   ap_block_state1__temp = ap_block_state1 ;
   tmp_3_fu_300_p4__temp = tmp_3_fu_300_p4 ;
   i_reg_359__temp = i_reg_359 ;
   input1_q1__temp = input1_q1 ;
   and_ln58_fu_258_p2__temp = and_ln58_fu_258_p2 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   input1_address0__temp = input1_address0 ;
   icmp_ln58_1_fu_252_p2__temp = icmp_ln58_1_fu_252_p2 ;
   input1_q0__temp = input1_q0 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   ap_ready__temp = ap_ready ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   icmp_ln50_fu_198_p2__temp = icmp_ln50_fu_198_p2 ;
   and_ln58_fu_258_p2_temp_27__temp = and_ln58_fu_258_p2_temp_27 ;
   ap_continue__temp = ap_continue ;
   icmp_ln58_fu_246_p2__temp = icmp_ln58_fu_246_p2 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   icmp_ln63_fu_310_p2_temp_26__temp = icmp_ln63_fu_310_p2_temp_26 ;
   i3_6_fu_348_p3__temp = i3_6_fu_348_p3 ;
   input2_we0__temp = input2_we0 ;
   input1_address1__temp = input1_address1 ;
   ap_idle__temp = ap_idle ;
   input1_ce1__temp = input1_ce1 ;
   icmp_ln49_fu_183_p2_temp_28__temp = icmp_ln49_fu_183_p2_temp_28 ;
   icmp_ln49_fu_183_p2__temp = icmp_ln49_fu_183_p2 ;
   i3_5_fu_316_p3__temp = i3_5_fu_316_p3 ;
   ap_done__temp = ap_done ;
   or_ln50_fu_216_p2__temp = or_ln50_fu_216_p2 ;
   icmp_ln63_fu_310_p2__temp = icmp_ln63_fu_310_p2 ;
   ap_rst__temp = ap_rst ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i2_fu_264_p2_temp_32__temp = i2_fu_264_p2_temp_32 ;
   icmp_ln62_fu_286_p2__temp = icmp_ln62_fu_286_p2 ;
   icmp_ln62_fu_286_p2_temp_24__temp = icmp_ln62_fu_286_p2_temp_24 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       input1_address0 = f1_0_reg_93;
       input1_address1 = f2_0_reg_81;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input1_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input1_ce1 = 0 ; 
}
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input2_address0 = 0 ; 
}
}
}
       if(!((((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0))))){
input2_ce0 = 0 ; 
}
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input2_d0 = 0 ; 
}
}
}
       if(!((((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0))))){
input2_we0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               icmp_ln47_fu_161_p2 =   ( i_0_reg_129__temp  == 16 ? 1 :  0 ) ;
       if((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           input1_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           input1_ce1 =  1;
       }
               icmp_ln47_fu_161_p2 =   ( i_0_reg_129__temp  == 16 ? 1 :  0 ) ;
   if(((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
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
   if(((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
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
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln49_fu_178_p1__temp = sext_ln49_fu_178_p1 ;
   sext_ln48_fu_173_p1__temp = sext_ln48_fu_173_p1 ;
   input2_address0__temp = input2_address0 ;
   icmp_ln47_fu_161_p2__temp = icmp_ln47_fu_161_p2 ;
   i3_fu_270_p2_temp_30__temp = i3_fu_270_p2_temp_30 ;
   ap_done_reg__temp = ap_done_reg ;
   f2_10_fu_340_p3__temp = f2_10_fu_340_p3 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   i2_fu_264_p2_temp_31__temp = i2_fu_264_p2_temp_31 ;
   icmp_ln50_1_fu_210_p2__temp = icmp_ln50_1_fu_210_p2 ;
   and_ln58_fu_258_p2_temp_22__temp = and_ln58_fu_258_p2_temp_22 ;
   input2_ce0__temp = input2_ce0 ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   input1_ce0__temp = input1_ce0 ;
   zext_ln55_fu_222_p1__temp = zext_ln55_fu_222_p1 ;
   f1_5_reg_117__temp = f1_5_reg_117 ;
   ap_start__temp = ap_start ;
   input2_d0__temp = input2_d0 ;
   f2_9_fu_324_p3__temp = f2_9_fu_324_p3 ;
   zext_ln51_fu_234_p1__temp = zext_ln51_fu_234_p1 ;
   ap_clk__temp = ap_clk ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   f1_6_fu_332_p3__temp = f1_6_fu_332_p3 ;
   and_ln58_fu_258_p2_temp_23__temp = and_ln58_fu_258_p2_temp_23 ;
   f2_8_fu_292_p3__temp = f2_8_fu_292_p3 ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   ap_status__temp = ap_status ;
   and_ln58_fu_258_p2_temp_25__temp = and_ln58_fu_258_p2_temp_25 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   xor_ln50_fu_204_p2__temp = xor_ln50_fu_204_p2 ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   i3_fu_270_p2_temp_29__temp = i3_fu_270_p2_temp_29 ;
   ap_block_state1__temp = ap_block_state1 ;
   tmp_3_fu_300_p4__temp = tmp_3_fu_300_p4 ;
   i_reg_359__temp = i_reg_359 ;
   input1_q1__temp = input1_q1 ;
   and_ln58_fu_258_p2__temp = and_ln58_fu_258_p2 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   input1_address0__temp = input1_address0 ;
   icmp_ln58_1_fu_252_p2__temp = icmp_ln58_1_fu_252_p2 ;
   input1_q0__temp = input1_q0 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   ap_ready__temp = ap_ready ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   icmp_ln50_fu_198_p2__temp = icmp_ln50_fu_198_p2 ;
   and_ln58_fu_258_p2_temp_27__temp = and_ln58_fu_258_p2_temp_27 ;
   ap_continue__temp = ap_continue ;
   icmp_ln58_fu_246_p2__temp = icmp_ln58_fu_246_p2 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   icmp_ln63_fu_310_p2_temp_26__temp = icmp_ln63_fu_310_p2_temp_26 ;
   i3_6_fu_348_p3__temp = i3_6_fu_348_p3 ;
   input2_we0__temp = input2_we0 ;
   input1_address1__temp = input1_address1 ;
   ap_idle__temp = ap_idle ;
   input1_ce1__temp = input1_ce1 ;
   icmp_ln49_fu_183_p2_temp_28__temp = icmp_ln49_fu_183_p2_temp_28 ;
   icmp_ln49_fu_183_p2__temp = icmp_ln49_fu_183_p2 ;
   i3_5_fu_316_p3__temp = i3_5_fu_316_p3 ;
   ap_done__temp = ap_done ;
   or_ln50_fu_216_p2__temp = or_ln50_fu_216_p2 ;
   icmp_ln63_fu_310_p2__temp = icmp_ln63_fu_310_p2 ;
   ap_rst__temp = ap_rst ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i2_fu_264_p2_temp_32__temp = i2_fu_264_p2_temp_32 ;
   icmp_ln62_fu_286_p2__temp = icmp_ln62_fu_286_p2 ;
   icmp_ln62_fu_286_p2_temp_24__temp = icmp_ln62_fu_286_p2_temp_24 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 
       input1_address0 = f1_0_reg_93;
       input1_address1 = f2_0_reg_81;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln47_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input1_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
input1_ce1 = 0 ; 
}
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input2_address0 = 0 ; 
}
}
}
       if(!((((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0))))){
input2_ce0 = 0 ; 
}
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input2_d0 = 0 ; 
}
}
}
       if(!((((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0))))){
input2_we0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               or_ln50_fu_216_p2 =   ( (  ( (  ( do_twos_complement( f1_0_reg_93__temp  , 63 )  < do_twos_complement( i2_1_reg_105__temp  , 63 )  ? 1 : 0 )  ^ 1 ) & 1 )  |  (  ( input1_q0 )   >  (  ( (  ( f2_0_reg_81__temp  == f1_5_reg_117__temp  ? 1 : 0 )  & 1 ) )  == 1 ? 0 :  ( input1_q1__temp )  )   ? 1 : 0 )  ) & 1 ) ;
               icmp_ln49_fu_183_p2 =   ( f2_0_reg_81__temp  == f1_5_reg_117__temp  ? 1 : 0 ) ;
       if(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =  f1_0_reg_93__temp ;
       }
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =   ( ( do_twos_complement( f1_0_reg_93__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 ) ;
       }
       }
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =  0;
       }
       }
       }
       if(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =   ( ( do_twos_complement( f2_0_reg_81__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 ) ;
       }
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =  f2_0_reg_81__temp ;
       }
       }
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =  0;
       }
       }
       }
       if(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           input2_address0 =   ( i_0_reg_129__temp  & 18446744073709551615 ) ;
       }
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           input2_address0 =   ( i_0_reg_129__temp  & 18446744073709551615 ) ;
       }
       }
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           input2_address0 =  0;
       }
       }
       }
       if((((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0))))
       {
           input2_ce0 =  1;
       }
       if(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           input2_d0 =  ( input1_q0  ) ;
       }
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           input2_d0 =   (  ( (  ( f2_0_reg_81__temp  == f1_5_reg_117__temp  ? 1 : 0 )  & 1 ) )  == 1 ? 0 :  ( input1_q1__temp  )  ) ;
       }
       }
       if(!(((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           input2_d0 =  0;
       }
       }
       }
       if((((or_ln50_fu_216_p2 == 1) && (icmp_ln49_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln49_fu_183_p2 == 1) || (or_ln50_fu_216_p2 == 0))))
       {
           input2_we0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           f1_0_reg_93 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_5_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ? f1_5_reg_117__temp  :  ap_phi_mux_f1_1_phi_fu_154_p4 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           f1_5_reg_117 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_5_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( f1_5_reg_117__temp  + 4 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( f1_5_reg_117__temp  + 4 ) & 4294967295 )  :  16 )  :  f1_5_reg_117__temp  ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           f2_0_reg_81 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_5_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( i2_1_reg_105__temp  + 4 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( i2_1_reg_105__temp  + 4 ) & 4294967295 )  :  16 )  :  ap_phi_mux_f2_1_phi_fu_144_p4 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i2_1_reg_105 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_5_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( i2_1_reg_105__temp  + 4 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( i2_1_reg_105__temp  + 4 ) & 4294967295 )  :  16 )  :  i2_1_reg_105__temp  ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i_0_reg_129 =  i_reg_359__temp ;
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
    *input1_address0__1=input1_address0;
    *input1_ce0__1=input1_ce0;
    *input1_q0__1=input1_q0;
    *input1_address1__1=input1_address1;
    *input1_ce1__1=input1_ce1;
    *input1_q1__1=input1_q1;
    *input2_address0__1=input2_address0;
    *input2_ce0__1=input2_ce0;
    *input2_we0__1=input2_we0;
    *input2_d0__1=input2_d0;
    
       return;
}
