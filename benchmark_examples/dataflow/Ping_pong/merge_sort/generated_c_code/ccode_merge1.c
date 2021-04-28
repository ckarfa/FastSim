#include<stdio.h>
#define A_DWIDTH 32
void merge1( long long int *ap_status__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1, long long int *ap_done__1,unsigned long long int *ap_continue__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *A_address0__1,unsigned long long int *A_ce0__1, long long int *A_q0__1,unsigned long long int *A_address1__1,unsigned long long int *A_ce1__1, long long int *A_q1__1, long long int *input1_address0__1, long long int *input1_ce0__1, long long int *input1_we0__1, long long int *input1_d0__1 ,long long int *A_ram,int dummy)
{
unsigned long long int A_address0=*A_address0__1;
unsigned long long int A_address1=*A_address1__1;
unsigned long long int A_ce0=*A_ce0__1;
unsigned long long int A_ce1=*A_ce1__1;
 long long int A_q0=*A_q0__1;
 long long int A_q1=*A_q1__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_continue=*ap_continue__1;
 long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
long long int ap_status=*ap_status__1;
long long int input1_address0=*input1_address0__1;
long long int input1_ce0=*input1_ce0__1;
long long int input1_we0=*input1_we0__1;
long long int input1_d0=*input1_d0__1; 


   static long long int ap_CS_fsm_state1=0;
   static long long int ap_CS_fsm_state2=0;
   static long long int ap_CS_fsm_state3=0;
   static long long int f1_0_reg_93__temp=0;
   static long long int f2_0_reg_81__temp=0;
   static long long int sext_ln16_fu_173_p1=0;
   static long long int sext_ln16_fu_173_p1__temp=0;
   static long long int sext_ln17_fu_178_p1=0;
   static long long int sext_ln17_fu_178_p1__temp=0;
    long long int A_address0__temp=0;
    long long int A_address1__temp=0;
    long long int A_ce0__temp=0;
    long long int A_ce1__temp=0;
    long long int A_d0=0;
    long long int A_d1=0;
    long long int A_d0__temp=0;
    long long int A_d1__temp=0;
    long long int A_q0__temp=0;
    long long int A_q1__temp=0;
    long long int A_we0=0;
    long long int A_we1=0;
    long long int A_we0__temp=0;
    long long int A_we1__temp=0;
    long long int input1_address0__temp=0;
    long long int input1_ce0__temp=0;
    long long int input1_we0__temp=0;
    long long int input1_d0__temp=0; 
   static unsigned long long int and_ln26_fu_258_p2=0;
   static unsigned long long int and_ln26_fu_258_p2__temp=0;
   static unsigned long long int and_ln26_fu_258_p2_temp_33=0;
   static unsigned long long int and_ln26_fu_258_p2_temp_33__temp=0;
   static unsigned long long int and_ln26_fu_258_p2_temp_35=0;
   static unsigned long long int and_ln26_fu_258_p2_temp_35__temp=0;
   static unsigned long long int and_ln26_fu_258_p2_temp_36=0;
   static unsigned long long int and_ln26_fu_258_p2_temp_36__temp=0;
   static unsigned long long int and_ln26_fu_258_p2_temp_38=0;
   static unsigned long long int and_ln26_fu_258_p2_temp_38__temp=0;
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
   static unsigned long long int f1_6_reg_117__temp=0;
   static unsigned long long int f1_7_fu_332_p3=0;
   static unsigned long long int f1_7_fu_332_p3__temp=0;
   static unsigned long long int f1_fu_239_p2=0;
   static unsigned long long int f1_fu_239_p2__temp=0;
   static unsigned long long int f2_11_fu_292_p3=0;
   static unsigned long long int f2_11_fu_292_p3__temp=0;
   static unsigned long long int f2_12_fu_324_p3=0;
   static unsigned long long int f2_12_fu_324_p3__temp=0;
   static unsigned long long int f2_13_fu_340_p3=0;
   static unsigned long long int f2_13_fu_340_p3__temp=0;
   static unsigned long long int f2_fu_227_p2=0;
   static unsigned long long int f2_fu_227_p2__temp=0;
   static unsigned long long int i2_1_reg_105__temp=0;
   static unsigned long long int i2_fu_264_p2=0;
   static unsigned long long int i2_fu_264_p2__temp=0;
   static unsigned long long int i2_fu_264_p2_temp_42=0;
   static unsigned long long int i2_fu_264_p2_temp_42__temp=0;
   static unsigned long long int i2_fu_264_p2_temp_43=0;
   static unsigned long long int i2_fu_264_p2_temp_43__temp=0;
   static unsigned long long int i3_7_fu_316_p3=0;
   static unsigned long long int i3_7_fu_316_p3__temp=0;
   static unsigned long long int i3_8_fu_348_p3=0;
   static unsigned long long int i3_8_fu_348_p3__temp=0;
   static unsigned long long int i3_fu_270_p2=0;
   static unsigned long long int i3_fu_270_p2__temp=0;
   static unsigned long long int i3_fu_270_p2_temp_40=0;
   static unsigned long long int i3_fu_270_p2_temp_40__temp=0;
   static unsigned long long int i3_fu_270_p2_temp_41=0;
   static unsigned long long int i3_fu_270_p2_temp_41__temp=0;
   static unsigned long long int i_0_reg_129__temp=0;
   static unsigned long long int i_address0_input1__temp=0;
   static unsigned long long int i_address1_input1__temp=0;
   static unsigned long long int i_ce0_input1__temp=0;
   static unsigned long long int i_ce1_input1__temp=0;
   static unsigned long long int i_ce_input1__temp=0;
   static unsigned long long int i_d0_input1__temp=0;
   static unsigned long long int i_fu_167_p2=0;
   static unsigned long long int i_fu_167_p2__temp=0;
   static unsigned long long int i_full_n_input1__temp=0;
   static unsigned long long int i_q0_input1__temp=0;
   static unsigned long long int i_q1_input1__temp=0;
   static unsigned long long int i_reg_359__temp=0;
   static unsigned long long int i_we0_input1__temp=0;
   static unsigned long long int i_write_input1__temp=0;
   static unsigned long long int icmp_ln15_fu_161_p2=0;
   static unsigned long long int icmp_ln15_fu_161_p2__temp=0;
   static unsigned long long int icmp_ln17_fu_183_p2=0;
   static unsigned long long int icmp_ln17_fu_183_p2__temp=0;
   static unsigned long long int icmp_ln17_fu_183_p2_temp_39=0;
   static unsigned long long int icmp_ln17_fu_183_p2_temp_39__temp=0;
   static unsigned long long int icmp_ln18_1_fu_210_p2=0;
   static unsigned long long int icmp_ln18_1_fu_210_p2__temp=0;
   static unsigned long long int icmp_ln18_fu_198_p2=0;
   static unsigned long long int icmp_ln18_fu_198_p2__temp=0;
   static unsigned long long int icmp_ln26_1_fu_252_p2=0;
   static unsigned long long int icmp_ln26_1_fu_252_p2__temp=0;
   static unsigned long long int icmp_ln26_fu_246_p2=0;
   static unsigned long long int icmp_ln26_fu_246_p2__temp=0;
   static unsigned long long int icmp_ln30_fu_286_p2=0;
   static unsigned long long int icmp_ln30_fu_286_p2__temp=0;
   static unsigned long long int icmp_ln30_fu_286_p2_temp_34=0;
   static unsigned long long int icmp_ln30_fu_286_p2_temp_34__temp=0;
   static unsigned long long int icmp_ln31_fu_310_p2=0;
   static unsigned long long int icmp_ln31_fu_310_p2__temp=0;
   static unsigned long long int icmp_ln31_fu_310_p2_temp_37=0;
   static unsigned long long int icmp_ln31_fu_310_p2_temp_37__temp=0;
   static unsigned long long int or_ln18_fu_216_p2=0;
   static unsigned long long int or_ln18_fu_216_p2__temp=0;
   static unsigned long long int reset_input1__temp=0;
   static unsigned long long int t2_fu_189_p3=0;
   static unsigned long long int t2_fu_189_p3__temp=0;
   static unsigned long long int t_address0_input1__temp=0;
   static unsigned long long int t_address1_input1__temp=0;
   static unsigned long long int t_ce0_input1__temp=0;
   static unsigned long long int t_ce1_input1__temp=0;
   static unsigned long long int t_ce_input1__temp=0;
   static unsigned long long int t_d0_input1__temp=0;
   static unsigned long long int t_empty_n_input1__temp=0;
   static unsigned long long int t_q0_input1__temp=0;
   static unsigned long long int t_q1_input1__temp=0;
   static unsigned long long int t_read_input1__temp=0;
   static unsigned long long int t_we0_input1__temp=0;
   static unsigned long long int tmp_4_fu_300_p4=0;
   static unsigned long long int tmp_4_fu_300_p4__temp=0;
   static unsigned long long int tmp_fu_276_p4=0;
   static unsigned long long int tmp_fu_276_p4__temp=0;
   static unsigned long long int xor_ln18_fu_204_p2=0;
   static unsigned long long int xor_ln18_fu_204_p2__temp=0;
   static unsigned long long int zext_ln19_fu_234_p1=0;
   static unsigned long long int zext_ln19_fu_234_p1__temp=0;
   static unsigned long long int zext_ln23_fu_222_p1=0;
   static unsigned long long int zext_ln23_fu_222_p1__temp=0;
   static unsigned long long int i_reg_359=0;
   static unsigned long long int f2_0_reg_81=0;
   static unsigned long long int i2_1_reg_105=0;
   static unsigned long long int f1_6_reg_117=0;
   static unsigned long long int f1_0_reg_93=0;
   static unsigned long long int i_0_reg_129=0;
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
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln16_fu_173_p1__temp = sext_ln16_fu_173_p1 ;
   f1_0_reg_93__temp = f1_0_reg_93 ;
   sext_ln17_fu_178_p1__temp = sext_ln17_fu_178_p1 ;
   ap_idle__temp = ap_idle ;
   i2_fu_264_p2_temp_43__temp = i2_fu_264_p2_temp_43 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   ap_done__temp = ap_done ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   f2_13_fu_340_p3__temp = f2_13_fu_340_p3 ;
   tmp_4_fu_300_p4__temp = tmp_4_fu_300_p4 ;
   icmp_ln18_fu_198_p2__temp = icmp_ln18_fu_198_p2 ;
   i2_fu_264_p2_temp_42__temp = i2_fu_264_p2_temp_42 ;
   A_q1__temp = A_q1 ;
   zext_ln23_fu_222_p1__temp = zext_ln23_fu_222_p1 ;
   f1_7_fu_332_p3__temp = f1_7_fu_332_p3 ;
   f1_6_reg_117__temp = f1_6_reg_117 ;
   icmp_ln30_fu_286_p2_temp_34__temp = icmp_ln30_fu_286_p2_temp_34 ;
   f2_11_fu_292_p3__temp = f2_11_fu_292_p3 ;
   ap_clk__temp = ap_clk ;
   A_ce1__temp = A_ce1 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   A_we0__temp = A_we0 ;
   input1_ce0__temp = input1_ce0 ;
   ap_done_reg__temp = ap_done_reg ;
   i3_8_fu_348_p3__temp = i3_8_fu_348_p3 ;
   and_ln26_fu_258_p2_temp_35__temp = and_ln26_fu_258_p2_temp_35 ;
   icmp_ln26_fu_246_p2__temp = icmp_ln26_fu_246_p2 ;
   ap_status__temp = ap_status ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   icmp_ln18_1_fu_210_p2__temp = icmp_ln18_1_fu_210_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   or_ln18_fu_216_p2__temp = or_ln18_fu_216_p2 ;
   f2_12_fu_324_p3__temp = f2_12_fu_324_p3 ;
   icmp_ln15_fu_161_p2__temp = icmp_ln15_fu_161_p2 ;
   and_ln26_fu_258_p2_temp_38__temp = and_ln26_fu_258_p2_temp_38 ;
   ap_rst__temp = ap_rst ;
   A_address0__temp = A_address0 ;
   ap_continue__temp = ap_continue ;
   input1_address0__temp = input1_address0 ;
   icmp_ln26_1_fu_252_p2__temp = icmp_ln26_1_fu_252_p2 ;
   ap_start__temp = ap_start ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   i3_fu_270_p2_temp_41__temp = i3_fu_270_p2_temp_41 ;
   icmp_ln30_fu_286_p2__temp = icmp_ln30_fu_286_p2 ;
   icmp_ln31_fu_310_p2__temp = icmp_ln31_fu_310_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   A_q0__temp = A_q0 ;
   i3_fu_270_p2_temp_40__temp = i3_fu_270_p2_temp_40 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_ln17_fu_183_p2_temp_39__temp = icmp_ln17_fu_183_p2_temp_39 ;
   A_ce0__temp = A_ce0 ;
   A_d0__temp = A_d0 ;
   xor_ln18_fu_204_p2__temp = xor_ln18_fu_204_p2 ;
   A_address1__temp = A_address1 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   and_ln26_fu_258_p2_temp_36__temp = and_ln26_fu_258_p2_temp_36 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   zext_ln19_fu_234_p1__temp = zext_ln19_fu_234_p1 ;
   A_d1__temp = A_d1 ;
   icmp_ln17_fu_183_p2__temp = icmp_ln17_fu_183_p2 ;
   and_ln26_fu_258_p2__temp = and_ln26_fu_258_p2 ;
   icmp_ln31_fu_310_p2_temp_37__temp = icmp_ln31_fu_310_p2_temp_37 ;
   ap_ready__temp = ap_ready ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   input1_d0__temp = input1_d0 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   and_ln26_fu_258_p2_temp_33__temp = and_ln26_fu_258_p2_temp_33 ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   i3_7_fu_316_p3__temp = i3_7_fu_316_p3 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;

  if(ap_clk_count == 1 ){
       ap_status = 1;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( f1_0_reg_93__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       A_address1 =   (  ( f2_0_reg_81__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce1 = 0 ; 
}
       if(!((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input1_address0 = 0 ; 
}
}
}
       if(!((((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0))))){
input1_ce0 = 0 ; 
}
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input1_d0 = 0 ; 
}
}
}
       if(!((((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0))))){
input1_we0 = 0 ; 
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
           f1_6_reg_117 =  2;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           f2_0_reg_81 =  1;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
           i2_1_reg_105 =  1;
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
               f1_6_reg_117 =  2;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               f2_0_reg_81 =  1;
       }
       if((!((ap_start == 0) || (ap_done_reg == 1))) && (1 == ap_CS_fsm_state1))
       {
               i2_1_reg_105 =  1;
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
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln16_fu_173_p1__temp = sext_ln16_fu_173_p1 ;
   f1_0_reg_93__temp = f1_0_reg_93 ;
   sext_ln17_fu_178_p1__temp = sext_ln17_fu_178_p1 ;
   ap_idle__temp = ap_idle ;
   i2_fu_264_p2_temp_43__temp = i2_fu_264_p2_temp_43 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   ap_done__temp = ap_done ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   f2_13_fu_340_p3__temp = f2_13_fu_340_p3 ;
   tmp_4_fu_300_p4__temp = tmp_4_fu_300_p4 ;
   icmp_ln18_fu_198_p2__temp = icmp_ln18_fu_198_p2 ;
   i2_fu_264_p2_temp_42__temp = i2_fu_264_p2_temp_42 ;
   A_q1__temp = A_q1 ;
   zext_ln23_fu_222_p1__temp = zext_ln23_fu_222_p1 ;
   i_reg_359__temp = i_reg_359 ;
   f1_7_fu_332_p3__temp = f1_7_fu_332_p3 ;
   f1_6_reg_117__temp = f1_6_reg_117 ;
   icmp_ln30_fu_286_p2_temp_34__temp = icmp_ln30_fu_286_p2_temp_34 ;
   f2_11_fu_292_p3__temp = f2_11_fu_292_p3 ;
   A_we1__temp = A_we1 ;
   ap_clk__temp = ap_clk ;
   A_ce1__temp = A_ce1 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   input1_we0__temp = input1_we0 ;
   A_we0__temp = A_we0 ;
   input1_ce0__temp = input1_ce0 ;
   ap_done_reg__temp = ap_done_reg ;
   i3_8_fu_348_p3__temp = i3_8_fu_348_p3 ;
   and_ln26_fu_258_p2_temp_35__temp = and_ln26_fu_258_p2_temp_35 ;
   icmp_ln26_fu_246_p2__temp = icmp_ln26_fu_246_p2 ;
   ap_status__temp = ap_status ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   icmp_ln18_1_fu_210_p2__temp = icmp_ln18_1_fu_210_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   or_ln18_fu_216_p2__temp = or_ln18_fu_216_p2 ;
   f2_12_fu_324_p3__temp = f2_12_fu_324_p3 ;
   icmp_ln15_fu_161_p2__temp = icmp_ln15_fu_161_p2 ;
   and_ln26_fu_258_p2_temp_38__temp = and_ln26_fu_258_p2_temp_38 ;
   ap_rst__temp = ap_rst ;
   A_address0__temp = A_address0 ;
   ap_continue__temp = ap_continue ;
   input1_address0__temp = input1_address0 ;
   icmp_ln26_1_fu_252_p2__temp = icmp_ln26_1_fu_252_p2 ;
   ap_start__temp = ap_start ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   i3_fu_270_p2_temp_41__temp = i3_fu_270_p2_temp_41 ;
   icmp_ln30_fu_286_p2__temp = icmp_ln30_fu_286_p2 ;
   icmp_ln31_fu_310_p2__temp = icmp_ln31_fu_310_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   A_q0__temp = A_q0 ;
   i3_fu_270_p2_temp_40__temp = i3_fu_270_p2_temp_40 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_ln17_fu_183_p2_temp_39__temp = icmp_ln17_fu_183_p2_temp_39 ;
   A_ce0__temp = A_ce0 ;
   A_d0__temp = A_d0 ;
   xor_ln18_fu_204_p2__temp = xor_ln18_fu_204_p2 ;
   A_address1__temp = A_address1 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   and_ln26_fu_258_p2_temp_36__temp = and_ln26_fu_258_p2_temp_36 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   zext_ln19_fu_234_p1__temp = zext_ln19_fu_234_p1 ;
   A_d1__temp = A_d1 ;
   icmp_ln17_fu_183_p2__temp = icmp_ln17_fu_183_p2 ;
   and_ln26_fu_258_p2__temp = and_ln26_fu_258_p2 ;
   icmp_ln31_fu_310_p2_temp_37__temp = icmp_ln31_fu_310_p2_temp_37 ;
   ap_ready__temp = ap_ready ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   input1_d0__temp = input1_d0 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   and_ln26_fu_258_p2_temp_33__temp = and_ln26_fu_258_p2_temp_33 ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   i3_7_fu_316_p3__temp = i3_7_fu_316_p3 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;

  if(ap_clk_count == 1 ){
       ap_status = 2;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( f1_0_reg_93__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       A_address1 =   (  ( f2_0_reg_81__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce1 = 0 ; 
}
       if(!((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input1_address0 = 0 ; 
}
}
}
       if(!((((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0))))){
input1_ce0 = 0 ; 
}
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input1_d0 = 0 ; 
}
}
}
       if(!((((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0))))){
input1_we0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               icmp_ln15_fu_161_p2 =   ( i_0_reg_129__temp  == 16 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           A_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           A_ce1 =  1;
       }
       if((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               icmp_ln15_fu_161_p2 =   ( i_0_reg_129__temp  == 16 ? 1 :  0 ) ;
   if(((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done_reg =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_359 =   ( ( i_0_reg_129__temp  + 1 ) & 31 ) ;
       }
       if(A_ce0){
          A_q0 = A_ram[A_address0];
           if(A_we0){
              A_ram[A_address0] = A_d0;
           }
       }
       if(A_ce1){
          A_q1 = A_ram[A_address1];
           if(A_we1){
              A_ram[A_address1] = A_d1;
           }
       }
       if(ap_done==1){
         
       }
      

       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_359 =   ( ( i_0_reg_129__temp  + 1 ) & 31 ) ;
       }
       if(A_ce0){
          A_q0 = A_ram[A_address0];
           if(A_we0){
              A_ram[A_address0] = A_d0;
           }
       }
       if(A_ce1){
          A_q1 = A_ram[A_address1];
           if(A_we1){
              A_ram[A_address1] = A_d1;
           }
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
   f2_0_reg_81__temp = f2_0_reg_81 ;
   sext_ln16_fu_173_p1__temp = sext_ln16_fu_173_p1 ;
   f1_0_reg_93__temp = f1_0_reg_93 ;
   sext_ln17_fu_178_p1__temp = sext_ln17_fu_178_p1 ;
   ap_idle__temp = ap_idle ;
   i2_fu_264_p2_temp_43__temp = i2_fu_264_p2_temp_43 ;
   i2_1_reg_105__temp = i2_1_reg_105 ;
   ap_done__temp = ap_done ;
   f1_fu_239_p2__temp = f1_fu_239_p2 ;
   f2_13_fu_340_p3__temp = f2_13_fu_340_p3 ;
   tmp_4_fu_300_p4__temp = tmp_4_fu_300_p4 ;
   icmp_ln18_fu_198_p2__temp = icmp_ln18_fu_198_p2 ;
   i2_fu_264_p2_temp_42__temp = i2_fu_264_p2_temp_42 ;
   A_q1__temp = A_q1 ;
   zext_ln23_fu_222_p1__temp = zext_ln23_fu_222_p1 ;
   i_reg_359__temp = i_reg_359 ;
   f1_7_fu_332_p3__temp = f1_7_fu_332_p3 ;
   f1_6_reg_117__temp = f1_6_reg_117 ;
   icmp_ln30_fu_286_p2_temp_34__temp = icmp_ln30_fu_286_p2_temp_34 ;
   f2_11_fu_292_p3__temp = f2_11_fu_292_p3 ;
   A_we1__temp = A_we1 ;
   ap_clk__temp = ap_clk ;
   A_ce1__temp = A_ce1 ;
   ap_phi_mux_f2_1_phi_fu_144_p4__temp = ap_phi_mux_f2_1_phi_fu_144_p4 ;
   input1_we0__temp = input1_we0 ;
   A_we0__temp = A_we0 ;
   input1_ce0__temp = input1_ce0 ;
   ap_done_reg__temp = ap_done_reg ;
   i3_8_fu_348_p3__temp = i3_8_fu_348_p3 ;
   and_ln26_fu_258_p2_temp_35__temp = and_ln26_fu_258_p2_temp_35 ;
   icmp_ln26_fu_246_p2__temp = icmp_ln26_fu_246_p2 ;
   ap_status__temp = ap_status ;
   i_fu_167_p2__temp = i_fu_167_p2 ;
   icmp_ln18_1_fu_210_p2__temp = icmp_ln18_1_fu_210_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   or_ln18_fu_216_p2__temp = or_ln18_fu_216_p2 ;
   f2_12_fu_324_p3__temp = f2_12_fu_324_p3 ;
   icmp_ln15_fu_161_p2__temp = icmp_ln15_fu_161_p2 ;
   and_ln26_fu_258_p2_temp_38__temp = and_ln26_fu_258_p2_temp_38 ;
   ap_rst__temp = ap_rst ;
   A_address0__temp = A_address0 ;
   ap_continue__temp = ap_continue ;
   input1_address0__temp = input1_address0 ;
   icmp_ln26_1_fu_252_p2__temp = icmp_ln26_1_fu_252_p2 ;
   ap_start__temp = ap_start ;
   f2_fu_227_p2__temp = f2_fu_227_p2 ;
   i3_fu_270_p2_temp_41__temp = i3_fu_270_p2_temp_41 ;
   icmp_ln30_fu_286_p2__temp = icmp_ln30_fu_286_p2 ;
   icmp_ln31_fu_310_p2__temp = icmp_ln31_fu_310_p2 ;
   ap_block_state1__temp = ap_block_state1 ;
   A_q0__temp = A_q0 ;
   i3_fu_270_p2_temp_40__temp = i3_fu_270_p2_temp_40 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_ln17_fu_183_p2_temp_39__temp = icmp_ln17_fu_183_p2_temp_39 ;
   A_ce0__temp = A_ce0 ;
   A_d0__temp = A_d0 ;
   xor_ln18_fu_204_p2__temp = xor_ln18_fu_204_p2 ;
   A_address1__temp = A_address1 ;
   i_0_reg_129__temp = i_0_reg_129 ;
   and_ln26_fu_258_p2_temp_36__temp = and_ln26_fu_258_p2_temp_36 ;
   i3_fu_270_p2__temp = i3_fu_270_p2 ;
   zext_ln19_fu_234_p1__temp = zext_ln19_fu_234_p1 ;
   A_d1__temp = A_d1 ;
   icmp_ln17_fu_183_p2__temp = icmp_ln17_fu_183_p2 ;
   and_ln26_fu_258_p2__temp = and_ln26_fu_258_p2 ;
   icmp_ln31_fu_310_p2_temp_37__temp = icmp_ln31_fu_310_p2_temp_37 ;
   ap_ready__temp = ap_ready ;
   ap_phi_mux_f1_1_phi_fu_154_p4__temp = ap_phi_mux_f1_1_phi_fu_154_p4 ;
   input1_d0__temp = input1_d0 ;
   tmp_fu_276_p4__temp = tmp_fu_276_p4 ;
   and_ln26_fu_258_p2_temp_33__temp = and_ln26_fu_258_p2_temp_33 ;
   i2_fu_264_p2__temp = i2_fu_264_p2 ;
   i3_7_fu_316_p3__temp = i3_7_fu_316_p3 ;
   t2_fu_189_p3__temp = t2_fu_189_p3 ;

  if(ap_clk_count == 1 ){
       ap_status = 3;
             goto end;
 }
   ap_clk_count = ap_clk_count + 1 ; 

       A_ce0 = 0;
       A_we0 = 0;
       A_ce1 = 0;
       A_we1 = 0;
       A_address0 =   (  ( f1_0_reg_93__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       A_address1 =   (  ( f2_0_reg_81__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       if(ap_rst == 1){
ap_done_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(ap_continue == 1){
ap_done_reg = 0 ; 
}
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce0 = 0 ; 
}
       if(!(1 == ap_CS_fsm_state2)){
A_ce1 = 0 ; 
}
       if(!((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = ap_done_reg ; 
}
       if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f1_1_phi_fu_154_p4 = 0 ; 
}
}
}
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
ap_phi_mux_f2_1_phi_fu_144_p4 = 0 ; 
}
}
}
       if(!((icmp_ln15_fu_161_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input1_address0 = 0 ; 
}
}
}
       if(!((((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0))))){
input1_ce0 = 0 ; 
}
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))){
if(!(1 == ap_CS_fsm_state3)){
input1_d0 = 0 ; 
}
}
}
       if(!((((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0))))){
input1_we0 = 0 ; 
}
       ap_block_state1 =  ( (  ( ( ( ap_start & 1 )  == 0 ) & 1 )  |  ( ( ap_done_reg == 1 ) & 1 )  ) & 1 )  ; 
               icmp_ln17_fu_183_p2 =   ( f2_0_reg_81__temp  == f1_6_reg_117__temp  ? 1 : 0 ) ;
               or_ln18_fu_216_p2 =   ( (  ( (  ( do_twos_complement( f1_0_reg_93__temp  , 63 )  < do_twos_complement( i2_1_reg_105__temp  , 63 )  ? 1 : 0 )  ^ 1 ) & 1 )  |  (  ( A_q0 )   >  (  ( (  ( f2_0_reg_81__temp  == f1_6_reg_117__temp  ? 1 : 0 )  & 1 ) )  == 1 ? 0 :  ( A_q1__temp )  )   ? 1 : 0 )  ) & 1 ) ;
       if(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =  f1_0_reg_93__temp ;
       }
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =   ( ( do_twos_complement( f1_0_reg_93__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 ) ;
       }
       }
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           ap_phi_mux_f1_1_phi_fu_154_p4 =  0;
       }
       }
       }
       if(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =   ( ( do_twos_complement( f2_0_reg_81__temp  , 32 )  + do_twos_complement( 1 , 32 )  ) & 4294967295 ) ;
       }
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =  f2_0_reg_81__temp ;
       }
       }
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           ap_phi_mux_f2_1_phi_fu_144_p4 =  0;
       }
       }
       }
       if(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           input1_address0 =   ( i_0_reg_129__temp  & 18446744073709551615 ) ;
       }
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           input1_address0 =   ( i_0_reg_129__temp  & 18446744073709551615 ) ;
       }
       }
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           input1_address0 =  0;
       }
       }
       }
       if((((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0))))
       {
           input1_ce0 =  1;
       }
       if(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           input1_d0 =  ( A_q0 ) ;
       }
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3))
       {
           input1_d0 =   (  ( (  ( f2_0_reg_81__temp  == f1_6_reg_117__temp  ? 1 : 0 )  & 1 ) )  == 1 ? 0 :  ( A_q1__temp  )  ) ;
       }
       }
       if(!(((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(!(((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)))
       {
       if(1 == ap_CS_fsm_state3)
       {
           input1_d0 =  0;
       }
       }
       }
       if((((or_ln18_fu_216_p2 == 1) && (icmp_ln17_fu_183_p2 == 0)) && (1 == ap_CS_fsm_state3)) || ((1 == ap_CS_fsm_state3) && ((icmp_ln17_fu_183_p2 == 1) || (or_ln18_fu_216_p2 == 0))))
       {
           input1_we0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           f1_0_reg_93 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_6_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ? f1_6_reg_117__temp  :  ap_phi_mux_f1_1_phi_fu_154_p4 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           f1_6_reg_117 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_6_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( f1_6_reg_117__temp  + 2 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( f1_6_reg_117__temp  + 2 ) & 4294967295 )  :  16 )  :  f1_6_reg_117__temp  ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           f2_0_reg_81 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_6_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( i2_1_reg_105__temp  + 2 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( i2_1_reg_105__temp  + 2 ) & 4294967295 )  :  16 )  :  ap_phi_mux_f2_1_phi_fu_144_p4 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i2_1_reg_105 =   (  ( (  ( (  ( ap_phi_mux_f1_1_phi_fu_154_p4 == i2_1_reg_105__temp  ? 1 : 0 )  &  ( ap_phi_mux_f2_1_phi_fu_144_p4 == f1_6_reg_117__temp  ? 1 : 0 )  ) & 1 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( do_twos_complement(  (  ( (  ( (  ( ( i2_1_reg_105__temp  + 2 ) & 4294967295 )  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  , 63 )  < do_twos_complement(1 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( i2_1_reg_105__temp  + 2 ) & 4294967295 )  :  16 )  :  i2_1_reg_105__temp  ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i_0_reg_129 =  i_reg_359__temp ;
       }

       goto ap_ST_fsm_state2;
   end:
    *A_address0__1=A_address0;
    *A_address1__1=A_address1;
    *A_ce0__1=A_ce0;
    *A_ce1__1=A_ce1;
    *A_q0__1=A_q0;
    *A_q1__1=A_q1;
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
    *input1_we0__1=input1_we0;
    *input1_d0__1=input1_d0; 
    
       return;
}
