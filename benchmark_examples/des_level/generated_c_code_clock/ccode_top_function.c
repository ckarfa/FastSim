#include<stdio.h>
#define PC1_DataWidth 6
#define PC1_AddressRange 56
#define PC1_AddressWidth 6
#define PC1_DWIDTH 6
#define PC1_AWIDTH 6
#define PC1_MEM_SIZE 56
#define IP_DataWidth 7
#define IP_AddressRange 64
#define IP_AddressWidth 6
#define IP_DWIDTH 7
#define IP_AWIDTH 6
#define IP_MEM_SIZE 64


unsigned long long int shiftingcidi(unsigned long long int C_assign_reg_387,unsigned long long int tmp_2_reg_392, int L1_reg_349,int R1_reg_354,int  ap_clk,int grp_shiftingcidi_fu_161_ap_done,int grp_shiftingcidi_fu_161_ap_idle,int grp_shiftingcidi_fu_161_ap_ready, long long int grp_shiftingcidi_fu_161_ap_return,int ap_rst,int grp_shiftingcidi_fu_161_ap_start,int* dummy);
void top_function(int ap_clk,int ap_done,int ap_idle,int ap_ready,int ap_rst,int ap_start,int* dummy,int input){
   int clock=*dummy;
   
   unsigned long long int C_assign_reg_387=0;
   unsigned long long int C_assign_reg_387__temp=0;
   int IP_address0=0;
   int IP_address0__temp=0;
   int IP_ce0=0;
   int IP_ce0__temp=0;
   int IP_load_reg_359=0;
   int IP_load_reg_359__temp=0;
   int IP_q0=0;
   int IP_q0__temp=0;
   int L1_reg_349=0;
   int L1_reg_349__temp=0;
   int PC1_address0=0;
   int PC1_address0__temp=0;
   int PC1_ce0=0;
   int PC1_ce0__temp=0;
   int PC1_load_reg_397=0;
   int PC1_load_reg_397__temp=0;
   int PC1_q0=0;
   int PC1_q0__temp=0;
   int R1_fu_226_p1=0;
   int R1_fu_226_p1__temp=0;
   int R1_reg_354=0;
   int R1_reg_354__temp=0;
   int ap_CS_fsm=1;
   int ap_CS_fsm__temp=1;
   int ap_CS_fsm_state1=1;
   int ap_CS_fsm_state1__temp=1;
   int ap_CS_fsm_state2=1;
   int ap_CS_fsm_state2__temp=1;
   int ap_CS_fsm_state3=1;
   int ap_CS_fsm_state3__temp=1;
   int ap_CS_fsm_state4=1;
   int ap_CS_fsm_state4__temp=1;
   int ap_CS_fsm_state5=1;
   int ap_CS_fsm_state5__temp=1;
   int ap_CS_fsm_state6=1;
   int ap_CS_fsm_state6__temp=1;
   int ap_CS_fsm_state7=1;
   int ap_CS_fsm_state7__temp=1;
   int ap_CS_fsm_state8=1;
   int ap_CS_fsm_state8__temp=1;
   int ap_CS_fsm_state9=1;
   int ap_CS_fsm_state9__temp=1;
   int ap_NS_fsm=0;
   int ap_NS_fsm__temp=0;
   int ap_clk__temp=0;
   int ap_rst__temp=0;
   int ap_start__temp=0;
   int exitcond_fu_183_p2=0;
   int exitcond_fu_183_p2__temp=0;
   int exitcond_i_fu_195_p2=0;
   int exitcond_i_fu_195_p2__temp=0;
   int exitcond_i_i_fu_256_p2=0;
   int exitcond_i_i_fu_256_p2__temp=0;
   int grp_shiftingcidi_fu_161_ap_done=0;
   int grp_shiftingcidi_fu_161_ap_done__temp=0;
   int grp_shiftingcidi_fu_161_ap_idle=0;
   int grp_shiftingcidi_fu_161_ap_idle__temp=0;
   int grp_shiftingcidi_fu_161_ap_ready=0;
   int grp_shiftingcidi_fu_161_ap_ready__temp=0;
   int grp_shiftingcidi_fu_161_ap_start=0;
   int grp_shiftingcidi_fu_161_ap_start__temp=0;
   int grp_shiftingcidi_fu_161_ap_start_reg=0;
   int grp_shiftingcidi_fu_161_ap_start_reg__temp=0;
   int i_1_fu_189_p2=0;
   int i_1_fu_189_p2__temp=0;
   int i_1_reg_326=0;
   int i_1_reg_326__temp=0;
   int i_2_fu_201_p2=0;
   int i_2_fu_201_p2__temp=0;
   int i_2_reg_334=0;
   int i_2_reg_334__temp=0;
   int i_3_fu_262_p2=0;
   int i_3_fu_262_p2__temp=0;
   int i_3_reg_372=0;
   int i_3_reg_372__temp=0;
   int i_i_i_reg_139=0;
   int i_i_i_reg_139__temp=0;
   int i_i_reg_117=0;
   int i_i_reg_117__temp=0;
   int i_reg_106=0;
   int i_reg_106__temp=0;
   int init_perm_res_i_reg_128_temp=0;
   int init_perm_res_i_reg_128_temp1=0;
   int init_perm_res_i_reg_128_temp101=0;
   int init_perm_res_i_reg_128_temp101__temp=0;
   int init_perm_res_i_reg_128_temp12=0;
   int init_perm_res_i_reg_128_temp12__temp=0;
   int init_perm_res_i_reg_128_temp1__temp=0;
   int init_perm_res_i_reg_128_temp__temp=0;
   int permuted_choice_1_i_s_reg_150_temp=0;
   int permuted_choice_1_i_s_reg_150_temp1=0;
   int permuted_choice_1_i_s_reg_150_temp101=0;
   int permuted_choice_1_i_s_reg_150_temp101__temp=0;
   int permuted_choice_1_i_s_reg_150_temp102=0;
   int permuted_choice_1_i_s_reg_150_temp102__temp=0;
   int permuted_choice_1_i_s_reg_150_temp1__temp=0;
   int permuted_choice_1_i_s_reg_150_temp__temp=0;
   int tmp_1_reg_344_temp=0;
   int tmp_1_reg_344_temp11=0;
   int tmp_1_reg_344_temp11__temp=0;
   int tmp_1_reg_344_temp__temp=0;
   int tmp_25_i_i_cast_fu_293_p1=0;
   int tmp_25_i_i_cast_fu_293_p1__temp=0;
   int tmp_26_i_i_fu_296_p2=0;
   int tmp_26_i_i_fu_296_p2__temp=0;
   int tmp_28_i_i_fu_306_p2_temp=0;
   int tmp_28_i_i_fu_306_p2_temp__temp=0;
   int tmp_2_fu_288_p1=0;
   int tmp_2_fu_288_p1__temp=0;
   int tmp_2_reg_392=0;
   int tmp_2_reg_392__temp=0;
   int tmp_36_i_fu_230_p2=0;
   int tmp_36_i_fu_230_p2__temp=0;
   int tmp_38_i_fu_239_p2_temp=0;
   int tmp_38_i_fu_239_p2_temp__temp=0;
   int tmp_3_fu_312_p1=0;
   int tmp_3_fu_312_p1__temp=0;
   int tmp_3_fu_312_p1_temp=0;
   int tmp_3_fu_312_p1_temp__temp=0;
   int tmp_4_reg_382_temp=0;
   int tmp_4_reg_382_temp11=0;
   int tmp_4_reg_382_temp11__temp=0;
   int tmp_4_reg_382_temp__temp=0;
   int tmp_fu_245_p1=0;
   int tmp_fu_245_p1__temp=0;
   int tmp_fu_245_p1_temp=0;
   int tmp_fu_245_p1_temp__temp=0;
   long long int grp_shiftingcidi_fu_161_ap_return=0;
   long long int grp_shiftingcidi_fu_161_ap_return__temp=0;
   long long int init_perm_res_fu_249_p3=0;
   long long int init_perm_res_fu_249_p3__temp=0;
   long long int init_perm_res_i_reg_128=0;
   long long int init_perm_res_i_reg_128__temp=0;
   long long int input_assign_reg_94=0;
   long long int input_assign_reg_94__temp=0;
   long long int permuted_choice_1_fu_316_p3=0;
   long long int permuted_choice_1_fu_316_p3__temp=0;
   long long int permuted_choice_1_i_s_reg_150=0;
   long long int permuted_choice_1_i_s_reg_150__temp=0;
   long long int tmp_1_fu_212_p1=0;
   long long int tmp_1_fu_212_p1__temp=0;
   long long int tmp_1_reg_344=0;
   long long int tmp_1_reg_344__temp=0;
   long long int tmp_24_i_i_fu_268_p1=0;
   long long int tmp_24_i_i_fu_268_p1__temp=0;
   long long int tmp_27_i_i_fu_302_p1=0;
   long long int tmp_27_i_i_fu_302_p1__temp=0;
   long long int tmp_28_i_i_fu_306_p2=0;
   long long int tmp_28_i_i_fu_306_p2__temp=0;
   long long int tmp_34_i_fu_207_p1=0;
   long long int tmp_34_i_fu_207_p1__temp=0;
   long long int tmp_37_i_fu_235_p1=0;
   long long int tmp_37_i_fu_235_p1__temp=0;
   long long int tmp_38_i_fu_239_p2=0;
   long long int tmp_38_i_fu_239_p2__temp=0;
   long long int tmp_4_fu_273_p1=0;
   long long int tmp_4_fu_273_p1__temp=0;
   long long int tmp_4_reg_382=0;
   long long int tmp_4_reg_382__temp=0;
   int PC1_rom[PC1_MEM_SIZE]={
57,49,41,33,25,17,9,1,58,50,42,34,26,18,10,2,59,51,43,35,27,19,11,3,60,52,44,36,63,55,47,39,31,23,15,7,62,54,46,38,30,22,14,6,61,53,45,37,29,21,13,5,28,20,12,4};
   int IP_rom[IP_MEM_SIZE]={
58,50,42,34,26,18,10,2,60,52,44,36,28,20,12,4,62,54,46,38,30,22,14,6,64,56,48,40,32,24,16,8,57,49,41,33,25,17,9,1,59,51,43,35,27,19,11,3,61,53,45,37,29,21,13,5,63,55,47,39,31,23,15,7};

   ap_ST_fsm_state1:
	clock=clock+1;
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
	ap_CS_fsm_state9 = 0;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 0;
       IP_ce0 = 0;
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_reg_106 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           //input_assign_reg_94 =  10697378324826278525;
		   input_assign_reg_94 =  input;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_reg_106 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               //input_assign_reg_94 =  10697378324826278525;
			   input_assign_reg_94 =  input;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
	ap_CS_fsm_state9 = 0;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 0;
       IP_ce0 = 0;
               exitcond_fu_183_p2 =   ( i_reg_106__temp  == 16 ? 1 :  0 ) ;
   if(((exitcond_fu_183_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((exitcond_fu_183_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           i_i_reg_117 =  0;
       }
       if((exitcond_fu_183_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           init_perm_res_i_reg_128 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_1_reg_326 =   ( i_reg_106__temp  + 1 ) ;
       }
       if((exitcond_fu_183_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
       }
       if((exitcond_fu_183_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto end;
   }
   if(((exitcond_fu_183_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((exitcond_fu_183_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               i_i_reg_117 =  0;
       }
       if((exitcond_fu_183_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               init_perm_res_i_reg_128 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_1_reg_326 =   ( i_reg_106__temp  + 1 ) ;
       }
       if((exitcond_fu_183_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done =  1;
       }
       if((exitcond_fu_183_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_ready =  1;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
	ap_CS_fsm_state9 = 0;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 0;
       IP_ce0 = 1;
               exitcond_i_fu_195_p2 =   ( i_i_reg_117__temp  == 64 ? 1 :  0 ) ;
   if(((exitcond_i_fu_195_p2 == 1) && (1 == ap_CS_fsm_state3)) == 1){
       if((exitcond_i_fu_195_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           i_i_i_reg_139 =  0;
       }
       if((exitcond_i_fu_195_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           permuted_choice_1_i_s_reg_150 =  0;
       }
       if((exitcond_i_fu_195_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
           R1_reg_354 =   ( init_perm_res_i_reg_128__temp  & 4294967295 ) ;
           L1_reg_349 =   (  ( init_perm_res_i_reg_128__temp  >> 32 )  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i_2_reg_334 =   ( i_i_reg_117__temp  + 1 ) ;
       }
       if((exitcond_i_fu_195_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           tmp_1_reg_344 =   ( init_perm_res_i_reg_128__temp  & 9223372036854775807 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           IP_ce0 =  1;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       if(IP_ce0){
          IP_q0=IP_rom[IP_address0];
       }
	//printf("%d\n",L1_reg_349);
	//printf("%d\n",R1_reg_354);
       goto ap_ST_fsm_state6;
   }
   if(((exitcond_i_fu_195_p2 == 1) && (1 == ap_CS_fsm_state3)) == 0){
       if((exitcond_i_fu_195_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               i_i_i_reg_139 =  0;
       }
       if((exitcond_i_fu_195_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               permuted_choice_1_i_s_reg_150 =  0;
       }
       if((exitcond_i_fu_195_p2 == 1) && (1 == ap_CS_fsm_state3))
       {
               R1_reg_354 =   ( init_perm_res_i_reg_128__temp  & 4294967295 ) ;
               L1_reg_349 =   (  ( init_perm_res_i_reg_128__temp  >> 32 )  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
               i_2_reg_334 =   ( i_i_reg_117__temp  + 1 ) ;
       }
       if((exitcond_i_fu_195_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
               tmp_1_reg_344 =   ( init_perm_res_i_reg_128__temp  & 9223372036854775807 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
               IP_ce0 =  1;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       if(IP_ce0){
          IP_q0=IP_rom[IP_address0];
       }
       goto ap_ST_fsm_state4;
   }

   ap_ST_fsm_state4:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
	ap_CS_fsm_state9 = 0;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 0;
       IP_ce0 = 0;
       if(1 == ap_CS_fsm_state4)
       {
           IP_load_reg_359 =  IP_q0__temp ;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
	ap_CS_fsm_state9 = 0;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 0;
       IP_ce0 = 0;
               exitcond_fu_183_p2 =   ( i_reg_106__temp  == 16 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state5)
       {
           i_i_reg_117 =  i_2_reg_334__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           init_perm_res_i_reg_128 =   (  (  ( tmp_1_reg_344__temp  & 9223372036854775807 )  << 1 )  |  (  (  ( input_assign_reg_94__temp  >>  ( 64 - IP_load_reg_359__temp  )  )  & 1 )  & 1 )  ) ;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state6:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 1;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
	ap_CS_fsm_state9 = 0;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 1;
       IP_ce0 = 0;
               exitcond_i_i_fu_256_p2 =   ( i_i_i_reg_139__temp  == 56 ? 1 :  0 ) ;
   if(((exitcond_i_i_fu_256_p2 == 1) && (1 == ap_CS_fsm_state6)) == 1){
       if((exitcond_i_i_fu_256_p2 == 1) && (1 == ap_CS_fsm_state6))
       {
           grp_shiftingcidi_fu_161_ap_start_reg =  1;
       }
       if((exitcond_i_i_fu_256_p2 == 1) && (1 == ap_CS_fsm_state6))
       {
           tmp_2_reg_392 =   ( permuted_choice_1_i_s_reg_150__temp  & 268435455 ) ;
           C_assign_reg_387 =   (  ( permuted_choice_1_i_s_reg_150__temp  & 72057593769492480 )  >> 28 ) ;
       }
       if(1 == ap_CS_fsm_state6)
       {
           i_3_reg_372 =   ( i_i_i_reg_139__temp  + 1 ) ;
       }
       if((exitcond_i_i_fu_256_p2 == 0) && (1 == ap_CS_fsm_state6))
       {
           tmp_4_reg_382 =   ( permuted_choice_1_i_s_reg_150__temp  & 9223372036854775807 ) ;
       }
       if(1 == ap_CS_fsm_state6)
       {
           PC1_ce0 =  1;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       if(PC1_ce0){
          PC1_q0=PC1_rom[PC1_address0];
       }
if (grp_shiftingcidi_fu_161_ap_start_reg==1){

grp_shiftingcidi_fu_161_ap_return=shiftingcidi(C_assign_reg_387,tmp_2_reg_392,L1_reg_349,R1_reg_354,ap_clk,grp_shiftingcidi_fu_161_ap_done,grp_shiftingcidi_fu_161_ap_idle,grp_shiftingcidi_fu_161_ap_ready,grp_shiftingcidi_fu_161_ap_return,ap_rst,grp_shiftingcidi_fu_161_ap_start,dummy);
grp_shiftingcidi_fu_161_ap_done=1;
goto ap_ST_fsm_state9;
}
       //goto ap_ST_fsm_state9;
   }
   if(((exitcond_i_i_fu_256_p2 == 1) && (1 == ap_CS_fsm_state6)) == 0){
       if((exitcond_i_i_fu_256_p2 == 1) && (1 == ap_CS_fsm_state6))
       {
               grp_shiftingcidi_fu_161_ap_start_reg =  1;
       }
       if((exitcond_i_i_fu_256_p2 == 1) && (1 == ap_CS_fsm_state6))
       {
               tmp_2_reg_392 =   ( permuted_choice_1_i_s_reg_150__temp  & 268435455 ) ;
               C_assign_reg_387 =   (  ( permuted_choice_1_i_s_reg_150__temp  & 72057593769492480 )  >> 28 ) ;
       }
       if(1 == ap_CS_fsm_state6)
       {
               i_3_reg_372 =   ( i_i_i_reg_139__temp  + 1 ) ;
       }
       if((exitcond_i_i_fu_256_p2 == 0) && (1 == ap_CS_fsm_state6))
       {
               tmp_4_reg_382 =   ( permuted_choice_1_i_s_reg_150__temp  & 9223372036854775807 ) ;
       }
       if(1 == ap_CS_fsm_state6)
       {
               PC1_ce0 =  1;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       if(PC1_ce0){
          PC1_q0=PC1_rom[PC1_address0];
       }
if (grp_shiftingcidi_fu_161_ap_start_reg==1){
shiftingcidi(C_assign_reg_387,tmp_2_reg_392,L1_reg_349,R1_reg_354,ap_clk,grp_shiftingcidi_fu_161_ap_done,grp_shiftingcidi_fu_161_ap_idle,grp_shiftingcidi_fu_161_ap_ready,grp_shiftingcidi_fu_161_ap_return,ap_rst,grp_shiftingcidi_fu_161_ap_start,&clock);
grp_shiftingcidi_fu_161_ap_done=1;
}
       goto ap_ST_fsm_state7;
   }

   ap_ST_fsm_state7:
	//printf("\nstate7\n");
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 1;
	ap_CS_fsm_state8 = 0;
	ap_CS_fsm_state9 = 0;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 0;
       IP_ce0 = 0;
       if(1 == ap_CS_fsm_state7)
       {
           PC1_load_reg_397 =  PC1_q0__temp ;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state8;

   ap_ST_fsm_state8:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 1;
	ap_CS_fsm_state9 = 0;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 0;
       IP_ce0 = 0;
       if(1 == ap_CS_fsm_state8)
       {
           i_i_i_reg_139 =  i_3_reg_372__temp ;
       }
       if(1 == ap_CS_fsm_state8)
       {
           permuted_choice_1_i_s_reg_150 =   (  (  ( tmp_4_reg_382__temp  & 9223372036854775807 )  << 1 )  |  (  (  ( input_assign_reg_94__temp  >>  ( 64 - PC1_load_reg_397__temp  )  )  & 1 )  & 1 )  ) ;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state9:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
	ap_CS_fsm_state9 = 1;
   ap_CS_fsm__temp = ap_CS_fsm ;
   grp_shiftingcidi_fu_161_ap_idle__temp = grp_shiftingcidi_fu_161_ap_idle ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   PC1_q0__temp = PC1_q0 ;
   tmp_fu_245_p1_temp__temp = tmp_fu_245_p1_temp ;
   L1_reg_349__temp = L1_reg_349 ;
   exitcond_i_i_fu_256_p2__temp = exitcond_i_i_fu_256_p2 ;
   permuted_choice_1_i_s_reg_150_temp__temp = permuted_choice_1_i_s_reg_150_temp ;
   IP_ce0__temp = IP_ce0 ;
   init_perm_res_i_reg_128_temp__temp = init_perm_res_i_reg_128_temp ;
   R1_reg_354__temp = R1_reg_354 ;
   i_i_i_reg_139__temp = i_i_i_reg_139 ;
   tmp_4_reg_382_temp__temp = tmp_4_reg_382_temp ;
   tmp_2_reg_392__temp = tmp_2_reg_392 ;
   tmp_2_fu_288_p1__temp = tmp_2_fu_288_p1 ;
   tmp_36_i_fu_230_p2__temp = tmp_36_i_fu_230_p2 ;
   i_i_reg_117__temp = i_i_reg_117 ;
   tmp_38_i_fu_239_p2_temp__temp = tmp_38_i_fu_239_p2_temp ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   permuted_choice_1_i_s_reg_150_temp102__temp = permuted_choice_1_i_s_reg_150_temp102 ;
   tmp_28_i_i_fu_306_p2_temp__temp = tmp_28_i_i_fu_306_p2_temp ;
   tmp_1_reg_344_temp11__temp = tmp_1_reg_344_temp11 ;
   exitcond_fu_183_p2__temp = exitcond_fu_183_p2 ;
   init_perm_res_i_reg_128_temp101__temp = init_perm_res_i_reg_128_temp101 ;
   i_3_fu_262_p2__temp = i_3_fu_262_p2 ;
   R1_fu_226_p1__temp = R1_fu_226_p1 ;
   tmp_3_fu_312_p1_temp__temp = tmp_3_fu_312_p1_temp ;
   IP_address0__temp = IP_address0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   PC1_load_reg_397__temp = PC1_load_reg_397 ;
   ap_CS_fsm_state9__temp = ap_CS_fsm_state9 ;
   init_perm_res_i_reg_128_temp12__temp = init_perm_res_i_reg_128_temp12 ;
   tmp_1_reg_344_temp__temp = tmp_1_reg_344_temp ;
   C_assign_reg_387__temp = C_assign_reg_387 ;
   grp_shiftingcidi_fu_161_ap_ready__temp = grp_shiftingcidi_fu_161_ap_ready ;
   i_3_reg_372__temp = i_3_reg_372 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   permuted_choice_1_i_s_reg_150_temp1__temp = permuted_choice_1_i_s_reg_150_temp1 ;
   permuted_choice_1_i_s_reg_150_temp101__temp = permuted_choice_1_i_s_reg_150_temp101 ;
   grp_shiftingcidi_fu_161_ap_start__temp = grp_shiftingcidi_fu_161_ap_start ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   i_1_reg_326__temp = i_1_reg_326 ;
   exitcond_i_fu_195_p2__temp = exitcond_i_fu_195_p2 ;
   grp_shiftingcidi_fu_161_ap_done__temp = grp_shiftingcidi_fu_161_ap_done ;
   IP_q0__temp = IP_q0 ;
   PC1_address0__temp = PC1_address0 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_fu_189_p2__temp = i_1_fu_189_p2 ;
   i_2_reg_334__temp = i_2_reg_334 ;
   tmp_25_i_i_cast_fu_293_p1__temp = tmp_25_i_i_cast_fu_293_p1 ;
   tmp_4_reg_382_temp11__temp = tmp_4_reg_382_temp11 ;
   init_perm_res_i_reg_128_temp1__temp = init_perm_res_i_reg_128_temp1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   PC1_ce0__temp = PC1_ce0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   i_2_fu_201_p2__temp = i_2_fu_201_p2 ;
   IP_load_reg_359__temp = IP_load_reg_359 ;
   tmp_26_i_i_fu_296_p2__temp = tmp_26_i_i_fu_296_p2 ;
   tmp_fu_245_p1__temp = tmp_fu_245_p1 ;
   tmp_3_fu_312_p1__temp = tmp_3_fu_312_p1 ;
   grp_shiftingcidi_fu_161_ap_start_reg__temp = grp_shiftingcidi_fu_161_ap_start_reg ;
   i_reg_106__temp = i_reg_106 ;
   tmp_4_reg_382__temp = tmp_4_reg_382 ;
   grp_shiftingcidi_fu_161_ap_return__temp = grp_shiftingcidi_fu_161_ap_return ;
   tmp_24_i_i_fu_268_p1__temp = tmp_24_i_i_fu_268_p1 ;
   permuted_choice_1_i_s_reg_150__temp = permuted_choice_1_i_s_reg_150 ;
   tmp_38_i_fu_239_p2__temp = tmp_38_i_fu_239_p2 ;
   input_assign_reg_94__temp = input_assign_reg_94 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   tmp_4_fu_273_p1__temp = tmp_4_fu_273_p1 ;
   tmp_28_i_i_fu_306_p2__temp = tmp_28_i_i_fu_306_p2 ;
   init_perm_res_fu_249_p3__temp = init_perm_res_fu_249_p3 ;
   permuted_choice_1_fu_316_p3__temp = permuted_choice_1_fu_316_p3 ;
   tmp_1_reg_344__temp = tmp_1_reg_344 ;
   init_perm_res_i_reg_128__temp = init_perm_res_i_reg_128 ;
   tmp_1_fu_212_p1__temp = tmp_1_fu_212_p1 ;
   tmp_34_i_fu_207_p1__temp = tmp_34_i_fu_207_p1 ;
   tmp_27_i_i_fu_302_p1__temp = tmp_27_i_i_fu_302_p1 ;

       PC1_ce0 = 0;
       IP_ce0 = 0;
   if(((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_161_ap_done == 1)) == 1){
       if((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_161_ap_done == 1))
       {
           i_reg_106 =  i_1_reg_326__temp ;
       }
       if((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_161_ap_done == 1))
       {
           input_assign_reg_94 =  grp_shiftingcidi_fu_161_ap_return__temp ;
	   grp_shiftingcidi_fu_161_ap_start_reg=0;
	   //grp_shiftingcidi_fu_161_ap_done=0;	   
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_161_ap_done == 1)) == 0){
       if((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_161_ap_done == 1))
       {
               i_reg_106 =  i_1_reg_326__temp ;
       }
       if((1 == ap_CS_fsm_state9) && (grp_shiftingcidi_fu_161_ap_done == 1))
       {
               input_assign_reg_94 =  grp_shiftingcidi_fu_161_ap_return__temp ;
       }
          PC1_address0 =  i_i_i_reg_139__temp ;
          IP_address0 =  i_i_reg_117__temp ;
       goto ap_ST_fsm_state9;
   }
   end:
       return;
}
/*int main(){
	int ap_clk=1;
	int ap_done=0;
	int ap_idle=0;
	int ap_ready=1;
	int ap_rst=0;
	int ap_start=1;	
	int clock=0;
	int *dummy=&clock;
	top_function( ap_clk, ap_done, ap_idle, ap_ready, ap_rst, ap_start, dummy);
	printf("clock %d\n",clock);
	return 0;
}*/
