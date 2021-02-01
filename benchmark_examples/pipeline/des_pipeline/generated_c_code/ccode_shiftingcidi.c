#include<stdio.h>
#define sub_key_DataWidth 64
#define sub_key_AddressRange 16
#define sub_key_AddressWidth 4
#define sub_key_DWIDTH 64
#define sub_key_AWIDTH 4
#define sub_key_MEM_SIZE 16
#define iteration_shift_DataWidth 2
#define iteration_shift_AddressRange 16
#define iteration_shift_AddressWidth 4
#define iteration_shift_DWIDTH 2
#define iteration_shift_AWIDTH 4
#define iteration_shift_MEM_SIZE 16
#define PC2_DataWidth 6
#define PC2_AddressRange 48
#define PC2_AddressWidth 6
#define PC2_DWIDTH 6
#define PC2_AWIDTH 6
#define PC2_MEM_SIZE 48
void calculationofkeys(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,long long int * ,int *dummy);
void shiftingcidi(unsigned long long int *C__1,unsigned long long int *D__1,unsigned long long int *L__1,unsigned long long int *R__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,int *dummy){
unsigned long long int C=*C__1;
unsigned long long int D=*D__1;
unsigned long long int L=*L__1;
unsigned long long int R=*R__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
   int clock = *dummy;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   long long int ap_CS_fsm_state7=0;
   long long int ap_CS_fsm_state8=0;
   unsigned long long int C1_fu_273_p3=0;
   unsigned long long int C1_fu_273_p3__temp=0;
   unsigned long long int C__temp=0;
   unsigned long long int C_assign_fu_82=0;
   unsigned long long int C_assign_fu_82__temp=0;
   unsigned long long int C_assign_fu_82_temp_1=0;
   unsigned long long int C_assign_fu_82_temp_1__temp=0;
   unsigned long long int C_assign_fu_82_temp_25=0;
   unsigned long long int C_assign_fu_82_temp_25__temp=0;
   unsigned long long int C_assign_fu_82_temp_42=0;
   unsigned long long int C_assign_fu_82_temp_42__temp=0;
   unsigned long long int C_assign_fu_82_temp_43=0;
   unsigned long long int C_assign_fu_82_temp_43__temp=0;
   unsigned long long int C_assign_fu_82_temp_46=0;
   unsigned long long int C_assign_fu_82_temp_46__temp=0;
   unsigned long long int C_cast_fu_219_p1=0;
   unsigned long long int C_cast_fu_219_p1__temp=0;
   unsigned long long int C_cast_fu_219_p1_temp_0=0;
   unsigned long long int C_cast_fu_219_p1_temp_0__temp=0;
   unsigned long long int C_cast_fu_219_p1_temp_0_temp_2=0;
   unsigned long long int C_cast_fu_219_p1_temp_0_temp_2__temp=0;
   unsigned long long int D1_fu_297_p3=0;
   unsigned long long int D1_fu_297_p3__temp=0;
   unsigned long long int D__temp=0;
   unsigned long long int D_assign_fu_78=0;
   unsigned long long int D_assign_fu_78__temp=0;
   unsigned long long int D_assign_fu_78_temp_28=0;
   unsigned long long int D_assign_fu_78_temp_28__temp=0;
   unsigned long long int D_assign_fu_78_temp_4=0;
   unsigned long long int D_assign_fu_78_temp_47=0;
   unsigned long long int D_assign_fu_78_temp_47__temp=0;
   unsigned long long int D_assign_fu_78_temp_4__temp=0;
   unsigned long long int D_cast_fu_215_p1=0;
   unsigned long long int D_cast_fu_215_p1__temp=0;
   unsigned long long int D_cast_fu_215_p1_temp_3=0;
   unsigned long long int D_cast_fu_215_p1_temp_3__temp=0;
   unsigned long long int D_cast_fu_215_p1_temp_3_temp_5=0;
   unsigned long long int D_cast_fu_215_p1_temp_3_temp_5__temp=0;
   unsigned long long int L__temp=0;
   unsigned long long int PC2_address0=0;
   unsigned long long int PC2_address0__temp=0;
   unsigned long long int PC2_ce0=0;
   unsigned long long int PC2_ce0__temp=0;
   unsigned long long int PC2_load_reg_478=0;
   unsigned long long int PC2_load_reg_478__temp=0;
   unsigned long long int PC2_q0=0;
   unsigned long long int PC2_q0__temp=0;
   unsigned long long int R__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_return__temp=0;
   unsigned long long int ap_return_preg=0;
   unsigned long long int ap_return_preg__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_done=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_done__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_idle=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_idle__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_ready=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_ready__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_return=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_return__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_start=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_start__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_start_reg=0;
   unsigned long long int grp_calculationofkeys_fu_193_ap_start_reg__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_sub_key_address0=0;
   unsigned long long int grp_calculationofkeys_fu_193_sub_key_address0__temp=0;
   unsigned long long int grp_calculationofkeys_fu_193_sub_key_ce0=0;
   unsigned long long int grp_calculationofkeys_fu_193_sub_key_ce0__temp=0;
   unsigned long long int i_0_reg_148=0;
   unsigned long long int i_0_reg_148__temp=0;
   unsigned long long int i_fu_239_p2=0;
   unsigned long long int i_fu_239_p2__temp=0;
   unsigned long long int i_reg_422=0;
   unsigned long long int i_reg_422__temp=0;
   unsigned long long int icmp_ln105_fu_233_p2=0;
   unsigned long long int icmp_ln105_fu_233_p2__temp=0;
   unsigned long long int icmp_ln108_fu_250_p2=0;
   unsigned long long int icmp_ln108_fu_250_p2__temp=0;
   unsigned long long int icmp_ln121_fu_349_p2=0;
   unsigned long long int icmp_ln121_fu_349_p2__temp=0;
   unsigned long long int iteration_shift_address0=0;
   unsigned long long int iteration_shift_address0__temp=0;
   unsigned long long int iteration_shift_ce0=0;
   unsigned long long int iteration_shift_ce0__temp=0;
   unsigned long long int iteration_shift_load_reg_437=0;
   unsigned long long int iteration_shift_load_reg_437__temp=0;
   unsigned long long int iteration_shift_q0=0;
   unsigned long long int iteration_shift_q0__temp=0;
   unsigned long long int j_0_reg_159=0;
   unsigned long long int j_0_reg_159__temp=0;
   unsigned long long int j_1_reg_182=0;
   unsigned long long int j_1_reg_182__temp=0;
   unsigned long long int j_2_fu_355_p2=0;
   unsigned long long int j_2_fu_355_p2__temp=0;
   unsigned long long int j_2_reg_463=0;
   unsigned long long int j_2_reg_463__temp=0;
   unsigned long long int j_fu_255_p2=0;
   unsigned long long int j_fu_255_p2__temp=0;
   unsigned long long int lshr_ln125_fu_379_p2=0;
   unsigned long long int lshr_ln125_fu_379_p2__temp=0;
   unsigned long long int or_ln118_fu_325_p2=0;
   unsigned long long int or_ln118_fu_325_p2__temp=0;
   unsigned long long int or_ln_fu_388_p3=0;
   unsigned long long int or_ln_fu_388_p3__temp=0;
   unsigned long long int shl_ln118_fu_319_p2=0;
   unsigned long long int shl_ln118_fu_319_p2__temp=0;
   unsigned long long int sub_key_addr_reg_455=0;
   unsigned long long int sub_key_addr_reg_455__temp=0;
   unsigned long long int sub_key_address0=0;
   unsigned long long int sub_key_address0__temp=0;
   unsigned long long int sub_key_ce0=0;
   unsigned long long int sub_key_ce0__temp=0;
   unsigned long long int sub_key_load_reg_170=0;
   unsigned long long int sub_key_load_reg_170__temp=0;
   unsigned long long int sub_key_q0=0;
   unsigned long long int sub_key_q0__temp=0;
   unsigned long long int sub_key_we0=0;
   unsigned long long int sub_key_we0__temp=0;
   unsigned long long int sub_ln125_fu_370_p2=0;
   unsigned long long int sub_ln125_fu_370_p2__temp=0;
   unsigned long long int tmp_1_fu_331_p4=0;
   unsigned long long int tmp_1_fu_331_p4__temp=0;
   unsigned long long int tmp_1_fu_331_p4_temp_44=0;
   unsigned long long int tmp_1_fu_331_p4_temp_44__temp=0;
   unsigned long long int tmp_1_fu_331_p4_temp_45=0;
   unsigned long long int tmp_1_fu_331_p4_temp_45__temp=0;
   unsigned long long int tmp_2_fu_341_p3=0;
   unsigned long long int tmp_2_fu_341_p3__temp=0;
   unsigned long long int tmp_2_fu_341_p3_temp_30=0;
   unsigned long long int tmp_2_fu_341_p3_temp_30__temp=0;
   unsigned long long int tmp_2_fu_341_p3_temp_30_temp_32=0;
   unsigned long long int tmp_2_fu_341_p3_temp_30_temp_32__temp=0;
   unsigned long long int tmp_2_reg_450=0;
   unsigned long long int tmp_2_reg_450__temp=0;
   unsigned long long int tmp_2_reg_450_temp_31=0;
   unsigned long long int tmp_2_reg_450_temp_31__temp=0;
   unsigned long long int tmp_3_fu_261_p3=0;
   unsigned long long int tmp_3_fu_261_p3__temp=0;
   unsigned long long int tmp_4_fu_285_p3=0;
   unsigned long long int tmp_4_fu_285_p3__temp=0;
   unsigned long long int trunc_ln111_fu_269_p1=0;
   unsigned long long int trunc_ln111_fu_269_p1__temp=0;
   unsigned long long int trunc_ln111_fu_269_p1_temp_36=0;
   unsigned long long int trunc_ln111_fu_269_p1_temp_36__temp=0;
   unsigned long long int trunc_ln111_fu_269_p1_temp_37=0;
   unsigned long long int trunc_ln111_fu_269_p1_temp_37__temp=0;
   unsigned long long int trunc_ln113_fu_293_p1=0;
   unsigned long long int trunc_ln113_fu_293_p1__temp=0;
   unsigned long long int trunc_ln113_fu_293_p1_temp_38=0;
   unsigned long long int trunc_ln113_fu_293_p1_temp_38__temp=0;
   unsigned long long int trunc_ln113_fu_293_p1_temp_39=0;
   unsigned long long int trunc_ln113_fu_293_p1_temp_39__temp=0;
   unsigned long long int trunc_ln125_1_fu_366_p1=0;
   unsigned long long int trunc_ln125_1_fu_366_p1__temp=0;
   unsigned long long int trunc_ln125_1_reg_473=0;
   unsigned long long int trunc_ln125_1_reg_473__temp=0;
   unsigned long long int trunc_ln125_1_reg_473_temp_40=0;
   unsigned long long int trunc_ln125_1_reg_473_temp_40__temp=0;
   unsigned long long int trunc_ln125_1_reg_473_temp_41=0;
   unsigned long long int trunc_ln125_1_reg_473_temp_41__temp=0;
   unsigned long long int trunc_ln125_fu_384_p1=0;
   unsigned long long int trunc_ln125_fu_384_p1__temp=0;
   unsigned long long int zext_ln108_fu_245_p1=0;
   unsigned long long int zext_ln108_fu_245_p1__temp=0;
   unsigned long long int zext_ln108_fu_245_p1_temp_33=0;
   unsigned long long int zext_ln108_fu_245_p1_temp_33__temp=0;
   unsigned long long int zext_ln108_fu_245_p1_temp_33_temp_35=0;
   unsigned long long int zext_ln108_fu_245_p1_temp_33_temp_35__temp=0;
   unsigned long long int zext_ln108_reg_427=0;
   unsigned long long int zext_ln108_reg_427__temp=0;
   unsigned long long int zext_ln108_reg_427_temp_34=0;
   unsigned long long int zext_ln108_reg_427_temp_34__temp=0;
   unsigned long long int zext_ln111_fu_281_p1=0;
   unsigned long long int zext_ln111_fu_281_p1__temp=0;
   unsigned long long int zext_ln111_fu_281_p1_temp_24=0;
   unsigned long long int zext_ln111_fu_281_p1_temp_24__temp=0;
   unsigned long long int zext_ln111_fu_281_p1_temp_24_temp_26=0;
   unsigned long long int zext_ln111_fu_281_p1_temp_24_temp_26__temp=0;
   unsigned long long int zext_ln113_fu_305_p1=0;
   unsigned long long int zext_ln113_fu_305_p1__temp=0;
   unsigned long long int zext_ln113_fu_305_p1_temp_27=0;
   unsigned long long int zext_ln113_fu_305_p1_temp_27__temp=0;
   unsigned long long int zext_ln113_fu_305_p1_temp_27_temp_29=0;
   unsigned long long int zext_ln113_fu_305_p1_temp_27_temp_29__temp=0;
   unsigned long long int zext_ln125_1_fu_375_p1=0;
   unsigned long long int zext_ln125_1_fu_375_p1__temp=0;
   unsigned long long int zext_ln125_fu_361_p1=0;
   unsigned long long int zext_ln125_fu_361_p1__temp=0;
   unsigned long long int calculationofkeys_clk=0;
    ap_done=0;
    ap_start=1;
   unsigned long long int sub_key_ram[sub_key_MEM_SIZE];
   unsigned long long int iteration_shift_rom[iteration_shift_MEM_SIZE]={
1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};
   unsigned long long int PC2_rom[PC2_MEM_SIZE]={
14,17,11,24,1,5,3,28,15,6,21,10,23,19,12,4,26,8,16,7,27,20,13,2,41,52,31,37,47,55,30,40,51,45,33,48,44,49,39,56,34,53,46,42,50,36,29,32};

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
   j_2_fu_355_p2__temp = j_2_fu_355_p2 ;
   lshr_ln125_fu_379_p2__temp = lshr_ln125_fu_379_p2 ;
   j_fu_255_p2__temp = j_fu_255_p2 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   ap_rst__temp = ap_rst ;
   D_cast_fu_215_p1_temp_3_temp_5__temp = D_cast_fu_215_p1_temp_3_temp_5 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   trunc_ln113_fu_293_p1_temp_39__temp = trunc_ln113_fu_293_p1_temp_39 ;
   i_0_reg_148__temp = i_0_reg_148 ;
   sub_ln125_fu_370_p2__temp = sub_ln125_fu_370_p2 ;
   ap_ready__temp = ap_ready ;
   or_ln_fu_388_p3__temp = or_ln_fu_388_p3 ;
   tmp_2_fu_341_p3__temp = tmp_2_fu_341_p3 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_assign_fu_82_temp_46__temp = C_assign_fu_82_temp_46 ;
   j_0_reg_159__temp = j_0_reg_159 ;
   R__temp = R ;
   tmp_2_reg_450__temp = tmp_2_reg_450 ;
   sub_key_address0__temp = sub_key_address0 ;
   trunc_ln125_1_reg_473_temp_41__temp = trunc_ln125_1_reg_473_temp_41 ;
   C_assign_fu_82_temp_42__temp = C_assign_fu_82_temp_42 ;
   D_assign_fu_78_temp_47__temp = D_assign_fu_78_temp_47 ;
   L__temp = L ;
   j_1_reg_182__temp = j_1_reg_182 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   or_ln118_fu_325_p2__temp = or_ln118_fu_325_p2 ;
   trunc_ln125_1_fu_366_p1__temp = trunc_ln125_1_fu_366_p1 ;
   trunc_ln125_1_reg_473_temp_40__temp = trunc_ln125_1_reg_473_temp_40 ;
   ap_idle__temp = ap_idle ;
   C_cast_fu_219_p1_temp_0_temp_2__temp = C_cast_fu_219_p1_temp_0_temp_2 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   ap_return__temp = ap_return ;
   zext_ln108_fu_245_p1_temp_33_temp_35__temp = zext_ln108_fu_245_p1_temp_33_temp_35 ;
   ap_clk__temp = ap_clk ;
   i_reg_422__temp = i_reg_422 ;
   trunc_ln113_fu_293_p1_temp_38__temp = trunc_ln113_fu_293_p1_temp_38 ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   zext_ln108_reg_427__temp = zext_ln108_reg_427 ;
   tmp_2_fu_341_p3_temp_30__temp = tmp_2_fu_341_p3_temp_30 ;
   ap_start__temp = ap_start ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   sub_key_q0__temp = sub_key_q0 ;
   sub_key_we0__temp = sub_key_we0 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   tmp_1_fu_331_p4_temp_44__temp = tmp_1_fu_331_p4_temp_44 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   ap_return_preg__temp = ap_return_preg ;
   shl_ln118_fu_319_p2__temp = shl_ln118_fu_319_p2 ;
   D_assign_fu_78_temp_28__temp = D_assign_fu_78_temp_28 ;
   D__temp = D ;
   PC2_ce0__temp = PC2_ce0 ;
   j_2_reg_463__temp = j_2_reg_463 ;
   trunc_ln111_fu_269_p1_temp_37__temp = trunc_ln111_fu_269_p1_temp_37 ;
   zext_ln125_1_fu_375_p1__temp = zext_ln125_1_fu_375_p1 ;
   trunc_ln125_1_reg_473__temp = trunc_ln125_1_reg_473 ;
   C_cast_fu_219_p1_temp_0__temp = C_cast_fu_219_p1_temp_0 ;
   C_assign_fu_82_temp_25__temp = C_assign_fu_82_temp_25 ;
   zext_ln108_reg_427_temp_34__temp = zext_ln108_reg_427_temp_34 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   zext_ln111_fu_281_p1_temp_24_temp_26__temp = zext_ln111_fu_281_p1_temp_24_temp_26 ;
   i_fu_239_p2__temp = i_fu_239_p2 ;
   trunc_ln111_fu_269_p1__temp = trunc_ln111_fu_269_p1 ;
   zext_ln108_fu_245_p1_temp_33__temp = zext_ln108_fu_245_p1_temp_33 ;
   tmp_1_fu_331_p4_temp_45__temp = tmp_1_fu_331_p4_temp_45 ;
   zext_ln111_fu_281_p1__temp = zext_ln111_fu_281_p1 ;
   tmp_2_reg_450_temp_31__temp = tmp_2_reg_450_temp_31 ;
   C_assign_fu_82_temp_43__temp = C_assign_fu_82_temp_43 ;
   zext_ln113_fu_305_p1_temp_27_temp_29__temp = zext_ln113_fu_305_p1_temp_27_temp_29 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   C_assign_fu_82_temp_1__temp = C_assign_fu_82_temp_1 ;
   PC2_q0__temp = PC2_q0 ;
   icmp_ln121_fu_349_p2__temp = icmp_ln121_fu_349_p2 ;
   icmp_ln105_fu_233_p2__temp = icmp_ln105_fu_233_p2 ;
   tmp_4_fu_285_p3__temp = tmp_4_fu_285_p3 ;
   zext_ln113_fu_305_p1__temp = zext_ln113_fu_305_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   zext_ln111_fu_281_p1_temp_24__temp = zext_ln111_fu_281_p1_temp_24 ;
   PC2_address0__temp = PC2_address0 ;
   D_cast_fu_215_p1_temp_3__temp = D_cast_fu_215_p1_temp_3 ;
   tmp_1_fu_331_p4__temp = tmp_1_fu_331_p4 ;
   zext_ln113_fu_305_p1_temp_27__temp = zext_ln113_fu_305_p1_temp_27 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   trunc_ln113_fu_293_p1__temp = trunc_ln113_fu_293_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln108_fu_250_p2__temp = icmp_ln108_fu_250_p2 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   zext_ln108_fu_245_p1__temp = zext_ln108_fu_245_p1 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   C__temp = C ;
   trunc_ln125_fu_384_p1__temp = trunc_ln125_fu_384_p1 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   zext_ln125_fu_361_p1__temp = zext_ln125_fu_361_p1 ;
   trunc_ln111_fu_269_p1_temp_36__temp = trunc_ln111_fu_269_p1_temp_36 ;
   tmp_3_fu_261_p3__temp = tmp_3_fu_261_p3 ;
   tmp_2_fu_341_p3_temp_30_temp_32__temp = tmp_2_fu_341_p3_temp_30_temp_32 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   D_assign_fu_78_temp_4__temp = D_assign_fu_78_temp_4 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       iteration_shift_ce0 = 0;
       iteration_shift_address0 =   (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC2_ce0 = 0;
       PC2_address0 =   (  ( j_1_reg_182__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(ap_rst == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))){
if(grp_calculationofkeys_fu_193_ap_ready == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}

}

}
    if(!(1 == ap_CS_fsm_state5)){
PC2_ce0 = 0 ; 

}
    if(!(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_ready = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state2)){
iteration_shift_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_address0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_ce0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
sub_key_we0 = 0 ; 

}
    zext_ln108_reg_427 =  ( ( zext_ln108_reg_427 & 31 ) & 18446744073709551615 )  ; 
tmp_2_reg_450 =  ( ( tmp_2_reg_450 & 72057594037927935 ) & 1152921504606846975 )  ; 
D_assign_fu_78 =  ( ( D_assign_fu_78 & 268435455 ) & 4294967295 )  ; 
C_assign_fu_82 =  ( ( C_assign_fu_82 & 268435455 ) & 4294967295 )  ; 
               icmp_ln108_fu_250_p2 =   ( j_0_reg_159__temp  == iteration_shift_load_reg_437__temp  ? 1 : 0 ) ;
               icmp_ln121_fu_349_p2 =   ( j_1_reg_182__temp  == 48 ? 1 :  0 ) ;
       if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               icmp_ln108_fu_250_p2 =   ( j_0_reg_159__temp  == iteration_shift_load_reg_437__temp  ? 1 : 0 ) ;
               icmp_ln121_fu_349_p2 =   ( j_1_reg_182__temp  == 48 ? 1 :  0 ) ;
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           C_assign_fu_82 =   ( (  ( (  ( C & 4294967295 )  & 268435455 ) & 18446744073709551615 )  |  ( ( C_assign_fu_82__temp  & 4026531840 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           D_assign_fu_78 =   ( (  ( (  ( D & 4294967295 )  & 268435455 ) & 18446744073709551615 )  |  ( ( D_assign_fu_78__temp  & 4026531840 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_0_reg_148 =  0;
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               C_assign_fu_82 =   ( (  ( (  ( C & 4294967295 )  & 268435455 ) & 18446744073709551615 )  |  ( ( C_assign_fu_82__temp  & 4026531840 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               D_assign_fu_78 =   ( (  ( (  ( D & 4294967295 )  & 268435455 ) & 18446744073709551615 )  |  ( ( D_assign_fu_78__temp  & 4026531840 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_0_reg_148 =  0;
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
   j_2_fu_355_p2__temp = j_2_fu_355_p2 ;
   lshr_ln125_fu_379_p2__temp = lshr_ln125_fu_379_p2 ;
   j_fu_255_p2__temp = j_fu_255_p2 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   ap_rst__temp = ap_rst ;
   D_cast_fu_215_p1_temp_3_temp_5__temp = D_cast_fu_215_p1_temp_3_temp_5 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   trunc_ln113_fu_293_p1_temp_39__temp = trunc_ln113_fu_293_p1_temp_39 ;
   i_0_reg_148__temp = i_0_reg_148 ;
   sub_ln125_fu_370_p2__temp = sub_ln125_fu_370_p2 ;
   ap_ready__temp = ap_ready ;
   or_ln_fu_388_p3__temp = or_ln_fu_388_p3 ;
   tmp_2_fu_341_p3__temp = tmp_2_fu_341_p3 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_assign_fu_82_temp_46__temp = C_assign_fu_82_temp_46 ;
   j_0_reg_159__temp = j_0_reg_159 ;
   R__temp = R ;
   tmp_2_reg_450__temp = tmp_2_reg_450 ;
   sub_key_address0__temp = sub_key_address0 ;
   trunc_ln125_1_reg_473_temp_41__temp = trunc_ln125_1_reg_473_temp_41 ;
   C_assign_fu_82_temp_42__temp = C_assign_fu_82_temp_42 ;
   D_assign_fu_78_temp_47__temp = D_assign_fu_78_temp_47 ;
   L__temp = L ;
   j_1_reg_182__temp = j_1_reg_182 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   or_ln118_fu_325_p2__temp = or_ln118_fu_325_p2 ;
   trunc_ln125_1_fu_366_p1__temp = trunc_ln125_1_fu_366_p1 ;
   trunc_ln125_1_reg_473_temp_40__temp = trunc_ln125_1_reg_473_temp_40 ;
   ap_idle__temp = ap_idle ;
   C_cast_fu_219_p1_temp_0_temp_2__temp = C_cast_fu_219_p1_temp_0_temp_2 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   ap_return__temp = ap_return ;
   zext_ln108_fu_245_p1_temp_33_temp_35__temp = zext_ln108_fu_245_p1_temp_33_temp_35 ;
   ap_clk__temp = ap_clk ;
   i_reg_422__temp = i_reg_422 ;
   trunc_ln113_fu_293_p1_temp_38__temp = trunc_ln113_fu_293_p1_temp_38 ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   zext_ln108_reg_427__temp = zext_ln108_reg_427 ;
   tmp_2_fu_341_p3_temp_30__temp = tmp_2_fu_341_p3_temp_30 ;
   ap_start__temp = ap_start ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   sub_key_q0__temp = sub_key_q0 ;
   sub_key_we0__temp = sub_key_we0 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   tmp_1_fu_331_p4_temp_44__temp = tmp_1_fu_331_p4_temp_44 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   ap_return_preg__temp = ap_return_preg ;
   shl_ln118_fu_319_p2__temp = shl_ln118_fu_319_p2 ;
   D_assign_fu_78_temp_28__temp = D_assign_fu_78_temp_28 ;
   D__temp = D ;
   PC2_ce0__temp = PC2_ce0 ;
   j_2_reg_463__temp = j_2_reg_463 ;
   trunc_ln111_fu_269_p1_temp_37__temp = trunc_ln111_fu_269_p1_temp_37 ;
   zext_ln125_1_fu_375_p1__temp = zext_ln125_1_fu_375_p1 ;
   trunc_ln125_1_reg_473__temp = trunc_ln125_1_reg_473 ;
   C_cast_fu_219_p1_temp_0__temp = C_cast_fu_219_p1_temp_0 ;
   C_assign_fu_82_temp_25__temp = C_assign_fu_82_temp_25 ;
   zext_ln108_reg_427_temp_34__temp = zext_ln108_reg_427_temp_34 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   zext_ln111_fu_281_p1_temp_24_temp_26__temp = zext_ln111_fu_281_p1_temp_24_temp_26 ;
   i_fu_239_p2__temp = i_fu_239_p2 ;
   trunc_ln111_fu_269_p1__temp = trunc_ln111_fu_269_p1 ;
   zext_ln108_fu_245_p1_temp_33__temp = zext_ln108_fu_245_p1_temp_33 ;
   tmp_1_fu_331_p4_temp_45__temp = tmp_1_fu_331_p4_temp_45 ;
   zext_ln111_fu_281_p1__temp = zext_ln111_fu_281_p1 ;
   tmp_2_reg_450_temp_31__temp = tmp_2_reg_450_temp_31 ;
   C_assign_fu_82_temp_43__temp = C_assign_fu_82_temp_43 ;
   zext_ln113_fu_305_p1_temp_27_temp_29__temp = zext_ln113_fu_305_p1_temp_27_temp_29 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   C_assign_fu_82_temp_1__temp = C_assign_fu_82_temp_1 ;
   PC2_q0__temp = PC2_q0 ;
   icmp_ln121_fu_349_p2__temp = icmp_ln121_fu_349_p2 ;
   icmp_ln105_fu_233_p2__temp = icmp_ln105_fu_233_p2 ;
   tmp_4_fu_285_p3__temp = tmp_4_fu_285_p3 ;
   zext_ln113_fu_305_p1__temp = zext_ln113_fu_305_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   zext_ln111_fu_281_p1_temp_24__temp = zext_ln111_fu_281_p1_temp_24 ;
   PC2_address0__temp = PC2_address0 ;
   D_cast_fu_215_p1_temp_3__temp = D_cast_fu_215_p1_temp_3 ;
   tmp_1_fu_331_p4__temp = tmp_1_fu_331_p4 ;
   zext_ln113_fu_305_p1_temp_27__temp = zext_ln113_fu_305_p1_temp_27 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   trunc_ln113_fu_293_p1__temp = trunc_ln113_fu_293_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln108_fu_250_p2__temp = icmp_ln108_fu_250_p2 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   zext_ln108_fu_245_p1__temp = zext_ln108_fu_245_p1 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   C__temp = C ;
   trunc_ln125_fu_384_p1__temp = trunc_ln125_fu_384_p1 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   zext_ln125_fu_361_p1__temp = zext_ln125_fu_361_p1 ;
   trunc_ln111_fu_269_p1_temp_36__temp = trunc_ln111_fu_269_p1_temp_36 ;
   tmp_3_fu_261_p3__temp = tmp_3_fu_261_p3 ;
   tmp_2_fu_341_p3_temp_30_temp_32__temp = tmp_2_fu_341_p3_temp_30_temp_32 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   D_assign_fu_78_temp_4__temp = D_assign_fu_78_temp_4 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       iteration_shift_ce0 = 0;
       iteration_shift_address0 =   (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC2_ce0 = 0;
       PC2_address0 =   (  ( j_1_reg_182__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(ap_rst == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))){
if(grp_calculationofkeys_fu_193_ap_ready == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}

}

}
    if(!(1 == ap_CS_fsm_state5)){
PC2_ce0 = 0 ; 

}
    if(!(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_ready = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state2)){
iteration_shift_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_address0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_ce0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
sub_key_we0 = 0 ; 

}
    zext_ln108_reg_427 =  ( ( zext_ln108_reg_427 & 31 ) & 18446744073709551615 )  ; 
tmp_2_reg_450 =  ( ( tmp_2_reg_450 & 72057594037927935 ) & 1152921504606846975 )  ; 
D_assign_fu_78 =  ( ( D_assign_fu_78 & 268435455 ) & 4294967295 )  ; 
C_assign_fu_82 =  ( ( C_assign_fu_82 & 268435455 ) & 4294967295 )  ; 
               icmp_ln105_fu_233_p2 =   ( i_0_reg_148__temp  == 16 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           iteration_shift_ce0 =  1;
       }
               icmp_ln105_fu_233_p2 =   ( i_0_reg_148__temp  == 16 ? 1 :  0 ) ;
   if(((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           grp_calculationofkeys_fu_193_ap_start_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_422 =   ( ( i_0_reg_148__temp  + 1 ) & 31 ) ;
       }
       if((icmp_ln105_fu_233_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           zext_ln108_reg_427 =   ( (  ( (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 31 ) & 18446744073709551615 )  |  ( ( zext_ln108_reg_427__temp  & 18446744073709551584 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(iteration_shift_ce0){
          iteration_shift_q0=iteration_shift_rom[iteration_shift_address0];
       }
if (grp_calculationofkeys_fu_193_ap_start_reg==1){
grp_calculationofkeys_fu_193_ap_start=1;
calculationofkeys_clk = clock;
calculationofkeys(&L,&R,&ap_clk,&grp_calculationofkeys_fu_193_ap_done,&grp_calculationofkeys_fu_193_ap_idle,&grp_calculationofkeys_fu_193_ap_ready,&grp_calculationofkeys_fu_193_ap_return,&ap_rst,&grp_calculationofkeys_fu_193_ap_start,&grp_calculationofkeys_fu_193_sub_key_address0,&grp_calculationofkeys_fu_193_sub_key_ce0,&sub_key_q0, sub_key_ram,&calculationofkeys_clk);
grp_calculationofkeys_fu_193_ap_done=1;
}
	   clock = calculationofkeys_clk;
       goto ap_ST_fsm_state8;
   }
   if(((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               grp_calculationofkeys_fu_193_ap_start_reg =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_422 =   ( ( i_0_reg_148__temp  + 1 ) & 31 ) ;
       }
       if((icmp_ln105_fu_233_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               zext_ln108_reg_427 =   ( (  ( (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 31 ) & 18446744073709551615 )  |  ( ( zext_ln108_reg_427__temp  & 18446744073709551584 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if(iteration_shift_ce0){
          iteration_shift_q0=iteration_shift_rom[iteration_shift_address0];
       }
if (grp_calculationofkeys_fu_193_ap_start_reg==1){
grp_calculationofkeys_fu_193_ap_start=1;
calculationofkeys_clk = clock;
calculationofkeys(&L,&R,&ap_clk,&grp_calculationofkeys_fu_193_ap_done,&grp_calculationofkeys_fu_193_ap_idle,&grp_calculationofkeys_fu_193_ap_ready,&grp_calculationofkeys_fu_193_ap_return,&ap_rst,&grp_calculationofkeys_fu_193_ap_start,&grp_calculationofkeys_fu_193_sub_key_address0,&grp_calculationofkeys_fu_193_sub_key_ce0,&sub_key_q0, sub_key_ram,&calculationofkeys_clk);
grp_calculationofkeys_fu_193_ap_done=1;
}
	   clock = calculationofkeys_clk;
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
   j_2_fu_355_p2__temp = j_2_fu_355_p2 ;
   lshr_ln125_fu_379_p2__temp = lshr_ln125_fu_379_p2 ;
   j_fu_255_p2__temp = j_fu_255_p2 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   ap_rst__temp = ap_rst ;
   D_cast_fu_215_p1_temp_3_temp_5__temp = D_cast_fu_215_p1_temp_3_temp_5 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   trunc_ln113_fu_293_p1_temp_39__temp = trunc_ln113_fu_293_p1_temp_39 ;
   i_0_reg_148__temp = i_0_reg_148 ;
   sub_ln125_fu_370_p2__temp = sub_ln125_fu_370_p2 ;
   ap_ready__temp = ap_ready ;
   or_ln_fu_388_p3__temp = or_ln_fu_388_p3 ;
   tmp_2_fu_341_p3__temp = tmp_2_fu_341_p3 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_assign_fu_82_temp_46__temp = C_assign_fu_82_temp_46 ;
   j_0_reg_159__temp = j_0_reg_159 ;
   R__temp = R ;
   tmp_2_reg_450__temp = tmp_2_reg_450 ;
   sub_key_address0__temp = sub_key_address0 ;
   trunc_ln125_1_reg_473_temp_41__temp = trunc_ln125_1_reg_473_temp_41 ;
   C_assign_fu_82_temp_42__temp = C_assign_fu_82_temp_42 ;
   D_assign_fu_78_temp_47__temp = D_assign_fu_78_temp_47 ;
   L__temp = L ;
   j_1_reg_182__temp = j_1_reg_182 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   or_ln118_fu_325_p2__temp = or_ln118_fu_325_p2 ;
   trunc_ln125_1_fu_366_p1__temp = trunc_ln125_1_fu_366_p1 ;
   trunc_ln125_1_reg_473_temp_40__temp = trunc_ln125_1_reg_473_temp_40 ;
   ap_idle__temp = ap_idle ;
   C_cast_fu_219_p1_temp_0_temp_2__temp = C_cast_fu_219_p1_temp_0_temp_2 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   ap_return__temp = ap_return ;
   zext_ln108_fu_245_p1_temp_33_temp_35__temp = zext_ln108_fu_245_p1_temp_33_temp_35 ;
   ap_clk__temp = ap_clk ;
   i_reg_422__temp = i_reg_422 ;
   trunc_ln113_fu_293_p1_temp_38__temp = trunc_ln113_fu_293_p1_temp_38 ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   zext_ln108_reg_427__temp = zext_ln108_reg_427 ;
   tmp_2_fu_341_p3_temp_30__temp = tmp_2_fu_341_p3_temp_30 ;
   ap_start__temp = ap_start ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   sub_key_q0__temp = sub_key_q0 ;
   sub_key_we0__temp = sub_key_we0 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   tmp_1_fu_331_p4_temp_44__temp = tmp_1_fu_331_p4_temp_44 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   ap_return_preg__temp = ap_return_preg ;
   shl_ln118_fu_319_p2__temp = shl_ln118_fu_319_p2 ;
   D_assign_fu_78_temp_28__temp = D_assign_fu_78_temp_28 ;
   D__temp = D ;
   PC2_ce0__temp = PC2_ce0 ;
   j_2_reg_463__temp = j_2_reg_463 ;
   trunc_ln111_fu_269_p1_temp_37__temp = trunc_ln111_fu_269_p1_temp_37 ;
   zext_ln125_1_fu_375_p1__temp = zext_ln125_1_fu_375_p1 ;
   trunc_ln125_1_reg_473__temp = trunc_ln125_1_reg_473 ;
   C_cast_fu_219_p1_temp_0__temp = C_cast_fu_219_p1_temp_0 ;
   C_assign_fu_82_temp_25__temp = C_assign_fu_82_temp_25 ;
   zext_ln108_reg_427_temp_34__temp = zext_ln108_reg_427_temp_34 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   zext_ln111_fu_281_p1_temp_24_temp_26__temp = zext_ln111_fu_281_p1_temp_24_temp_26 ;
   i_fu_239_p2__temp = i_fu_239_p2 ;
   trunc_ln111_fu_269_p1__temp = trunc_ln111_fu_269_p1 ;
   zext_ln108_fu_245_p1_temp_33__temp = zext_ln108_fu_245_p1_temp_33 ;
   tmp_1_fu_331_p4_temp_45__temp = tmp_1_fu_331_p4_temp_45 ;
   zext_ln111_fu_281_p1__temp = zext_ln111_fu_281_p1 ;
   tmp_2_reg_450_temp_31__temp = tmp_2_reg_450_temp_31 ;
   C_assign_fu_82_temp_43__temp = C_assign_fu_82_temp_43 ;
   zext_ln113_fu_305_p1_temp_27_temp_29__temp = zext_ln113_fu_305_p1_temp_27_temp_29 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   C_assign_fu_82_temp_1__temp = C_assign_fu_82_temp_1 ;
   PC2_q0__temp = PC2_q0 ;
   icmp_ln121_fu_349_p2__temp = icmp_ln121_fu_349_p2 ;
   icmp_ln105_fu_233_p2__temp = icmp_ln105_fu_233_p2 ;
   tmp_4_fu_285_p3__temp = tmp_4_fu_285_p3 ;
   zext_ln113_fu_305_p1__temp = zext_ln113_fu_305_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   zext_ln111_fu_281_p1_temp_24__temp = zext_ln111_fu_281_p1_temp_24 ;
   PC2_address0__temp = PC2_address0 ;
   D_cast_fu_215_p1_temp_3__temp = D_cast_fu_215_p1_temp_3 ;
   tmp_1_fu_331_p4__temp = tmp_1_fu_331_p4 ;
   zext_ln113_fu_305_p1_temp_27__temp = zext_ln113_fu_305_p1_temp_27 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   trunc_ln113_fu_293_p1__temp = trunc_ln113_fu_293_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln108_fu_250_p2__temp = icmp_ln108_fu_250_p2 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   zext_ln108_fu_245_p1__temp = zext_ln108_fu_245_p1 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   C__temp = C ;
   trunc_ln125_fu_384_p1__temp = trunc_ln125_fu_384_p1 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   zext_ln125_fu_361_p1__temp = zext_ln125_fu_361_p1 ;
   trunc_ln111_fu_269_p1_temp_36__temp = trunc_ln111_fu_269_p1_temp_36 ;
   tmp_3_fu_261_p3__temp = tmp_3_fu_261_p3 ;
   tmp_2_fu_341_p3_temp_30_temp_32__temp = tmp_2_fu_341_p3_temp_30_temp_32 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   D_assign_fu_78_temp_4__temp = D_assign_fu_78_temp_4 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       iteration_shift_ce0 = 0;
       iteration_shift_address0 =   (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC2_ce0 = 0;
       PC2_address0 =   (  ( j_1_reg_182__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(ap_rst == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))){
if(grp_calculationofkeys_fu_193_ap_ready == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}

}

}
    if(!(1 == ap_CS_fsm_state5)){
PC2_ce0 = 0 ; 

}
    if(!(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_ready = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state2)){
iteration_shift_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_address0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_ce0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
sub_key_we0 = 0 ; 

}
    zext_ln108_reg_427 =  ( ( zext_ln108_reg_427 & 31 ) & 18446744073709551615 )  ; 
tmp_2_reg_450 =  ( ( tmp_2_reg_450 & 72057594037927935 ) & 1152921504606846975 )  ; 
D_assign_fu_78 =  ( ( D_assign_fu_78 & 268435455 ) & 4294967295 )  ; 
C_assign_fu_82 =  ( ( C_assign_fu_82 & 268435455 ) & 4294967295 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           j_0_reg_159 =  0;
       }
       if(1 == ap_CS_fsm_state3)
       {
           iteration_shift_load_reg_437 =  iteration_shift_q0__temp ;
       }
       goto ap_ST_fsm_state4;

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
   j_2_fu_355_p2__temp = j_2_fu_355_p2 ;
   lshr_ln125_fu_379_p2__temp = lshr_ln125_fu_379_p2 ;
   j_fu_255_p2__temp = j_fu_255_p2 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   ap_rst__temp = ap_rst ;
   D_cast_fu_215_p1_temp_3_temp_5__temp = D_cast_fu_215_p1_temp_3_temp_5 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   trunc_ln113_fu_293_p1_temp_39__temp = trunc_ln113_fu_293_p1_temp_39 ;
   i_0_reg_148__temp = i_0_reg_148 ;
   sub_ln125_fu_370_p2__temp = sub_ln125_fu_370_p2 ;
   ap_ready__temp = ap_ready ;
   or_ln_fu_388_p3__temp = or_ln_fu_388_p3 ;
   tmp_2_fu_341_p3__temp = tmp_2_fu_341_p3 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_assign_fu_82_temp_46__temp = C_assign_fu_82_temp_46 ;
   j_0_reg_159__temp = j_0_reg_159 ;
   R__temp = R ;
   tmp_2_reg_450__temp = tmp_2_reg_450 ;
   sub_key_address0__temp = sub_key_address0 ;
   trunc_ln125_1_reg_473_temp_41__temp = trunc_ln125_1_reg_473_temp_41 ;
   C_assign_fu_82_temp_42__temp = C_assign_fu_82_temp_42 ;
   D_assign_fu_78_temp_47__temp = D_assign_fu_78_temp_47 ;
   L__temp = L ;
   j_1_reg_182__temp = j_1_reg_182 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   or_ln118_fu_325_p2__temp = or_ln118_fu_325_p2 ;
   trunc_ln125_1_fu_366_p1__temp = trunc_ln125_1_fu_366_p1 ;
   trunc_ln125_1_reg_473_temp_40__temp = trunc_ln125_1_reg_473_temp_40 ;
   ap_idle__temp = ap_idle ;
   C_cast_fu_219_p1_temp_0_temp_2__temp = C_cast_fu_219_p1_temp_0_temp_2 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   ap_return__temp = ap_return ;
   zext_ln108_fu_245_p1_temp_33_temp_35__temp = zext_ln108_fu_245_p1_temp_33_temp_35 ;
   ap_clk__temp = ap_clk ;
   i_reg_422__temp = i_reg_422 ;
   trunc_ln113_fu_293_p1_temp_38__temp = trunc_ln113_fu_293_p1_temp_38 ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   zext_ln108_reg_427__temp = zext_ln108_reg_427 ;
   tmp_2_fu_341_p3_temp_30__temp = tmp_2_fu_341_p3_temp_30 ;
   ap_start__temp = ap_start ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   sub_key_q0__temp = sub_key_q0 ;
   sub_key_we0__temp = sub_key_we0 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   tmp_1_fu_331_p4_temp_44__temp = tmp_1_fu_331_p4_temp_44 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   ap_return_preg__temp = ap_return_preg ;
   shl_ln118_fu_319_p2__temp = shl_ln118_fu_319_p2 ;
   D_assign_fu_78_temp_28__temp = D_assign_fu_78_temp_28 ;
   D__temp = D ;
   PC2_ce0__temp = PC2_ce0 ;
   j_2_reg_463__temp = j_2_reg_463 ;
   trunc_ln111_fu_269_p1_temp_37__temp = trunc_ln111_fu_269_p1_temp_37 ;
   zext_ln125_1_fu_375_p1__temp = zext_ln125_1_fu_375_p1 ;
   trunc_ln125_1_reg_473__temp = trunc_ln125_1_reg_473 ;
   C_cast_fu_219_p1_temp_0__temp = C_cast_fu_219_p1_temp_0 ;
   C_assign_fu_82_temp_25__temp = C_assign_fu_82_temp_25 ;
   zext_ln108_reg_427_temp_34__temp = zext_ln108_reg_427_temp_34 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   zext_ln111_fu_281_p1_temp_24_temp_26__temp = zext_ln111_fu_281_p1_temp_24_temp_26 ;
   i_fu_239_p2__temp = i_fu_239_p2 ;
   trunc_ln111_fu_269_p1__temp = trunc_ln111_fu_269_p1 ;
   zext_ln108_fu_245_p1_temp_33__temp = zext_ln108_fu_245_p1_temp_33 ;
   tmp_1_fu_331_p4_temp_45__temp = tmp_1_fu_331_p4_temp_45 ;
   zext_ln111_fu_281_p1__temp = zext_ln111_fu_281_p1 ;
   tmp_2_reg_450_temp_31__temp = tmp_2_reg_450_temp_31 ;
   C_assign_fu_82_temp_43__temp = C_assign_fu_82_temp_43 ;
   zext_ln113_fu_305_p1_temp_27_temp_29__temp = zext_ln113_fu_305_p1_temp_27_temp_29 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   C_assign_fu_82_temp_1__temp = C_assign_fu_82_temp_1 ;
   PC2_q0__temp = PC2_q0 ;
   icmp_ln121_fu_349_p2__temp = icmp_ln121_fu_349_p2 ;
   icmp_ln105_fu_233_p2__temp = icmp_ln105_fu_233_p2 ;
   tmp_4_fu_285_p3__temp = tmp_4_fu_285_p3 ;
   zext_ln113_fu_305_p1__temp = zext_ln113_fu_305_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   zext_ln111_fu_281_p1_temp_24__temp = zext_ln111_fu_281_p1_temp_24 ;
   PC2_address0__temp = PC2_address0 ;
   D_cast_fu_215_p1_temp_3__temp = D_cast_fu_215_p1_temp_3 ;
   tmp_1_fu_331_p4__temp = tmp_1_fu_331_p4 ;
   zext_ln113_fu_305_p1_temp_27__temp = zext_ln113_fu_305_p1_temp_27 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   trunc_ln113_fu_293_p1__temp = trunc_ln113_fu_293_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln108_fu_250_p2__temp = icmp_ln108_fu_250_p2 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   zext_ln108_fu_245_p1__temp = zext_ln108_fu_245_p1 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   C__temp = C ;
   trunc_ln125_fu_384_p1__temp = trunc_ln125_fu_384_p1 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   zext_ln125_fu_361_p1__temp = zext_ln125_fu_361_p1 ;
   trunc_ln111_fu_269_p1_temp_36__temp = trunc_ln111_fu_269_p1_temp_36 ;
   tmp_3_fu_261_p3__temp = tmp_3_fu_261_p3 ;
   tmp_2_fu_341_p3_temp_30_temp_32__temp = tmp_2_fu_341_p3_temp_30_temp_32 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   D_assign_fu_78_temp_4__temp = D_assign_fu_78_temp_4 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       iteration_shift_ce0 = 0;
       iteration_shift_address0 =   (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC2_ce0 = 0;
       PC2_address0 =   (  ( j_1_reg_182__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(ap_rst == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))){
if(grp_calculationofkeys_fu_193_ap_ready == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}

}

}
    if(!(1 == ap_CS_fsm_state5)){
PC2_ce0 = 0 ; 

}
    if(!(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_ready = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state2)){
iteration_shift_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_address0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_ce0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
sub_key_we0 = 0 ; 

}
    zext_ln108_reg_427 =  ( ( zext_ln108_reg_427 & 31 ) & 18446744073709551615 )  ; 
tmp_2_reg_450 =  ( ( tmp_2_reg_450 & 72057594037927935 ) & 1152921504606846975 )  ; 
D_assign_fu_78 =  ( ( D_assign_fu_78 & 268435455 ) & 4294967295 )  ; 
C_assign_fu_82 =  ( ( C_assign_fu_82 & 268435455 ) & 4294967295 )  ; 
               icmp_ln108_fu_250_p2 =   ( j_0_reg_159__temp  == iteration_shift_load_reg_437__temp  ? 1 : 0 ) ;
               icmp_ln108_fu_250_p2 =   ( j_0_reg_159__temp  == iteration_shift_load_reg_437__temp  ? 1 : 0 ) ;
   if(((icmp_ln108_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4)) == 1){
       if((icmp_ln108_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
           C_assign_fu_82 =   ( (  ( (  (  (  ( (  ( (  ( ( C_assign_fu_82__temp  & 134217727 ) & 134217727 )  << 1 )  & 18446744073709551615 )  |  ( (  ( ( C_assign_fu_82__temp  >> 27 )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 268435455 )  & 4294967295 )  & 268435455 ) & 18446744073709551615 )  |  ( ( C_assign_fu_82__temp  & 4026531840 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if((icmp_ln108_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
           D_assign_fu_78 =   ( (  ( (  (  (  ( (  ( (  ( ( D_assign_fu_78__temp  & 134217727 ) & 134217727 )  << 1 )  & 18446744073709551615 )  |  ( (  ( ( D_assign_fu_78__temp  >> 27 )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 268435455 )  & 4294967295 )  & 268435455 ) & 18446744073709551615 )  |  ( ( D_assign_fu_78__temp  & 4026531840 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if((icmp_ln108_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
           j_0_reg_159 =   ( ( j_0_reg_159__temp  + 1 ) & 3 ) ;
       }
       if((icmp_ln108_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           j_1_reg_182 =  0;
       }
       if((icmp_ln108_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           sub_key_load_reg_170 =  0;
       }
       if((icmp_ln108_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
           tmp_2_reg_450 =   ( (  ( (  (  ( (  ( (  (  ( (  ( ( C_assign_fu_82__temp  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  << 32 )  & 18446744073709551615 )  |  ( (  ( ( C_assign_fu_82__temp  << 28 )  & 4294967295 )  | D_assign_fu_78__temp  ) & 4294967295 )  ) & 18446744073709551615 )  & 1152921504606846975 )  & 72057594037927935 ) & 18446744073709551615 )  |  ( ( tmp_2_reg_450__temp  & 1080863910568919040 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
           sub_key_addr_reg_455 =  zext_ln108_reg_427__temp ;
       }
       goto ap_ST_fsm_state5;
   }
   if(((icmp_ln108_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4)) == 0){
       if((icmp_ln108_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
               C_assign_fu_82 =   ( (  ( (  (  (  ( (  ( (  ( ( C_assign_fu_82__temp  & 134217727 ) & 134217727 )  << 1 )  & 18446744073709551615 )  |  ( (  ( ( C_assign_fu_82__temp  >> 27 )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 268435455 )  & 4294967295 )  & 268435455 ) & 18446744073709551615 )  |  ( ( C_assign_fu_82__temp  & 4026531840 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if((icmp_ln108_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
               D_assign_fu_78 =   ( (  ( (  (  (  ( (  ( (  ( ( D_assign_fu_78__temp  & 134217727 ) & 134217727 )  << 1 )  & 18446744073709551615 )  |  ( (  ( ( D_assign_fu_78__temp  >> 27 )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 268435455 )  & 4294967295 )  & 268435455 ) & 18446744073709551615 )  |  ( ( D_assign_fu_78__temp  & 4026531840 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
       if((icmp_ln108_fu_250_p2 == 0) && (1 == ap_CS_fsm_state4))
       {
               j_0_reg_159 =   ( ( j_0_reg_159__temp  + 1 ) & 3 ) ;
       }
       if((icmp_ln108_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
               j_1_reg_182 =  0;
       }
       if((icmp_ln108_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
               sub_key_load_reg_170 =  0;
       }
       if((icmp_ln108_fu_250_p2 == 1) && (1 == ap_CS_fsm_state4))
       {
               tmp_2_reg_450 =   ( (  ( (  (  ( (  ( (  (  ( (  ( ( C_assign_fu_82__temp  >> 4 )  & 18446744073709551615 )  & 268435455 ) & 18446744073709551615 )  & 268435455 )  << 32 )  & 18446744073709551615 )  |  ( (  ( ( C_assign_fu_82__temp  << 28 )  & 4294967295 )  | D_assign_fu_78__temp  ) & 4294967295 )  ) & 18446744073709551615 )  & 1152921504606846975 )  & 72057594037927935 ) & 18446744073709551615 )  |  ( ( tmp_2_reg_450__temp  & 1080863910568919040 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               sub_key_addr_reg_455 =  zext_ln108_reg_427__temp ;
       }
       goto ap_ST_fsm_state4;
   }

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
   j_2_fu_355_p2__temp = j_2_fu_355_p2 ;
   lshr_ln125_fu_379_p2__temp = lshr_ln125_fu_379_p2 ;
   j_fu_255_p2__temp = j_fu_255_p2 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   ap_rst__temp = ap_rst ;
   D_cast_fu_215_p1_temp_3_temp_5__temp = D_cast_fu_215_p1_temp_3_temp_5 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   trunc_ln113_fu_293_p1_temp_39__temp = trunc_ln113_fu_293_p1_temp_39 ;
   i_0_reg_148__temp = i_0_reg_148 ;
   sub_ln125_fu_370_p2__temp = sub_ln125_fu_370_p2 ;
   ap_ready__temp = ap_ready ;
   or_ln_fu_388_p3__temp = or_ln_fu_388_p3 ;
   tmp_2_fu_341_p3__temp = tmp_2_fu_341_p3 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_assign_fu_82_temp_46__temp = C_assign_fu_82_temp_46 ;
   j_0_reg_159__temp = j_0_reg_159 ;
   R__temp = R ;
   tmp_2_reg_450__temp = tmp_2_reg_450 ;
   sub_key_address0__temp = sub_key_address0 ;
   trunc_ln125_1_reg_473_temp_41__temp = trunc_ln125_1_reg_473_temp_41 ;
   C_assign_fu_82_temp_42__temp = C_assign_fu_82_temp_42 ;
   D_assign_fu_78_temp_47__temp = D_assign_fu_78_temp_47 ;
   L__temp = L ;
   j_1_reg_182__temp = j_1_reg_182 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   or_ln118_fu_325_p2__temp = or_ln118_fu_325_p2 ;
   trunc_ln125_1_fu_366_p1__temp = trunc_ln125_1_fu_366_p1 ;
   trunc_ln125_1_reg_473_temp_40__temp = trunc_ln125_1_reg_473_temp_40 ;
   ap_idle__temp = ap_idle ;
   C_cast_fu_219_p1_temp_0_temp_2__temp = C_cast_fu_219_p1_temp_0_temp_2 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   ap_return__temp = ap_return ;
   zext_ln108_fu_245_p1_temp_33_temp_35__temp = zext_ln108_fu_245_p1_temp_33_temp_35 ;
   ap_clk__temp = ap_clk ;
   i_reg_422__temp = i_reg_422 ;
   trunc_ln113_fu_293_p1_temp_38__temp = trunc_ln113_fu_293_p1_temp_38 ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   zext_ln108_reg_427__temp = zext_ln108_reg_427 ;
   tmp_2_fu_341_p3_temp_30__temp = tmp_2_fu_341_p3_temp_30 ;
   ap_start__temp = ap_start ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   sub_key_q0__temp = sub_key_q0 ;
   sub_key_we0__temp = sub_key_we0 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   tmp_1_fu_331_p4_temp_44__temp = tmp_1_fu_331_p4_temp_44 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   ap_return_preg__temp = ap_return_preg ;
   shl_ln118_fu_319_p2__temp = shl_ln118_fu_319_p2 ;
   D_assign_fu_78_temp_28__temp = D_assign_fu_78_temp_28 ;
   D__temp = D ;
   PC2_ce0__temp = PC2_ce0 ;
   j_2_reg_463__temp = j_2_reg_463 ;
   trunc_ln111_fu_269_p1_temp_37__temp = trunc_ln111_fu_269_p1_temp_37 ;
   zext_ln125_1_fu_375_p1__temp = zext_ln125_1_fu_375_p1 ;
   trunc_ln125_1_reg_473__temp = trunc_ln125_1_reg_473 ;
   C_cast_fu_219_p1_temp_0__temp = C_cast_fu_219_p1_temp_0 ;
   C_assign_fu_82_temp_25__temp = C_assign_fu_82_temp_25 ;
   zext_ln108_reg_427_temp_34__temp = zext_ln108_reg_427_temp_34 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   zext_ln111_fu_281_p1_temp_24_temp_26__temp = zext_ln111_fu_281_p1_temp_24_temp_26 ;
   i_fu_239_p2__temp = i_fu_239_p2 ;
   trunc_ln111_fu_269_p1__temp = trunc_ln111_fu_269_p1 ;
   zext_ln108_fu_245_p1_temp_33__temp = zext_ln108_fu_245_p1_temp_33 ;
   tmp_1_fu_331_p4_temp_45__temp = tmp_1_fu_331_p4_temp_45 ;
   zext_ln111_fu_281_p1__temp = zext_ln111_fu_281_p1 ;
   tmp_2_reg_450_temp_31__temp = tmp_2_reg_450_temp_31 ;
   C_assign_fu_82_temp_43__temp = C_assign_fu_82_temp_43 ;
   zext_ln113_fu_305_p1_temp_27_temp_29__temp = zext_ln113_fu_305_p1_temp_27_temp_29 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   C_assign_fu_82_temp_1__temp = C_assign_fu_82_temp_1 ;
   PC2_q0__temp = PC2_q0 ;
   icmp_ln121_fu_349_p2__temp = icmp_ln121_fu_349_p2 ;
   icmp_ln105_fu_233_p2__temp = icmp_ln105_fu_233_p2 ;
   tmp_4_fu_285_p3__temp = tmp_4_fu_285_p3 ;
   zext_ln113_fu_305_p1__temp = zext_ln113_fu_305_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   zext_ln111_fu_281_p1_temp_24__temp = zext_ln111_fu_281_p1_temp_24 ;
   PC2_address0__temp = PC2_address0 ;
   D_cast_fu_215_p1_temp_3__temp = D_cast_fu_215_p1_temp_3 ;
   tmp_1_fu_331_p4__temp = tmp_1_fu_331_p4 ;
   zext_ln113_fu_305_p1_temp_27__temp = zext_ln113_fu_305_p1_temp_27 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   trunc_ln113_fu_293_p1__temp = trunc_ln113_fu_293_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln108_fu_250_p2__temp = icmp_ln108_fu_250_p2 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   zext_ln108_fu_245_p1__temp = zext_ln108_fu_245_p1 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   C__temp = C ;
   trunc_ln125_fu_384_p1__temp = trunc_ln125_fu_384_p1 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   zext_ln125_fu_361_p1__temp = zext_ln125_fu_361_p1 ;
   trunc_ln111_fu_269_p1_temp_36__temp = trunc_ln111_fu_269_p1_temp_36 ;
   tmp_3_fu_261_p3__temp = tmp_3_fu_261_p3 ;
   tmp_2_fu_341_p3_temp_30_temp_32__temp = tmp_2_fu_341_p3_temp_30_temp_32 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   D_assign_fu_78_temp_4__temp = D_assign_fu_78_temp_4 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       iteration_shift_ce0 = 0;
       iteration_shift_address0 =   (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC2_ce0 = 0;
       PC2_address0 =   (  ( j_1_reg_182__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(ap_rst == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))){
if(grp_calculationofkeys_fu_193_ap_ready == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}

}

}
    if(!(1 == ap_CS_fsm_state5)){
PC2_ce0 = 0 ; 

}
    if(!(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_ready = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state2)){
iteration_shift_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_address0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_ce0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
sub_key_we0 = 0 ; 

}
    zext_ln108_reg_427 =  ( ( zext_ln108_reg_427 & 31 ) & 18446744073709551615 )  ; 
tmp_2_reg_450 =  ( ( tmp_2_reg_450 & 72057594037927935 ) & 1152921504606846975 )  ; 
D_assign_fu_78 =  ( ( D_assign_fu_78 & 268435455 ) & 4294967295 )  ; 
C_assign_fu_82 =  ( ( C_assign_fu_82 & 268435455 ) & 4294967295 )  ; 
               icmp_ln121_fu_349_p2 =   ( j_1_reg_182__temp  == 48 ? 1 :  0 ) ;
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
               icmp_ln121_fu_349_p2 =   ( j_1_reg_182__temp  == 48 ? 1 :  0 ) ;
   if(((icmp_ln121_fu_349_p2 == 1) && (1 == ap_CS_fsm_state5)) == 1){
       if((icmp_ln121_fu_349_p2 == 1) && (1 == ap_CS_fsm_state5))
       {
           i_0_reg_148 =  i_reg_422__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           j_2_reg_463 =   ( ( j_1_reg_182__temp  + 1 ) & 63 ) ;
       }
       if((icmp_ln121_fu_349_p2 == 0) && (1 == ap_CS_fsm_state5))
       {
           trunc_ln125_1_reg_473 =   ( ( sub_key_load_reg_170__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
       }
       if(sub_key_ce0){
          sub_key_q0=sub_key_ram[sub_key_address0];
           if(sub_key_we0){
              sub_key_ram[sub_key_address0]=sub_key_load_reg_170;
           }
       }
       if(PC2_ce0){
          PC2_q0=PC2_rom[PC2_address0];
       }
       goto ap_ST_fsm_state2;
   }
   if(((icmp_ln121_fu_349_p2 == 1) && (1 == ap_CS_fsm_state5)) == 0){
       if((icmp_ln121_fu_349_p2 == 1) && (1 == ap_CS_fsm_state5))
       {
               i_0_reg_148 =  i_reg_422__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
               j_2_reg_463 =   ( ( j_1_reg_182__temp  + 1 ) & 63 ) ;
       }
       if((icmp_ln121_fu_349_p2 == 0) && (1 == ap_CS_fsm_state5))
       {
               trunc_ln125_1_reg_473 =   ( ( sub_key_load_reg_170__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
       }
       if(sub_key_ce0){
          sub_key_q0=sub_key_ram[sub_key_address0];
           if(sub_key_we0){
              sub_key_ram[sub_key_address0]=sub_key_load_reg_170;
           }
       }
       if(PC2_ce0){
          PC2_q0=PC2_rom[PC2_address0];
       }
       goto ap_ST_fsm_state6;
   }

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
   j_2_fu_355_p2__temp = j_2_fu_355_p2 ;
   lshr_ln125_fu_379_p2__temp = lshr_ln125_fu_379_p2 ;
   j_fu_255_p2__temp = j_fu_255_p2 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   ap_rst__temp = ap_rst ;
   D_cast_fu_215_p1_temp_3_temp_5__temp = D_cast_fu_215_p1_temp_3_temp_5 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   trunc_ln113_fu_293_p1_temp_39__temp = trunc_ln113_fu_293_p1_temp_39 ;
   i_0_reg_148__temp = i_0_reg_148 ;
   sub_ln125_fu_370_p2__temp = sub_ln125_fu_370_p2 ;
   ap_ready__temp = ap_ready ;
   or_ln_fu_388_p3__temp = or_ln_fu_388_p3 ;
   tmp_2_fu_341_p3__temp = tmp_2_fu_341_p3 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_assign_fu_82_temp_46__temp = C_assign_fu_82_temp_46 ;
   j_0_reg_159__temp = j_0_reg_159 ;
   R__temp = R ;
   tmp_2_reg_450__temp = tmp_2_reg_450 ;
   sub_key_address0__temp = sub_key_address0 ;
   trunc_ln125_1_reg_473_temp_41__temp = trunc_ln125_1_reg_473_temp_41 ;
   C_assign_fu_82_temp_42__temp = C_assign_fu_82_temp_42 ;
   D_assign_fu_78_temp_47__temp = D_assign_fu_78_temp_47 ;
   L__temp = L ;
   j_1_reg_182__temp = j_1_reg_182 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   or_ln118_fu_325_p2__temp = or_ln118_fu_325_p2 ;
   trunc_ln125_1_fu_366_p1__temp = trunc_ln125_1_fu_366_p1 ;
   trunc_ln125_1_reg_473_temp_40__temp = trunc_ln125_1_reg_473_temp_40 ;
   ap_idle__temp = ap_idle ;
   C_cast_fu_219_p1_temp_0_temp_2__temp = C_cast_fu_219_p1_temp_0_temp_2 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   ap_return__temp = ap_return ;
   zext_ln108_fu_245_p1_temp_33_temp_35__temp = zext_ln108_fu_245_p1_temp_33_temp_35 ;
   ap_clk__temp = ap_clk ;
   i_reg_422__temp = i_reg_422 ;
   trunc_ln113_fu_293_p1_temp_38__temp = trunc_ln113_fu_293_p1_temp_38 ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   zext_ln108_reg_427__temp = zext_ln108_reg_427 ;
   tmp_2_fu_341_p3_temp_30__temp = tmp_2_fu_341_p3_temp_30 ;
   ap_start__temp = ap_start ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   sub_key_q0__temp = sub_key_q0 ;
   sub_key_we0__temp = sub_key_we0 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   tmp_1_fu_331_p4_temp_44__temp = tmp_1_fu_331_p4_temp_44 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   ap_return_preg__temp = ap_return_preg ;
   shl_ln118_fu_319_p2__temp = shl_ln118_fu_319_p2 ;
   D_assign_fu_78_temp_28__temp = D_assign_fu_78_temp_28 ;
   D__temp = D ;
   PC2_ce0__temp = PC2_ce0 ;
   j_2_reg_463__temp = j_2_reg_463 ;
   trunc_ln111_fu_269_p1_temp_37__temp = trunc_ln111_fu_269_p1_temp_37 ;
   zext_ln125_1_fu_375_p1__temp = zext_ln125_1_fu_375_p1 ;
   trunc_ln125_1_reg_473__temp = trunc_ln125_1_reg_473 ;
   C_cast_fu_219_p1_temp_0__temp = C_cast_fu_219_p1_temp_0 ;
   C_assign_fu_82_temp_25__temp = C_assign_fu_82_temp_25 ;
   zext_ln108_reg_427_temp_34__temp = zext_ln108_reg_427_temp_34 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   zext_ln111_fu_281_p1_temp_24_temp_26__temp = zext_ln111_fu_281_p1_temp_24_temp_26 ;
   i_fu_239_p2__temp = i_fu_239_p2 ;
   trunc_ln111_fu_269_p1__temp = trunc_ln111_fu_269_p1 ;
   zext_ln108_fu_245_p1_temp_33__temp = zext_ln108_fu_245_p1_temp_33 ;
   tmp_1_fu_331_p4_temp_45__temp = tmp_1_fu_331_p4_temp_45 ;
   zext_ln111_fu_281_p1__temp = zext_ln111_fu_281_p1 ;
   tmp_2_reg_450_temp_31__temp = tmp_2_reg_450_temp_31 ;
   C_assign_fu_82_temp_43__temp = C_assign_fu_82_temp_43 ;
   zext_ln113_fu_305_p1_temp_27_temp_29__temp = zext_ln113_fu_305_p1_temp_27_temp_29 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   C_assign_fu_82_temp_1__temp = C_assign_fu_82_temp_1 ;
   PC2_q0__temp = PC2_q0 ;
   icmp_ln121_fu_349_p2__temp = icmp_ln121_fu_349_p2 ;
   icmp_ln105_fu_233_p2__temp = icmp_ln105_fu_233_p2 ;
   tmp_4_fu_285_p3__temp = tmp_4_fu_285_p3 ;
   zext_ln113_fu_305_p1__temp = zext_ln113_fu_305_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   zext_ln111_fu_281_p1_temp_24__temp = zext_ln111_fu_281_p1_temp_24 ;
   PC2_address0__temp = PC2_address0 ;
   D_cast_fu_215_p1_temp_3__temp = D_cast_fu_215_p1_temp_3 ;
   tmp_1_fu_331_p4__temp = tmp_1_fu_331_p4 ;
   zext_ln113_fu_305_p1_temp_27__temp = zext_ln113_fu_305_p1_temp_27 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   trunc_ln113_fu_293_p1__temp = trunc_ln113_fu_293_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln108_fu_250_p2__temp = icmp_ln108_fu_250_p2 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   zext_ln108_fu_245_p1__temp = zext_ln108_fu_245_p1 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   C__temp = C ;
   trunc_ln125_fu_384_p1__temp = trunc_ln125_fu_384_p1 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   zext_ln125_fu_361_p1__temp = zext_ln125_fu_361_p1 ;
   trunc_ln111_fu_269_p1_temp_36__temp = trunc_ln111_fu_269_p1_temp_36 ;
   tmp_3_fu_261_p3__temp = tmp_3_fu_261_p3 ;
   tmp_2_fu_341_p3_temp_30_temp_32__temp = tmp_2_fu_341_p3_temp_30_temp_32 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   D_assign_fu_78_temp_4__temp = D_assign_fu_78_temp_4 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       iteration_shift_ce0 = 0;
       iteration_shift_address0 =   (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC2_ce0 = 0;
       PC2_address0 =   (  ( j_1_reg_182__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(ap_rst == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))){
if(grp_calculationofkeys_fu_193_ap_ready == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}

}

}
    if(!(1 == ap_CS_fsm_state5)){
PC2_ce0 = 0 ; 

}
    if(!(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_ready = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state2)){
iteration_shift_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_address0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_ce0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
sub_key_we0 = 0 ; 

}
    zext_ln108_reg_427 =  ( ( zext_ln108_reg_427 & 31 ) & 18446744073709551615 )  ; 
tmp_2_reg_450 =  ( ( tmp_2_reg_450 & 72057594037927935 ) & 1152921504606846975 )  ; 
D_assign_fu_78 =  ( ( D_assign_fu_78 & 268435455 ) & 4294967295 )  ; 
C_assign_fu_82 =  ( ( C_assign_fu_82 & 268435455 ) & 4294967295 )  ; 
       if(1 == ap_CS_fsm_state6)
       {
           PC2_load_reg_478 =  PC2_q0__temp ;
       }
       goto ap_ST_fsm_state7;

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
   j_2_fu_355_p2__temp = j_2_fu_355_p2 ;
   lshr_ln125_fu_379_p2__temp = lshr_ln125_fu_379_p2 ;
   j_fu_255_p2__temp = j_fu_255_p2 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   ap_rst__temp = ap_rst ;
   D_cast_fu_215_p1_temp_3_temp_5__temp = D_cast_fu_215_p1_temp_3_temp_5 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   trunc_ln113_fu_293_p1_temp_39__temp = trunc_ln113_fu_293_p1_temp_39 ;
   i_0_reg_148__temp = i_0_reg_148 ;
   sub_ln125_fu_370_p2__temp = sub_ln125_fu_370_p2 ;
   ap_ready__temp = ap_ready ;
   or_ln_fu_388_p3__temp = or_ln_fu_388_p3 ;
   tmp_2_fu_341_p3__temp = tmp_2_fu_341_p3 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_assign_fu_82_temp_46__temp = C_assign_fu_82_temp_46 ;
   j_0_reg_159__temp = j_0_reg_159 ;
   R__temp = R ;
   tmp_2_reg_450__temp = tmp_2_reg_450 ;
   sub_key_address0__temp = sub_key_address0 ;
   trunc_ln125_1_reg_473_temp_41__temp = trunc_ln125_1_reg_473_temp_41 ;
   C_assign_fu_82_temp_42__temp = C_assign_fu_82_temp_42 ;
   D_assign_fu_78_temp_47__temp = D_assign_fu_78_temp_47 ;
   L__temp = L ;
   j_1_reg_182__temp = j_1_reg_182 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   or_ln118_fu_325_p2__temp = or_ln118_fu_325_p2 ;
   trunc_ln125_1_fu_366_p1__temp = trunc_ln125_1_fu_366_p1 ;
   trunc_ln125_1_reg_473_temp_40__temp = trunc_ln125_1_reg_473_temp_40 ;
   ap_idle__temp = ap_idle ;
   C_cast_fu_219_p1_temp_0_temp_2__temp = C_cast_fu_219_p1_temp_0_temp_2 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   ap_return__temp = ap_return ;
   zext_ln108_fu_245_p1_temp_33_temp_35__temp = zext_ln108_fu_245_p1_temp_33_temp_35 ;
   ap_clk__temp = ap_clk ;
   i_reg_422__temp = i_reg_422 ;
   trunc_ln113_fu_293_p1_temp_38__temp = trunc_ln113_fu_293_p1_temp_38 ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   zext_ln108_reg_427__temp = zext_ln108_reg_427 ;
   tmp_2_fu_341_p3_temp_30__temp = tmp_2_fu_341_p3_temp_30 ;
   ap_start__temp = ap_start ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   sub_key_q0__temp = sub_key_q0 ;
   sub_key_we0__temp = sub_key_we0 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   tmp_1_fu_331_p4_temp_44__temp = tmp_1_fu_331_p4_temp_44 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   ap_return_preg__temp = ap_return_preg ;
   shl_ln118_fu_319_p2__temp = shl_ln118_fu_319_p2 ;
   D_assign_fu_78_temp_28__temp = D_assign_fu_78_temp_28 ;
   D__temp = D ;
   PC2_ce0__temp = PC2_ce0 ;
   j_2_reg_463__temp = j_2_reg_463 ;
   trunc_ln111_fu_269_p1_temp_37__temp = trunc_ln111_fu_269_p1_temp_37 ;
   zext_ln125_1_fu_375_p1__temp = zext_ln125_1_fu_375_p1 ;
   trunc_ln125_1_reg_473__temp = trunc_ln125_1_reg_473 ;
   C_cast_fu_219_p1_temp_0__temp = C_cast_fu_219_p1_temp_0 ;
   C_assign_fu_82_temp_25__temp = C_assign_fu_82_temp_25 ;
   zext_ln108_reg_427_temp_34__temp = zext_ln108_reg_427_temp_34 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   zext_ln111_fu_281_p1_temp_24_temp_26__temp = zext_ln111_fu_281_p1_temp_24_temp_26 ;
   i_fu_239_p2__temp = i_fu_239_p2 ;
   trunc_ln111_fu_269_p1__temp = trunc_ln111_fu_269_p1 ;
   zext_ln108_fu_245_p1_temp_33__temp = zext_ln108_fu_245_p1_temp_33 ;
   tmp_1_fu_331_p4_temp_45__temp = tmp_1_fu_331_p4_temp_45 ;
   zext_ln111_fu_281_p1__temp = zext_ln111_fu_281_p1 ;
   tmp_2_reg_450_temp_31__temp = tmp_2_reg_450_temp_31 ;
   C_assign_fu_82_temp_43__temp = C_assign_fu_82_temp_43 ;
   zext_ln113_fu_305_p1_temp_27_temp_29__temp = zext_ln113_fu_305_p1_temp_27_temp_29 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   C_assign_fu_82_temp_1__temp = C_assign_fu_82_temp_1 ;
   PC2_q0__temp = PC2_q0 ;
   icmp_ln121_fu_349_p2__temp = icmp_ln121_fu_349_p2 ;
   icmp_ln105_fu_233_p2__temp = icmp_ln105_fu_233_p2 ;
   tmp_4_fu_285_p3__temp = tmp_4_fu_285_p3 ;
   zext_ln113_fu_305_p1__temp = zext_ln113_fu_305_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   zext_ln111_fu_281_p1_temp_24__temp = zext_ln111_fu_281_p1_temp_24 ;
   PC2_address0__temp = PC2_address0 ;
   D_cast_fu_215_p1_temp_3__temp = D_cast_fu_215_p1_temp_3 ;
   tmp_1_fu_331_p4__temp = tmp_1_fu_331_p4 ;
   zext_ln113_fu_305_p1_temp_27__temp = zext_ln113_fu_305_p1_temp_27 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   trunc_ln113_fu_293_p1__temp = trunc_ln113_fu_293_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln108_fu_250_p2__temp = icmp_ln108_fu_250_p2 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   zext_ln108_fu_245_p1__temp = zext_ln108_fu_245_p1 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   C__temp = C ;
   trunc_ln125_fu_384_p1__temp = trunc_ln125_fu_384_p1 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   zext_ln125_fu_361_p1__temp = zext_ln125_fu_361_p1 ;
   trunc_ln111_fu_269_p1_temp_36__temp = trunc_ln111_fu_269_p1_temp_36 ;
   tmp_3_fu_261_p3__temp = tmp_3_fu_261_p3 ;
   tmp_2_fu_341_p3_temp_30_temp_32__temp = tmp_2_fu_341_p3_temp_30_temp_32 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   D_assign_fu_78_temp_4__temp = D_assign_fu_78_temp_4 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       iteration_shift_ce0 = 0;
       iteration_shift_address0 =   (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC2_ce0 = 0;
       PC2_address0 =   (  ( j_1_reg_182__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(ap_rst == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))){
if(grp_calculationofkeys_fu_193_ap_ready == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}

}

}
    if(!(1 == ap_CS_fsm_state5)){
PC2_ce0 = 0 ; 

}
    if(!(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_ready = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state2)){
iteration_shift_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_address0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_ce0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
sub_key_we0 = 0 ; 

}
    zext_ln108_reg_427 =  ( ( zext_ln108_reg_427 & 31 ) & 18446744073709551615 )  ; 
tmp_2_reg_450 =  ( ( tmp_2_reg_450 & 72057594037927935 ) & 1152921504606846975 )  ; 
D_assign_fu_78 =  ( ( D_assign_fu_78 & 268435455 ) & 4294967295 )  ; 
C_assign_fu_82 =  ( ( C_assign_fu_82 & 268435455 ) & 4294967295 )  ; 
       if(1 == ap_CS_fsm_state7)
       {
           j_1_reg_182 =  j_2_reg_463__temp ;
       }
       if(1 == ap_CS_fsm_state7)
       {
           sub_key_load_reg_170 =   (  ( (  ( ( trunc_ln125_1_reg_473__temp  << 1 )  & 18446744073709551615 )  |  ( ( ( ( tmp_2_reg_450__temp  >>  (  ( ( do_twos_complement( 56 , 6 )  - do_twos_complement( PC2_load_reg_478__temp  , 6 )  ) & 63 )  & 1152921504606846975 )  )  & 1152921504606846975 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state5;

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
   j_2_fu_355_p2__temp = j_2_fu_355_p2 ;
   lshr_ln125_fu_379_p2__temp = lshr_ln125_fu_379_p2 ;
   j_fu_255_p2__temp = j_fu_255_p2 ;
   iteration_shift_ce0__temp = iteration_shift_ce0 ;
   ap_rst__temp = ap_rst ;
   D_cast_fu_215_p1_temp_3_temp_5__temp = D_cast_fu_215_p1_temp_3_temp_5 ;
   sub_key_ce0__temp = sub_key_ce0 ;
   trunc_ln113_fu_293_p1_temp_39__temp = trunc_ln113_fu_293_p1_temp_39 ;
   i_0_reg_148__temp = i_0_reg_148 ;
   sub_ln125_fu_370_p2__temp = sub_ln125_fu_370_p2 ;
   ap_ready__temp = ap_ready ;
   or_ln_fu_388_p3__temp = or_ln_fu_388_p3 ;
   tmp_2_fu_341_p3__temp = tmp_2_fu_341_p3 ;
   sub_key_addr_reg_455__temp = sub_key_addr_reg_455 ;
   C_assign_fu_82_temp_46__temp = C_assign_fu_82_temp_46 ;
   j_0_reg_159__temp = j_0_reg_159 ;
   R__temp = R ;
   tmp_2_reg_450__temp = tmp_2_reg_450 ;
   sub_key_address0__temp = sub_key_address0 ;
   trunc_ln125_1_reg_473_temp_41__temp = trunc_ln125_1_reg_473_temp_41 ;
   C_assign_fu_82_temp_42__temp = C_assign_fu_82_temp_42 ;
   D_assign_fu_78_temp_47__temp = D_assign_fu_78_temp_47 ;
   L__temp = L ;
   j_1_reg_182__temp = j_1_reg_182 ;
   grp_calculationofkeys_fu_193_ap_start_reg__temp = grp_calculationofkeys_fu_193_ap_start_reg ;
   or_ln118_fu_325_p2__temp = or_ln118_fu_325_p2 ;
   trunc_ln125_1_fu_366_p1__temp = trunc_ln125_1_fu_366_p1 ;
   trunc_ln125_1_reg_473_temp_40__temp = trunc_ln125_1_reg_473_temp_40 ;
   ap_idle__temp = ap_idle ;
   C_cast_fu_219_p1_temp_0_temp_2__temp = C_cast_fu_219_p1_temp_0_temp_2 ;
   D_assign_fu_78__temp = D_assign_fu_78 ;
   ap_return__temp = ap_return ;
   zext_ln108_fu_245_p1_temp_33_temp_35__temp = zext_ln108_fu_245_p1_temp_33_temp_35 ;
   ap_clk__temp = ap_clk ;
   i_reg_422__temp = i_reg_422 ;
   trunc_ln113_fu_293_p1_temp_38__temp = trunc_ln113_fu_293_p1_temp_38 ;
   C1_fu_273_p3__temp = C1_fu_273_p3 ;
   zext_ln108_reg_427__temp = zext_ln108_reg_427 ;
   tmp_2_fu_341_p3_temp_30__temp = tmp_2_fu_341_p3_temp_30 ;
   ap_start__temp = ap_start ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   sub_key_q0__temp = sub_key_q0 ;
   sub_key_we0__temp = sub_key_we0 ;
   iteration_shift_load_reg_437__temp = iteration_shift_load_reg_437 ;
   tmp_1_fu_331_p4_temp_44__temp = tmp_1_fu_331_p4_temp_44 ;
   grp_calculationofkeys_fu_193_ap_return__temp = grp_calculationofkeys_fu_193_ap_return ;
   sub_key_load_reg_170__temp = sub_key_load_reg_170 ;
   ap_return_preg__temp = ap_return_preg ;
   shl_ln118_fu_319_p2__temp = shl_ln118_fu_319_p2 ;
   D_assign_fu_78_temp_28__temp = D_assign_fu_78_temp_28 ;
   D__temp = D ;
   PC2_ce0__temp = PC2_ce0 ;
   j_2_reg_463__temp = j_2_reg_463 ;
   trunc_ln111_fu_269_p1_temp_37__temp = trunc_ln111_fu_269_p1_temp_37 ;
   zext_ln125_1_fu_375_p1__temp = zext_ln125_1_fu_375_p1 ;
   trunc_ln125_1_reg_473__temp = trunc_ln125_1_reg_473 ;
   C_cast_fu_219_p1_temp_0__temp = C_cast_fu_219_p1_temp_0 ;
   C_assign_fu_82_temp_25__temp = C_assign_fu_82_temp_25 ;
   zext_ln108_reg_427_temp_34__temp = zext_ln108_reg_427_temp_34 ;
   C_assign_fu_82__temp = C_assign_fu_82 ;
   D_cast_fu_215_p1__temp = D_cast_fu_215_p1 ;
   zext_ln111_fu_281_p1_temp_24_temp_26__temp = zext_ln111_fu_281_p1_temp_24_temp_26 ;
   i_fu_239_p2__temp = i_fu_239_p2 ;
   trunc_ln111_fu_269_p1__temp = trunc_ln111_fu_269_p1 ;
   zext_ln108_fu_245_p1_temp_33__temp = zext_ln108_fu_245_p1_temp_33 ;
   tmp_1_fu_331_p4_temp_45__temp = tmp_1_fu_331_p4_temp_45 ;
   zext_ln111_fu_281_p1__temp = zext_ln111_fu_281_p1 ;
   tmp_2_reg_450_temp_31__temp = tmp_2_reg_450_temp_31 ;
   C_assign_fu_82_temp_43__temp = C_assign_fu_82_temp_43 ;
   zext_ln113_fu_305_p1_temp_27_temp_29__temp = zext_ln113_fu_305_p1_temp_27_temp_29 ;
   C_cast_fu_219_p1__temp = C_cast_fu_219_p1 ;
   C_assign_fu_82_temp_1__temp = C_assign_fu_82_temp_1 ;
   PC2_q0__temp = PC2_q0 ;
   icmp_ln121_fu_349_p2__temp = icmp_ln121_fu_349_p2 ;
   icmp_ln105_fu_233_p2__temp = icmp_ln105_fu_233_p2 ;
   tmp_4_fu_285_p3__temp = tmp_4_fu_285_p3 ;
   zext_ln113_fu_305_p1__temp = zext_ln113_fu_305_p1 ;
   PC2_load_reg_478__temp = PC2_load_reg_478 ;
   grp_calculationofkeys_fu_193_ap_idle__temp = grp_calculationofkeys_fu_193_ap_idle ;
   D1_fu_297_p3__temp = D1_fu_297_p3 ;
   zext_ln111_fu_281_p1_temp_24__temp = zext_ln111_fu_281_p1_temp_24 ;
   PC2_address0__temp = PC2_address0 ;
   D_cast_fu_215_p1_temp_3__temp = D_cast_fu_215_p1_temp_3 ;
   tmp_1_fu_331_p4__temp = tmp_1_fu_331_p4 ;
   zext_ln113_fu_305_p1_temp_27__temp = zext_ln113_fu_305_p1_temp_27 ;
   grp_calculationofkeys_fu_193_ap_done__temp = grp_calculationofkeys_fu_193_ap_done ;
   iteration_shift_q0__temp = iteration_shift_q0 ;
   trunc_ln113_fu_293_p1__temp = trunc_ln113_fu_293_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   icmp_ln108_fu_250_p2__temp = icmp_ln108_fu_250_p2 ;
   grp_calculationofkeys_fu_193_ap_ready__temp = grp_calculationofkeys_fu_193_ap_ready ;
   zext_ln108_fu_245_p1__temp = zext_ln108_fu_245_p1 ;
   iteration_shift_address0__temp = iteration_shift_address0 ;
   C__temp = C ;
   trunc_ln125_fu_384_p1__temp = trunc_ln125_fu_384_p1 ;
   grp_calculationofkeys_fu_193_ap_start__temp = grp_calculationofkeys_fu_193_ap_start ;
   grp_calculationofkeys_fu_193_sub_key_address0__temp = grp_calculationofkeys_fu_193_sub_key_address0 ;
   zext_ln125_fu_361_p1__temp = zext_ln125_fu_361_p1 ;
   trunc_ln111_fu_269_p1_temp_36__temp = trunc_ln111_fu_269_p1_temp_36 ;
   tmp_3_fu_261_p3__temp = tmp_3_fu_261_p3 ;
   tmp_2_fu_341_p3_temp_30_temp_32__temp = tmp_2_fu_341_p3_temp_30_temp_32 ;
   grp_calculationofkeys_fu_193_sub_key_ce0__temp = grp_calculationofkeys_fu_193_sub_key_ce0 ;
   D_assign_fu_78_temp_4__temp = D_assign_fu_78_temp_4 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       iteration_shift_ce0 = 0;
       iteration_shift_address0 =   (  ( i_0_reg_148__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PC2_ce0 = 0;
       PC2_address0 =   (  ( j_1_reg_182__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(ap_rst == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}
if(!(ap_rst == 1)){
if(!((icmp_ln105_fu_233_p2 == 1) && (1 == ap_CS_fsm_state2))){
if(grp_calculationofkeys_fu_193_ap_ready == 1){
grp_calculationofkeys_fu_193_ap_start_reg = 0 ; 
}

}

}
    if(!(1 == ap_CS_fsm_state5)){
PC2_ce0 = 0 ; 

}
    if(!(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_ready = 0 ; 

}
    if(!((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state2)){
iteration_shift_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_address0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
if(!(1 == ap_CS_fsm_state8)){
sub_key_ce0 = 0 ; 

}

}
    if(!(1 == ap_CS_fsm_state5)){
sub_key_we0 = 0 ; 

}
    zext_ln108_reg_427 =  ( ( zext_ln108_reg_427 & 31 ) & 18446744073709551615 )  ; 
tmp_2_reg_450 =  ( ( tmp_2_reg_450 & 72057594037927935 ) & 1152921504606846975 )  ; 
D_assign_fu_78 =  ( ( D_assign_fu_78 & 268435455 ) & 4294967295 )  ; 
C_assign_fu_82 =  ( ( C_assign_fu_82 & 268435455 ) & 4294967295 )  ; 
       if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
           ap_ready =  1;
       }
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
           ap_return = grp_calculationofkeys_fu_193_ap_return;
       }
       if(1 == ap_CS_fsm_state8)
       {
           sub_key_address0 =  grp_calculationofkeys_fu_193_sub_key_address0__temp ;
       }
       if(1 == ap_CS_fsm_state8)
       {
           sub_key_ce0 =  grp_calculationofkeys_fu_193_sub_key_ce0__temp ;
       }
   if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) == 1){
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
           ap_return_preg = grp_calculationofkeys_fu_193_ap_return;
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1)) == 0){
       if((1 == ap_CS_fsm_state8) && (grp_calculationofkeys_fu_193_ap_done == 1))
       {
               ap_return_preg = grp_calculationofkeys_fu_193_ap_return;
       }
       goto ap_ST_fsm_state8;
   }
   end:
    *C__1=C;
    *D__1=D;
    *L__1=L;
    *R__1=R;
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_return__1=ap_return;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *dummy=clock;
       return;
}
