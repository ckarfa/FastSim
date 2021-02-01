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
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   long long int ap_CS_fsm_state7=0;
   long long int ap_CS_fsm_state8=0;
   long long int ap_CS_fsm_state9=0;
   long long int sext_ln321_fu_187_p1=0;
   long long int sext_ln321_fu_187_p1__temp=0;
   unsigned long long int C_assign_reg_400=0;
   unsigned long long int C_assign_reg_400__temp=0;
   unsigned long long int IP_address0=0;
   unsigned long long int IP_address0__temp=0;
   unsigned long long int IP_ce0=0;
   unsigned long long int IP_ce0__temp=0;
   unsigned long long int IP_load_reg_372=0;
   unsigned long long int IP_load_reg_372__temp=0;
   unsigned long long int IP_q0=0;
   unsigned long long int IP_q0__temp=0;
   unsigned long long int L1_reg_362=0;
   unsigned long long int L1_reg_362__temp=0;
   unsigned long long int PC1_address0=0;
   unsigned long long int PC1_address0__temp=0;
   unsigned long long int PC1_ce0=0;
   unsigned long long int PC1_ce0__temp=0;
   unsigned long long int PC1_load_reg_410=0;
   unsigned long long int PC1_load_reg_410__temp=0;
   unsigned long long int PC1_q0=0;
   unsigned long long int PC1_q0__temp=0;
   unsigned long long int R1_fu_234_p1=0;
   unsigned long long int R1_fu_234_p1__temp=0;
   unsigned long long int R1_reg_367=0;
   unsigned long long int R1_reg_367__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_return__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_done=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_done__temp=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_idle=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_idle__temp=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_ready=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_ready__temp=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_return=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_return__temp=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_start=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_start__temp=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_start_reg=0;
   unsigned long long int grp_shiftingcidi_fu_167_ap_start_reg__temp=0;
   unsigned long long int i_0_i_i_reg_145=0;
   unsigned long long int i_0_i_i_reg_145__temp=0;
   unsigned long long int i_0_i_reg_123=0;
   unsigned long long int i_0_i_reg_123__temp=0;
   unsigned long long int i_0_reg_112=0;
   unsigned long long int i_0_reg_112__temp=0;
   unsigned long long int i_1_fu_197_p2=0;
   unsigned long long int i_1_fu_197_p2__temp=0;
   unsigned long long int i_1_reg_339=0;
   unsigned long long int i_1_reg_339__temp=0;
   unsigned long long int i_2_fu_270_p2=0;
   unsigned long long int i_2_fu_270_p2__temp=0;
   unsigned long long int i_2_reg_385=0;
   unsigned long long int i_2_reg_385__temp=0;
   unsigned long long int i_fu_209_p2=0;
   unsigned long long int i_fu_209_p2__temp=0;
   unsigned long long int i_reg_347=0;
   unsigned long long int i_reg_347__temp=0;
   unsigned long long int icmp_ln329_fu_191_p2=0;
   unsigned long long int icmp_ln329_fu_191_p2__temp=0;
   unsigned long long int icmp_ln35_fu_203_p2=0;
   unsigned long long int icmp_ln35_fu_203_p2__temp=0;
   unsigned long long int icmp_ln66_fu_264_p2=0;
   unsigned long long int icmp_ln66_fu_264_p2__temp=0;
   unsigned long long int init_perm_res_0_i_reg_134=0;
   unsigned long long int init_perm_res_0_i_reg_134__temp=0;
   unsigned long long int init_perm_res_0_i_reg_134_temp_2=0;
   unsigned long long int init_perm_res_0_i_reg_134_temp_2__temp=0;
   unsigned long long int init_perm_res_0_i_reg_134_temp_3=0;
   unsigned long long int init_perm_res_0_i_reg_134_temp_3__temp=0;
   unsigned long long int init_perm_res_fu_257_p3=0;
   unsigned long long int init_perm_res_fu_257_p3__temp=0;
   unsigned long long int input_assign_reg_102=0;
   unsigned long long int input_assign_reg_102__temp=0;
   unsigned long long int inputdata__temp=0;
   unsigned long long int lshr_ln39_fu_247_p2=0;
   unsigned long long int lshr_ln39_fu_247_p2__temp=0;
   unsigned long long int lshr_ln70_fu_314_p2=0;
   unsigned long long int lshr_ln70_fu_314_p2__temp=0;
   unsigned long long int permuted_choice_1_0_s_reg_156=0;
   unsigned long long int permuted_choice_1_0_s_reg_156__temp=0;
   unsigned long long int permuted_choice_1_0_s_reg_156_temp_0=0;
   unsigned long long int permuted_choice_1_0_s_reg_156_temp_0__temp=0;
   unsigned long long int permuted_choice_1_0_s_reg_156_temp_1=0;
   unsigned long long int permuted_choice_1_0_s_reg_156_temp_1__temp=0;
   unsigned long long int permuted_choice_1_fu_324_p3=0;
   unsigned long long int permuted_choice_1_fu_324_p3__temp=0;
   unsigned long long int sub_ln39_fu_238_p2=0;
   unsigned long long int sub_ln39_fu_238_p2__temp=0;
   unsigned long long int sub_ln70_fu_304_p2=0;
   unsigned long long int sub_ln70_fu_304_p2__temp=0;
   unsigned long long int trunc_ln39_1_fu_220_p1=0;
   unsigned long long int trunc_ln39_1_fu_220_p1__temp=0;
   unsigned long long int trunc_ln39_1_reg_357=0;
   unsigned long long int trunc_ln39_1_reg_357__temp=0;
   unsigned long long int trunc_ln39_1_reg_357_temp_4=0;
   unsigned long long int trunc_ln39_1_reg_357_temp_4__temp=0;
   unsigned long long int trunc_ln39_1_reg_357_temp_5=0;
   unsigned long long int trunc_ln39_1_reg_357_temp_5__temp=0;
   unsigned long long int trunc_ln39_fu_253_p1=0;
   unsigned long long int trunc_ln39_fu_253_p1__temp=0;
   unsigned long long int trunc_ln70_1_fu_281_p1=0;
   unsigned long long int trunc_ln70_1_fu_281_p1__temp=0;
   unsigned long long int trunc_ln70_1_reg_395=0;
   unsigned long long int trunc_ln70_1_reg_395__temp=0;
   unsigned long long int trunc_ln70_1_reg_395_temp_6=0;
   unsigned long long int trunc_ln70_1_reg_395_temp_6__temp=0;
   unsigned long long int trunc_ln70_1_reg_395_temp_7=0;
   unsigned long long int trunc_ln70_1_reg_395_temp_7__temp=0;
   unsigned long long int trunc_ln70_fu_320_p1=0;
   unsigned long long int trunc_ln70_fu_320_p1__temp=0;
   unsigned long long int trunc_ln74_fu_296_p1=0;
   unsigned long long int trunc_ln74_fu_296_p1__temp=0;
   unsigned long long int trunc_ln74_reg_405=0;
   unsigned long long int trunc_ln74_reg_405__temp=0;
   unsigned long long int zext_ln39_1_fu_243_p1=0;
   unsigned long long int zext_ln39_1_fu_243_p1__temp=0;
   unsigned long long int zext_ln39_fu_215_p1=0;
   unsigned long long int zext_ln39_fu_215_p1__temp=0;
   unsigned long long int zext_ln70_1_fu_301_p1=0;
   unsigned long long int zext_ln70_1_fu_301_p1__temp=0;
   unsigned long long int zext_ln70_2_fu_310_p1=0;
   unsigned long long int zext_ln70_2_fu_310_p1__temp=0;
   unsigned long long int zext_ln70_fu_276_p1=0;
   unsigned long long int zext_ln70_fu_276_p1__temp=0;
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
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_0_reg_112 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           input_assign_reg_102 =  ( do_twos_complement( inputdata , 32 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_0_reg_112 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               input_assign_reg_102 =  ( do_twos_complement( inputdata , 32 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
               icmp_ln329_fu_191_p2 =   ( i_0_reg_112__temp  == 16 ? 1 :  0 ) ;
       if((icmp_ln329_fu_191_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
            if(ap_done==1){
          ap_return =  ( input_assign_reg_102 & 18446744073709551615 ) ;
            }
       }
       if((icmp_ln329_fu_191_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
               icmp_ln329_fu_191_p2 =   ( i_0_reg_112__temp  == 16 ? 1 :  0 ) ;
   if(((icmp_ln329_fu_191_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln329_fu_191_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           i_0_i_reg_123 =  0;
       }
       if((icmp_ln329_fu_191_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           init_perm_res_0_i_reg_134 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_1_reg_339 =   ( ( i_0_reg_112__temp  + 1 ) & 31 ) ;
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln329_fu_191_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln329_fu_191_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               i_0_i_reg_123 =  0;
       }
       if((icmp_ln329_fu_191_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               init_perm_res_0_i_reg_134 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_1_reg_339 =   ( ( i_0_reg_112__temp  + 1 ) & 31 ) ;
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
               icmp_ln35_fu_203_p2 =   ( i_0_i_reg_123__temp  == 64 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state3)
       {
           IP_ce0 =  1;
       }
               icmp_ln35_fu_203_p2 =   ( i_0_i_reg_123__temp  == 64 ? 1 :  0 ) ;
   if(((icmp_ln35_fu_203_p2 == 1) && (1 == ap_CS_fsm_state3)) == 1){
       if((icmp_ln35_fu_203_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           i_0_i_i_reg_145 =  0;
       }
       if((icmp_ln35_fu_203_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           permuted_choice_1_0_s_reg_156 =  0;
       }
       if((icmp_ln35_fu_203_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           R1_reg_367 =   ( ( init_perm_res_0_i_reg_134__temp  & 4294967295 ) & 4294967295 ) ;
           L1_reg_362 =   ( (  ( ( init_perm_res_0_i_reg_134__temp  >> 32 )  & 18446744073709551615 )  & 4294967295 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i_reg_347 =   ( ( i_0_i_reg_123__temp  + 1 ) & 127 ) ;
       }
       if((icmp_ln35_fu_203_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           trunc_ln39_1_reg_357 =   ( ( init_perm_res_0_i_reg_134__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
       }
       if(IP_ce0){
          IP_q0=IP_rom[IP_address0];
       }
       goto ap_ST_fsm_state6;
   }
   if(((icmp_ln35_fu_203_p2 == 1) && (1 == ap_CS_fsm_state3)) == 0){
       if((icmp_ln35_fu_203_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               i_0_i_i_reg_145 =  0;
       }
       if((icmp_ln35_fu_203_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               permuted_choice_1_0_s_reg_156 =  0;
       }
       if((icmp_ln35_fu_203_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               R1_reg_367 =   ( ( init_perm_res_0_i_reg_134__temp  & 4294967295 ) & 4294967295 ) ;
               L1_reg_362 =   ( (  ( ( init_perm_res_0_i_reg_134__temp  >> 32 )  & 18446744073709551615 )  & 4294967295 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
               i_reg_347 =   ( ( i_0_i_reg_123__temp  + 1 ) & 127 ) ;
       }
       if((icmp_ln35_fu_203_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
               trunc_ln39_1_reg_357 =   ( ( init_perm_res_0_i_reg_134__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
       }
       if(IP_ce0){
          IP_q0=IP_rom[IP_address0];
       }
       goto ap_ST_fsm_state4;
   }

   ap_ST_fsm_state4:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
       if(1 == ap_CS_fsm_state4)
       {
           IP_load_reg_372 =  IP_q0__temp ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
               icmp_ln329_fu_191_p2 =   ( i_0_reg_112__temp  == 16 ? 1 :  0 ) ;
               icmp_ln329_fu_191_p2 =   ( i_0_reg_112__temp  == 16 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state5)
       {
           i_0_i_reg_123 =  i_reg_347__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           init_perm_res_0_i_reg_134 =   (  ( (  ( ( trunc_ln39_1_reg_357__temp  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_102__temp  >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( IP_load_reg_372__temp  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state6:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 1;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
               icmp_ln66_fu_264_p2 =   ( i_0_i_i_reg_145__temp  == 56 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state6)
       {
           PC1_ce0 =  1;
       }
               icmp_ln66_fu_264_p2 =   ( i_0_i_i_reg_145__temp  == 56 ? 1 :  0 ) ;
   if(((icmp_ln66_fu_264_p2 == 1) && (1 == ap_CS_fsm_state6)) == 1){
       if((icmp_ln66_fu_264_p2 == 1) && (1 == ap_CS_fsm_state6))
       {
           grp_shiftingcidi_fu_167_ap_start_reg =  1;
       }
       if((icmp_ln66_fu_264_p2 == 1) && (1 == ap_CS_fsm_state6))
       {
           trunc_ln74_reg_405 =   ( ( permuted_choice_1_0_s_reg_156__temp  & 268435455 ) & 268435455 ) ;
           C_assign_reg_400 =   ( (  ( ( permuted_choice_1_0_s_reg_156__temp  >> 28 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state6)
       {
           i_2_reg_385 =   ( ( i_0_i_i_reg_145__temp  + 1 ) & 63 ) ;
       }
       if((icmp_ln66_fu_264_p2 == 0) && (1 == ap_CS_fsm_state6))
       {
           trunc_ln70_1_reg_395 =   ( ( permuted_choice_1_0_s_reg_156__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
       }
       if(PC1_ce0){
          PC1_q0=PC1_rom[PC1_address0];
       }
if (grp_shiftingcidi_fu_167_ap_start_reg==1){
grp_shiftingcidi_fu_167_ap_start=1;
shiftingcidi_clk = clock;
shiftingcidi(&C_assign_reg_400,&trunc_ln74_reg_405,&L1_reg_362,&R1_reg_367,&ap_clk,&grp_shiftingcidi_fu_167_ap_done,&grp_shiftingcidi_fu_167_ap_idle,&grp_shiftingcidi_fu_167_ap_ready,&grp_shiftingcidi_fu_167_ap_return,&ap_rst,&grp_shiftingcidi_fu_167_ap_start,&shiftingcidi_clk);
grp_shiftingcidi_fu_167_ap_done=1;
}
	   clock = shiftingcidi_clk;
       goto ap_ST_fsm_state9;
   }
   if(((icmp_ln66_fu_264_p2 == 1) && (1 == ap_CS_fsm_state6)) == 0){
       if((icmp_ln66_fu_264_p2 == 1) && (1 == ap_CS_fsm_state6))
       {
               grp_shiftingcidi_fu_167_ap_start_reg =  1;
       }
       if((icmp_ln66_fu_264_p2 == 1) && (1 == ap_CS_fsm_state6))
       {
               trunc_ln74_reg_405 =   ( ( permuted_choice_1_0_s_reg_156__temp  & 268435455 ) & 268435455 ) ;
               C_assign_reg_400 =   ( (  ( ( permuted_choice_1_0_s_reg_156__temp  >> 28 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state6)
       {
               i_2_reg_385 =   ( ( i_0_i_i_reg_145__temp  + 1 ) & 63 ) ;
       }
       if((icmp_ln66_fu_264_p2 == 0) && (1 == ap_CS_fsm_state6))
       {
               trunc_ln70_1_reg_395 =   ( ( permuted_choice_1_0_s_reg_156__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
       }
       if(PC1_ce0){
          PC1_q0=PC1_rom[PC1_address0];
       }
if (grp_shiftingcidi_fu_167_ap_start_reg==1){
grp_shiftingcidi_fu_167_ap_start=1;
shiftingcidi_clk = clock;
shiftingcidi(&C_assign_reg_400,&trunc_ln74_reg_405,&L1_reg_362,&R1_reg_367,&ap_clk,&grp_shiftingcidi_fu_167_ap_done,&grp_shiftingcidi_fu_167_ap_idle,&grp_shiftingcidi_fu_167_ap_ready,&grp_shiftingcidi_fu_167_ap_return,&ap_rst,&grp_shiftingcidi_fu_167_ap_start,&shiftingcidi_clk);
grp_shiftingcidi_fu_167_ap_done=1;
}
	   clock = shiftingcidi_clk;
       goto ap_ST_fsm_state7;
   }

   ap_ST_fsm_state7:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 1;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
       if(1 == ap_CS_fsm_state7)
       {
           PC1_load_reg_410 =  PC1_q0__temp ;
       }
       goto ap_ST_fsm_state8;

   ap_ST_fsm_state8:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 1;
    ap_CS_fsm_state9 = 0;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
       if(1 == ap_CS_fsm_state8)
       {
           i_0_i_i_reg_145 =  i_2_reg_385__temp ;
       }
       if(1 == ap_CS_fsm_state8)
       {
           permuted_choice_1_0_s_reg_156 =   (  ( (  ( ( trunc_ln70_1_reg_395__temp  << 1 )  & 18446744073709551615 )  |  ( ( ( ( input_assign_reg_102__temp  >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement(  ( PC1_load_reg_410__temp  & 127 )  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state9:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 1;
   sext_ln321_fu_187_p1__temp = sext_ln321_fu_187_p1 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_idle__temp = ap_idle ;
   i_reg_347__temp = i_reg_347 ;
   ap_clk__temp = ap_clk ;
   zext_ln39_fu_215_p1__temp = zext_ln39_fu_215_p1 ;
   lshr_ln70_fu_314_p2__temp = lshr_ln70_fu_314_p2 ;
   trunc_ln39_fu_253_p1__temp = trunc_ln39_fu_253_p1 ;
   i_2_fu_270_p2__temp = i_2_fu_270_p2 ;
   zext_ln70_1_fu_301_p1__temp = zext_ln70_1_fu_301_p1 ;
   input_assign_reg_102__temp = input_assign_reg_102 ;
   trunc_ln70_1_reg_395_temp_7__temp = trunc_ln70_1_reg_395_temp_7 ;
   PC1_q0__temp = PC1_q0 ;
   permuted_choice_1_0_s_reg_156_temp_0__temp = permuted_choice_1_0_s_reg_156_temp_0 ;
   init_perm_res_0_i_reg_134_temp_3__temp = init_perm_res_0_i_reg_134_temp_3 ;
   i_0_reg_112__temp = i_0_reg_112 ;
   trunc_ln39_1_reg_357_temp_4__temp = trunc_ln39_1_reg_357_temp_4 ;
   grp_shiftingcidi_fu_167_ap_return__temp = grp_shiftingcidi_fu_167_ap_return ;
   trunc_ln70_1_reg_395_temp_6__temp = trunc_ln70_1_reg_395_temp_6 ;
   i_2_reg_385__temp = i_2_reg_385 ;
   trunc_ln70_1_fu_281_p1__temp = trunc_ln70_1_fu_281_p1 ;
   permuted_choice_1_0_s_reg_156_temp_1__temp = permuted_choice_1_0_s_reg_156_temp_1 ;
   trunc_ln70_fu_320_p1__temp = trunc_ln70_fu_320_p1 ;
   icmp_ln35_fu_203_p2__temp = icmp_ln35_fu_203_p2 ;
   ap_start__temp = ap_start ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   trunc_ln74_fu_296_p1__temp = trunc_ln74_fu_296_p1 ;
   trunc_ln39_1_reg_357__temp = trunc_ln39_1_reg_357 ;
   grp_shiftingcidi_fu_167_ap_done__temp = grp_shiftingcidi_fu_167_ap_done ;
   ap_rst__temp = ap_rst ;
   icmp_ln329_fu_191_p2__temp = icmp_ln329_fu_191_p2 ;
   PC1_address0__temp = PC1_address0 ;
   trunc_ln39_1_fu_220_p1__temp = trunc_ln39_1_fu_220_p1 ;
   zext_ln39_1_fu_243_p1__temp = zext_ln39_1_fu_243_p1 ;
   init_perm_res_0_i_reg_134__temp = init_perm_res_0_i_reg_134 ;
   IP_address0__temp = IP_address0 ;
   R1_fu_234_p1__temp = R1_fu_234_p1 ;
   i_0_i_i_reg_145__temp = i_0_i_i_reg_145 ;
   IP_ce0__temp = IP_ce0 ;
   i_fu_209_p2__temp = i_fu_209_p2 ;
   IP_q0__temp = IP_q0 ;
   icmp_ln66_fu_264_p2__temp = icmp_ln66_fu_264_p2 ;
   i_1_reg_339__temp = i_1_reg_339 ;
   trunc_ln39_1_reg_357_temp_5__temp = trunc_ln39_1_reg_357_temp_5 ;
   R1_reg_367__temp = R1_reg_367 ;
   lshr_ln39_fu_247_p2__temp = lshr_ln39_fu_247_p2 ;
   zext_ln70_2_fu_310_p1__temp = zext_ln70_2_fu_310_p1 ;
   trunc_ln74_reg_405__temp = trunc_ln74_reg_405 ;
   zext_ln70_fu_276_p1__temp = zext_ln70_fu_276_p1 ;
   i_1_fu_197_p2__temp = i_1_fu_197_p2 ;
   permuted_choice_1_fu_324_p3__temp = permuted_choice_1_fu_324_p3 ;
   inputdata__temp = inputdata ;
   grp_shiftingcidi_fu_167_ap_start__temp = grp_shiftingcidi_fu_167_ap_start ;
   ap_ready__temp = ap_ready ;
   grp_shiftingcidi_fu_167_ap_ready__temp = grp_shiftingcidi_fu_167_ap_ready ;
   ap_done__temp = ap_done ;
   init_perm_res_0_i_reg_134_temp_2__temp = init_perm_res_0_i_reg_134_temp_2 ;
   PC1_load_reg_410__temp = PC1_load_reg_410 ;
   init_perm_res_fu_257_p3__temp = init_perm_res_fu_257_p3 ;
   grp_shiftingcidi_fu_167_ap_idle__temp = grp_shiftingcidi_fu_167_ap_idle ;
   trunc_ln70_1_reg_395__temp = trunc_ln70_1_reg_395 ;
   L1_reg_362__temp = L1_reg_362 ;
   sub_ln39_fu_238_p2__temp = sub_ln39_fu_238_p2 ;
   ap_return__temp = ap_return ;
   IP_load_reg_372__temp = IP_load_reg_372 ;
   grp_shiftingcidi_fu_167_ap_start_reg__temp = grp_shiftingcidi_fu_167_ap_start_reg ;
   permuted_choice_1_0_s_reg_156__temp = permuted_choice_1_0_s_reg_156 ;
   sub_ln70_fu_304_p2__temp = sub_ln70_fu_304_p2 ;
   C_assign_reg_400__temp = C_assign_reg_400 ;
   i_0_i_reg_123__temp = i_0_i_reg_123 ;

       IP_ce0 = 0;
       IP_address0 =   (  ( i_0_i_reg_123__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC1_ce0 = 0;
       PC1_address0 =   (  ( i_0_i_i_reg_145__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    grp_shiftingcidi_fu_167_ap_start_reg = 0 ;
   if(((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_167_ap_done == 1)) == 1){
       if((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_167_ap_done == 1))
       {
           i_0_reg_112 =  i_1_reg_339__temp ;
       }
       if((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_167_ap_done == 1))
       {
           input_assign_reg_102 =  grp_shiftingcidi_fu_167_ap_return__temp ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_167_ap_done == 1)) == 0){
       if((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_167_ap_done == 1))
       {
               i_0_reg_112 =  i_1_reg_339__temp ;
       }
       if((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_167_ap_done == 1))
       {
               input_assign_reg_102 =  grp_shiftingcidi_fu_167_ap_return__temp ;
       }
       goto ap_ST_fsm_state9;
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
