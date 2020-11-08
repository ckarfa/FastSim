#include<stdio.h>
#define sub_key_DataWidth 64
#define sub_key_AddressRange 16
#define sub_key_AddressWidth 4
#define sub_key_DWIDTH 64
#define sub_key_AWIDTH 4
#define sub_key_MEM_SIZE 16
#define PC2_DataWidth 6
#define PC2_AddressRange 48
#define PC2_AddressWidth 6
#define PC2_DWIDTH 6
#define PC2_AWIDTH 6
#define PC2_MEM_SIZE 48
#define iteration_shift_DataWidth 2
#define iteration_shift_AddressRange 16
#define iteration_shift_AddressWidth 4
#define iteration_shift_DWIDTH 2
#define iteration_shift_AWIDTH 4
#define iteration_shift_MEM_SIZE 16


unsigned long long int calculationofkeys( int L,  int R,int ap_clk,int grp_calculationofkeys_fu_193_ap_done,int grp_calculationofkeys_fu_193_ap_idle,int grp_calculationofkeys_fu_193_ap_ready,unsigned long long int grp_calculationofkeys_fu_193_ap_return,int ap_rst,int grp_calculationofkeys_fu_193_ap_start,int grp_calculationofkeys_fu_193_sub_key_address0,int grp_calculationofkeys_fu_193_sub_key_ce0,unsigned long long int sub_key_q0,int* dummy,unsigned long long sub_key_ram[16]);

unsigned long long int shiftingcidi(unsigned long long int C,unsigned long long int D, int  L, int R,int ap_clk,int ap_done,int ap_idle,int ap_ready,long long int ap_return,int ap_rst,int ap_start,int* dummy){
	//printf("Shifting l and r : %ld %ld\n",L,R);
	//printf("Shifting c and d : %ld %ld\n",C,D);
	
 	int clock=*dummy;
	ap_start=1;
	ap_ready=1;
   int C1_cast_fu_281_p1=0;
   int C1_cast_fu_281_p1__temp=0;
   int C1_cast_fu_281_p1_temp2=0;
   int C1_cast_fu_281_p1_temp2__temp=0;
   int C1_fu_273_p3=0;
   int C1_fu_273_p3__temp=0;
   int C__temp=0;
   long long unsigned C_assign_fu_82=0;
   long long unsigned C_assign_fu_82__temp=0;
   int C_assign_fu_82_temp1=0;
   int C_assign_fu_82_temp111=0;
   int C_assign_fu_82_temp111__temp=0;
   int C_assign_fu_82_temp1__temp=0;
   int C_assign_fu_82_temp2=0;
   int C_assign_fu_82_temp2__temp=0;
   int C_assign_fu_82_temp3=0;
   int C_assign_fu_82_temp3__temp=0;
   int C_assign_fu_82_temp4=0;
   int C_assign_fu_82_temp4__temp=0;
   int C_cast_fu_219_p1=0;
   int C_cast_fu_219_p1__temp=0;
   int C_cast_fu_219_p1_temp2=0;
   int C_cast_fu_219_p1_temp2__temp=0;
   int D1_cast_fu_305_p1=0;
   int D1_cast_fu_305_p1__temp=0;
   int D1_cast_fu_305_p1_temp2=0;
   int D1_cast_fu_305_p1_temp2__temp=0;
   int D1_fu_297_p3=0;
   int D1_fu_297_p3__temp=0;
   int D__temp=0;
   long long unsigned D_assign_fu_78=0;
   long long unsigned D_assign_fu_78__temp=0;
   int D_assign_fu_78_temp111=0;
   int D_assign_fu_78_temp111__temp=0;
   int D_assign_fu_78_temp2=0;
   int D_assign_fu_78_temp2__temp=0;
   int D_assign_fu_78_temp3=0;
   int D_assign_fu_78_temp3__temp=0;
   int D_cast_fu_215_p1=0;
   int D_cast_fu_215_p1__temp=0;
   int D_cast_fu_215_p1_temp4=0;
   int D_cast_fu_215_p1_temp4__temp=0;
   int L__temp=0;
   int PC2_address0=0;
   int PC2_address0__temp=0;
   int PC2_ce0=0;
   int PC2_ce0__temp=0;
   int PC2_load_reg_478=0;
   int PC2_load_reg_478__temp=0;
   int PC2_q0=0;
   int PC2_q0__temp=0;
   int R__temp=0;
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
   int ap_NS_fsm=0;
   int ap_NS_fsm__temp=0;
   int ap_clk__temp=0;
   int ap_rst__temp=0;
   int ap_start__temp=0;
   int exitcond1_fu_349_p2=0;
   int exitcond1_fu_349_p2__temp=0;
   int exitcond2_fu_233_p2=0;
   int exitcond2_fu_233_p2__temp=0;
   int exitcond_fu_250_p2=0;
   int exitcond_fu_250_p2__temp=0;
   int grp_calculationofkeys_fu_193_ap_done=0;
   int grp_calculationofkeys_fu_193_ap_done__temp=0;
   int grp_calculationofkeys_fu_193_ap_idle=0;
   int grp_calculationofkeys_fu_193_ap_idle__temp=0;
   int grp_calculationofkeys_fu_193_ap_ready=0;
   int grp_calculationofkeys_fu_193_ap_ready__temp=0;
   int grp_calculationofkeys_fu_193_ap_start=0;
   int grp_calculationofkeys_fu_193_ap_start__temp=0;
   int grp_calculationofkeys_fu_193_ap_start_reg=0;
   int grp_calculationofkeys_fu_193_ap_start_reg__temp=0;
   int grp_calculationofkeys_fu_193_sub_key_address0=0;
   int grp_calculationofkeys_fu_193_sub_key_address0__temp=0;
   int grp_calculationofkeys_fu_193_sub_key_ce0=0;
   int grp_calculationofkeys_fu_193_sub_key_ce0__temp=0;
   int i_2_fu_239_p2=0;
   int i_2_fu_239_p2__temp=0;
   int i_2_reg_422=0;
   int i_2_reg_422__temp=0;
   int i_reg_148=0;
   int i_reg_148__temp=0;
   int iteration_shift_address0=0;
   int iteration_shift_address0__temp=0;
   int iteration_shift_ce0=0;
   int iteration_shift_ce0__temp=0;
   int iteration_shift_load_reg_437=0;
   int iteration_shift_load_reg_437__temp=0;
   int iteration_shift_q0=0;
   int iteration_shift_q0__temp=0;
   int j_1_reg_182=0;
   int j_1_reg_182__temp=0;
   int j_2_fu_255_p2=0;
   int j_2_fu_255_p2__temp=0;
   int j_3_fu_355_p2=0;
   int j_3_fu_355_p2__temp=0;
   int j_3_reg_463=0;
   int j_3_reg_463__temp=0;
   int j_reg_159=0;
   int j_reg_159__temp=0;
   int sub_key_addr_reg_455=0;
   int sub_key_addr_reg_455__temp=0;
   int sub_key_address0=0;
   int sub_key_address0__temp=0;
   int sub_key_ce0=0;
   int sub_key_ce0__temp=0;
   int sub_key_we0=0;
   int sub_key_we0__temp=0;
   int tmp_11_fu_285_p3=0;
   int tmp_11_fu_285_p3__temp=0;
   int tmp_11_fu_285_p3_temp1=0;
   int tmp_11_fu_285_p3_temp1__temp=0;
   int tmp_13_fu_293_p1=0;
   int tmp_13_fu_293_p1__temp=0;
   int tmp_13_fu_293_p1_temp1=0;
   int tmp_13_fu_293_p1_temp1__temp=0;
   int tmp_14_fu_384_p1=0;
   int tmp_14_fu_384_p1__temp=0;
   int tmp_14_fu_384_p1_temp1=0;
   int tmp_14_fu_384_p1_temp1__temp=0;
   int tmp_15_reg_473_temp1=0;
   int tmp_15_reg_473_temp1__temp=0;
   int tmp_1_fu_245_p1_temp2=0;
   int tmp_1_fu_245_p1_temp2__temp=0;
   int tmp_1_reg_427_temp2=0;
   int tmp_1_reg_427_temp2__temp=0;
   int tmp_1_reg_427_temp3=0;
   int tmp_1_reg_427_temp3__temp=0;
   int tmp_2_fu_331_p4=0;
   int tmp_2_fu_331_p4__temp=0;
   int tmp_2_fu_331_p4_temp1=0;
   int tmp_2_fu_331_p4_temp1__temp=0;
   int tmp_4_fu_341_p3_temp2=0;
   int tmp_4_fu_341_p3_temp2__temp=0;
   int tmp_4_reg_450_temp2=0;
   int tmp_4_reg_450_temp2__temp=0;
   int tmp_4_reg_450_temp3=0;
   int tmp_4_reg_450_temp3__temp=0;
   int tmp_5_fu_319_p2=0;
   int tmp_5_fu_319_p2__temp=0;
   int tmp_6_fu_261_p3=0;
   int tmp_6_fu_261_p3__temp=0;
   int tmp_6_fu_261_p3_temp1=0;
   int tmp_6_fu_261_p3_temp1__temp=0;
   int tmp_7_fu_269_p1=0;
   int tmp_7_fu_269_p1__temp=0;
   int tmp_7_fu_269_p1_temp1=0;
   int tmp_7_fu_269_p1_temp1__temp=0;
   int tmp_8_fu_370_p2=0;
   int tmp_8_fu_370_p2__temp=0;
   int tmp_s_fu_325_p2=0;
   int tmp_s_fu_325_p2__temp=0;
   long long int ap_return_preg=0;
   long long int ap_return_preg__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_return=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_return__temp=0;
   unsigned long long  sub_key_load_reg_170=0;
   unsigned long long  sub_key_load_reg_170__temp=0;
   unsigned long long int sub_key_q0=0;
   unsigned long long int sub_key_q0__temp=0;
   long long int tmp_10_fu_388_p3=0;
   long long int tmp_10_fu_388_p3__temp=0;
   long long int tmp_15_fu_366_p1=0;
   long long int tmp_15_fu_366_p1__temp=0;
   long long int tmp_15_reg_473=0;
   long long int tmp_15_reg_473__temp=0;
   long long int tmp_18_cast_fu_375_p1=0;
   long long int tmp_18_cast_fu_375_p1__temp=0;
   long long int tmp_1_fu_245_p1=0;
   long long int tmp_1_fu_245_p1__temp=0;
   long long int tmp_1_reg_427=0;
   long long int tmp_1_reg_427__temp=0;
   long long int tmp_3_fu_379_p2=0;
   long long int tmp_3_fu_379_p2__temp=0;
   long long int tmp_4_fu_341_p3=0;
   long long int tmp_4_fu_341_p3__temp=0;
   long long int tmp_4_reg_450=0;
   long long int tmp_4_reg_450__temp=0;
   long long int tmp_9_fu_361_p1=0;
   long long int tmp_9_fu_361_p1__temp=0;
   unsigned long long  sub_key_ram[sub_key_MEM_SIZE]={0};
   int PC2_rom[PC2_MEM_SIZE]={
14,17,11,24,1,5,3,28,15,6,21,10,23,19,12,4,26,8,16,7,27,20,13,2,41,52,31,37,47,55,30,40,51,45,33,48,44,49,39,56,34,53,46,42,50,36,29,32};
   int iteration_shift_rom[iteration_shift_MEM_SIZE]={
1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};

   ap_ST_fsm_state1:
	clock=clock+1;
	//printf("\nstate1\n");
	//printf("ap_start :%d\n",ap_start);
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   j_3_reg_463__temp = j_3_reg_463 ;
   tmp_14_fu_384_p1_temp1__temp = tmp_14_fu_384_p1_temp1 ;
   tmp_6_fu_261_p3_temp1__temp = tmp_6_fu_261_p3_temp1 ;
   j_reg_159__temp = j_reg_159 ;
   tmp_1_reg_427_temp3__temp = tmp_1_reg_427_temp3 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   tmp_13_fu_293_p1_temp1__temp = tmp_13_fu_293_p1_temp1 ;
   PC2_q0__temp = PC2_q0 ;
   tmp_1_reg_427_temp2__temp = tmp_1_reg_427_temp2 ;
   tmp_7_fu_269_p1_temp1__temp = tmp_7_fu_269_p1_temp1 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   j_2_fu_255_p2__temp = j_2_fu_255_p2 ;
   j_1_reg_182__temp = j_1_reg_182 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   tmp_2_fu_331_p4_temp1__temp = tmp_2_fu_331_p4_temp1 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   tmp_4_reg_450_temp2__temp = tmp_4_reg_450_temp2 ;
   D1_cast_fu_305_p1_temp2__temp = D1_cast_fu_305_p1_temp2 ;
   sub_key_address0__temp = sub_key_address0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   PC2_ce0__temp = PC2_ce0 ;
   tmp_4_fu_341_p3_temp2__temp = tmp_4_fu_341_p3_temp2 ;
   C_assign_fu_82_temp1__temp = C_assign_fu_82_temp1 ;
   C_assign_fu_82_temp111__temp = C_assign_fu_82_temp111 ;
   tmp_7_fu_269_p1__temp = tmp_7_fu_269_p1 ;
   tmp_6_fu_261_p3__temp = tmp_6_fu_261_p3 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   tmp_15_reg_473_temp1__temp = tmp_15_reg_473_temp1 ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   exitcond_fu_250_p2__temp = exitcond_fu_250_p2 ;
   tmp_11_fu_285_p3__temp = tmp_11_fu_285_p3 ;
   exitcond2_fu_233_p2__temp = exitcond2_fu_233_p2 ;
   C_assign_fu_82_temp2__temp = C_assign_fu_82_temp2 ;
   C1_cast_fu_281_p1_temp2__temp = C1_cast_fu_281_p1_temp2 ;
   sub_key_we0__temp = sub_key_we0 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   exitcond1_fu_349_p2__temp = exitcond1_fu_349_p2 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   PC2_address0__temp = PC2_address0 ;
   tmp_8_fu_370_p2__temp = tmp_8_fu_370_p2 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_cast_fu_219_p1_temp2__temp = C_cast_fu_219_p1_temp2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   D1_cast_fu_305_p1__temp = D1_cast_fu_305_p1 ;
   C_assign_fu_82_temp4__temp = C_assign_fu_82_temp4 ;
   i_reg_148__temp = i_reg_148 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   tmp_13_fu_293_p1__temp = tmp_13_fu_293_p1 ;
   j_3_fu_355_p2__temp = j_3_fu_355_p2 ;
   tmp_11_fu_285_p3_temp1__temp = tmp_11_fu_285_p3_temp1 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   tmp_5_fu_319_p2__temp = tmp_5_fu_319_p2 ;
   i_2_fu_239_p2__temp = i_2_fu_239_p2 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_2_reg_422__temp = i_2_reg_422 ;
   tmp_14_fu_384_p1__temp = tmp_14_fu_384_p1 ;
   tmp_2_fu_331_p4__temp = tmp_2_fu_331_p4 ;
   D_assign_fu_78_temp3__temp = D_assign_fu_78_temp3 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   tmp_s_fu_325_p2__temp = tmp_s_fu_325_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   C_assign_fu_82_temp3__temp = C_assign_fu_82_temp3 ;
   D_assign_fu_78_temp111__temp = D_assign_fu_78_temp111 ;
   C1_cast_fu_281_p1__temp = C1_cast_fu_281_p1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   D_cast_fu_215_p1_temp4__temp = D_cast_fu_215_p1_temp4 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   tmp_4_reg_450_temp3__temp = tmp_4_reg_450_temp3 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   tmp_1_fu_245_p1_temp2__temp = tmp_1_fu_245_p1_temp2 ;
   D_assign_fu_78_temp2__temp = D_assign_fu_78_temp2 ;
   tmp_15_fu_366_p1__temp = tmp_15_fu_366_p1 ;
   tmp_1_reg_427__temp = tmp_1_reg_427 ;
   sub_key_q0__temp = sub_key_q0 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_9_fu_361_p1__temp = tmp_9_fu_361_p1 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   tmp_4_reg_450__temp = tmp_4_reg_450 ;
   tmp_4_fu_341_p3__temp = tmp_4_fu_341_p3 ;
   tmp_3_fu_379_p2__temp = tmp_3_fu_379_p2 ;
   tmp_10_fu_388_p3__temp = tmp_10_fu_388_p3 ;
   tmp_15_reg_473__temp = tmp_15_reg_473 ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   tmp_1_fu_245_p1__temp = tmp_1_fu_245_p1 ;
   tmp_18_cast_fu_375_p1__temp = tmp_18_cast_fu_375_p1 ;

       tmp_1_reg_427 = tmp_1_reg_427 & 31 ;
       tmp_4_reg_450 = tmp_4_reg_450 & 72057594037927935 ;
       D_assign_fu_78 = D_assign_fu_78 & 268435455 ;
       C_assign_fu_82 = C_assign_fu_82 & 268435455 ;
       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       PC2_ce0 = 0;
       iteration_shift_ce0 = 0;
               exitcond_fu_250_p2 =   ( j_reg_159__temp  == iteration_shift_load_reg_437__temp  ? 1 : 0 ) ;
               exitcond1_fu_349_p2 =   ( j_1_reg_182__temp  == 48 ? 1 :  0 ) ;
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           C_assign_fu_82 =   (  ( C_assign_fu_82__temp  & 4026531840 )  |  ( C & 268435455 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           D_assign_fu_78 =  (  ( D_assign_fu_78__temp  & 4026531840 )  |  ( D & 268435455 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_reg_148 =  0;
       }
       if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               C_assign_fu_82 =   (  ( C_assign_fu_82__temp  & 4026531840 )  |  ( C & 268435455 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               D_assign_fu_78 =  (  ( D_assign_fu_78__temp  & 4026531840 )  |  ( D & 268435455 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_reg_148 =  0;
       }
       if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:
	clock=clock+1;
	//printf("\nstate2\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   j_3_reg_463__temp = j_3_reg_463 ;
   tmp_14_fu_384_p1_temp1__temp = tmp_14_fu_384_p1_temp1 ;
   tmp_6_fu_261_p3_temp1__temp = tmp_6_fu_261_p3_temp1 ;
   j_reg_159__temp = j_reg_159 ;
   tmp_1_reg_427_temp3__temp = tmp_1_reg_427_temp3 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   tmp_13_fu_293_p1_temp1__temp = tmp_13_fu_293_p1_temp1 ;
   PC2_q0__temp = PC2_q0 ;
   tmp_1_reg_427_temp2__temp = tmp_1_reg_427_temp2 ;
   tmp_7_fu_269_p1_temp1__temp = tmp_7_fu_269_p1_temp1 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   j_2_fu_255_p2__temp = j_2_fu_255_p2 ;
   j_1_reg_182__temp = j_1_reg_182 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   tmp_2_fu_331_p4_temp1__temp = tmp_2_fu_331_p4_temp1 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   tmp_4_reg_450_temp2__temp = tmp_4_reg_450_temp2 ;
   D1_cast_fu_305_p1_temp2__temp = D1_cast_fu_305_p1_temp2 ;
   sub_key_address0__temp = sub_key_address0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   PC2_ce0__temp = PC2_ce0 ;
   tmp_4_fu_341_p3_temp2__temp = tmp_4_fu_341_p3_temp2 ;
   C_assign_fu_82_temp1__temp = C_assign_fu_82_temp1 ;
   C_assign_fu_82_temp111__temp = C_assign_fu_82_temp111 ;
   tmp_7_fu_269_p1__temp = tmp_7_fu_269_p1 ;
   tmp_6_fu_261_p3__temp = tmp_6_fu_261_p3 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   tmp_15_reg_473_temp1__temp = tmp_15_reg_473_temp1 ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   exitcond_fu_250_p2__temp = exitcond_fu_250_p2 ;
   tmp_11_fu_285_p3__temp = tmp_11_fu_285_p3 ;
   exitcond2_fu_233_p2__temp = exitcond2_fu_233_p2 ;
   C_assign_fu_82_temp2__temp = C_assign_fu_82_temp2 ;
   C1_cast_fu_281_p1_temp2__temp = C1_cast_fu_281_p1_temp2 ;
   sub_key_we0__temp = sub_key_we0 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   exitcond1_fu_349_p2__temp = exitcond1_fu_349_p2 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   PC2_address0__temp = PC2_address0 ;
   tmp_8_fu_370_p2__temp = tmp_8_fu_370_p2 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_cast_fu_219_p1_temp2__temp = C_cast_fu_219_p1_temp2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   D1_cast_fu_305_p1__temp = D1_cast_fu_305_p1 ;
   C_assign_fu_82_temp4__temp = C_assign_fu_82_temp4 ;
   i_reg_148__temp = i_reg_148 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   tmp_13_fu_293_p1__temp = tmp_13_fu_293_p1 ;
   j_3_fu_355_p2__temp = j_3_fu_355_p2 ;
   tmp_11_fu_285_p3_temp1__temp = tmp_11_fu_285_p3_temp1 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   tmp_5_fu_319_p2__temp = tmp_5_fu_319_p2 ;
   i_2_fu_239_p2__temp = i_2_fu_239_p2 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_2_reg_422__temp = i_2_reg_422 ;
   tmp_14_fu_384_p1__temp = tmp_14_fu_384_p1 ;
   tmp_2_fu_331_p4__temp = tmp_2_fu_331_p4 ;
   D_assign_fu_78_temp3__temp = D_assign_fu_78_temp3 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   tmp_s_fu_325_p2__temp = tmp_s_fu_325_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   C_assign_fu_82_temp3__temp = C_assign_fu_82_temp3 ;
   D_assign_fu_78_temp111__temp = D_assign_fu_78_temp111 ;
   C1_cast_fu_281_p1__temp = C1_cast_fu_281_p1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   D_cast_fu_215_p1_temp4__temp = D_cast_fu_215_p1_temp4 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   tmp_4_reg_450_temp3__temp = tmp_4_reg_450_temp3 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   tmp_1_fu_245_p1_temp2__temp = tmp_1_fu_245_p1_temp2 ;
   D_assign_fu_78_temp2__temp = D_assign_fu_78_temp2 ;
   tmp_15_fu_366_p1__temp = tmp_15_fu_366_p1 ;
   tmp_1_reg_427__temp = tmp_1_reg_427 ;
   sub_key_q0__temp = sub_key_q0 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_9_fu_361_p1__temp = tmp_9_fu_361_p1 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   tmp_4_reg_450__temp = tmp_4_reg_450 ;
   tmp_4_fu_341_p3__temp = tmp_4_fu_341_p3 ;
   tmp_3_fu_379_p2__temp = tmp_3_fu_379_p2 ;
   tmp_10_fu_388_p3__temp = tmp_10_fu_388_p3 ;
   tmp_15_reg_473__temp = tmp_15_reg_473 ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   tmp_1_fu_245_p1__temp = tmp_1_fu_245_p1 ;
   tmp_18_cast_fu_375_p1__temp = tmp_18_cast_fu_375_p1 ;

       tmp_1_reg_427 = tmp_1_reg_427 & 31 ;
       tmp_4_reg_450 = tmp_4_reg_450 & 72057594037927935 ;
       D_assign_fu_78 = D_assign_fu_78 & 268435455 ;
       C_assign_fu_82 = C_assign_fu_82 & 268435455 ;
       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       PC2_ce0 = 0;
       iteration_shift_ce0 = 1;
	       //printf(" i_reg_148__temp %d\n", i_reg_148__temp);
               exitcond2_fu_233_p2 =   ( i_reg_148__temp  == 16 ? 1 :  0 ) ;
   if(((exitcond2_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((exitcond2_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           grp_calculationofkeys_fu_193_ap_start_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_2_reg_422 =   ( i_reg_148__temp  + 1 ) ;
       }
       if((exitcond2_fu_233_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           tmp_1_reg_427 =   (  ( tmp_1_reg_427__temp  & 18446744073709551584 )  |  ( i_reg_148__temp  & 31 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           iteration_shift_ce0 =  1;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       if(iteration_shift_ce0){
          iteration_shift_q0=iteration_shift_rom[iteration_shift_address0];
       }
if (grp_calculationofkeys_fu_193_ap_start_reg==1){

grp_calculationofkeys_fu_193_ap_return= calculationofkeys(L,R,ap_clk,grp_calculationofkeys_fu_193_ap_done,grp_calculationofkeys_fu_193_ap_idle,grp_calculationofkeys_fu_193_ap_ready,grp_calculationofkeys_fu_193_ap_return,ap_rst,grp_calculationofkeys_fu_193_ap_start,grp_calculationofkeys_fu_193_sub_key_address0,grp_calculationofkeys_fu_193_sub_key_ce0,sub_key_q0,dummy,sub_key_ram);
grp_calculationofkeys_fu_193_ap_done=1;
//printf("in shift1\n");
//printf ("grp_calculationofkeys_fu_193_ap_return: %016llx\n", grp_calculationofkeys_fu_193_ap_return);
goto ap_ST_fsm_state8;
}
      // goto ap_ST_fsm_state8;
   }
   if(((exitcond2_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((exitcond2_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               grp_calculationofkeys_fu_193_ap_start_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_2_reg_422 =   ( i_reg_148__temp  + 1 ) ;
       }
       if((exitcond2_fu_233_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               tmp_1_reg_427 =   (  ( tmp_1_reg_427__temp  & 18446744073709551584 )  |  ( i_reg_148__temp  & 31 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
               iteration_shift_ce0 =  1;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       if(iteration_shift_ce0){
          iteration_shift_q0=iteration_shift_rom[iteration_shift_address0];
       }
if (grp_calculationofkeys_fu_193_ap_start_reg==1)
{
grp_calculationofkeys_fu_193_ap_return=calculationofkeys(L,R,ap_clk,grp_calculationofkeys_fu_193_ap_done,grp_calculationofkeys_fu_193_ap_idle,grp_calculationofkeys_fu_193_ap_ready,grp_calculationofkeys_fu_193_ap_return,ap_rst,grp_calculationofkeys_fu_193_ap_start,grp_calculationofkeys_fu_193_sub_key_address0,grp_calculationofkeys_fu_193_sub_key_ce0,sub_key_q0,&clock,sub_key_ram);
grp_calculationofkeys_fu_193_ap_done=1;

}
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:
	clock=clock+1;
	//printf("\nstate3\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   j_3_reg_463__temp = j_3_reg_463 ;
   tmp_14_fu_384_p1_temp1__temp = tmp_14_fu_384_p1_temp1 ;
   tmp_6_fu_261_p3_temp1__temp = tmp_6_fu_261_p3_temp1 ;
   j_reg_159__temp = j_reg_159 ;
   tmp_1_reg_427_temp3__temp = tmp_1_reg_427_temp3 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   tmp_13_fu_293_p1_temp1__temp = tmp_13_fu_293_p1_temp1 ;
   PC2_q0__temp = PC2_q0 ;
   tmp_1_reg_427_temp2__temp = tmp_1_reg_427_temp2 ;
   tmp_7_fu_269_p1_temp1__temp = tmp_7_fu_269_p1_temp1 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   j_2_fu_255_p2__temp = j_2_fu_255_p2 ;
   j_1_reg_182__temp = j_1_reg_182 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   tmp_2_fu_331_p4_temp1__temp = tmp_2_fu_331_p4_temp1 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   tmp_4_reg_450_temp2__temp = tmp_4_reg_450_temp2 ;
   D1_cast_fu_305_p1_temp2__temp = D1_cast_fu_305_p1_temp2 ;
   sub_key_address0__temp = sub_key_address0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   PC2_ce0__temp = PC2_ce0 ;
   tmp_4_fu_341_p3_temp2__temp = tmp_4_fu_341_p3_temp2 ;
   C_assign_fu_82_temp1__temp = C_assign_fu_82_temp1 ;
   C_assign_fu_82_temp111__temp = C_assign_fu_82_temp111 ;
   tmp_7_fu_269_p1__temp = tmp_7_fu_269_p1 ;
   tmp_6_fu_261_p3__temp = tmp_6_fu_261_p3 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   tmp_15_reg_473_temp1__temp = tmp_15_reg_473_temp1 ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   exitcond_fu_250_p2__temp = exitcond_fu_250_p2 ;
   tmp_11_fu_285_p3__temp = tmp_11_fu_285_p3 ;
   exitcond2_fu_233_p2__temp = exitcond2_fu_233_p2 ;
   C_assign_fu_82_temp2__temp = C_assign_fu_82_temp2 ;
   C1_cast_fu_281_p1_temp2__temp = C1_cast_fu_281_p1_temp2 ;
   sub_key_we0__temp = sub_key_we0 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   exitcond1_fu_349_p2__temp = exitcond1_fu_349_p2 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   PC2_address0__temp = PC2_address0 ;
   tmp_8_fu_370_p2__temp = tmp_8_fu_370_p2 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_cast_fu_219_p1_temp2__temp = C_cast_fu_219_p1_temp2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   D1_cast_fu_305_p1__temp = D1_cast_fu_305_p1 ;
   C_assign_fu_82_temp4__temp = C_assign_fu_82_temp4 ;
   i_reg_148__temp = i_reg_148 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   tmp_13_fu_293_p1__temp = tmp_13_fu_293_p1 ;
   j_3_fu_355_p2__temp = j_3_fu_355_p2 ;
   tmp_11_fu_285_p3_temp1__temp = tmp_11_fu_285_p3_temp1 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   tmp_5_fu_319_p2__temp = tmp_5_fu_319_p2 ;
   i_2_fu_239_p2__temp = i_2_fu_239_p2 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_2_reg_422__temp = i_2_reg_422 ;
   tmp_14_fu_384_p1__temp = tmp_14_fu_384_p1 ;
   tmp_2_fu_331_p4__temp = tmp_2_fu_331_p4 ;
   D_assign_fu_78_temp3__temp = D_assign_fu_78_temp3 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   tmp_s_fu_325_p2__temp = tmp_s_fu_325_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   C_assign_fu_82_temp3__temp = C_assign_fu_82_temp3 ;
   D_assign_fu_78_temp111__temp = D_assign_fu_78_temp111 ;
   C1_cast_fu_281_p1__temp = C1_cast_fu_281_p1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   D_cast_fu_215_p1_temp4__temp = D_cast_fu_215_p1_temp4 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   tmp_4_reg_450_temp3__temp = tmp_4_reg_450_temp3 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   tmp_1_fu_245_p1_temp2__temp = tmp_1_fu_245_p1_temp2 ;
   D_assign_fu_78_temp2__temp = D_assign_fu_78_temp2 ;
   tmp_15_fu_366_p1__temp = tmp_15_fu_366_p1 ;
   tmp_1_reg_427__temp = tmp_1_reg_427 ;
   sub_key_q0__temp = sub_key_q0 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_9_fu_361_p1__temp = tmp_9_fu_361_p1 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   tmp_4_reg_450__temp = tmp_4_reg_450 ;
   tmp_4_fu_341_p3__temp = tmp_4_fu_341_p3 ;
   tmp_3_fu_379_p2__temp = tmp_3_fu_379_p2 ;
   tmp_10_fu_388_p3__temp = tmp_10_fu_388_p3 ;
   tmp_15_reg_473__temp = tmp_15_reg_473 ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   tmp_1_fu_245_p1__temp = tmp_1_fu_245_p1 ;
   tmp_18_cast_fu_375_p1__temp = tmp_18_cast_fu_375_p1 ;

       tmp_1_reg_427 = tmp_1_reg_427 & 31 ;
       tmp_4_reg_450 = tmp_4_reg_450 & 72057594037927935 ;
       D_assign_fu_78 = D_assign_fu_78 & 268435455 ;
       C_assign_fu_82 = C_assign_fu_82 & 268435455 ;
       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       PC2_ce0 = 0;
       iteration_shift_ce0 = 0;
       if(1 == ap_CS_fsm_state3)
       {
           j_reg_159 =  0;
       }
       if(1 == ap_CS_fsm_state3)
       {
           iteration_shift_load_reg_437 =  iteration_shift_q0__temp ;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:
	clock=clock+1;
	//printf("\nstate4\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   j_3_reg_463__temp = j_3_reg_463 ;
   tmp_14_fu_384_p1_temp1__temp = tmp_14_fu_384_p1_temp1 ;
   tmp_6_fu_261_p3_temp1__temp = tmp_6_fu_261_p3_temp1 ;
   j_reg_159__temp = j_reg_159 ;
   tmp_1_reg_427_temp3__temp = tmp_1_reg_427_temp3 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   tmp_13_fu_293_p1_temp1__temp = tmp_13_fu_293_p1_temp1 ;
   PC2_q0__temp = PC2_q0 ;
   tmp_1_reg_427_temp2__temp = tmp_1_reg_427_temp2 ;
   tmp_7_fu_269_p1_temp1__temp = tmp_7_fu_269_p1_temp1 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   j_2_fu_255_p2__temp = j_2_fu_255_p2 ;
   j_1_reg_182__temp = j_1_reg_182 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   tmp_2_fu_331_p4_temp1__temp = tmp_2_fu_331_p4_temp1 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   tmp_4_reg_450_temp2__temp = tmp_4_reg_450_temp2 ;
   D1_cast_fu_305_p1_temp2__temp = D1_cast_fu_305_p1_temp2 ;
   sub_key_address0__temp = sub_key_address0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   PC2_ce0__temp = PC2_ce0 ;
   tmp_4_fu_341_p3_temp2__temp = tmp_4_fu_341_p3_temp2 ;
   C_assign_fu_82_temp1__temp = C_assign_fu_82_temp1 ;
   C_assign_fu_82_temp111__temp = C_assign_fu_82_temp111 ;
   tmp_7_fu_269_p1__temp = tmp_7_fu_269_p1 ;
   tmp_6_fu_261_p3__temp = tmp_6_fu_261_p3 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   tmp_15_reg_473_temp1__temp = tmp_15_reg_473_temp1 ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   exitcond_fu_250_p2__temp = exitcond_fu_250_p2 ;
   tmp_11_fu_285_p3__temp = tmp_11_fu_285_p3 ;
   exitcond2_fu_233_p2__temp = exitcond2_fu_233_p2 ;
   C_assign_fu_82_temp2__temp = C_assign_fu_82_temp2 ;
   C1_cast_fu_281_p1_temp2__temp = C1_cast_fu_281_p1_temp2 ;
   sub_key_we0__temp = sub_key_we0 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   exitcond1_fu_349_p2__temp = exitcond1_fu_349_p2 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   PC2_address0__temp = PC2_address0 ;
   tmp_8_fu_370_p2__temp = tmp_8_fu_370_p2 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_cast_fu_219_p1_temp2__temp = C_cast_fu_219_p1_temp2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   D1_cast_fu_305_p1__temp = D1_cast_fu_305_p1 ;
   C_assign_fu_82_temp4__temp = C_assign_fu_82_temp4 ;
   i_reg_148__temp = i_reg_148 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   tmp_13_fu_293_p1__temp = tmp_13_fu_293_p1 ;
   j_3_fu_355_p2__temp = j_3_fu_355_p2 ;
   tmp_11_fu_285_p3_temp1__temp = tmp_11_fu_285_p3_temp1 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   tmp_5_fu_319_p2__temp = tmp_5_fu_319_p2 ;
   i_2_fu_239_p2__temp = i_2_fu_239_p2 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_2_reg_422__temp = i_2_reg_422 ;
   tmp_14_fu_384_p1__temp = tmp_14_fu_384_p1 ;
   tmp_2_fu_331_p4__temp = tmp_2_fu_331_p4 ;
   D_assign_fu_78_temp3__temp = D_assign_fu_78_temp3 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   tmp_s_fu_325_p2__temp = tmp_s_fu_325_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   C_assign_fu_82_temp3__temp = C_assign_fu_82_temp3 ;
   D_assign_fu_78_temp111__temp = D_assign_fu_78_temp111 ;
   C1_cast_fu_281_p1__temp = C1_cast_fu_281_p1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   D_cast_fu_215_p1_temp4__temp = D_cast_fu_215_p1_temp4 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   tmp_4_reg_450_temp3__temp = tmp_4_reg_450_temp3 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   tmp_1_fu_245_p1_temp2__temp = tmp_1_fu_245_p1_temp2 ;
   D_assign_fu_78_temp2__temp = D_assign_fu_78_temp2 ;
   tmp_15_fu_366_p1__temp = tmp_15_fu_366_p1 ;
   tmp_1_reg_427__temp = tmp_1_reg_427 ;
   sub_key_q0__temp = sub_key_q0 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_9_fu_361_p1__temp = tmp_9_fu_361_p1 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   tmp_4_reg_450__temp = tmp_4_reg_450 ;
   tmp_4_fu_341_p3__temp = tmp_4_fu_341_p3 ;
   tmp_3_fu_379_p2__temp = tmp_3_fu_379_p2 ;
   tmp_10_fu_388_p3__temp = tmp_10_fu_388_p3 ;
   tmp_15_reg_473__temp = tmp_15_reg_473 ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   tmp_1_fu_245_p1__temp = tmp_1_fu_245_p1 ;
   tmp_18_cast_fu_375_p1__temp = tmp_18_cast_fu_375_p1 ;

       tmp_1_reg_427 = tmp_1_reg_427 & 31 ;
       tmp_4_reg_450 = tmp_4_reg_450 & 72057594037927935 ;
       D_assign_fu_78 = D_assign_fu_78 & 268435455 ;
       C_assign_fu_82 = C_assign_fu_82 & 268435455 ;
       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       PC2_ce0 = 0;
       iteration_shift_ce0 = 0;
               exitcond_fu_250_p2 =   ( j_reg_159__temp  == iteration_shift_load_reg_437__temp  ? 1 : 0 ) ;
   if(((exitcond_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4)) == 1){
       if((exitcond_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
           C_assign_fu_82 =   (  ( C_assign_fu_82__temp  & 4026531840 )  |  (  (  (  ( C_assign_fu_82__temp  & 134217727 )  << 1 )  |  (  (  ( C_assign_fu_82__temp  >> 27 )  & 1 )  & 1 )  )  & 268435455 )  ) ;
       }
       if((exitcond_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
           D_assign_fu_78 =   (  ( D_assign_fu_78__temp  & 4026531840 )  |  (  (  (  ( D_assign_fu_78__temp  & 134217727 )  << 1 )  |  (  (  ( D_assign_fu_78__temp  >> 27 )  & 1 )  & 1 )  )  & 268435455 )  ) ;
       }
       if((exitcond_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           j_1_reg_182 =  0;
       }
       if((exitcond_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
           j_reg_159 =   ( j_reg_159__temp  + 1 ) ;
       }
       if((exitcond_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           sub_key_load_reg_170 =  0;
       }
       if((exitcond_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           tmp_4_reg_450 =   (  ( tmp_4_reg_450__temp  & 1080863910568919040 )  |  (  (  (  (  ( C_assign_fu_82__temp  >> 4 )  & 268435455 )  << 32 )  |  (  ( C_assign_fu_82__temp  << 28 )  | D_assign_fu_78__temp  )  )  & 72057594037927935 )  ) ;
           sub_key_addr_reg_455 =  tmp_1_reg_427__temp ;

	 // printf("pc2 %llu\n",( C_assign_fu_82__temp  << 28 )  | D_assign_fu_78__temp  ) ;
	  // printf("tmp_4_reg_450 %lld\n",tmp_4_reg_450);
	  // printf("tmp_1_reg_427__temp %lld\n",tmp_1_reg_427__temp);
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto ap_ST_fsm_state5;
   }
   if(((exitcond_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4)) == 0){
       if((exitcond_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
               C_assign_fu_82 =   (  ( C_assign_fu_82__temp  & 4026531840 )  |  (  (  (  ( C_assign_fu_82__temp  & 134217727 )  << 1 )  |  (  (  ( C_assign_fu_82__temp  >> 27 )  & 1 )  & 1 )  )  & 268435455 )  ) ;
	       // printf("( C_assign_fu_82__temp  & 134217727 )  << 1 ) %d    ",( C_assign_fu_82__temp  & 134217727 )  << 1 );
		//printf("C_assign_fu_82 %d\n",C_assign_fu_82);
       }
       if((exitcond_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
               D_assign_fu_78 =   (  ( D_assign_fu_78__temp  & 4026531840 )  |  (  (  (  ( D_assign_fu_78__temp  & 134217727 )  << 1 )  |  (  (  ( D_assign_fu_78__temp  >> 27 )  & 1 )  & 1 )  )  & 268435455 )  ) ;
		//printf("( D_assign_fu_78__temp  & 134217727 )  << 1 )  %d     ",( D_assign_fu_78__temp  & 134217727 )  << 1 );
		//printf("D_assign_fu_78 %d\n",D_assign_fu_78);
       }
       if((exitcond_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
               j_1_reg_182 =  0;
       }
       if((exitcond_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
               j_reg_159 =   ( j_reg_159__temp  + 1 ) ;
       }
       if((exitcond_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
               sub_key_load_reg_170 =  0;
       }
       if((exitcond_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
               tmp_4_reg_450 =   (  ( tmp_4_reg_450__temp  & 1080863910568919040 )  |  (  (  (  (  ( C_assign_fu_82__temp  >> 4 )  & 268435455 )  << 32 )  |  (  ( C_assign_fu_82__temp  << 28 )  | D_assign_fu_78__temp  )  )  & 72057594037927935 )  ) ;
               sub_key_addr_reg_455 =  tmp_1_reg_427__temp ;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto ap_ST_fsm_state4;
   }

   ap_ST_fsm_state5:
	clock=clock+1;
	//printf("\nstate5\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   j_3_reg_463__temp = j_3_reg_463 ;
   tmp_14_fu_384_p1_temp1__temp = tmp_14_fu_384_p1_temp1 ;
   tmp_6_fu_261_p3_temp1__temp = tmp_6_fu_261_p3_temp1 ;
   j_reg_159__temp = j_reg_159 ;
   tmp_1_reg_427_temp3__temp = tmp_1_reg_427_temp3 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   tmp_13_fu_293_p1_temp1__temp = tmp_13_fu_293_p1_temp1 ;
   PC2_q0__temp = PC2_q0 ;
   tmp_1_reg_427_temp2__temp = tmp_1_reg_427_temp2 ;
   tmp_7_fu_269_p1_temp1__temp = tmp_7_fu_269_p1_temp1 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   j_2_fu_255_p2__temp = j_2_fu_255_p2 ;
   j_1_reg_182__temp = j_1_reg_182 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   tmp_2_fu_331_p4_temp1__temp = tmp_2_fu_331_p4_temp1 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   tmp_4_reg_450_temp2__temp = tmp_4_reg_450_temp2 ;
   D1_cast_fu_305_p1_temp2__temp = D1_cast_fu_305_p1_temp2 ;
   sub_key_address0__temp = sub_key_address0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   PC2_ce0__temp = PC2_ce0 ;
   tmp_4_fu_341_p3_temp2__temp = tmp_4_fu_341_p3_temp2 ;
   C_assign_fu_82_temp1__temp = C_assign_fu_82_temp1 ;
   C_assign_fu_82_temp111__temp = C_assign_fu_82_temp111 ;
   tmp_7_fu_269_p1__temp = tmp_7_fu_269_p1 ;
   tmp_6_fu_261_p3__temp = tmp_6_fu_261_p3 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   tmp_15_reg_473_temp1__temp = tmp_15_reg_473_temp1 ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   exitcond_fu_250_p2__temp = exitcond_fu_250_p2 ;
   tmp_11_fu_285_p3__temp = tmp_11_fu_285_p3 ;
   exitcond2_fu_233_p2__temp = exitcond2_fu_233_p2 ;
   C_assign_fu_82_temp2__temp = C_assign_fu_82_temp2 ;
   C1_cast_fu_281_p1_temp2__temp = C1_cast_fu_281_p1_temp2 ;
   sub_key_we0__temp = sub_key_we0 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   exitcond1_fu_349_p2__temp = exitcond1_fu_349_p2 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   PC2_address0__temp = PC2_address0 ;
   tmp_8_fu_370_p2__temp = tmp_8_fu_370_p2 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_cast_fu_219_p1_temp2__temp = C_cast_fu_219_p1_temp2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   D1_cast_fu_305_p1__temp = D1_cast_fu_305_p1 ;
   C_assign_fu_82_temp4__temp = C_assign_fu_82_temp4 ;
   i_reg_148__temp = i_reg_148 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   tmp_13_fu_293_p1__temp = tmp_13_fu_293_p1 ;
   j_3_fu_355_p2__temp = j_3_fu_355_p2 ;
   tmp_11_fu_285_p3_temp1__temp = tmp_11_fu_285_p3_temp1 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   tmp_5_fu_319_p2__temp = tmp_5_fu_319_p2 ;
   i_2_fu_239_p2__temp = i_2_fu_239_p2 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_2_reg_422__temp = i_2_reg_422 ;
   tmp_14_fu_384_p1__temp = tmp_14_fu_384_p1 ;
   tmp_2_fu_331_p4__temp = tmp_2_fu_331_p4 ;
   D_assign_fu_78_temp3__temp = D_assign_fu_78_temp3 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   tmp_s_fu_325_p2__temp = tmp_s_fu_325_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   C_assign_fu_82_temp3__temp = C_assign_fu_82_temp3 ;
   D_assign_fu_78_temp111__temp = D_assign_fu_78_temp111 ;
   C1_cast_fu_281_p1__temp = C1_cast_fu_281_p1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   D_cast_fu_215_p1_temp4__temp = D_cast_fu_215_p1_temp4 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   tmp_4_reg_450_temp3__temp = tmp_4_reg_450_temp3 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   tmp_1_fu_245_p1_temp2__temp = tmp_1_fu_245_p1_temp2 ;
   D_assign_fu_78_temp2__temp = D_assign_fu_78_temp2 ;
   tmp_15_fu_366_p1__temp = tmp_15_fu_366_p1 ;
   tmp_1_reg_427__temp = tmp_1_reg_427 ;
   sub_key_q0__temp = sub_key_q0 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_9_fu_361_p1__temp = tmp_9_fu_361_p1 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   tmp_4_reg_450__temp = tmp_4_reg_450 ;
   tmp_4_fu_341_p3__temp = tmp_4_fu_341_p3 ;
   tmp_3_fu_379_p2__temp = tmp_3_fu_379_p2 ;
   tmp_10_fu_388_p3__temp = tmp_10_fu_388_p3 ;
   tmp_15_reg_473__temp = tmp_15_reg_473 ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   tmp_1_fu_245_p1__temp = tmp_1_fu_245_p1 ;
   tmp_18_cast_fu_375_p1__temp = tmp_18_cast_fu_375_p1 ;

       tmp_1_reg_427 = tmp_1_reg_427 & 31 ;
       tmp_4_reg_450 = tmp_4_reg_450 & 72057594037927935 ;
       D_assign_fu_78 = D_assign_fu_78 & 268435455 ;
       C_assign_fu_82 = C_assign_fu_82 & 268435455 ;
       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       PC2_ce0 = 1;
       iteration_shift_ce0 = 0;
               exitcond1_fu_349_p2 =   ( j_1_reg_182__temp  == 48 ? 1 :  0 ) ;
	//printf("\nexitcond1_fu_349_p2 %d\n",exitcond1_fu_349_p2 );
   if(((exitcond1_fu_349_p2 == 1) && (1 == ap_CS_fsm_state5)) == 1){
       if((exitcond1_fu_349_p2 == 1) && (1 == ap_CS_fsm_state5))
       {
           i_reg_148 =  i_2_reg_422__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           j_3_reg_463 =   ( j_1_reg_182__temp  + 1 ) ;
       }
       if((exitcond1_fu_349_p2 == 0) && (1 == ap_CS_fsm_state5))
       {
           tmp_15_reg_473 =   ( sub_key_load_reg_170__temp  & 9223372036854775807 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           PC2_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           sub_key_address0 =  sub_key_addr_reg_455__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           sub_key_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           sub_key_we0 =  1;
       }
       if(sub_key_ce0){
          sub_key_q0=sub_key_ram[sub_key_address0];
           if(sub_key_we0){
              sub_key_ram[sub_key_address0]=sub_key_load_reg_170;
           }
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       if(PC2_ce0){
          PC2_q0=PC2_rom[PC2_address0];
       }
       goto ap_ST_fsm_state2;
   }
   if(((exitcond1_fu_349_p2 == 1) && (1 == ap_CS_fsm_state5)) == 0){
       if((exitcond1_fu_349_p2 == 1) && (1 == ap_CS_fsm_state5))
       {
               i_reg_148 =  i_2_reg_422__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
               j_3_reg_463 =   ( j_1_reg_182__temp  + 1 ) ;
       }
       if((exitcond1_fu_349_p2 == 0) && (1 == ap_CS_fsm_state5))
       {
               tmp_15_reg_473 =   ( sub_key_load_reg_170__temp  & 9223372036854775807 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
               PC2_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
               sub_key_address0 =  sub_key_addr_reg_455__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
               sub_key_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
               sub_key_we0 =  1;
       }
       if(sub_key_ce0){
          sub_key_q0=sub_key_ram[sub_key_address0];
           if(sub_key_we0){
              sub_key_ram[sub_key_address0]=sub_key_load_reg_170;
           }
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       if(PC2_ce0){
          PC2_q0=PC2_rom[PC2_address0];
       }
       goto ap_ST_fsm_state6;
   }

   ap_ST_fsm_state6:
	clock=clock+1;
	//printf("\nstate6\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 1;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   j_3_reg_463__temp = j_3_reg_463 ;
   tmp_14_fu_384_p1_temp1__temp = tmp_14_fu_384_p1_temp1 ;
   tmp_6_fu_261_p3_temp1__temp = tmp_6_fu_261_p3_temp1 ;
   j_reg_159__temp = j_reg_159 ;
   tmp_1_reg_427_temp3__temp = tmp_1_reg_427_temp3 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   tmp_13_fu_293_p1_temp1__temp = tmp_13_fu_293_p1_temp1 ;
   PC2_q0__temp = PC2_q0 ;
   tmp_1_reg_427_temp2__temp = tmp_1_reg_427_temp2 ;
   tmp_7_fu_269_p1_temp1__temp = tmp_7_fu_269_p1_temp1 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   j_2_fu_255_p2__temp = j_2_fu_255_p2 ;
   j_1_reg_182__temp = j_1_reg_182 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   tmp_2_fu_331_p4_temp1__temp = tmp_2_fu_331_p4_temp1 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   tmp_4_reg_450_temp2__temp = tmp_4_reg_450_temp2 ;
   D1_cast_fu_305_p1_temp2__temp = D1_cast_fu_305_p1_temp2 ;
   sub_key_address0__temp = sub_key_address0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   PC2_ce0__temp = PC2_ce0 ;
   tmp_4_fu_341_p3_temp2__temp = tmp_4_fu_341_p3_temp2 ;
   C_assign_fu_82_temp1__temp = C_assign_fu_82_temp1 ;
   C_assign_fu_82_temp111__temp = C_assign_fu_82_temp111 ;
   tmp_7_fu_269_p1__temp = tmp_7_fu_269_p1 ;
   tmp_6_fu_261_p3__temp = tmp_6_fu_261_p3 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   tmp_15_reg_473_temp1__temp = tmp_15_reg_473_temp1 ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   exitcond_fu_250_p2__temp = exitcond_fu_250_p2 ;
   tmp_11_fu_285_p3__temp = tmp_11_fu_285_p3 ;
   exitcond2_fu_233_p2__temp = exitcond2_fu_233_p2 ;
   C_assign_fu_82_temp2__temp = C_assign_fu_82_temp2 ;
   C1_cast_fu_281_p1_temp2__temp = C1_cast_fu_281_p1_temp2 ;
   sub_key_we0__temp = sub_key_we0 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   exitcond1_fu_349_p2__temp = exitcond1_fu_349_p2 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   PC2_address0__temp = PC2_address0 ;
   tmp_8_fu_370_p2__temp = tmp_8_fu_370_p2 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_cast_fu_219_p1_temp2__temp = C_cast_fu_219_p1_temp2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   D1_cast_fu_305_p1__temp = D1_cast_fu_305_p1 ;
   C_assign_fu_82_temp4__temp = C_assign_fu_82_temp4 ;
   i_reg_148__temp = i_reg_148 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   tmp_13_fu_293_p1__temp = tmp_13_fu_293_p1 ;
   j_3_fu_355_p2__temp = j_3_fu_355_p2 ;
   tmp_11_fu_285_p3_temp1__temp = tmp_11_fu_285_p3_temp1 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   tmp_5_fu_319_p2__temp = tmp_5_fu_319_p2 ;
   i_2_fu_239_p2__temp = i_2_fu_239_p2 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_2_reg_422__temp = i_2_reg_422 ;
   tmp_14_fu_384_p1__temp = tmp_14_fu_384_p1 ;
   tmp_2_fu_331_p4__temp = tmp_2_fu_331_p4 ;
   D_assign_fu_78_temp3__temp = D_assign_fu_78_temp3 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   tmp_s_fu_325_p2__temp = tmp_s_fu_325_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   C_assign_fu_82_temp3__temp = C_assign_fu_82_temp3 ;
   D_assign_fu_78_temp111__temp = D_assign_fu_78_temp111 ;
   C1_cast_fu_281_p1__temp = C1_cast_fu_281_p1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   D_cast_fu_215_p1_temp4__temp = D_cast_fu_215_p1_temp4 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   tmp_4_reg_450_temp3__temp = tmp_4_reg_450_temp3 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   tmp_1_fu_245_p1_temp2__temp = tmp_1_fu_245_p1_temp2 ;
   D_assign_fu_78_temp2__temp = D_assign_fu_78_temp2 ;
   tmp_15_fu_366_p1__temp = tmp_15_fu_366_p1 ;
   tmp_1_reg_427__temp = tmp_1_reg_427 ;
   sub_key_q0__temp = sub_key_q0 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_9_fu_361_p1__temp = tmp_9_fu_361_p1 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   tmp_4_reg_450__temp = tmp_4_reg_450 ;
   tmp_4_fu_341_p3__temp = tmp_4_fu_341_p3 ;
   tmp_3_fu_379_p2__temp = tmp_3_fu_379_p2 ;
   tmp_10_fu_388_p3__temp = tmp_10_fu_388_p3 ;
   tmp_15_reg_473__temp = tmp_15_reg_473 ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   tmp_1_fu_245_p1__temp = tmp_1_fu_245_p1 ;
   tmp_18_cast_fu_375_p1__temp = tmp_18_cast_fu_375_p1 ;

       tmp_1_reg_427 = tmp_1_reg_427 & 31 ;
       tmp_4_reg_450 = tmp_4_reg_450 & 72057594037927935 ;
       D_assign_fu_78 = D_assign_fu_78 & 268435455 ;
       C_assign_fu_82 = C_assign_fu_82 & 268435455 ;
       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       PC2_ce0 = 0;
       iteration_shift_ce0 = 0;
       if(1 == ap_CS_fsm_state6)
       {
           PC2_load_reg_478 =  PC2_q0__temp ;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto ap_ST_fsm_state7;

   ap_ST_fsm_state7:
	clock=clock+1;
	//printf("\nstate7\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 1;
	ap_CS_fsm_state8 = 0;
   j_3_reg_463__temp = j_3_reg_463 ;
   tmp_14_fu_384_p1_temp1__temp = tmp_14_fu_384_p1_temp1 ;
   tmp_6_fu_261_p3_temp1__temp = tmp_6_fu_261_p3_temp1 ;
   j_reg_159__temp = j_reg_159 ;
   tmp_1_reg_427_temp3__temp = tmp_1_reg_427_temp3 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   tmp_13_fu_293_p1_temp1__temp = tmp_13_fu_293_p1_temp1 ;
   PC2_q0__temp = PC2_q0 ;
   tmp_1_reg_427_temp2__temp = tmp_1_reg_427_temp2 ;
   tmp_7_fu_269_p1_temp1__temp = tmp_7_fu_269_p1_temp1 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   j_2_fu_255_p2__temp = j_2_fu_255_p2 ;
   j_1_reg_182__temp = j_1_reg_182 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   tmp_2_fu_331_p4_temp1__temp = tmp_2_fu_331_p4_temp1 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   tmp_4_reg_450_temp2__temp = tmp_4_reg_450_temp2 ;
   D1_cast_fu_305_p1_temp2__temp = D1_cast_fu_305_p1_temp2 ;
   sub_key_address0__temp = sub_key_address0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   PC2_ce0__temp = PC2_ce0 ;
   tmp_4_fu_341_p3_temp2__temp = tmp_4_fu_341_p3_temp2 ;
   C_assign_fu_82_temp1__temp = C_assign_fu_82_temp1 ;
   C_assign_fu_82_temp111__temp = C_assign_fu_82_temp111 ;
   tmp_7_fu_269_p1__temp = tmp_7_fu_269_p1 ;
   tmp_6_fu_261_p3__temp = tmp_6_fu_261_p3 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   tmp_15_reg_473_temp1__temp = tmp_15_reg_473_temp1 ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   exitcond_fu_250_p2__temp = exitcond_fu_250_p2 ;
   tmp_11_fu_285_p3__temp = tmp_11_fu_285_p3 ;
   exitcond2_fu_233_p2__temp = exitcond2_fu_233_p2 ;
   C_assign_fu_82_temp2__temp = C_assign_fu_82_temp2 ;
   C1_cast_fu_281_p1_temp2__temp = C1_cast_fu_281_p1_temp2 ;
   sub_key_we0__temp = sub_key_we0 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   exitcond1_fu_349_p2__temp = exitcond1_fu_349_p2 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   PC2_address0__temp = PC2_address0 ;
   tmp_8_fu_370_p2__temp = tmp_8_fu_370_p2 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_cast_fu_219_p1_temp2__temp = C_cast_fu_219_p1_temp2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   D1_cast_fu_305_p1__temp = D1_cast_fu_305_p1 ;
   C_assign_fu_82_temp4__temp = C_assign_fu_82_temp4 ;
   i_reg_148__temp = i_reg_148 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   tmp_13_fu_293_p1__temp = tmp_13_fu_293_p1 ;
   j_3_fu_355_p2__temp = j_3_fu_355_p2 ;
   tmp_11_fu_285_p3_temp1__temp = tmp_11_fu_285_p3_temp1 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   tmp_5_fu_319_p2__temp = tmp_5_fu_319_p2 ;
   i_2_fu_239_p2__temp = i_2_fu_239_p2 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_2_reg_422__temp = i_2_reg_422 ;
   tmp_14_fu_384_p1__temp = tmp_14_fu_384_p1 ;
   tmp_2_fu_331_p4__temp = tmp_2_fu_331_p4 ;
   D_assign_fu_78_temp3__temp = D_assign_fu_78_temp3 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   tmp_s_fu_325_p2__temp = tmp_s_fu_325_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   C_assign_fu_82_temp3__temp = C_assign_fu_82_temp3 ;
   D_assign_fu_78_temp111__temp = D_assign_fu_78_temp111 ;
   C1_cast_fu_281_p1__temp = C1_cast_fu_281_p1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   D_cast_fu_215_p1_temp4__temp = D_cast_fu_215_p1_temp4 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   tmp_4_reg_450_temp3__temp = tmp_4_reg_450_temp3 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   tmp_1_fu_245_p1_temp2__temp = tmp_1_fu_245_p1_temp2 ;
   D_assign_fu_78_temp2__temp = D_assign_fu_78_temp2 ;
   tmp_15_fu_366_p1__temp = tmp_15_fu_366_p1 ;
   tmp_1_reg_427__temp = tmp_1_reg_427 ;
   sub_key_q0__temp = sub_key_q0 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_9_fu_361_p1__temp = tmp_9_fu_361_p1 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   tmp_4_reg_450__temp = tmp_4_reg_450 ;
   tmp_4_fu_341_p3__temp = tmp_4_fu_341_p3 ;
   tmp_3_fu_379_p2__temp = tmp_3_fu_379_p2 ;
   tmp_10_fu_388_p3__temp = tmp_10_fu_388_p3 ;
   tmp_15_reg_473__temp = tmp_15_reg_473 ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   tmp_1_fu_245_p1__temp = tmp_1_fu_245_p1 ;
   tmp_18_cast_fu_375_p1__temp = tmp_18_cast_fu_375_p1 ;

       tmp_1_reg_427 = tmp_1_reg_427 & 31 ;
       tmp_4_reg_450 = tmp_4_reg_450 & 72057594037927935 ;
       D_assign_fu_78 = D_assign_fu_78 & 268435455 ;
       C_assign_fu_82 = C_assign_fu_82 & 268435455 ;
       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       PC2_ce0 = 0;
       iteration_shift_ce0 = 0;
       if(1 == ap_CS_fsm_state7)
       {
           j_1_reg_182 =  j_3_reg_463__temp ;
	   //printf("j_1_reg_182 %d\n",j_1_reg_182);
       }
       if(1 == ap_CS_fsm_state7)
       {
           sub_key_load_reg_170 =   (  ( tmp_15_reg_473__temp  << 1 )  |  (  (  ( tmp_4_reg_450__temp  >>  ( 56 - PC2_load_reg_478__temp  )  )  & 1 )  & 1 )  ) ;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto ap_ST_fsm_state5;

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
   j_3_reg_463__temp = j_3_reg_463 ;
   tmp_14_fu_384_p1_temp1__temp = tmp_14_fu_384_p1_temp1 ;
   tmp_6_fu_261_p3_temp1__temp = tmp_6_fu_261_p3_temp1 ;
   j_reg_159__temp = j_reg_159 ;
   tmp_1_reg_427_temp3__temp = tmp_1_reg_427_temp3 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   ap_CS_fsm_state8__temp = ap_CS_fsm_state8 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   tmp_13_fu_293_p1_temp1__temp = tmp_13_fu_293_p1_temp1 ;
   PC2_q0__temp = PC2_q0 ;
   tmp_1_reg_427_temp2__temp = tmp_1_reg_427_temp2 ;
   tmp_7_fu_269_p1_temp1__temp = tmp_7_fu_269_p1_temp1 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   j_2_fu_255_p2__temp = j_2_fu_255_p2 ;
   j_1_reg_182__temp = j_1_reg_182 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   tmp_2_fu_331_p4_temp1__temp = tmp_2_fu_331_p4_temp1 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   tmp_4_reg_450_temp2__temp = tmp_4_reg_450_temp2 ;
   D1_cast_fu_305_p1_temp2__temp = D1_cast_fu_305_p1_temp2 ;
   sub_key_address0__temp = sub_key_address0 ;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   PC2_ce0__temp = PC2_ce0 ;
   tmp_4_fu_341_p3_temp2__temp = tmp_4_fu_341_p3_temp2 ;
   C_assign_fu_82_temp1__temp = C_assign_fu_82_temp1 ;
   C_assign_fu_82_temp111__temp = C_assign_fu_82_temp111 ;
   tmp_7_fu_269_p1__temp = tmp_7_fu_269_p1 ;
   tmp_6_fu_261_p3__temp = tmp_6_fu_261_p3 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   tmp_15_reg_473_temp1__temp = tmp_15_reg_473_temp1 ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   exitcond_fu_250_p2__temp = exitcond_fu_250_p2 ;
   tmp_11_fu_285_p3__temp = tmp_11_fu_285_p3 ;
   exitcond2_fu_233_p2__temp = exitcond2_fu_233_p2 ;
   C_assign_fu_82_temp2__temp = C_assign_fu_82_temp2 ;
   C1_cast_fu_281_p1_temp2__temp = C1_cast_fu_281_p1_temp2 ;
   sub_key_we0__temp = sub_key_we0 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   exitcond1_fu_349_p2__temp = exitcond1_fu_349_p2 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   PC2_address0__temp = PC2_address0 ;
   tmp_8_fu_370_p2__temp = tmp_8_fu_370_p2 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_cast_fu_219_p1_temp2__temp = C_cast_fu_219_p1_temp2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   D1_cast_fu_305_p1__temp = D1_cast_fu_305_p1 ;
   C_assign_fu_82_temp4__temp = C_assign_fu_82_temp4 ;
   i_reg_148__temp = i_reg_148 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   tmp_13_fu_293_p1__temp = tmp_13_fu_293_p1 ;
   j_3_fu_355_p2__temp = j_3_fu_355_p2 ;
   tmp_11_fu_285_p3_temp1__temp = tmp_11_fu_285_p3_temp1 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   tmp_5_fu_319_p2__temp = tmp_5_fu_319_p2 ;
   i_2_fu_239_p2__temp = i_2_fu_239_p2 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_2_reg_422__temp = i_2_reg_422 ;
   tmp_14_fu_384_p1__temp = tmp_14_fu_384_p1 ;
   tmp_2_fu_331_p4__temp = tmp_2_fu_331_p4 ;
   D_assign_fu_78_temp3__temp = D_assign_fu_78_temp3 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   tmp_s_fu_325_p2__temp = tmp_s_fu_325_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   C_assign_fu_82_temp3__temp = C_assign_fu_82_temp3 ;
   D_assign_fu_78_temp111__temp = D_assign_fu_78_temp111 ;
   C1_cast_fu_281_p1__temp = C1_cast_fu_281_p1 ;
   ap_CS_fsm_state7__temp = ap_CS_fsm_state7 ;
   D_cast_fu_215_p1_temp4__temp = D_cast_fu_215_p1_temp4 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   tmp_4_reg_450_temp3__temp = tmp_4_reg_450_temp3 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   tmp_1_fu_245_p1_temp2__temp = tmp_1_fu_245_p1_temp2 ;
   D_assign_fu_78_temp2__temp = D_assign_fu_78_temp2 ;
   tmp_15_fu_366_p1__temp = tmp_15_fu_366_p1 ;
   tmp_1_reg_427__temp = tmp_1_reg_427 ;
   sub_key_q0__temp = sub_key_q0 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_9_fu_361_p1__temp = tmp_9_fu_361_p1 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   tmp_4_reg_450__temp = tmp_4_reg_450 ;
   tmp_4_fu_341_p3__temp = tmp_4_fu_341_p3 ;
   tmp_3_fu_379_p2__temp = tmp_3_fu_379_p2 ;
   tmp_10_fu_388_p3__temp = tmp_10_fu_388_p3 ;
   tmp_15_reg_473__temp = tmp_15_reg_473 ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   tmp_1_fu_245_p1__temp = tmp_1_fu_245_p1 ;
   tmp_18_cast_fu_375_p1__temp = tmp_18_cast_fu_375_p1 ;

       tmp_1_reg_427 = tmp_1_reg_427 & 31 ;
       tmp_4_reg_450 = tmp_4_reg_450 & 72057594037927935 ;
       D_assign_fu_78 = D_assign_fu_78 & 268435455 ;
       C_assign_fu_82 = C_assign_fu_82 & 268435455 ;
       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       PC2_ce0 = 0;
       iteration_shift_ce0 = 0;
   if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) == 1){
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
           ap_return_preg =  grp_calculationofkeys_fu_193_ap_return__temp ;
       }
       if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
       }
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
           ap_ready =  1;
       }
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
           ap_return =  grp_calculationofkeys_fu_193_ap_return__temp ;
       }
       if(1 == ap_CS_fsm_state8)
       {
           sub_key_address0 =  grp_calculationofkeys_fu_193_sub_key_address0__temp ;
       }
       if(1 == ap_CS_fsm_state8)
       {
           sub_key_ce0 =  grp_calculationofkeys_fu_193_sub_key_ce0__temp ;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto end;
   }
   if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) == 0){
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
               ap_return_preg =  grp_calculationofkeys_fu_193_ap_return__temp ;
       }
       if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
       }
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
               ap_ready =  1;
       }
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
               ap_return =  grp_calculationofkeys_fu_193_ap_return__temp ;
       }
       if(1 == ap_CS_fsm_state8)
       {
               sub_key_address0 =  grp_calculationofkeys_fu_193_sub_key_address0__temp ;
       }
       if(1 == ap_CS_fsm_state8)
       {
               sub_key_ce0 =  grp_calculationofkeys_fu_193_sub_key_ce0__temp ;
       }
          PC2_address0 =  j_1_reg_182__temp ;
          iteration_shift_address0 =  i_reg_148__temp ;
       goto ap_ST_fsm_state8;
   }
   end:
	*dummy=clock;
       return ap_return;
}
