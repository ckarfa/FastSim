#include<stdio.h>
#define IP_DataWidth 7
#define IP_AddressRange 64
#define IP_AddressWidth 6
#define IP_DWIDTH 7
#define IP_AWIDTH 6
#define IP_MEM_SIZE 64
#define PC1_DataWidth 6
#define PC1_AddressRange 56
#define PC1_AddressWidth 6
#define PC1_DWIDTH 6
#define PC1_AWIDTH 6
#define PC1_MEM_SIZE 56
void shiftingcidi(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int *dummy);
void top_function(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *inputdata__1,int *dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int inputdata=*inputdata__1;
   int clock = *dummy;
   long long int ap_CS_fsm_pp0_stage0=0;
   long long int ap_CS_fsm_pp1_stage0=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state10=0;
   long long int ap_CS_fsm_state11=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state6=0;
   long long int sext_ln321_fu_209_p1=0;
   long long int sext_ln321_fu_209_p1__temp=0;
   unsigned long long int C_assign_reg_427=0;
   unsigned long long int C_assign_reg_427__temp=0;
   unsigned long long int IP_address0=0;
   unsigned long long int IP_address0__temp=0;
   unsigned long long int IP_ce0=0;
   unsigned long long int IP_ce0__temp=0;
   unsigned long long int IP_load_reg_383=0;
   unsigned long long int IP_load_reg_383__temp=0;
   unsigned long long int IP_q0=0;
   unsigned long long int IP_q0__temp=0;
   unsigned long long int L1_reg_393=0;
   unsigned long long int L1_reg_393__temp=0;
   unsigned long long int PC1_address0=0;
   unsigned long long int PC1_address0__temp=0;
   unsigned long long int PC1_ce0=0;
   unsigned long long int PC1_ce0__temp=0;
   unsigned long long int PC1_load_reg_417=0;
   unsigned long long int PC1_load_reg_417__temp=0;
   unsigned long long int PC1_q0=0;
   unsigned long long int PC1_q0__temp=0;
   unsigned long long int R1_fu_283_p1=0;
   unsigned long long int R1_fu_283_p1__temp=0;
   unsigned long long int R1_reg_398=0;
   unsigned long long int R1_reg_398__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_block_pp0_stage0=0;
   unsigned long long int ap_block_pp0_stage0_11001=0;
   unsigned long long int ap_block_pp0_stage0_11001__temp=0;
   unsigned long long int ap_block_pp0_stage0__temp=0;
   unsigned long long int ap_block_pp0_stage0_subdone=0;
   unsigned long long int ap_block_pp0_stage0_subdone__temp=0;
   unsigned long long int ap_block_pp1_stage0=0;
   unsigned long long int ap_block_pp1_stage0_11001=0;
   unsigned long long int ap_block_pp1_stage0_11001__temp=0;
   unsigned long long int ap_block_pp1_stage0__temp=0;
   unsigned long long int ap_block_pp1_stage0_subdone=0;
   unsigned long long int ap_block_pp1_stage0_subdone__temp=0;
   unsigned long long int ap_block_state3_pp0_stage0_iter0=0;
   unsigned long long int ap_block_state3_pp0_stage0_iter0__temp=0;
   unsigned long long int ap_block_state4_pp0_stage0_iter1=0;
   unsigned long long int ap_block_state4_pp0_stage0_iter1__temp=0;
   unsigned long long int ap_block_state5_pp0_stage0_iter2=0;
   unsigned long long int ap_block_state5_pp0_stage0_iter2__temp=0;
   unsigned long long int ap_block_state7_pp1_stage0_iter0=0;
   unsigned long long int ap_block_state7_pp1_stage0_iter0__temp=0;
   unsigned long long int ap_block_state8_pp1_stage0_iter1=0;
   unsigned long long int ap_block_state8_pp1_stage0_iter1__temp=0;
   unsigned long long int ap_block_state9_pp1_stage0_iter2=0;
   unsigned long long int ap_block_state9_pp1_stage0_iter2__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_condition_pp0_exit_iter0_state3=0;
   unsigned long long int ap_condition_pp0_exit_iter0_state3__temp=0;
   unsigned long long int ap_condition_pp1_exit_iter0_state7=0;
   unsigned long long int ap_condition_pp1_exit_iter0_state7__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_enable_pp0=0;
   unsigned long long int ap_enable_pp0__temp=0;
   unsigned long long int ap_enable_pp1=0;
   unsigned long long int ap_enable_pp1__temp=0;
   unsigned long long int ap_enable_reg_pp0_iter0=0;
   unsigned long long int ap_enable_reg_pp0_iter0__temp=0;
   unsigned long long int ap_enable_reg_pp0_iter1=0;
   unsigned long long int ap_enable_reg_pp0_iter1__temp=0;
   unsigned long long int ap_enable_reg_pp0_iter2=0;
   unsigned long long int ap_enable_reg_pp0_iter2__temp=0;
   unsigned long long int ap_enable_reg_pp1_iter0=0;
   unsigned long long int ap_enable_reg_pp1_iter0__temp=0;
   unsigned long long int ap_enable_reg_pp1_iter1=0;
   unsigned long long int ap_enable_reg_pp1_iter1__temp=0;
   unsigned long long int ap_enable_reg_pp1_iter2=0;
   unsigned long long int ap_enable_reg_pp1_iter2__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_idle_pp0=0;
   unsigned long long int ap_idle_pp0__temp=0;
   unsigned long long int ap_idle_pp1=0;
   unsigned long long int ap_idle_pp1__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_return__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_done=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_done__temp=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_idle=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_idle__temp=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_ready=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_ready__temp=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_return=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_return__temp=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_start=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_start__temp=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_start_reg=0;
   unsigned long long int grp_shiftingcidi_fu_187_ap_start_reg__temp=0;
   unsigned long long int i_0_i_i_reg_164=0;
   unsigned long long int i_0_i_i_reg_164__temp=0;
   unsigned long long int i_0_i_reg_141=0;
   unsigned long long int i_0_i_reg_141__temp=0;
   unsigned long long int i_0_reg_130=0;
   unsigned long long int i_0_reg_130__temp=0;
   unsigned long long int i_1_fu_219_p2=0;
   unsigned long long int i_1_fu_219_p2__temp=0;
   unsigned long long int i_1_reg_364=0;
   unsigned long long int i_1_reg_364__temp=0;
   unsigned long long int i_2_fu_293_p2=0;
   unsigned long long int i_2_fu_293_p2__temp=0;
   unsigned long long int i_fu_231_p2=0;
   unsigned long long int i_fu_231_p2__temp=0;
   unsigned long long int icmp_ln329_fu_213_p2=0;
   unsigned long long int icmp_ln329_fu_213_p2__temp=0;
   unsigned long long int icmp_ln35_fu_225_p2=0;
   unsigned long long int icmp_ln35_fu_225_p2__temp=0;
   unsigned long long int icmp_ln35_reg_369=0;
   unsigned long long int icmp_ln35_reg_369__temp=0;
   unsigned long long int icmp_ln35_reg_369_pp0_iter1_reg=0;
   unsigned long long int icmp_ln35_reg_369_pp0_iter1_reg__temp=0;
   unsigned long long int icmp_ln66_fu_287_p2=0;
   unsigned long long int icmp_ln66_fu_287_p2__temp=0;
   unsigned long long int icmp_ln66_reg_403=0;
   unsigned long long int icmp_ln66_reg_403__temp=0;
   unsigned long long int icmp_ln66_reg_403_pp1_iter1_reg=0;
   unsigned long long int icmp_ln66_reg_403_pp1_iter1_reg__temp=0;
   unsigned long long int init_perm_res_0_i_reg_152=0;
   unsigned long long int init_perm_res_0_i_reg_152__temp=0;
   unsigned long long int init_perm_res_0_i_reg_152_temp_50=0;
   unsigned long long int init_perm_res_0_i_reg_152_temp_50__temp=0;
   unsigned long long int init_perm_res_0_i_reg_152_temp_51=0;
   unsigned long long int init_perm_res_0_i_reg_152_temp_51__temp=0;
   unsigned long long int init_perm_res_fu_265_p3=0;
   unsigned long long int init_perm_res_fu_265_p3__temp=0;
   unsigned long long int input_assign_reg_120=0;
   unsigned long long int input_assign_reg_120__temp=0;
   unsigned long long int inputdata__temp=0;
   unsigned long long int lshr_ln39_fu_251_p2=0;
   unsigned long long int lshr_ln39_fu_251_p2__temp=0;
   unsigned long long int lshr_ln70_fu_317_p2=0;
   unsigned long long int lshr_ln70_fu_317_p2__temp=0;
   unsigned long long int permuted_choice_1_0_s_reg_175=0;
   unsigned long long int permuted_choice_1_0_s_reg_175__temp=0;
   unsigned long long int permuted_choice_1_0_s_reg_175_temp_48=0;
   unsigned long long int permuted_choice_1_0_s_reg_175_temp_48__temp=0;
   unsigned long long int permuted_choice_1_0_s_reg_175_temp_49=0;
   unsigned long long int permuted_choice_1_0_s_reg_175_temp_49__temp=0;
   unsigned long long int permuted_choice_1_fu_331_p3=0;
   unsigned long long int permuted_choice_1_fu_331_p3__temp=0;
   unsigned long long int sub_ln39_fu_242_p2=0;
   unsigned long long int sub_ln39_fu_242_p2__temp=0;
   unsigned long long int sub_ln70_fu_307_p2=0;
   unsigned long long int sub_ln70_fu_307_p2__temp=0;
   unsigned long long int trunc_ln39_1_fu_261_p1=0;
   unsigned long long int trunc_ln39_1_fu_261_p1__temp=0;
   unsigned long long int trunc_ln39_fu_257_p1=0;
   unsigned long long int trunc_ln39_fu_257_p1__temp=0;
   unsigned long long int trunc_ln70_1_fu_327_p1=0;
   unsigned long long int trunc_ln70_1_fu_327_p1__temp=0;
   unsigned long long int trunc_ln70_fu_323_p1=0;
   unsigned long long int trunc_ln70_fu_323_p1__temp=0;
   unsigned long long int trunc_ln74_fu_350_p1=0;
   unsigned long long int trunc_ln74_fu_350_p1__temp=0;
   unsigned long long int trunc_ln74_reg_432=0;
   unsigned long long int trunc_ln74_reg_432__temp=0;
   unsigned long long int zext_ln39_1_fu_247_p1=0;
   unsigned long long int zext_ln39_1_fu_247_p1__temp=0;
   unsigned long long int zext_ln39_fu_237_p1=0;
   unsigned long long int zext_ln39_fu_237_p1__temp=0;
   unsigned long long int zext_ln70_1_fu_304_p1=0;
   unsigned long long int zext_ln70_1_fu_304_p1__temp=0;
   unsigned long long int zext_ln70_2_fu_313_p1=0;
   unsigned long long int zext_ln70_2_fu_313_p1__temp=0;
   unsigned long long int zext_ln70_fu_299_p1=0;
   unsigned long long int zext_ln70_fu_299_p1__temp=0;
   unsigned long long int shiftingcidi_clk=0;
    ap_done=0;
    ap_start=1;
   unsigned long long int IP_rom[IP_MEM_SIZE]={
58,50,42,34,26,18,10,2,60,52,44,36,28,20,12,4,62,54,46,38,30,22,14,6,64,56,48,40,32,24,16,8,57,49,41,33,25,17,9,1,59,51,43,35,27,19,11,3,61,53,45,37,29,21,13,5,63,55,47,39,31,23,15,7};
   unsigned long long int PC1_rom[PC1_MEM_SIZE]={
57,49,41,33,25,17,9,1,58,50,42,34,26,18,10,2,59,51,43,35,27,19,11,3,60,52,44,36,63,55,47,39,31,23,15,7,62,54,46,38,30,22,14,6,61,53,45,37,29,21,13,5,28,20,12,4};

   ap_ST_fsm_state1:

	clock = clock + 1;
    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_pp0_stage0 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_pp1_stage0 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
   sext_ln321_fu_209_p1__temp = sext_ln321_fu_209_p1 ;
   IP_ce0__temp = IP_ce0 ;
   ap_clk__temp = ap_clk ;
   i_0_i_i_reg_164__temp = i_0_i_i_reg_164 ;
   zext_ln39_1_fu_247_p1__temp = zext_ln39_1_fu_247_p1 ;
   ap_ready__temp = ap_ready ;
   input_assign_reg_120__temp = input_assign_reg_120 ;
   grp_shiftingcidi_fu_187_ap_start__temp = grp_shiftingcidi_fu_187_ap_start ;
   icmp_ln66_fu_287_p2__temp = icmp_ln66_fu_287_p2 ;
   PC1_address0__temp = PC1_address0 ;
   lshr_ln70_fu_317_p2__temp = lshr_ln70_fu_317_p2 ;
   trunc_ln70_1_fu_327_p1__temp = trunc_ln70_1_fu_327_p1 ;
   ap_block_state9_pp1_stage0_iter2__temp = ap_block_state9_pp1_stage0_iter2 ;
   ap_block_pp0_stage0__temp = ap_block_pp0_stage0 ;
   sub_ln39_fu_242_p2__temp = sub_ln39_fu_242_p2 ;
   init_perm_res_0_i_reg_152_temp_50__temp = init_perm_res_0_i_reg_152_temp_50 ;
   icmp_ln66_reg_403_pp1_iter1_reg__temp = icmp_ln66_reg_403_pp1_iter1_reg ;
   init_perm_res_0_i_reg_152__temp = init_perm_res_0_i_reg_152 ;
   grp_shiftingcidi_fu_187_ap_start_reg__temp = grp_shiftingcidi_fu_187_ap_start_reg ;
   zext_ln70_2_fu_313_p1__temp = zext_ln70_2_fu_313_p1 ;
   ap_block_state5_pp0_stage0_iter2__temp = ap_block_state5_pp0_stage0_iter2 ;
   i_1_reg_364__temp = i_1_reg_364 ;
   icmp_ln35_fu_225_p2__temp = icmp_ln35_fu_225_p2 ;
   ap_block_pp0_stage0_subdone__temp = ap_block_pp0_stage0_subdone ;
   trunc_ln39_fu_257_p1__temp = trunc_ln39_fu_257_p1 ;
   ap_block_pp1_stage0_subdone__temp = ap_block_pp1_stage0_subdone ;
   lshr_ln39_fu_251_p2__temp = lshr_ln39_fu_251_p2 ;
   ap_enable_pp0__temp = ap_enable_pp0 ;
   trunc_ln74_reg_432__temp = trunc_ln74_reg_432 ;
   i_0_i_reg_141__temp = i_0_i_reg_141 ;
   ap_condition_pp1_exit_iter0_state7__temp = ap_condition_pp1_exit_iter0_state7 ;
   ap_block_pp1_stage0__temp = ap_block_pp1_stage0 ;
   ap_enable_reg_pp0_iter0__temp = ap_enable_reg_pp0_iter0 ;
   R1_fu_283_p1__temp = R1_fu_283_p1 ;
   IP_q0__temp = IP_q0 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_idle_pp0__temp = ap_idle_pp0 ;
   R1_reg_398__temp = R1_reg_398 ;
   grp_shiftingcidi_fu_187_ap_return__temp = grp_shiftingcidi_fu_187_ap_return ;
   icmp_ln66_reg_403__temp = icmp_ln66_reg_403 ;
   permuted_choice_1_0_s_reg_175__temp = permuted_choice_1_0_s_reg_175 ;
   permuted_choice_1_0_s_reg_175_temp_48__temp = permuted_choice_1_0_s_reg_175_temp_48 ;
   icmp_ln329_fu_213_p2__temp = icmp_ln329_fu_213_p2 ;
   ap_condition_pp0_exit_iter0_state3__temp = ap_condition_pp0_exit_iter0_state3 ;
   ap_block_state7_pp1_stage0_iter0__temp = ap_block_state7_pp1_stage0_iter0 ;
   init_perm_res_0_i_reg_152_temp_51__temp = init_perm_res_0_i_reg_152_temp_51 ;
   ap_enable_reg_pp0_iter1__temp = ap_enable_reg_pp0_iter1 ;
   icmp_ln35_reg_369_pp0_iter1_reg__temp = icmp_ln35_reg_369_pp0_iter1_reg ;
   ap_block_pp0_stage0_11001__temp = ap_block_pp0_stage0_11001 ;
   ap_return__temp = ap_return ;
   sub_ln70_fu_307_p2__temp = sub_ln70_fu_307_p2 ;
   trunc_ln74_fu_350_p1__temp = trunc_ln74_fu_350_p1 ;
   ap_start__temp = ap_start ;
   ap_block_pp1_stage0_11001__temp = ap_block_pp1_stage0_11001 ;
   ap_done__temp = ap_done ;
   ap_enable_reg_pp0_iter2__temp = ap_enable_reg_pp0_iter2 ;
   inputdata__temp = inputdata ;
   IP_load_reg_383__temp = IP_load_reg_383 ;
   ap_rst__temp = ap_rst ;
   init_perm_res_fu_265_p3__temp = init_perm_res_fu_265_p3 ;
   L1_reg_393__temp = L1_reg_393 ;
   ap_enable_reg_pp1_iter0__temp = ap_enable_reg_pp1_iter0 ;
   ap_block_state4_pp0_stage0_iter1__temp = ap_block_state4_pp0_stage0_iter1 ;
   i_2_fu_293_p2__temp = i_2_fu_293_p2 ;
   trunc_ln39_1_fu_261_p1__temp = trunc_ln39_1_fu_261_p1 ;
   PC1_load_reg_417__temp = PC1_load_reg_417 ;
   ap_enable_reg_pp1_iter1__temp = ap_enable_reg_pp1_iter1 ;
   C_assign_reg_427__temp = C_assign_reg_427 ;
   icmp_ln35_reg_369__temp = icmp_ln35_reg_369 ;
   i_fu_231_p2__temp = i_fu_231_p2 ;
   ap_enable_reg_pp1_iter2__temp = ap_enable_reg_pp1_iter2 ;
   ap_idle_pp1__temp = ap_idle_pp1 ;
   i_0_reg_130__temp = i_0_reg_130 ;
   grp_shiftingcidi_fu_187_ap_ready__temp = grp_shiftingcidi_fu_187_ap_ready ;
   grp_shiftingcidi_fu_187_ap_done__temp = grp_shiftingcidi_fu_187_ap_done ;
   ap_idle__temp = ap_idle ;
   IP_address0__temp = IP_address0 ;
   trunc_ln70_fu_323_p1__temp = trunc_ln70_fu_323_p1 ;
   permuted_choice_1_0_s_reg_175_temp_49__temp = permuted_choice_1_0_s_reg_175_temp_49 ;
   ap_block_state3_pp0_stage0_iter0__temp = ap_block_state3_pp0_stage0_iter0 ;
   PC1_q0__temp = PC1_q0 ;
   ap_block_state8_pp1_stage0_iter1__temp = ap_block_state8_pp1_stage0_iter1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln39_fu_237_p1__temp = zext_ln39_fu_237_p1 ;
   zext_ln70_1_fu_304_p1__temp = zext_ln70_1_fu_304_p1 ;
   ap_enable_pp1__temp = ap_enable_pp1 ;
   permuted_choice_1_fu_331_p3__temp = permuted_choice_1_fu_331_p3 ;
   i_1_fu_219_p2__temp = i_1_fu_219_p2 ;
   grp_shiftingcidi_fu_187_ap_idle__temp = grp_shiftingcidi_fu_187_ap_idle ;
   zext_ln70_fu_299_p1__temp = zext_ln70_fu_299_p1 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_141__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_164__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_enable_reg_pp0_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 =  ( ( 1 ^ ap_condition_pp0_exit_iter0_state3 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp0_stage0_subdone){
ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1 ; 
}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 =  ( ( 1 ^ ap_condition_pp1_exit_iter0_state7 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp1_stage0_subdone){
ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1 ; 
}

}
    if(ap_rst == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!(1 == ap_CS_fsm_state10)){
if(grp_shiftingcidi_fu_187_ap_ready == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}

}

}
    if(!((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))){
if(((icmp_ln35_reg_369_pp0_iter1_reg == 0) && (0 == ap_block_pp0_stage0_11001)) && (ap_enable_reg_pp0_iter2 == 1)){
init_perm_res_0_i_reg_152 =  (  ( (  ( (  ( ( init_perm_res_0_i_reg_152 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( IP_load_reg_383 , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}

}
    if(((icmp_ln66_reg_403_pp1_iter1_reg == 0) && (ap_enable_reg_pp1_iter2 == 1)) && (0 == ap_block_pp1_stage0_11001)){
permuted_choice_1_0_s_reg_175 =  (  ( (  ( (  ( ( permuted_choice_1_0_s_reg_175 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement(  ( PC1_load_reg_417 & 127 )  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}
    if(!(((0 == ap_block_pp0_stage0_11001) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))){
IP_ce0 = 0 ; 

}
    if(!(((ap_enable_reg_pp1_iter0 == 1) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))){
PC1_ce0 = 0 ; 

}
    if(icmp_ln35_fu_225_p2 == 1){
ap_condition_pp0_exit_iter0_state3 = 1 ; 
}
if(!(icmp_ln35_fu_225_p2 == 1)){
ap_condition_pp0_exit_iter0_state3 = 0 ; 

}
    if(icmp_ln66_fu_287_p2 == 1){
ap_condition_pp1_exit_iter0_state7 = 1 ; 
}
if(!(icmp_ln66_fu_287_p2 == 1)){
ap_condition_pp1_exit_iter0_state7 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0)){
ap_idle_pp0 = 1 ; 
}
if(!(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0))){
ap_idle_pp0 = 0 ; 

}
    if(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0)){
ap_idle_pp1 = 1 ; 
}
if(!(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0))){
ap_idle_pp1 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 

}
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_0_reg_130 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           input_assign_reg_120 =  ( do_twos_complement( inputdata , 32 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_0_reg_130 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               input_assign_reg_120 =  ( do_twos_complement( inputdata , 32 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_pp0_stage0 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_pp1_stage0 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
   sext_ln321_fu_209_p1__temp = sext_ln321_fu_209_p1 ;
   IP_ce0__temp = IP_ce0 ;
   ap_clk__temp = ap_clk ;
   i_0_i_i_reg_164__temp = i_0_i_i_reg_164 ;
   zext_ln39_1_fu_247_p1__temp = zext_ln39_1_fu_247_p1 ;
   ap_ready__temp = ap_ready ;
   input_assign_reg_120__temp = input_assign_reg_120 ;
   grp_shiftingcidi_fu_187_ap_start__temp = grp_shiftingcidi_fu_187_ap_start ;
   icmp_ln66_fu_287_p2__temp = icmp_ln66_fu_287_p2 ;
   PC1_address0__temp = PC1_address0 ;
   lshr_ln70_fu_317_p2__temp = lshr_ln70_fu_317_p2 ;
   trunc_ln70_1_fu_327_p1__temp = trunc_ln70_1_fu_327_p1 ;
   ap_block_state9_pp1_stage0_iter2__temp = ap_block_state9_pp1_stage0_iter2 ;
   ap_block_pp0_stage0__temp = ap_block_pp0_stage0 ;
   sub_ln39_fu_242_p2__temp = sub_ln39_fu_242_p2 ;
   init_perm_res_0_i_reg_152_temp_50__temp = init_perm_res_0_i_reg_152_temp_50 ;
   icmp_ln66_reg_403_pp1_iter1_reg__temp = icmp_ln66_reg_403_pp1_iter1_reg ;
   init_perm_res_0_i_reg_152__temp = init_perm_res_0_i_reg_152 ;
   grp_shiftingcidi_fu_187_ap_start_reg__temp = grp_shiftingcidi_fu_187_ap_start_reg ;
   zext_ln70_2_fu_313_p1__temp = zext_ln70_2_fu_313_p1 ;
   ap_block_state5_pp0_stage0_iter2__temp = ap_block_state5_pp0_stage0_iter2 ;
   i_1_reg_364__temp = i_1_reg_364 ;
   icmp_ln35_fu_225_p2__temp = icmp_ln35_fu_225_p2 ;
   ap_block_pp0_stage0_subdone__temp = ap_block_pp0_stage0_subdone ;
   trunc_ln39_fu_257_p1__temp = trunc_ln39_fu_257_p1 ;
   ap_block_pp1_stage0_subdone__temp = ap_block_pp1_stage0_subdone ;
   lshr_ln39_fu_251_p2__temp = lshr_ln39_fu_251_p2 ;
   ap_enable_pp0__temp = ap_enable_pp0 ;
   trunc_ln74_reg_432__temp = trunc_ln74_reg_432 ;
   i_0_i_reg_141__temp = i_0_i_reg_141 ;
   ap_condition_pp1_exit_iter0_state7__temp = ap_condition_pp1_exit_iter0_state7 ;
   ap_block_pp1_stage0__temp = ap_block_pp1_stage0 ;
   ap_enable_reg_pp0_iter0__temp = ap_enable_reg_pp0_iter0 ;
   R1_fu_283_p1__temp = R1_fu_283_p1 ;
   IP_q0__temp = IP_q0 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_idle_pp0__temp = ap_idle_pp0 ;
   R1_reg_398__temp = R1_reg_398 ;
   grp_shiftingcidi_fu_187_ap_return__temp = grp_shiftingcidi_fu_187_ap_return ;
   icmp_ln66_reg_403__temp = icmp_ln66_reg_403 ;
   permuted_choice_1_0_s_reg_175__temp = permuted_choice_1_0_s_reg_175 ;
   permuted_choice_1_0_s_reg_175_temp_48__temp = permuted_choice_1_0_s_reg_175_temp_48 ;
   icmp_ln329_fu_213_p2__temp = icmp_ln329_fu_213_p2 ;
   ap_condition_pp0_exit_iter0_state3__temp = ap_condition_pp0_exit_iter0_state3 ;
   ap_block_state7_pp1_stage0_iter0__temp = ap_block_state7_pp1_stage0_iter0 ;
   init_perm_res_0_i_reg_152_temp_51__temp = init_perm_res_0_i_reg_152_temp_51 ;
   ap_enable_reg_pp0_iter1__temp = ap_enable_reg_pp0_iter1 ;
   icmp_ln35_reg_369_pp0_iter1_reg__temp = icmp_ln35_reg_369_pp0_iter1_reg ;
   ap_block_pp0_stage0_11001__temp = ap_block_pp0_stage0_11001 ;
   ap_return__temp = ap_return ;
   sub_ln70_fu_307_p2__temp = sub_ln70_fu_307_p2 ;
   trunc_ln74_fu_350_p1__temp = trunc_ln74_fu_350_p1 ;
   ap_start__temp = ap_start ;
   ap_block_pp1_stage0_11001__temp = ap_block_pp1_stage0_11001 ;
   ap_done__temp = ap_done ;
   ap_enable_reg_pp0_iter2__temp = ap_enable_reg_pp0_iter2 ;
   inputdata__temp = inputdata ;
   IP_load_reg_383__temp = IP_load_reg_383 ;
   ap_rst__temp = ap_rst ;
   init_perm_res_fu_265_p3__temp = init_perm_res_fu_265_p3 ;
   L1_reg_393__temp = L1_reg_393 ;
   ap_enable_reg_pp1_iter0__temp = ap_enable_reg_pp1_iter0 ;
   ap_block_state4_pp0_stage0_iter1__temp = ap_block_state4_pp0_stage0_iter1 ;
   i_2_fu_293_p2__temp = i_2_fu_293_p2 ;
   trunc_ln39_1_fu_261_p1__temp = trunc_ln39_1_fu_261_p1 ;
   PC1_load_reg_417__temp = PC1_load_reg_417 ;
   ap_enable_reg_pp1_iter1__temp = ap_enable_reg_pp1_iter1 ;
   C_assign_reg_427__temp = C_assign_reg_427 ;
   icmp_ln35_reg_369__temp = icmp_ln35_reg_369 ;
   i_fu_231_p2__temp = i_fu_231_p2 ;
   ap_enable_reg_pp1_iter2__temp = ap_enable_reg_pp1_iter2 ;
   ap_idle_pp1__temp = ap_idle_pp1 ;
   i_0_reg_130__temp = i_0_reg_130 ;
   grp_shiftingcidi_fu_187_ap_ready__temp = grp_shiftingcidi_fu_187_ap_ready ;
   grp_shiftingcidi_fu_187_ap_done__temp = grp_shiftingcidi_fu_187_ap_done ;
   ap_idle__temp = ap_idle ;
   IP_address0__temp = IP_address0 ;
   trunc_ln70_fu_323_p1__temp = trunc_ln70_fu_323_p1 ;
   permuted_choice_1_0_s_reg_175_temp_49__temp = permuted_choice_1_0_s_reg_175_temp_49 ;
   ap_block_state3_pp0_stage0_iter0__temp = ap_block_state3_pp0_stage0_iter0 ;
   PC1_q0__temp = PC1_q0 ;
   ap_block_state8_pp1_stage0_iter1__temp = ap_block_state8_pp1_stage0_iter1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln39_fu_237_p1__temp = zext_ln39_fu_237_p1 ;
   zext_ln70_1_fu_304_p1__temp = zext_ln70_1_fu_304_p1 ;
   ap_enable_pp1__temp = ap_enable_pp1 ;
   permuted_choice_1_fu_331_p3__temp = permuted_choice_1_fu_331_p3 ;
   i_1_fu_219_p2__temp = i_1_fu_219_p2 ;
   grp_shiftingcidi_fu_187_ap_idle__temp = grp_shiftingcidi_fu_187_ap_idle ;
   zext_ln70_fu_299_p1__temp = zext_ln70_fu_299_p1 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_141__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_164__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_enable_reg_pp0_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 =  ( ( 1 ^ ap_condition_pp0_exit_iter0_state3 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp0_stage0_subdone){
ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1 ; 
}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 =  ( ( 1 ^ ap_condition_pp1_exit_iter0_state7 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp1_stage0_subdone){
ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1 ; 
}

}
    if(ap_rst == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!(1 == ap_CS_fsm_state10)){
if(grp_shiftingcidi_fu_187_ap_ready == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}

}

}
    if(!((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))){
if(((icmp_ln35_reg_369_pp0_iter1_reg == 0) && (0 == ap_block_pp0_stage0_11001)) && (ap_enable_reg_pp0_iter2 == 1)){
init_perm_res_0_i_reg_152 =  (  ( (  ( (  ( ( init_perm_res_0_i_reg_152 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( IP_load_reg_383 , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}

}
    if(((icmp_ln66_reg_403_pp1_iter1_reg == 0) && (ap_enable_reg_pp1_iter2 == 1)) && (0 == ap_block_pp1_stage0_11001)){
permuted_choice_1_0_s_reg_175 =  (  ( (  ( (  ( ( permuted_choice_1_0_s_reg_175 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement(  ( PC1_load_reg_417 & 127 )  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}
    if(!(((0 == ap_block_pp0_stage0_11001) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))){
IP_ce0 = 0 ; 

}
    if(!(((ap_enable_reg_pp1_iter0 == 1) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))){
PC1_ce0 = 0 ; 

}
    if(icmp_ln35_fu_225_p2 == 1){
ap_condition_pp0_exit_iter0_state3 = 1 ; 
}
if(!(icmp_ln35_fu_225_p2 == 1)){
ap_condition_pp0_exit_iter0_state3 = 0 ; 

}
    if(icmp_ln66_fu_287_p2 == 1){
ap_condition_pp1_exit_iter0_state7 = 1 ; 
}
if(!(icmp_ln66_fu_287_p2 == 1)){
ap_condition_pp1_exit_iter0_state7 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0)){
ap_idle_pp0 = 1 ; 
}
if(!(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0))){
ap_idle_pp0 = 0 ; 

}
    if(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0)){
ap_idle_pp1 = 1 ; 
}
if(!(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0))){
ap_idle_pp1 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 

}
               icmp_ln329_fu_213_p2 =   ( i_0_reg_130__temp  == 16 ? 1 :  0 ) ;
       if((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
          ap_return =  ( input_assign_reg_120 & 18446744073709551615 ) ;
            }
       }
       if((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               icmp_ln329_fu_213_p2 =   ( i_0_reg_130__temp  == 16 ? 1 :  0 ) ;
   if(((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           ap_enable_reg_pp0_iter0 =  1;
       }
       if((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           ap_enable_reg_pp0_iter2 =  0;
       }
       if((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           i_0_i_reg_141 =  0;
       }
       if((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           init_perm_res_0_i_reg_152 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_1_reg_364 =   ( ( i_0_reg_130__temp  + 1 ) & 31 ) ;
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               ap_enable_reg_pp0_iter0 =  1;
       }
       if((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               ap_enable_reg_pp0_iter2 =  0;
       }
       if((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               i_0_i_reg_141 =  0;
       }
       if((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               init_perm_res_0_i_reg_152 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_1_reg_364 =   ( ( i_0_reg_130__temp  + 1 ) & 31 ) ;
       }
       goto ap_ST_fsm_pp0_stage0;
   }

   ap_ST_fsm_pp0_stage0:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_pp0_stage0 = 1;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_pp1_stage0 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
   sext_ln321_fu_209_p1__temp = sext_ln321_fu_209_p1 ;
   IP_ce0__temp = IP_ce0 ;
   ap_clk__temp = ap_clk ;
   i_0_i_i_reg_164__temp = i_0_i_i_reg_164 ;
   zext_ln39_1_fu_247_p1__temp = zext_ln39_1_fu_247_p1 ;
   ap_ready__temp = ap_ready ;
   input_assign_reg_120__temp = input_assign_reg_120 ;
   grp_shiftingcidi_fu_187_ap_start__temp = grp_shiftingcidi_fu_187_ap_start ;
   icmp_ln66_fu_287_p2__temp = icmp_ln66_fu_287_p2 ;
   PC1_address0__temp = PC1_address0 ;
   lshr_ln70_fu_317_p2__temp = lshr_ln70_fu_317_p2 ;
   trunc_ln70_1_fu_327_p1__temp = trunc_ln70_1_fu_327_p1 ;
   ap_block_state9_pp1_stage0_iter2__temp = ap_block_state9_pp1_stage0_iter2 ;
   ap_block_pp0_stage0__temp = ap_block_pp0_stage0 ;
   sub_ln39_fu_242_p2__temp = sub_ln39_fu_242_p2 ;
   init_perm_res_0_i_reg_152_temp_50__temp = init_perm_res_0_i_reg_152_temp_50 ;
   icmp_ln66_reg_403_pp1_iter1_reg__temp = icmp_ln66_reg_403_pp1_iter1_reg ;
   init_perm_res_0_i_reg_152__temp = init_perm_res_0_i_reg_152 ;
   grp_shiftingcidi_fu_187_ap_start_reg__temp = grp_shiftingcidi_fu_187_ap_start_reg ;
   zext_ln70_2_fu_313_p1__temp = zext_ln70_2_fu_313_p1 ;
   ap_block_state5_pp0_stage0_iter2__temp = ap_block_state5_pp0_stage0_iter2 ;
   i_1_reg_364__temp = i_1_reg_364 ;
   icmp_ln35_fu_225_p2__temp = icmp_ln35_fu_225_p2 ;
   ap_block_pp0_stage0_subdone__temp = ap_block_pp0_stage0_subdone ;
   trunc_ln39_fu_257_p1__temp = trunc_ln39_fu_257_p1 ;
   ap_block_pp1_stage0_subdone__temp = ap_block_pp1_stage0_subdone ;
   lshr_ln39_fu_251_p2__temp = lshr_ln39_fu_251_p2 ;
   ap_enable_pp0__temp = ap_enable_pp0 ;
   trunc_ln74_reg_432__temp = trunc_ln74_reg_432 ;
   i_0_i_reg_141__temp = i_0_i_reg_141 ;
   ap_condition_pp1_exit_iter0_state7__temp = ap_condition_pp1_exit_iter0_state7 ;
   ap_block_pp1_stage0__temp = ap_block_pp1_stage0 ;
   ap_enable_reg_pp0_iter0__temp = ap_enable_reg_pp0_iter0 ;
   R1_fu_283_p1__temp = R1_fu_283_p1 ;
   IP_q0__temp = IP_q0 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_idle_pp0__temp = ap_idle_pp0 ;
   R1_reg_398__temp = R1_reg_398 ;
   grp_shiftingcidi_fu_187_ap_return__temp = grp_shiftingcidi_fu_187_ap_return ;
   icmp_ln66_reg_403__temp = icmp_ln66_reg_403 ;
   permuted_choice_1_0_s_reg_175__temp = permuted_choice_1_0_s_reg_175 ;
   permuted_choice_1_0_s_reg_175_temp_48__temp = permuted_choice_1_0_s_reg_175_temp_48 ;
   icmp_ln329_fu_213_p2__temp = icmp_ln329_fu_213_p2 ;
   ap_condition_pp0_exit_iter0_state3__temp = ap_condition_pp0_exit_iter0_state3 ;
   ap_block_state7_pp1_stage0_iter0__temp = ap_block_state7_pp1_stage0_iter0 ;
   init_perm_res_0_i_reg_152_temp_51__temp = init_perm_res_0_i_reg_152_temp_51 ;
   ap_enable_reg_pp0_iter1__temp = ap_enable_reg_pp0_iter1 ;
   icmp_ln35_reg_369_pp0_iter1_reg__temp = icmp_ln35_reg_369_pp0_iter1_reg ;
   ap_block_pp0_stage0_11001__temp = ap_block_pp0_stage0_11001 ;
   ap_return__temp = ap_return ;
   sub_ln70_fu_307_p2__temp = sub_ln70_fu_307_p2 ;
   trunc_ln74_fu_350_p1__temp = trunc_ln74_fu_350_p1 ;
   ap_start__temp = ap_start ;
   ap_block_pp1_stage0_11001__temp = ap_block_pp1_stage0_11001 ;
   ap_done__temp = ap_done ;
   ap_enable_reg_pp0_iter2__temp = ap_enable_reg_pp0_iter2 ;
   inputdata__temp = inputdata ;
   IP_load_reg_383__temp = IP_load_reg_383 ;
   ap_rst__temp = ap_rst ;
   init_perm_res_fu_265_p3__temp = init_perm_res_fu_265_p3 ;
   L1_reg_393__temp = L1_reg_393 ;
   ap_enable_reg_pp1_iter0__temp = ap_enable_reg_pp1_iter0 ;
   ap_block_state4_pp0_stage0_iter1__temp = ap_block_state4_pp0_stage0_iter1 ;
   i_2_fu_293_p2__temp = i_2_fu_293_p2 ;
   trunc_ln39_1_fu_261_p1__temp = trunc_ln39_1_fu_261_p1 ;
   PC1_load_reg_417__temp = PC1_load_reg_417 ;
   ap_enable_reg_pp1_iter1__temp = ap_enable_reg_pp1_iter1 ;
   C_assign_reg_427__temp = C_assign_reg_427 ;
   icmp_ln35_reg_369__temp = icmp_ln35_reg_369 ;
   i_fu_231_p2__temp = i_fu_231_p2 ;
   ap_enable_reg_pp1_iter2__temp = ap_enable_reg_pp1_iter2 ;
   ap_idle_pp1__temp = ap_idle_pp1 ;
   i_0_reg_130__temp = i_0_reg_130 ;
   grp_shiftingcidi_fu_187_ap_ready__temp = grp_shiftingcidi_fu_187_ap_ready ;
   grp_shiftingcidi_fu_187_ap_done__temp = grp_shiftingcidi_fu_187_ap_done ;
   ap_idle__temp = ap_idle ;
   IP_address0__temp = IP_address0 ;
   trunc_ln70_fu_323_p1__temp = trunc_ln70_fu_323_p1 ;
   permuted_choice_1_0_s_reg_175_temp_49__temp = permuted_choice_1_0_s_reg_175_temp_49 ;
   ap_block_state3_pp0_stage0_iter0__temp = ap_block_state3_pp0_stage0_iter0 ;
   PC1_q0__temp = PC1_q0 ;
   ap_block_state8_pp1_stage0_iter1__temp = ap_block_state8_pp1_stage0_iter1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln39_fu_237_p1__temp = zext_ln39_fu_237_p1 ;
   zext_ln70_1_fu_304_p1__temp = zext_ln70_1_fu_304_p1 ;
   ap_enable_pp1__temp = ap_enable_pp1 ;
   permuted_choice_1_fu_331_p3__temp = permuted_choice_1_fu_331_p3 ;
   i_1_fu_219_p2__temp = i_1_fu_219_p2 ;
   grp_shiftingcidi_fu_187_ap_idle__temp = grp_shiftingcidi_fu_187_ap_idle ;
   zext_ln70_fu_299_p1__temp = zext_ln70_fu_299_p1 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_141__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_164__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       icmp_ln35_fu_225_p2 =   ( i_0_i_reg_141__temp  == 64 ? 1 :  0 ) ;
       icmp_ln35_reg_369 =  icmp_ln35_reg_369__temp ;
       icmp_ln329_fu_213_p2 =   ( i_0_reg_130__temp  == 16 ? 1 :  0 ) ;
    if(ap_rst == 1){
ap_enable_reg_pp0_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter1 = 0 ; 
}
if(ap_rst == 1){
ap_enable_reg_pp0_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp0_stage0_subdone){
ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1 ; 
}

}

 if(icmp_ln35_fu_225_p2 == 1){
ap_condition_pp0_exit_iter0_state3 = 1 ; 
}
if(!(icmp_ln35_fu_225_p2 == 1)){
ap_condition_pp0_exit_iter0_state3 = 0 ; 

}

if(!(ap_rst == 1)){
if((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 =  ( ( 1 ^ ap_condition_pp0_exit_iter0_state3 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0 ; 
}

}

}
    
    if(ap_rst == 1){
ap_enable_reg_pp1_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 =  ( ( 1 ^ ap_condition_pp1_exit_iter0_state7 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp1_stage0_subdone){
ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1 ; 
}

}
    if(ap_rst == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!(1 == ap_CS_fsm_state10)){
if(grp_shiftingcidi_fu_187_ap_ready == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}

}

}
    if(!((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))){
if(((icmp_ln35_reg_369_pp0_iter1_reg == 0) && (0 == ap_block_pp0_stage0_11001)) && (ap_enable_reg_pp0_iter2 == 1)){
init_perm_res_0_i_reg_152 =  (  ( (  ( (  ( ( init_perm_res_0_i_reg_152 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( IP_load_reg_383 , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}

}
    if(((icmp_ln66_reg_403_pp1_iter1_reg == 0) && (ap_enable_reg_pp1_iter2 == 1)) && (0 == ap_block_pp1_stage0_11001)){
permuted_choice_1_0_s_reg_175 =  (  ( (  ( (  ( ( permuted_choice_1_0_s_reg_175 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement(  ( PC1_load_reg_417 & 127 )  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}
    if(!(((0 == ap_block_pp0_stage0_11001) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))){
IP_ce0 = 0 ; 

}
    if(!(((ap_enable_reg_pp1_iter0 == 1) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))){
PC1_ce0 = 0 ; 

}
   
    if(icmp_ln66_fu_287_p2 == 1){
ap_condition_pp1_exit_iter0_state7 = 1 ; 
}
if(!(icmp_ln66_fu_287_p2 == 1)){
ap_condition_pp1_exit_iter0_state7 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0)){
ap_idle_pp0 = 1 ; 
}
if(!(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0))){
ap_idle_pp0 = 0 ; 

}
    if(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0)){
ap_idle_pp1 = 1 ; 
}
if(!(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0))){
ap_idle_pp1 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 

}
               
       if(((0 == ap_block_pp0_stage0_11001) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))
       {
           IP_ce0 =  1;
       }
               icmp_ln35_fu_225_p2 =   ( i_0_i_reg_141__temp  == 64 ? 1 :  0 ) ;
               icmp_ln35_reg_369 =  icmp_ln35_reg_369__temp ;
               icmp_ln329_fu_213_p2 =   ( i_0_reg_130__temp  == 16 ? 1 :  0 ) ;
   if(((!((((icmp_ln35_fu_225_p2 == 1) && (ap_enable_reg_pp0_iter0 == 1)) && (ap_enable_reg_pp0_iter1 == 0)) && (0 == ap_block_pp0_stage0_subdone))) && (!(((ap_enable_reg_pp0_iter2 == 1) && (ap_enable_reg_pp0_iter1 == 0)) && (0 == ap_block_pp0_stage0_subdone)))) == 1){
       if(((1 == ap_CS_fsm_pp0_stage0) && (1 == ap_condition_pp0_exit_iter0_state3)) && (0 == ap_block_pp0_stage0_subdone))
       {
           ap_enable_reg_pp0_iter0 =  0;
       }
       if((((0 == ap_block_pp0_stage0_11001) && (icmp_ln35_fu_225_p2 == 0)) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))
       {
           i_0_i_reg_141 =   ( ( i_0_i_reg_141__temp  + 1 ) & 127 ) ;
       }
       
       if((0 == ap_block_pp0_stage0_11001) && (1 == ap_CS_fsm_pp0_stage0))
       {
           icmp_ln35_reg_369 =   ( i_0_i_reg_141__temp  == 64 ? 1 :  0 ) ;     
           icmp_ln35_reg_369_pp0_iter1_reg =  icmp_ln35_reg_369 ;
           
       }
       if(IP_ce0){
          IP_q0=IP_rom[IP_address0];
       }
       if(((0 == ap_block_pp0_stage0_11001) && (icmp_ln35_reg_369 == 0)) && (1 == ap_CS_fsm_pp0_stage0))
       {
           IP_load_reg_383 =  IP_q0 ;  
       }
       goto ap_ST_fsm_pp0_stage0;
   }
   if(((((ap_enable_reg_pp0_iter2 == 1) && (ap_enable_reg_pp0_iter1 == 0)) && (0 == ap_block_pp0_stage0_subdone)) || ((((icmp_ln35_fu_225_p2 == 1) && (ap_enable_reg_pp0_iter0 == 1)) && (ap_enable_reg_pp0_iter1 == 0)) && (0 == ap_block_pp0_stage0_subdone))) == 1){
       if(((1 == ap_CS_fsm_pp0_stage0) && (1 == ap_condition_pp0_exit_iter0_state3)) && (0 == ap_block_pp0_stage0_subdone))
       {
               ap_enable_reg_pp0_iter0 =  0;
       }
       if((((0 == ap_block_pp0_stage0_11001) && (icmp_ln35_fu_225_p2 == 0)) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))
       {
               i_0_i_reg_141 =   ( ( i_0_i_reg_141__temp  + 1 ) & 127 ) ;
       }
       if(((0 == ap_block_pp0_stage0_11001) && (icmp_ln35_reg_369 == 0)) && (1 == ap_CS_fsm_pp0_stage0))
       {
               IP_load_reg_383 =  IP_q0__temp ;
       }
       if((0 == ap_block_pp0_stage0_11001) && (1 == ap_CS_fsm_pp0_stage0))
       {
               icmp_ln35_reg_369_pp0_iter1_reg =  icmp_ln35_reg_369__temp ;
               icmp_ln35_reg_369 =   ( i_0_i_reg_141__temp  == 64 ? 1 :  0 ) ;
       }
       if(IP_ce0){
          IP_q0=IP_rom[IP_address0];
       }
       goto ap_ST_fsm_state6;
   }
       if(((1 == ap_CS_fsm_pp0_stage0) && (1 == ap_condition_pp0_exit_iter0_state3)) && (0 == ap_block_pp0_stage0_subdone))
       {
           ap_enable_reg_pp0_iter0 =  0;
       }
       if((((0 == ap_block_pp0_stage0_11001) && (icmp_ln35_fu_225_p2 == 0)) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))
       {
           i_0_i_reg_141 =   ( ( i_0_i_reg_141__temp  + 1 ) & 127 ) ;
       }
       if(((0 == ap_block_pp0_stage0_11001) && (icmp_ln35_reg_369 == 0)) && (1 == ap_CS_fsm_pp0_stage0))
       {
           IP_load_reg_383 =  IP_q0__temp ;
       }
       if((0 == ap_block_pp0_stage0_11001) && (1 == ap_CS_fsm_pp0_stage0))
       {
           icmp_ln35_reg_369_pp0_iter1_reg =  icmp_ln35_reg_369__temp ;
           icmp_ln35_reg_369 =   ( i_0_i_reg_141__temp  == 64 ? 1 :  0 ) ;
       }
       if(IP_ce0){
          IP_q0=IP_rom[IP_address0];
       }
       goto ap_ST_fsm_pp0_stage0;

   ap_ST_fsm_state6:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_pp0_stage0 = 0;
    ap_CS_fsm_state6 = 1;
    ap_CS_fsm_pp1_stage0 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
   sext_ln321_fu_209_p1__temp = sext_ln321_fu_209_p1 ;
   IP_ce0__temp = IP_ce0 ;
   ap_clk__temp = ap_clk ;
   i_0_i_i_reg_164__temp = i_0_i_i_reg_164 ;
   zext_ln39_1_fu_247_p1__temp = zext_ln39_1_fu_247_p1 ;
   ap_ready__temp = ap_ready ;
   input_assign_reg_120__temp = input_assign_reg_120 ;
   grp_shiftingcidi_fu_187_ap_start__temp = grp_shiftingcidi_fu_187_ap_start ;
   icmp_ln66_fu_287_p2__temp = icmp_ln66_fu_287_p2 ;
   PC1_address0__temp = PC1_address0 ;
   lshr_ln70_fu_317_p2__temp = lshr_ln70_fu_317_p2 ;
   trunc_ln70_1_fu_327_p1__temp = trunc_ln70_1_fu_327_p1 ;
   ap_block_state9_pp1_stage0_iter2__temp = ap_block_state9_pp1_stage0_iter2 ;
   ap_block_pp0_stage0__temp = ap_block_pp0_stage0 ;
   sub_ln39_fu_242_p2__temp = sub_ln39_fu_242_p2 ;
   init_perm_res_0_i_reg_152_temp_50__temp = init_perm_res_0_i_reg_152_temp_50 ;
   icmp_ln66_reg_403_pp1_iter1_reg__temp = icmp_ln66_reg_403_pp1_iter1_reg ;
   init_perm_res_0_i_reg_152__temp = init_perm_res_0_i_reg_152 ;
   grp_shiftingcidi_fu_187_ap_start_reg__temp = grp_shiftingcidi_fu_187_ap_start_reg ;
   zext_ln70_2_fu_313_p1__temp = zext_ln70_2_fu_313_p1 ;
   ap_block_state5_pp0_stage0_iter2__temp = ap_block_state5_pp0_stage0_iter2 ;
   i_1_reg_364__temp = i_1_reg_364 ;
   icmp_ln35_fu_225_p2__temp = icmp_ln35_fu_225_p2 ;
   ap_block_pp0_stage0_subdone__temp = ap_block_pp0_stage0_subdone ;
   trunc_ln39_fu_257_p1__temp = trunc_ln39_fu_257_p1 ;
   ap_block_pp1_stage0_subdone__temp = ap_block_pp1_stage0_subdone ;
   lshr_ln39_fu_251_p2__temp = lshr_ln39_fu_251_p2 ;
   ap_enable_pp0__temp = ap_enable_pp0 ;
   trunc_ln74_reg_432__temp = trunc_ln74_reg_432 ;
   i_0_i_reg_141__temp = i_0_i_reg_141 ;
   ap_condition_pp1_exit_iter0_state7__temp = ap_condition_pp1_exit_iter0_state7 ;
   ap_block_pp1_stage0__temp = ap_block_pp1_stage0 ;
   ap_enable_reg_pp0_iter0__temp = ap_enable_reg_pp0_iter0 ;
   R1_fu_283_p1__temp = R1_fu_283_p1 ;
   IP_q0__temp = IP_q0 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_idle_pp0__temp = ap_idle_pp0 ;
   R1_reg_398__temp = R1_reg_398 ;
   grp_shiftingcidi_fu_187_ap_return__temp = grp_shiftingcidi_fu_187_ap_return ;
   icmp_ln66_reg_403__temp = icmp_ln66_reg_403 ;
   permuted_choice_1_0_s_reg_175__temp = permuted_choice_1_0_s_reg_175 ;
   permuted_choice_1_0_s_reg_175_temp_48__temp = permuted_choice_1_0_s_reg_175_temp_48 ;
   icmp_ln329_fu_213_p2__temp = icmp_ln329_fu_213_p2 ;
   ap_condition_pp0_exit_iter0_state3__temp = ap_condition_pp0_exit_iter0_state3 ;
   ap_block_state7_pp1_stage0_iter0__temp = ap_block_state7_pp1_stage0_iter0 ;
   init_perm_res_0_i_reg_152_temp_51__temp = init_perm_res_0_i_reg_152_temp_51 ;
   ap_enable_reg_pp0_iter1__temp = ap_enable_reg_pp0_iter1 ;
   icmp_ln35_reg_369_pp0_iter1_reg__temp = icmp_ln35_reg_369_pp0_iter1_reg ;
   ap_block_pp0_stage0_11001__temp = ap_block_pp0_stage0_11001 ;
   ap_return__temp = ap_return ;
   sub_ln70_fu_307_p2__temp = sub_ln70_fu_307_p2 ;
   trunc_ln74_fu_350_p1__temp = trunc_ln74_fu_350_p1 ;
   ap_start__temp = ap_start ;
   ap_block_pp1_stage0_11001__temp = ap_block_pp1_stage0_11001 ;
   ap_done__temp = ap_done ;
   ap_enable_reg_pp0_iter2__temp = ap_enable_reg_pp0_iter2 ;
   inputdata__temp = inputdata ;
   IP_load_reg_383__temp = IP_load_reg_383 ;
   ap_rst__temp = ap_rst ;
   init_perm_res_fu_265_p3__temp = init_perm_res_fu_265_p3 ;
   L1_reg_393__temp = L1_reg_393 ;
   ap_enable_reg_pp1_iter0__temp = ap_enable_reg_pp1_iter0 ;
   ap_block_state4_pp0_stage0_iter1__temp = ap_block_state4_pp0_stage0_iter1 ;
   i_2_fu_293_p2__temp = i_2_fu_293_p2 ;
   trunc_ln39_1_fu_261_p1__temp = trunc_ln39_1_fu_261_p1 ;
   PC1_load_reg_417__temp = PC1_load_reg_417 ;
   ap_enable_reg_pp1_iter1__temp = ap_enable_reg_pp1_iter1 ;
   C_assign_reg_427__temp = C_assign_reg_427 ;
   icmp_ln35_reg_369__temp = icmp_ln35_reg_369 ;
   i_fu_231_p2__temp = i_fu_231_p2 ;
   ap_enable_reg_pp1_iter2__temp = ap_enable_reg_pp1_iter2 ;
   ap_idle_pp1__temp = ap_idle_pp1 ;
   i_0_reg_130__temp = i_0_reg_130 ;
   grp_shiftingcidi_fu_187_ap_ready__temp = grp_shiftingcidi_fu_187_ap_ready ;
   grp_shiftingcidi_fu_187_ap_done__temp = grp_shiftingcidi_fu_187_ap_done ;
   ap_idle__temp = ap_idle ;
   IP_address0__temp = IP_address0 ;
   trunc_ln70_fu_323_p1__temp = trunc_ln70_fu_323_p1 ;
   permuted_choice_1_0_s_reg_175_temp_49__temp = permuted_choice_1_0_s_reg_175_temp_49 ;
   ap_block_state3_pp0_stage0_iter0__temp = ap_block_state3_pp0_stage0_iter0 ;
   PC1_q0__temp = PC1_q0 ;
   ap_block_state8_pp1_stage0_iter1__temp = ap_block_state8_pp1_stage0_iter1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln39_fu_237_p1__temp = zext_ln39_fu_237_p1 ;
   zext_ln70_1_fu_304_p1__temp = zext_ln70_1_fu_304_p1 ;
   ap_enable_pp1__temp = ap_enable_pp1 ;
   permuted_choice_1_fu_331_p3__temp = permuted_choice_1_fu_331_p3 ;
   i_1_fu_219_p2__temp = i_1_fu_219_p2 ;
   grp_shiftingcidi_fu_187_ap_idle__temp = grp_shiftingcidi_fu_187_ap_idle ;
   zext_ln70_fu_299_p1__temp = zext_ln70_fu_299_p1 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_141__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_164__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_enable_reg_pp0_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 =  ( ( 1 ^ ap_condition_pp0_exit_iter0_state3 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp0_stage0_subdone){
ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1 ; 
}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 =  ( ( 1 ^ ap_condition_pp1_exit_iter0_state7 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp1_stage0_subdone){
ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1 ; 
}

}
    if(ap_rst == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!(1 == ap_CS_fsm_state10)){
if(grp_shiftingcidi_fu_187_ap_ready == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}

}

}
    if(!((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))){
if(((icmp_ln35_reg_369_pp0_iter1_reg == 0) && (0 == ap_block_pp0_stage0_11001)) && (ap_enable_reg_pp0_iter2 == 1)){
init_perm_res_0_i_reg_152 =  (  ( (  ( (  ( ( init_perm_res_0_i_reg_152 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( IP_load_reg_383 , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}

}
    if(((icmp_ln66_reg_403_pp1_iter1_reg == 0) && (ap_enable_reg_pp1_iter2 == 1)) && (0 == ap_block_pp1_stage0_11001)){
permuted_choice_1_0_s_reg_175 =  (  ( (  ( (  ( ( permuted_choice_1_0_s_reg_175 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement(  ( PC1_load_reg_417 & 127 )  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}
    if(!(((0 == ap_block_pp0_stage0_11001) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))){
IP_ce0 = 0 ; 

}
    if(!(((ap_enable_reg_pp1_iter0 == 1) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))){
PC1_ce0 = 0 ; 

}
    if(icmp_ln35_fu_225_p2 == 1){
ap_condition_pp0_exit_iter0_state3 = 1 ; 
}
if(!(icmp_ln35_fu_225_p2 == 1)){
ap_condition_pp0_exit_iter0_state3 = 0 ; 

}
    if(icmp_ln66_fu_287_p2 == 1){
ap_condition_pp1_exit_iter0_state7 = 1 ; 
}
if(!(icmp_ln66_fu_287_p2 == 1)){
ap_condition_pp1_exit_iter0_state7 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0)){
ap_idle_pp0 = 1 ; 
}
if(!(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0))){
ap_idle_pp0 = 0 ; 

}
    if(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0)){
ap_idle_pp1 = 1 ; 
}
if(!(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0))){
ap_idle_pp1 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 

}
               icmp_ln66_fu_287_p2 =   ( i_0_i_i_reg_164__temp  == 56 ? 1 :  0 ) ;
               icmp_ln66_reg_403_pp1_iter1_reg =  icmp_ln66_reg_403_pp1_iter1_reg__temp ;
               icmp_ln66_fu_287_p2 =   ( i_0_i_i_reg_164__temp  == 56 ? 1 :  0 ) ;
               icmp_ln66_reg_403_pp1_iter1_reg =  icmp_ln66_reg_403_pp1_iter1_reg__temp ;
       if(1 == ap_CS_fsm_state6)
       {
           ap_enable_reg_pp1_iter0 =  1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           ap_enable_reg_pp1_iter2 =  0;
       }
       if(1 == ap_CS_fsm_state6)
       {
           i_0_i_i_reg_164 =  0;
       }
       if(1 == ap_CS_fsm_state6)
       {
           permuted_choice_1_0_s_reg_175 =  0;
       }
       if(1 == ap_CS_fsm_state6)
       {
           R1_reg_398 =   ( ( init_perm_res_0_i_reg_152__temp  & 4294967295 ) & 4294967295 ) ;
           L1_reg_393 =   ( (  ( ( init_perm_res_0_i_reg_152__temp  >> 32 )  & 18446744073709551615 )  & 4294967295 ) & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_pp1_stage0;

   ap_ST_fsm_pp1_stage0:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_pp0_stage0 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_pp1_stage0 = 1;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
   sext_ln321_fu_209_p1__temp = sext_ln321_fu_209_p1 ;
   IP_ce0__temp = IP_ce0 ;
   ap_clk__temp = ap_clk ;
   i_0_i_i_reg_164__temp = i_0_i_i_reg_164 ;
   zext_ln39_1_fu_247_p1__temp = zext_ln39_1_fu_247_p1 ;
   ap_ready__temp = ap_ready ;
   input_assign_reg_120__temp = input_assign_reg_120 ;
   grp_shiftingcidi_fu_187_ap_start__temp = grp_shiftingcidi_fu_187_ap_start ;
   icmp_ln66_fu_287_p2__temp = icmp_ln66_fu_287_p2 ;
   PC1_address0__temp = PC1_address0 ;
   lshr_ln70_fu_317_p2__temp = lshr_ln70_fu_317_p2 ;
   trunc_ln70_1_fu_327_p1__temp = trunc_ln70_1_fu_327_p1 ;
   ap_block_state9_pp1_stage0_iter2__temp = ap_block_state9_pp1_stage0_iter2 ;
   ap_block_pp0_stage0__temp = ap_block_pp0_stage0 ;
   sub_ln39_fu_242_p2__temp = sub_ln39_fu_242_p2 ;
   init_perm_res_0_i_reg_152_temp_50__temp = init_perm_res_0_i_reg_152_temp_50 ;
   icmp_ln66_reg_403_pp1_iter1_reg__temp = icmp_ln66_reg_403_pp1_iter1_reg ;
   init_perm_res_0_i_reg_152__temp = init_perm_res_0_i_reg_152 ;
   grp_shiftingcidi_fu_187_ap_start_reg__temp = grp_shiftingcidi_fu_187_ap_start_reg ;
   zext_ln70_2_fu_313_p1__temp = zext_ln70_2_fu_313_p1 ;
   ap_block_state5_pp0_stage0_iter2__temp = ap_block_state5_pp0_stage0_iter2 ;
   i_1_reg_364__temp = i_1_reg_364 ;
   icmp_ln35_fu_225_p2__temp = icmp_ln35_fu_225_p2 ;
   ap_block_pp0_stage0_subdone__temp = ap_block_pp0_stage0_subdone ;
   trunc_ln39_fu_257_p1__temp = trunc_ln39_fu_257_p1 ;
   ap_block_pp1_stage0_subdone__temp = ap_block_pp1_stage0_subdone ;
   lshr_ln39_fu_251_p2__temp = lshr_ln39_fu_251_p2 ;
   ap_enable_pp0__temp = ap_enable_pp0 ;
   trunc_ln74_reg_432__temp = trunc_ln74_reg_432 ;
   i_0_i_reg_141__temp = i_0_i_reg_141 ;
   ap_condition_pp1_exit_iter0_state7__temp = ap_condition_pp1_exit_iter0_state7 ;
   ap_block_pp1_stage0__temp = ap_block_pp1_stage0 ;
   ap_enable_reg_pp0_iter0__temp = ap_enable_reg_pp0_iter0 ;
   R1_fu_283_p1__temp = R1_fu_283_p1 ;
   IP_q0__temp = IP_q0 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_idle_pp0__temp = ap_idle_pp0 ;
   R1_reg_398__temp = R1_reg_398 ;
   grp_shiftingcidi_fu_187_ap_return__temp = grp_shiftingcidi_fu_187_ap_return ;
   icmp_ln66_reg_403__temp = icmp_ln66_reg_403 ;
   permuted_choice_1_0_s_reg_175__temp = permuted_choice_1_0_s_reg_175 ;
   permuted_choice_1_0_s_reg_175_temp_48__temp = permuted_choice_1_0_s_reg_175_temp_48 ;
   icmp_ln329_fu_213_p2__temp = icmp_ln329_fu_213_p2 ;
   ap_condition_pp0_exit_iter0_state3__temp = ap_condition_pp0_exit_iter0_state3 ;
   ap_block_state7_pp1_stage0_iter0__temp = ap_block_state7_pp1_stage0_iter0 ;
   init_perm_res_0_i_reg_152_temp_51__temp = init_perm_res_0_i_reg_152_temp_51 ;
   ap_enable_reg_pp0_iter1__temp = ap_enable_reg_pp0_iter1 ;
   icmp_ln35_reg_369_pp0_iter1_reg__temp = icmp_ln35_reg_369_pp0_iter1_reg ;
   ap_block_pp0_stage0_11001__temp = ap_block_pp0_stage0_11001 ;
   ap_return__temp = ap_return ;
   sub_ln70_fu_307_p2__temp = sub_ln70_fu_307_p2 ;
   trunc_ln74_fu_350_p1__temp = trunc_ln74_fu_350_p1 ;
   ap_start__temp = ap_start ;
   ap_block_pp1_stage0_11001__temp = ap_block_pp1_stage0_11001 ;
   ap_done__temp = ap_done ;
   ap_enable_reg_pp0_iter2__temp = ap_enable_reg_pp0_iter2 ;
   inputdata__temp = inputdata ;
   IP_load_reg_383__temp = IP_load_reg_383 ;
   ap_rst__temp = ap_rst ;
   init_perm_res_fu_265_p3__temp = init_perm_res_fu_265_p3 ;
   L1_reg_393__temp = L1_reg_393 ;
   ap_enable_reg_pp1_iter0__temp = ap_enable_reg_pp1_iter0 ;
   ap_block_state4_pp0_stage0_iter1__temp = ap_block_state4_pp0_stage0_iter1 ;
   i_2_fu_293_p2__temp = i_2_fu_293_p2 ;
   trunc_ln39_1_fu_261_p1__temp = trunc_ln39_1_fu_261_p1 ;
   PC1_load_reg_417__temp = PC1_load_reg_417 ;
   ap_enable_reg_pp1_iter1__temp = ap_enable_reg_pp1_iter1 ;
   C_assign_reg_427__temp = C_assign_reg_427 ;
   icmp_ln35_reg_369__temp = icmp_ln35_reg_369 ;
   i_fu_231_p2__temp = i_fu_231_p2 ;
   ap_enable_reg_pp1_iter2__temp = ap_enable_reg_pp1_iter2 ;
   ap_idle_pp1__temp = ap_idle_pp1 ;
   i_0_reg_130__temp = i_0_reg_130 ;
   grp_shiftingcidi_fu_187_ap_ready__temp = grp_shiftingcidi_fu_187_ap_ready ;
   grp_shiftingcidi_fu_187_ap_done__temp = grp_shiftingcidi_fu_187_ap_done ;
   ap_idle__temp = ap_idle ;
   IP_address0__temp = IP_address0 ;
   trunc_ln70_fu_323_p1__temp = trunc_ln70_fu_323_p1 ;
   permuted_choice_1_0_s_reg_175_temp_49__temp = permuted_choice_1_0_s_reg_175_temp_49 ;
   ap_block_state3_pp0_stage0_iter0__temp = ap_block_state3_pp0_stage0_iter0 ;
   PC1_q0__temp = PC1_q0 ;
   ap_block_state8_pp1_stage0_iter1__temp = ap_block_state8_pp1_stage0_iter1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln39_fu_237_p1__temp = zext_ln39_fu_237_p1 ;
   zext_ln70_1_fu_304_p1__temp = zext_ln70_1_fu_304_p1 ;
   ap_enable_pp1__temp = ap_enable_pp1 ;
   permuted_choice_1_fu_331_p3__temp = permuted_choice_1_fu_331_p3 ;
   i_1_fu_219_p2__temp = i_1_fu_219_p2 ;
   grp_shiftingcidi_fu_187_ap_idle__temp = grp_shiftingcidi_fu_187_ap_idle ;
   zext_ln70_fu_299_p1__temp = zext_ln70_fu_299_p1 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_141__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_164__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       icmp_ln66_fu_287_p2 =   ( i_0_i_i_reg_164__temp  == 56 ? 1 :  0 ) ;             
       icmp_ln66_reg_403 =  icmp_ln66_reg_403__temp ;   
    if(ap_rst == 1){
ap_enable_reg_pp0_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 =  ( ( 1 ^ ap_condition_pp0_exit_iter0_state3 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp0_stage0_subdone){
ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1 ; 
}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter1 = 0 ; 
}
if(icmp_ln66_fu_287_p2 == 1){
ap_condition_pp1_exit_iter0_state7 = 1 ;       
}
if(!(icmp_ln66_fu_287_p2 == 1)){
ap_condition_pp1_exit_iter0_state7 = 0 ;       

}
if(ap_rst == 1){
ap_enable_reg_pp1_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp1_stage0_subdone){
ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1 ;    
}

}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 =  ( ( 1 ^ ap_condition_pp1_exit_iter0_state7 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0 ; 
}

}

}
    
    if(ap_rst == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!(1 == ap_CS_fsm_state10)){
if(grp_shiftingcidi_fu_187_ap_ready == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}

}

}
    if(!((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))){
if(((icmp_ln35_reg_369_pp0_iter1_reg == 0) && (0 == ap_block_pp0_stage0_11001)) && (ap_enable_reg_pp0_iter2 == 1)){
init_perm_res_0_i_reg_152 =  (  ( (  ( (  ( ( init_perm_res_0_i_reg_152 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( IP_load_reg_383 , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}

}
    if(((icmp_ln66_reg_403_pp1_iter1_reg == 0) && (ap_enable_reg_pp1_iter2 == 1)) && (0 == ap_block_pp1_stage0_11001)){
permuted_choice_1_0_s_reg_175 =  (  ( (  ( (  ( ( permuted_choice_1_0_s_reg_175 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 8 )  - do_twos_complement(  ( PC1_load_reg_417 & 127 )  , 8 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}
    if(!(((0 == ap_block_pp0_stage0_11001) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))){
IP_ce0 = 0 ; 

}
    if(!(((ap_enable_reg_pp1_iter0 == 1) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))){
PC1_ce0 = 0 ; 

}
    if(icmp_ln35_fu_225_p2 == 1){
ap_condition_pp0_exit_iter0_state3 = 1 ; 
}
if(!(icmp_ln35_fu_225_p2 == 1)){
ap_condition_pp0_exit_iter0_state3 = 0 ; 

}
    
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0)){
ap_idle_pp0 = 1 ; 
}
if(!(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0))){
ap_idle_pp0 = 0 ; 

}
    if(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0)){
ap_idle_pp1 = 1 ; 
}
if(!(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0))){
ap_idle_pp1 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 

}
               
       if(((ap_enable_reg_pp1_iter0 == 1) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))
       {
           PC1_ce0 =  1;
       }
               icmp_ln66_fu_287_p2 =   ( i_0_i_i_reg_164__temp  == 56 ? 1 :  0 ) ;
               icmp_ln66_reg_403 =  icmp_ln66_reg_403__temp ;
   if(((!((((ap_enable_reg_pp1_iter0 == 1) && (ap_enable_reg_pp1_iter1 == 0)) && (0 == ap_block_pp1_stage0_subdone)) && (icmp_ln66_fu_287_p2 == 1))) && (!(((ap_enable_reg_pp1_iter2 == 1) && (ap_enable_reg_pp1_iter1 == 0)) && (0 == ap_block_pp1_stage0_subdone)))) == 1){
       if(((1 == ap_condition_pp1_exit_iter0_state7) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_subdone))
       {
           ap_enable_reg_pp1_iter0 =  0;
       }
       if((((icmp_ln66_fu_287_p2 == 0) && (ap_enable_reg_pp1_iter0 == 1)) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))
       {
           i_0_i_i_reg_164 =   ( ( i_0_i_i_reg_164__temp  + 1 ) & 63 ) ;
       }
       
       if((1 == ap_CS_fsm_pp1_stage0) && (0 == ap_block_pp1_stage0_11001))
       {
           icmp_ln66_reg_403 =   ( i_0_i_i_reg_164__temp  == 56 ? 1 :  0 ) ;   
           icmp_ln66_reg_403_pp1_iter1_reg =  icmp_ln66_reg_403 ;
           
       }
       if(PC1_ce0){
          PC1_q0=PC1_rom[PC1_address0];
       }
       if(((icmp_ln66_reg_403 == 0) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))
       {
           PC1_load_reg_417 =  PC1_q0 ;      
       }
       goto ap_ST_fsm_pp1_stage0;
   }
   if(((((ap_enable_reg_pp1_iter2 == 1) && (ap_enable_reg_pp1_iter1 == 0)) && (0 == ap_block_pp1_stage0_subdone)) || ((((ap_enable_reg_pp1_iter0 == 1) && (ap_enable_reg_pp1_iter1 == 0)) && (0 == ap_block_pp1_stage0_subdone)) && (icmp_ln66_fu_287_p2 == 1))) == 1){
       if(((1 == ap_condition_pp1_exit_iter0_state7) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_subdone))
       {
               ap_enable_reg_pp1_iter0 =  0;
       }
       if((((icmp_ln66_fu_287_p2 == 0) && (ap_enable_reg_pp1_iter0 == 1)) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))
       {
               i_0_i_i_reg_164 =   ( ( i_0_i_i_reg_164__temp  + 1 ) & 63 ) ;
       }
       if(((icmp_ln66_reg_403 == 0) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))
       {
               PC1_load_reg_417 =  PC1_q0__temp ;
       }
       if((1 == ap_CS_fsm_pp1_stage0) && (0 == ap_block_pp1_stage0_11001))
       {
               icmp_ln66_reg_403_pp1_iter1_reg =  icmp_ln66_reg_403__temp ;
               icmp_ln66_reg_403 =   ( i_0_i_i_reg_164__temp  == 56 ? 1 :  0 ) ;
       }
       if(PC1_ce0){
          PC1_q0=PC1_rom[PC1_address0];
       }
       goto ap_ST_fsm_state10;
   }
       if(((1 == ap_condition_pp1_exit_iter0_state7) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_subdone))
       {
           ap_enable_reg_pp1_iter0 =  0;
       }
       if((((icmp_ln66_fu_287_p2 == 0) && (ap_enable_reg_pp1_iter0 == 1)) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))
       {
           i_0_i_i_reg_164 =   ( ( i_0_i_i_reg_164__temp  + 1 ) & 63 ) ;
       }
       if(((icmp_ln66_reg_403 == 0) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))
       {
           PC1_load_reg_417 =  PC1_q0__temp ;
       }
       if((1 == ap_CS_fsm_pp1_stage0) && (0 == ap_block_pp1_stage0_11001))
       {
           icmp_ln66_reg_403_pp1_iter1_reg =  icmp_ln66_reg_403__temp ;
           icmp_ln66_reg_403 =   ( i_0_i_i_reg_164__temp  == 56 ? 1 :  0 ) ;
       }
       if(PC1_ce0){
          PC1_q0=PC1_rom[PC1_address0];
       }
       goto ap_ST_fsm_pp1_stage0;

   ap_ST_fsm_state10:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_pp0_stage0 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_pp1_stage0 = 0;
    ap_CS_fsm_state10 = 1;
    ap_CS_fsm_state11 = 0;
   sext_ln321_fu_209_p1__temp = sext_ln321_fu_209_p1 ;
   IP_ce0__temp = IP_ce0 ;
   ap_clk__temp = ap_clk ;
   i_0_i_i_reg_164__temp = i_0_i_i_reg_164 ;
   zext_ln39_1_fu_247_p1__temp = zext_ln39_1_fu_247_p1 ;
   ap_ready__temp = ap_ready ;
   input_assign_reg_120__temp = input_assign_reg_120 ;
   grp_shiftingcidi_fu_187_ap_start__temp = grp_shiftingcidi_fu_187_ap_start ;
   icmp_ln66_fu_287_p2__temp = icmp_ln66_fu_287_p2 ;
   PC1_address0__temp = PC1_address0 ;
   lshr_ln70_fu_317_p2__temp = lshr_ln70_fu_317_p2 ;
   trunc_ln70_1_fu_327_p1__temp = trunc_ln70_1_fu_327_p1 ;
   ap_block_state9_pp1_stage0_iter2__temp = ap_block_state9_pp1_stage0_iter2 ;
   ap_block_pp0_stage0__temp = ap_block_pp0_stage0 ;
   sub_ln39_fu_242_p2__temp = sub_ln39_fu_242_p2 ;
   init_perm_res_0_i_reg_152_temp_50__temp = init_perm_res_0_i_reg_152_temp_50 ;
   icmp_ln66_reg_403_pp1_iter1_reg__temp = icmp_ln66_reg_403_pp1_iter1_reg ;
   init_perm_res_0_i_reg_152__temp = init_perm_res_0_i_reg_152 ;
   grp_shiftingcidi_fu_187_ap_start_reg__temp = grp_shiftingcidi_fu_187_ap_start_reg ;
   zext_ln70_2_fu_313_p1__temp = zext_ln70_2_fu_313_p1 ;
   ap_block_state5_pp0_stage0_iter2__temp = ap_block_state5_pp0_stage0_iter2 ;
   i_1_reg_364__temp = i_1_reg_364 ;
   icmp_ln35_fu_225_p2__temp = icmp_ln35_fu_225_p2 ;
   ap_block_pp0_stage0_subdone__temp = ap_block_pp0_stage0_subdone ;
   trunc_ln39_fu_257_p1__temp = trunc_ln39_fu_257_p1 ;
   ap_block_pp1_stage0_subdone__temp = ap_block_pp1_stage0_subdone ;
   lshr_ln39_fu_251_p2__temp = lshr_ln39_fu_251_p2 ;
   ap_enable_pp0__temp = ap_enable_pp0 ;
   trunc_ln74_reg_432__temp = trunc_ln74_reg_432 ;
   i_0_i_reg_141__temp = i_0_i_reg_141 ;
   ap_condition_pp1_exit_iter0_state7__temp = ap_condition_pp1_exit_iter0_state7 ;
   ap_block_pp1_stage0__temp = ap_block_pp1_stage0 ;
   ap_enable_reg_pp0_iter0__temp = ap_enable_reg_pp0_iter0 ;
   R1_fu_283_p1__temp = R1_fu_283_p1 ;
   IP_q0__temp = IP_q0 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_idle_pp0__temp = ap_idle_pp0 ;
   R1_reg_398__temp = R1_reg_398 ;
   grp_shiftingcidi_fu_187_ap_return__temp = grp_shiftingcidi_fu_187_ap_return ;
   icmp_ln66_reg_403__temp = icmp_ln66_reg_403 ;
   permuted_choice_1_0_s_reg_175__temp = permuted_choice_1_0_s_reg_175 ;
   permuted_choice_1_0_s_reg_175_temp_48__temp = permuted_choice_1_0_s_reg_175_temp_48 ;
   icmp_ln329_fu_213_p2__temp = icmp_ln329_fu_213_p2 ;
   ap_condition_pp0_exit_iter0_state3__temp = ap_condition_pp0_exit_iter0_state3 ;
   ap_block_state7_pp1_stage0_iter0__temp = ap_block_state7_pp1_stage0_iter0 ;
   init_perm_res_0_i_reg_152_temp_51__temp = init_perm_res_0_i_reg_152_temp_51 ;
   ap_enable_reg_pp0_iter1__temp = ap_enable_reg_pp0_iter1 ;
   icmp_ln35_reg_369_pp0_iter1_reg__temp = icmp_ln35_reg_369_pp0_iter1_reg ;
   ap_block_pp0_stage0_11001__temp = ap_block_pp0_stage0_11001 ;
   ap_return__temp = ap_return ;
   sub_ln70_fu_307_p2__temp = sub_ln70_fu_307_p2 ;
   trunc_ln74_fu_350_p1__temp = trunc_ln74_fu_350_p1 ;
   ap_start__temp = ap_start ;
   ap_block_pp1_stage0_11001__temp = ap_block_pp1_stage0_11001 ;
   ap_done__temp = ap_done ;
   ap_enable_reg_pp0_iter2__temp = ap_enable_reg_pp0_iter2 ;
   inputdata__temp = inputdata ;
   IP_load_reg_383__temp = IP_load_reg_383 ;
   ap_rst__temp = ap_rst ;
   init_perm_res_fu_265_p3__temp = init_perm_res_fu_265_p3 ;
   L1_reg_393__temp = L1_reg_393 ;
   ap_enable_reg_pp1_iter0__temp = ap_enable_reg_pp1_iter0 ;
   ap_block_state4_pp0_stage0_iter1__temp = ap_block_state4_pp0_stage0_iter1 ;
   i_2_fu_293_p2__temp = i_2_fu_293_p2 ;
   trunc_ln39_1_fu_261_p1__temp = trunc_ln39_1_fu_261_p1 ;
   PC1_load_reg_417__temp = PC1_load_reg_417 ;
   ap_enable_reg_pp1_iter1__temp = ap_enable_reg_pp1_iter1 ;
   C_assign_reg_427__temp = C_assign_reg_427 ;
   icmp_ln35_reg_369__temp = icmp_ln35_reg_369 ;
   i_fu_231_p2__temp = i_fu_231_p2 ;
   ap_enable_reg_pp1_iter2__temp = ap_enable_reg_pp1_iter2 ;
   ap_idle_pp1__temp = ap_idle_pp1 ;
   i_0_reg_130__temp = i_0_reg_130 ;
   grp_shiftingcidi_fu_187_ap_ready__temp = grp_shiftingcidi_fu_187_ap_ready ;
   grp_shiftingcidi_fu_187_ap_done__temp = grp_shiftingcidi_fu_187_ap_done ;
   ap_idle__temp = ap_idle ;
   IP_address0__temp = IP_address0 ;
   trunc_ln70_fu_323_p1__temp = trunc_ln70_fu_323_p1 ;
   permuted_choice_1_0_s_reg_175_temp_49__temp = permuted_choice_1_0_s_reg_175_temp_49 ;
   ap_block_state3_pp0_stage0_iter0__temp = ap_block_state3_pp0_stage0_iter0 ;
   PC1_q0__temp = PC1_q0 ;
   ap_block_state8_pp1_stage0_iter1__temp = ap_block_state8_pp1_stage0_iter1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln39_fu_237_p1__temp = zext_ln39_fu_237_p1 ;
   zext_ln70_1_fu_304_p1__temp = zext_ln70_1_fu_304_p1 ;
   ap_enable_pp1__temp = ap_enable_pp1 ;
   permuted_choice_1_fu_331_p3__temp = permuted_choice_1_fu_331_p3 ;
   i_1_fu_219_p2__temp = i_1_fu_219_p2 ;
   grp_shiftingcidi_fu_187_ap_idle__temp = grp_shiftingcidi_fu_187_ap_idle ;
   zext_ln70_fu_299_p1__temp = zext_ln70_fu_299_p1 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_141__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_164__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_enable_reg_pp0_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 =  ( ( 1 ^ ap_condition_pp0_exit_iter0_state3 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp0_stage0_subdone){
ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1 ; 
}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 =  ( ( 1 ^ ap_condition_pp1_exit_iter0_state7 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp1_stage0_subdone){
ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1 ; 
}

}
    if(ap_rst == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!(1 == ap_CS_fsm_state10)){
if(grp_shiftingcidi_fu_187_ap_ready == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}

}

}
    if(!((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))){
if(((icmp_ln35_reg_369_pp0_iter1_reg == 0) && (0 == ap_block_pp0_stage0_11001)) && (ap_enable_reg_pp0_iter2 == 1)){
init_perm_res_0_i_reg_152 =  (  ( (  ( (  ( ( init_perm_res_0_i_reg_152 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( IP_load_reg_383 , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}

}
    if(((icmp_ln66_reg_403_pp1_iter1_reg == 0) && (ap_enable_reg_pp1_iter2 == 1)) && (0 == ap_block_pp1_stage0_11001)){
permuted_choice_1_0_s_reg_175 =  (  ( (  ( (  ( ( permuted_choice_1_0_s_reg_175 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement(  ( PC1_load_reg_417 & 127 )  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}
    if(!(((0 == ap_block_pp0_stage0_11001) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))){
IP_ce0 = 0 ; 

}
    if(!(((ap_enable_reg_pp1_iter0 == 1) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))){
PC1_ce0 = 0 ; 

}
    if(icmp_ln35_fu_225_p2 == 1){
ap_condition_pp0_exit_iter0_state3 = 1 ; 
}
if(!(icmp_ln35_fu_225_p2 == 1)){
ap_condition_pp0_exit_iter0_state3 = 0 ; 

}
    if(icmp_ln66_fu_287_p2 == 1){
ap_condition_pp1_exit_iter0_state7 = 1 ; 
}
if(!(icmp_ln66_fu_287_p2 == 1)){
ap_condition_pp1_exit_iter0_state7 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0)){
ap_idle_pp0 = 1 ; 
}
if(!(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0))){
ap_idle_pp0 = 0 ; 

}
    if(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0)){
ap_idle_pp1 = 1 ; 
}
if(!(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0))){
ap_idle_pp1 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 

}
       if(1 == ap_CS_fsm_state10)
       {
           grp_shiftingcidi_fu_187_ap_start_reg =  1;
       }
       if(1 == ap_CS_fsm_state10)
       {
           trunc_ln74_reg_432 =   ( ( permuted_choice_1_0_s_reg_175__temp  & 268435455 ) & 268435455 ) ;
           C_assign_reg_427 =   ( (  ( ( permuted_choice_1_0_s_reg_175__temp  >> 28 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 ) ;
       }
if (grp_shiftingcidi_fu_187_ap_start_reg==1){
grp_shiftingcidi_fu_187_ap_start=1;
shiftingcidi_clk = clock;
shiftingcidi(&C_assign_reg_427,&trunc_ln74_reg_432,&L1_reg_393,&R1_reg_398,&ap_clk,&grp_shiftingcidi_fu_187_ap_done,&grp_shiftingcidi_fu_187_ap_idle,&grp_shiftingcidi_fu_187_ap_ready,&grp_shiftingcidi_fu_187_ap_return,&ap_rst,&grp_shiftingcidi_fu_187_ap_start,&shiftingcidi_clk);
grp_shiftingcidi_fu_187_ap_done=1;
}
	   clock = shiftingcidi_clk;
       goto ap_ST_fsm_state11;

   ap_ST_fsm_state11:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_pp0_stage0 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_pp1_stage0 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 1;
   sext_ln321_fu_209_p1__temp = sext_ln321_fu_209_p1 ;
   IP_ce0__temp = IP_ce0 ;
   ap_clk__temp = ap_clk ;
   i_0_i_i_reg_164__temp = i_0_i_i_reg_164 ;
   zext_ln39_1_fu_247_p1__temp = zext_ln39_1_fu_247_p1 ;
   ap_ready__temp = ap_ready ;
   input_assign_reg_120__temp = input_assign_reg_120 ;
   grp_shiftingcidi_fu_187_ap_start__temp = grp_shiftingcidi_fu_187_ap_start ;
   icmp_ln66_fu_287_p2__temp = icmp_ln66_fu_287_p2 ;
   PC1_address0__temp = PC1_address0 ;
   lshr_ln70_fu_317_p2__temp = lshr_ln70_fu_317_p2 ;
   trunc_ln70_1_fu_327_p1__temp = trunc_ln70_1_fu_327_p1 ;
   ap_block_state9_pp1_stage0_iter2__temp = ap_block_state9_pp1_stage0_iter2 ;
   ap_block_pp0_stage0__temp = ap_block_pp0_stage0 ;
   sub_ln39_fu_242_p2__temp = sub_ln39_fu_242_p2 ;
   init_perm_res_0_i_reg_152_temp_50__temp = init_perm_res_0_i_reg_152_temp_50 ;
   icmp_ln66_reg_403_pp1_iter1_reg__temp = icmp_ln66_reg_403_pp1_iter1_reg ;
   init_perm_res_0_i_reg_152__temp = init_perm_res_0_i_reg_152 ;
   grp_shiftingcidi_fu_187_ap_start_reg__temp = grp_shiftingcidi_fu_187_ap_start_reg ;
   zext_ln70_2_fu_313_p1__temp = zext_ln70_2_fu_313_p1 ;
   ap_block_state5_pp0_stage0_iter2__temp = ap_block_state5_pp0_stage0_iter2 ;
   i_1_reg_364__temp = i_1_reg_364 ;
   icmp_ln35_fu_225_p2__temp = icmp_ln35_fu_225_p2 ;
   ap_block_pp0_stage0_subdone__temp = ap_block_pp0_stage0_subdone ;
   trunc_ln39_fu_257_p1__temp = trunc_ln39_fu_257_p1 ;
   ap_block_pp1_stage0_subdone__temp = ap_block_pp1_stage0_subdone ;
   lshr_ln39_fu_251_p2__temp = lshr_ln39_fu_251_p2 ;
   ap_enable_pp0__temp = ap_enable_pp0 ;
   trunc_ln74_reg_432__temp = trunc_ln74_reg_432 ;
   i_0_i_reg_141__temp = i_0_i_reg_141 ;
   ap_condition_pp1_exit_iter0_state7__temp = ap_condition_pp1_exit_iter0_state7 ;
   ap_block_pp1_stage0__temp = ap_block_pp1_stage0 ;
   ap_enable_reg_pp0_iter0__temp = ap_enable_reg_pp0_iter0 ;
   R1_fu_283_p1__temp = R1_fu_283_p1 ;
   IP_q0__temp = IP_q0 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_idle_pp0__temp = ap_idle_pp0 ;
   R1_reg_398__temp = R1_reg_398 ;
   grp_shiftingcidi_fu_187_ap_return__temp = grp_shiftingcidi_fu_187_ap_return ;
   icmp_ln66_reg_403__temp = icmp_ln66_reg_403 ;
   permuted_choice_1_0_s_reg_175__temp = permuted_choice_1_0_s_reg_175 ;
   permuted_choice_1_0_s_reg_175_temp_48__temp = permuted_choice_1_0_s_reg_175_temp_48 ;
   icmp_ln329_fu_213_p2__temp = icmp_ln329_fu_213_p2 ;
   ap_condition_pp0_exit_iter0_state3__temp = ap_condition_pp0_exit_iter0_state3 ;
   ap_block_state7_pp1_stage0_iter0__temp = ap_block_state7_pp1_stage0_iter0 ;
   init_perm_res_0_i_reg_152_temp_51__temp = init_perm_res_0_i_reg_152_temp_51 ;
   ap_enable_reg_pp0_iter1__temp = ap_enable_reg_pp0_iter1 ;
   icmp_ln35_reg_369_pp0_iter1_reg__temp = icmp_ln35_reg_369_pp0_iter1_reg ;
   ap_block_pp0_stage0_11001__temp = ap_block_pp0_stage0_11001 ;
   ap_return__temp = ap_return ;
   sub_ln70_fu_307_p2__temp = sub_ln70_fu_307_p2 ;
   trunc_ln74_fu_350_p1__temp = trunc_ln74_fu_350_p1 ;
   ap_start__temp = ap_start ;
   ap_block_pp1_stage0_11001__temp = ap_block_pp1_stage0_11001 ;
   ap_done__temp = ap_done ;
   ap_enable_reg_pp0_iter2__temp = ap_enable_reg_pp0_iter2 ;
   inputdata__temp = inputdata ;
   IP_load_reg_383__temp = IP_load_reg_383 ;
   ap_rst__temp = ap_rst ;
   init_perm_res_fu_265_p3__temp = init_perm_res_fu_265_p3 ;
   L1_reg_393__temp = L1_reg_393 ;
   ap_enable_reg_pp1_iter0__temp = ap_enable_reg_pp1_iter0 ;
   ap_block_state4_pp0_stage0_iter1__temp = ap_block_state4_pp0_stage0_iter1 ;
   i_2_fu_293_p2__temp = i_2_fu_293_p2 ;
   trunc_ln39_1_fu_261_p1__temp = trunc_ln39_1_fu_261_p1 ;
   PC1_load_reg_417__temp = PC1_load_reg_417 ;
   ap_enable_reg_pp1_iter1__temp = ap_enable_reg_pp1_iter1 ;
   C_assign_reg_427__temp = C_assign_reg_427 ;
   icmp_ln35_reg_369__temp = icmp_ln35_reg_369 ;
   i_fu_231_p2__temp = i_fu_231_p2 ;
   ap_enable_reg_pp1_iter2__temp = ap_enable_reg_pp1_iter2 ;
   ap_idle_pp1__temp = ap_idle_pp1 ;
   i_0_reg_130__temp = i_0_reg_130 ;
   grp_shiftingcidi_fu_187_ap_ready__temp = grp_shiftingcidi_fu_187_ap_ready ;
   grp_shiftingcidi_fu_187_ap_done__temp = grp_shiftingcidi_fu_187_ap_done ;
   ap_idle__temp = ap_idle ;
   IP_address0__temp = IP_address0 ;
   trunc_ln70_fu_323_p1__temp = trunc_ln70_fu_323_p1 ;
   permuted_choice_1_0_s_reg_175_temp_49__temp = permuted_choice_1_0_s_reg_175_temp_49 ;
   ap_block_state3_pp0_stage0_iter0__temp = ap_block_state3_pp0_stage0_iter0 ;
   PC1_q0__temp = PC1_q0 ;
   ap_block_state8_pp1_stage0_iter1__temp = ap_block_state8_pp1_stage0_iter1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zext_ln39_fu_237_p1__temp = zext_ln39_fu_237_p1 ;
   zext_ln70_1_fu_304_p1__temp = zext_ln70_1_fu_304_p1 ;
   ap_enable_pp1__temp = ap_enable_pp1 ;
   permuted_choice_1_fu_331_p3__temp = permuted_choice_1_fu_331_p3 ;
   i_1_fu_219_p2__temp = i_1_fu_219_p2 ;
   grp_shiftingcidi_fu_187_ap_idle__temp = grp_shiftingcidi_fu_187_ap_idle ;
   zext_ln70_fu_299_p1__temp = zext_ln70_fu_299_p1 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_141__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_164__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_enable_reg_pp0_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 =  ( ( 1 ^ ap_condition_pp0_exit_iter0_state3 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp0_exit_iter0_state3) && (0 == ap_block_pp0_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp0_stage0_subdone)){
ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp0_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp0_stage0_subdone){
ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1 ; 
}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter0 = 0 ; 
}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter1 = 0 ; 
}
if(!(ap_rst == 1)){
if((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 =  ( ( 1 ^ ap_condition_pp1_exit_iter0_state7 ) & 1 )  ; 
}
if(!((1 == ap_condition_pp1_exit_iter0_state7) && (0 == ap_block_pp1_stage0_subdone))){
if((1 == 1) && (0 == ap_block_pp1_stage0_subdone)){
ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0 ; 
}

}

}
    if(ap_rst == 1){
ap_enable_reg_pp1_iter2 = 0 ; 
}
if(!(ap_rst == 1)){
if(0 == ap_block_pp1_stage0_subdone){
ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1 ; 
}

}
    if(ap_rst == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!(1 == ap_CS_fsm_state10)){
if(grp_shiftingcidi_fu_187_ap_ready == 1){
grp_shiftingcidi_fu_187_ap_start_reg = 0 ; 
}

}

}
    if(!((icmp_ln329_fu_213_p2 == 0) && (1 == ap_CS_fsm_state2))){
if(((icmp_ln35_reg_369_pp0_iter1_reg == 0) && (0 == ap_block_pp0_stage0_11001)) && (ap_enable_reg_pp0_iter2 == 1)){
init_perm_res_0_i_reg_152 =  (  ( (  ( (  ( ( init_perm_res_0_i_reg_152 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( IP_load_reg_383 , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}

}
    if(((icmp_ln66_reg_403_pp1_iter1_reg == 0) && (ap_enable_reg_pp1_iter2 == 1)) && (0 == ap_block_pp1_stage0_11001)){
permuted_choice_1_0_s_reg_175 =  (  ( (  ( (  ( ( permuted_choice_1_0_s_reg_175 & 9223372036854775807 ) & 9223372036854775807 )  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_120 >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement(  ( PC1_load_reg_417 & 127 )  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 )  ; 
}
    if(!(((0 == ap_block_pp0_stage0_11001) && (ap_enable_reg_pp0_iter0 == 1)) && (1 == ap_CS_fsm_pp0_stage0))){
IP_ce0 = 0 ; 

}
    if(!(((ap_enable_reg_pp1_iter0 == 1) && (1 == ap_CS_fsm_pp1_stage0)) && (0 == ap_block_pp1_stage0_11001))){
PC1_ce0 = 0 ; 

}
    if(icmp_ln35_fu_225_p2 == 1){
ap_condition_pp0_exit_iter0_state3 = 1 ; 
}
if(!(icmp_ln35_fu_225_p2 == 1)){
ap_condition_pp0_exit_iter0_state3 = 0 ; 

}
    if(icmp_ln66_fu_287_p2 == 1){
ap_condition_pp1_exit_iter0_state7 = 1 ; 
}
if(!(icmp_ln66_fu_287_p2 == 1)){
ap_condition_pp1_exit_iter0_state7 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0)){
ap_idle_pp0 = 1 ; 
}
if(!(((ap_enable_reg_pp0_iter2 == 0) && (ap_enable_reg_pp0_iter0 == 0)) && (ap_enable_reg_pp0_iter1 == 0))){
ap_idle_pp0 = 0 ; 

}
    if(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0)){
ap_idle_pp1 = 1 ; 
}
if(!(((ap_enable_reg_pp1_iter1 == 0) && (ap_enable_reg_pp1_iter2 == 0)) && (ap_enable_reg_pp1_iter0 == 0))){
ap_idle_pp1 = 0 ; 

}
    if(!((icmp_ln329_fu_213_p2 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 

}
   if(((1 == ap_CS_fsm_state11) && (grp_shiftingcidi_fu_187_ap_done == 1)) == 1){
       if((1 == ap_CS_fsm_state11) && (grp_shiftingcidi_fu_187_ap_done == 1))
       {
           i_0_reg_130 =  i_1_reg_364__temp ;
       }
       if((1 == ap_CS_fsm_state11) && (grp_shiftingcidi_fu_187_ap_done == 1))
       {
           input_assign_reg_120 =  grp_shiftingcidi_fu_187_ap_return__temp ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state11) && (grp_shiftingcidi_fu_187_ap_done == 1)) == 0){
       if((1 == ap_CS_fsm_state11) && (grp_shiftingcidi_fu_187_ap_done == 1))
       {
               i_0_reg_130 =  i_1_reg_364__temp ;
       }
       if((1 == ap_CS_fsm_state11) && (grp_shiftingcidi_fu_187_ap_done == 1))
       {
               input_assign_reg_120 =  grp_shiftingcidi_fu_187_ap_return__temp ;
       }
       goto ap_ST_fsm_state11;
   }
   end:
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_return__1=ap_return;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *inputdata__1=inputdata;
    *dummy=clock;
       return;
}
