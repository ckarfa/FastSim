#include<stdio.h>
#define sub_key_DWIDTH 32
#define E_DataWidth 6
#define E_AddressRange 48
#define E_AddressWidth 6
#define E_DWIDTH 6
#define E_AWIDTH 6
#define E_MEM_SIZE 48
#define S_DataWidth 4
#define S_AddressRange 512
#define S_AddressWidth 9
#define S_DWIDTH 4
#define S_AWIDTH 9
#define S_MEM_SIZE 512
#define P_DataWidth 6
#define P_AddressRange 32
#define P_AddressWidth 5
#define P_DWIDTH 6
#define P_AWIDTH 5
#define P_MEM_SIZE 32
#define PI_DataWidth 7
#define PI_AddressRange 64
#define PI_AddressWidth 6
#define PI_DWIDTH 7
#define PI_AWIDTH 6
#define PI_MEM_SIZE 64
long long int do_twos_complement( unsigned long long int a ,int width){
    int msb = (a >> (width-1)) & 1;
    if(msb==1){
        int bit[width];int ans[width];
        unsigned long long int a1=a;
        int i=0;
        for(i=0;i<width;i++){
            bit[i]=0;
            ans[i]=0;
        }
        i=0;
        while(a1>0){
            bit[i]=a1%2;
            i++;
            a1/=2;
        }
        int flag=0;
        for(i=0;i<width;i++){
            if(bit[i]==1 && flag==0){
                ans[i]=1;
                flag=1;
            }
            else if(flag==0)
                ans[i]=bit[i];
            else
                ans[i]=1 ^ bit[i];
        }
        long long int fans=0;
        for(i=0;i<width;i++)
            fans+=ans[i]*(1<<i);
        fans = -fans;    
        return fans;
    }else{     
        return a;
    }
}
void calculationofkeys(unsigned long long int *L__1,unsigned long long int *R__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *sub_key_address0__1,unsigned long long int *sub_key_ce0__1,unsigned long long int *sub_key_q0__1,long long int  *sub_key_ram , int *dummy){
unsigned long long int L=*L__1;
unsigned long long int R=*R__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int sub_key_address0=*sub_key_address0__1;
unsigned long long int sub_key_ce0=*sub_key_ce0__1;
unsigned long long int sub_key_q0=*sub_key_q0__1;
   int clock = *dummy;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state10=0;
   long long int ap_CS_fsm_state11=0;
   long long int ap_CS_fsm_state12=0;
   long long int ap_CS_fsm_state13=0;
   long long int ap_CS_fsm_state14=0;
   long long int ap_CS_fsm_state15=0;
   long long int ap_CS_fsm_state16=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   long long int ap_CS_fsm_state7=0;
   long long int ap_CS_fsm_state8=0;
   long long int ap_CS_fsm_state9=0;
   long long int sext_ln253_1_fu_470_p1=0;
   long long int sext_ln253_1_fu_470_p1__temp=0;
   long long int sext_ln253_fu_439_p1=0;
   long long int sext_ln253_fu_439_p1__temp=0;
   long long int sext_ln253_reg_793=0;
   long long int sext_ln253_reg_793__temp=0;
   long long int sext_ln256_fu_528_p1=0;
   long long int sext_ln256_fu_528_p1__temp=0;
   long long int sext_ln259_1_fu_560_p1=0;
   long long int sext_ln259_1_fu_560_p1__temp=0;
   long long int sext_ln259_2_fu_570_p1=0;
   long long int sext_ln259_2_fu_570_p1__temp=0;
   long long int sext_ln259_3_fu_592_p1=0;
   long long int sext_ln259_3_fu_592_p1__temp=0;
   long long int sext_ln259_fu_552_p1=0;
   long long int sext_ln259_fu_552_p1__temp=0;
   long long int sub_key_d0=0;
   long long int sub_key_we0=0;
   unsigned long long int E_address0=0;
   unsigned long long int E_address0__temp=0;
   unsigned long long int E_ce0=0;
   unsigned long long int E_ce0__temp=0;
   unsigned long long int E_load_reg_760=0;
   unsigned long long int E_load_reg_760__temp=0;
   unsigned long long int E_q0=0;
   unsigned long long int E_q0__temp=0;
   unsigned long long int L1_reg_187=0;
   unsigned long long int L1_reg_187__temp=0;
   unsigned long long int L__temp=0;
   unsigned long long int PI_address0=0;
   unsigned long long int PI_address0__temp=0;
   unsigned long long int PI_ce0=0;
   unsigned long long int PI_ce0__temp=0;
   unsigned long long int PI_load_reg_871=0;
   unsigned long long int PI_load_reg_871__temp=0;
   unsigned long long int PI_q0=0;
   unsigned long long int PI_q0__temp=0;
   unsigned long long int P_address0=0;
   unsigned long long int P_address0__temp=0;
   unsigned long long int P_ce0=0;
   unsigned long long int P_ce0__temp=0;
   unsigned long long int P_load_reg_843=0;
   unsigned long long int P_load_reg_843__temp=0;
   unsigned long long int P_q0=0;
   unsigned long long int P_q0__temp=0;
   unsigned long long int R1_fu_634_p2=0;
   unsigned long long int R1_fu_634_p2__temp=0;
   unsigned long long int R__temp=0;
   unsigned long long int S_address0=0;
   unsigned long long int S_address0__temp=0;
   unsigned long long int S_ce0=0;
   unsigned long long int S_ce0__temp=0;
   unsigned long long int S_q0=0;
   unsigned long long int S_q0__temp=0;
   unsigned long long int add_ln253_fu_464_p2=0;
   unsigned long long int add_ln253_fu_464_p2__temp=0;
   unsigned long long int add_ln256_fu_523_p2=0;
   unsigned long long int add_ln256_fu_523_p2__temp=0;
   unsigned long long int add_ln259_1_fu_586_p2=0;
   unsigned long long int add_ln259_1_fu_586_p2__temp=0;
   unsigned long long int add_ln259_1_reg_810=0;
   unsigned long long int add_ln259_1_reg_810__temp=0;
   unsigned long long int add_ln259_fu_564_p2=0;
   unsigned long long int add_ln259_fu_564_p2__temp=0;
   unsigned long long int and_ln253_fu_453_p2=0;
   unsigned long long int and_ln253_fu_453_p2__temp=0;
   unsigned long long int and_ln256_fu_518_p2=0;
   unsigned long long int and_ln256_fu_518_p2__temp=0;
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
   unsigned long long int f_function_res_0_reg_254=0;
   unsigned long long int f_function_res_0_reg_254__temp=0;
   unsigned long long int f_function_res_fu_659_p3=0;
   unsigned long long int f_function_res_fu_659_p3__temp=0;
   unsigned long long int i_0_i_reg_265=0;
   unsigned long long int i_0_i_reg_265__temp=0;
   unsigned long long int i_0_reg_175=0;
   unsigned long long int i_0_reg_175__temp=0;
   unsigned long long int i_3_fu_301_p2=0;
   unsigned long long int i_3_fu_301_p2__temp=0;
   unsigned long long int i_3_reg_732=0;
   unsigned long long int i_3_reg_732__temp=0;
   unsigned long long int i_fu_672_p2=0;
   unsigned long long int i_fu_672_p2__temp=0;
   unsigned long long int i_reg_856=0;
   unsigned long long int i_reg_856__temp=0;
   unsigned long long int icmp_ln227_fu_295_p2=0;
   unsigned long long int icmp_ln227_fu_295_p2__temp=0;
   unsigned long long int icmp_ln232_fu_315_p2=0;
   unsigned long long int icmp_ln232_fu_315_p2__temp=0;
   unsigned long long int icmp_ln250_fu_395_p2=0;
   unsigned long long int icmp_ln250_fu_395_p2__temp=0;
   unsigned long long int icmp_ln266_fu_613_p2=0;
   unsigned long long int icmp_ln266_fu_613_p2__temp=0;
   unsigned long long int icmp_ln304_fu_666_p2=0;
   unsigned long long int icmp_ln304_fu_666_p2__temp=0;
   unsigned long long int inv_init_perm_res_0_s_reg_276=0;
   unsigned long long int inv_init_perm_res_0_s_reg_276__temp=0;
   unsigned long long int inv_init_perm_res_fu_705_p3=0;
   unsigned long long int inv_init_perm_res_fu_705_p3__temp=0;
   unsigned long long int j_0_reg_208=0;
   unsigned long long int j_0_reg_208__temp=0;
   unsigned long long int j_1_reg_231=0;
   unsigned long long int j_1_reg_231__temp=0;
   unsigned long long int j_1_reg_231_temp_17=0;
   unsigned long long int j_1_reg_231_temp_17__temp=0;
   unsigned long long int j_2_reg_243=0;
   unsigned long long int j_2_reg_243__temp=0;
   unsigned long long int j_3_fu_401_p2=0;
   unsigned long long int j_3_fu_401_p2__temp=0;
   unsigned long long int j_3_reg_788=0;
   unsigned long long int j_3_reg_788__temp=0;
   unsigned long long int j_4_fu_619_p2=0;
   unsigned long long int j_4_fu_619_p2__temp=0;
   unsigned long long int j_4_reg_823=0;
   unsigned long long int j_4_reg_823__temp=0;
   unsigned long long int j_fu_321_p2=0;
   unsigned long long int j_fu_321_p2__temp=0;
   unsigned long long int j_reg_745=0;
   unsigned long long int j_reg_745__temp=0;
   unsigned long long int lshr_ln235_fu_350_p2=0;
   unsigned long long int lshr_ln235_fu_350_p2__temp=0;
   unsigned long long int lshr_ln253_1_fu_478_p2=0;
   unsigned long long int lshr_ln253_1_fu_478_p2__temp=0;
   unsigned long long int lshr_ln253_1_reg_803=0;
   unsigned long long int lshr_ln253_1_reg_803__temp=0;
   unsigned long long int lshr_ln253_1_reg_803_temp_18=0;
   unsigned long long int lshr_ln253_1_reg_803_temp_18__temp=0;
   unsigned long long int lshr_ln253_1_reg_803_temp_19=0;
   unsigned long long int lshr_ln253_1_reg_803_temp_19__temp=0;
   unsigned long long int lshr_ln253_1_reg_803_temp_20=0;
   unsigned long long int lshr_ln253_1_reg_803_temp_20__temp=0;
   unsigned long long int lshr_ln253_fu_447_p2=0;
   unsigned long long int lshr_ln253_fu_447_p2__temp=0;
   unsigned long long int lshr_ln256_1_fu_536_p2=0;
   unsigned long long int lshr_ln256_1_fu_536_p2__temp=0;
   unsigned long long int lshr_ln256_fu_512_p2=0;
   unsigned long long int lshr_ln256_fu_512_p2__temp=0;
   unsigned long long int lshr_ln269_fu_649_p2=0;
   unsigned long long int lshr_ln269_fu_649_p2__temp=0;
   unsigned long long int lshr_ln308_fu_696_p2=0;
   unsigned long long int lshr_ln308_fu_696_p2__temp=0;
   unsigned long long int or_ln254_fu_497_p2=0;
   unsigned long long int or_ln254_fu_497_p2__temp=0;
   unsigned long long int pre_output_fu_307_p3=0;
   unsigned long long int pre_output_fu_307_p3__temp=0;
   unsigned long long int pre_output_reg_737=0;
   unsigned long long int pre_output_reg_737__temp=0;
   unsigned long long int s_input_0_reg_219=0;
   unsigned long long int s_input_0_reg_219__temp=0;
   unsigned long long int s_input_fu_360_p3=0;
   unsigned long long int s_input_fu_360_p3__temp=0;
   unsigned long long int s_output_1_fu_94=0;
   unsigned long long int s_output_1_fu_94__temp=0;
   unsigned long long int s_output_fu_600_p3=0;
   unsigned long long int s_output_fu_600_p3__temp=0;
   unsigned long long int sext_ln253_fu_439_p1_temp_0=0;
   unsigned long long int sext_ln253_fu_439_p1_temp_0__temp=0;
   unsigned long long int sext_ln253_fu_439_p1_temp_0_temp_2=0;
   unsigned long long int sext_ln253_fu_439_p1_temp_0_temp_2__temp=0;
   unsigned long long int sext_ln253_reg_793_temp_1=0;
   unsigned long long int sext_ln253_reg_793_temp_1__temp=0;
   unsigned long long int shl_ln253_fu_423_p2=0;
   unsigned long long int shl_ln253_fu_423_p2__temp=0;
   unsigned long long int shl_ln_fu_411_p3=0;
   unsigned long long int shl_ln_fu_411_p3__temp=0;
   unsigned long long int sub_key_address0__temp=0;
   unsigned long long int sub_key_ce0__temp=0;
   unsigned long long int sub_key_q0__temp=0;
   unsigned long long int sub_ln235_fu_341_p2=0;
   unsigned long long int sub_ln235_fu_341_p2__temp=0;
   unsigned long long int sub_ln253_1_fu_458_p2=0;
   unsigned long long int sub_ln253_1_fu_458_p2__temp=0;
   unsigned long long int sub_ln253_1_fu_458_p2_temp_3=0;
   unsigned long long int sub_ln253_1_fu_458_p2_temp_3__temp=0;
   unsigned long long int sub_ln253_1_fu_458_p2_temp_3_temp_5=0;
   unsigned long long int sub_ln253_1_fu_458_p2_temp_3_temp_5__temp=0;
   unsigned long long int sub_ln253_1_reg_798=0;
   unsigned long long int sub_ln253_1_reg_798__temp=0;
   unsigned long long int sub_ln253_1_reg_798_temp_4=0;
   unsigned long long int sub_ln253_1_reg_798_temp_4__temp=0;
   unsigned long long int sub_ln253_fu_433_p2=0;
   unsigned long long int sub_ln253_fu_433_p2__temp=0;
   unsigned long long int sub_ln269_fu_640_p2=0;
   unsigned long long int sub_ln269_fu_640_p2__temp=0;
   unsigned long long int sub_ln308_fu_687_p2=0;
   unsigned long long int sub_ln308_fu_687_p2__temp=0;
   unsigned long long int temp_reg_197=0;
   unsigned long long int temp_reg_197__temp=0;
   unsigned long long int temp_reg_197_temp_10=0;
   unsigned long long int temp_reg_197_temp_10__temp=0;
   unsigned long long int temp_reg_197_temp_11=0;
   unsigned long long int temp_reg_197_temp_11__temp=0;
   unsigned long long int tmp_1_fu_574_p3=0;
   unsigned long long int tmp_1_fu_574_p3__temp=0;
   unsigned long long int tmp_7_fu_503_p4=0;
   unsigned long long int tmp_7_fu_503_p4__temp=0;
   unsigned long long int tmp_7_fu_503_p4_temp_21=0;
   unsigned long long int tmp_7_fu_503_p4_temp_21__temp=0;
   unsigned long long int tmp_7_fu_503_p4_temp_22=0;
   unsigned long long int tmp_7_fu_503_p4_temp_22__temp=0;
   unsigned long long int tmp_7_fu_503_p4_temp_23=0;
   unsigned long long int tmp_7_fu_503_p4_temp_23__temp=0;
   unsigned long long int tmp_fu_490_p3=0;
   unsigned long long int tmp_fu_490_p3__temp=0;
   unsigned long long int tmp_s_fu_542_p4=0;
   unsigned long long int tmp_s_fu_542_p4__temp=0;
   unsigned long long int trunc_ln235_1_fu_337_p1=0;
   unsigned long long int trunc_ln235_1_fu_337_p1__temp=0;
   unsigned long long int trunc_ln235_1_reg_765=0;
   unsigned long long int trunc_ln235_1_reg_765__temp=0;
   unsigned long long int trunc_ln235_1_reg_765_temp_12=0;
   unsigned long long int trunc_ln235_1_reg_765_temp_12__temp=0;
   unsigned long long int trunc_ln235_1_reg_765_temp_13=0;
   unsigned long long int trunc_ln235_1_reg_765_temp_13__temp=0;
   unsigned long long int trunc_ln235_fu_356_p1=0;
   unsigned long long int trunc_ln235_fu_356_p1__temp=0;
   unsigned long long int trunc_ln241_1_fu_371_p1=0;
   unsigned long long int trunc_ln241_1_fu_371_p1__temp=0;
   unsigned long long int trunc_ln241_2_fu_375_p1=0;
   unsigned long long int trunc_ln241_2_fu_375_p1__temp=0;
   unsigned long long int trunc_ln241_3_fu_379_p1=0;
   unsigned long long int trunc_ln241_3_fu_379_p1__temp=0;
   unsigned long long int trunc_ln241_fu_367_p1=0;
   unsigned long long int trunc_ln241_fu_367_p1__temp=0;
   unsigned long long int trunc_ln253_1_fu_487_p1=0;
   unsigned long long int trunc_ln253_1_fu_487_p1__temp=0;
   unsigned long long int trunc_ln253_fu_407_p1=0;
   unsigned long long int trunc_ln253_fu_407_p1__temp=0;
   unsigned long long int trunc_ln253_fu_407_p1_temp_16=0;
   unsigned long long int trunc_ln253_fu_407_p1_temp_16__temp=0;
   unsigned long long int trunc_ln259_1_fu_596_p1=0;
   unsigned long long int trunc_ln259_1_fu_596_p1__temp=0;
   unsigned long long int trunc_ln259_1_fu_596_p1_temp_14=0;
   unsigned long long int trunc_ln259_1_fu_596_p1_temp_14__temp=0;
   unsigned long long int trunc_ln259_1_fu_596_p1_temp_15=0;
   unsigned long long int trunc_ln259_1_fu_596_p1_temp_15__temp=0;
   unsigned long long int trunc_ln259_fu_556_p1=0;
   unsigned long long int trunc_ln259_fu_556_p1__temp=0;
   unsigned long long int trunc_ln269_1_fu_630_p1=0;
   unsigned long long int trunc_ln269_1_fu_630_p1__temp=0;
   unsigned long long int trunc_ln269_1_reg_833=0;
   unsigned long long int trunc_ln269_1_reg_833__temp=0;
   unsigned long long int trunc_ln269_1_reg_833_temp_6=0;
   unsigned long long int trunc_ln269_1_reg_833_temp_6__temp=0;
   unsigned long long int trunc_ln269_1_reg_833_temp_7=0;
   unsigned long long int trunc_ln269_1_reg_833_temp_7__temp=0;
   unsigned long long int trunc_ln269_fu_655_p1=0;
   unsigned long long int trunc_ln269_fu_655_p1__temp=0;
   unsigned long long int trunc_ln308_1_fu_683_p1=0;
   unsigned long long int trunc_ln308_1_fu_683_p1__temp=0;
   unsigned long long int trunc_ln308_1_reg_866=0;
   unsigned long long int trunc_ln308_1_reg_866__temp=0;
   unsigned long long int trunc_ln308_1_reg_866_temp_8=0;
   unsigned long long int trunc_ln308_1_reg_866_temp_8__temp=0;
   unsigned long long int trunc_ln308_1_reg_866_temp_9=0;
   unsigned long long int trunc_ln308_1_reg_866_temp_9__temp=0;
   unsigned long long int trunc_ln308_fu_701_p1=0;
   unsigned long long int trunc_ln308_fu_701_p1__temp=0;
   unsigned long long int xor_ln241_1_fu_389_p2=0;
   unsigned long long int xor_ln241_1_fu_389_p2__temp=0;
   unsigned long long int xor_ln241_1_reg_780=0;
   unsigned long long int xor_ln241_1_reg_780__temp=0;
   unsigned long long int xor_ln241_fu_383_p2=0;
   unsigned long long int xor_ln241_fu_383_p2__temp=0;
   unsigned long long int xor_ln241_reg_775=0;
   unsigned long long int xor_ln241_reg_775__temp=0;
   unsigned long long int zext_ln235_1_fu_346_p1=0;
   unsigned long long int zext_ln235_1_fu_346_p1__temp=0;
   unsigned long long int zext_ln235_fu_327_p1=0;
   unsigned long long int zext_ln235_fu_327_p1__temp=0;
   unsigned long long int zext_ln245_fu_332_p1=0;
   unsigned long long int zext_ln245_fu_332_p1__temp=0;
   unsigned long long int zext_ln253_1_fu_429_p1=0;
   unsigned long long int zext_ln253_1_fu_429_p1__temp=0;
   unsigned long long int zext_ln253_2_fu_484_p1=0;
   unsigned long long int zext_ln253_2_fu_484_p1__temp=0;
   unsigned long long int zext_ln253_3_fu_443_p1=0;
   unsigned long long int zext_ln253_3_fu_443_p1__temp=0;
   unsigned long long int zext_ln253_4_fu_474_p1=0;
   unsigned long long int zext_ln253_4_fu_474_p1__temp=0;
   unsigned long long int zext_ln253_fu_419_p1=0;
   unsigned long long int zext_ln253_fu_419_p1__temp=0;
   unsigned long long int zext_ln256_fu_532_p1=0;
   unsigned long long int zext_ln256_fu_532_p1__temp=0;
   unsigned long long int zext_ln259_fu_582_p1=0;
   unsigned long long int zext_ln259_fu_582_p1__temp=0;
   unsigned long long int zext_ln269_1_fu_645_p1=0;
   unsigned long long int zext_ln269_1_fu_645_p1__temp=0;
   unsigned long long int zext_ln269_fu_625_p1=0;
   unsigned long long int zext_ln269_fu_625_p1__temp=0;
   unsigned long long int zext_ln308_1_fu_692_p1=0;
   unsigned long long int zext_ln308_1_fu_692_p1__temp=0;
   unsigned long long int zext_ln308_fu_678_p1=0;
   unsigned long long int zext_ln308_fu_678_p1__temp=0;
    ap_done=0;
    ap_start=1;
   unsigned long long int E_rom[E_MEM_SIZE]={
32,1,2,3,4,5,4,5,6,7,8,9,8,9,10,11,12,13,12,13,14,15,16,17,16,17,18,19,20,21,20,21,22,23,24,25,24,25,26,27,28,29,28,29,30,31,32,1};
   unsigned long long int S_rom[S_MEM_SIZE]={
14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13,15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9,10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12,7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14,2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3,12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13,4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12,13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11};
   unsigned long long int P_rom[P_MEM_SIZE]={
16,7,20,21,29,12,28,17,1,15,23,26,5,18,31,10,2,8,24,14,32,27,3,9,19,13,30,6,22,11,4,25};
   unsigned long long int PI_rom[PI_MEM_SIZE]={
40,8,48,16,56,24,64,32,39,7,47,15,55,23,63,31,38,6,46,14,54,22,62,30,37,5,45,13,53,21,61,29,36,4,44,12,52,20,60,28,35,3,43,11,51,19,59,27,34,2,42,10,50,18,58,26,33,1,41,9,49,17,57,25};

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
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
               icmp_ln266_fu_613_p2 =   ( j_2_reg_243__temp  == 32 ? 1 :  0 ) ;
       if(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               icmp_ln266_fu_613_p2 =   ( j_2_reg_243__temp  == 32 ? 1 :  0 ) ;
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 1){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           L1_reg_187 =  ( L & 4294967295 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_175 =  0;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           s_output_1_fu_94 =  0;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           temp_reg_197 =  ( R & 4294967295 ) ;
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state2;
   }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 0){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               L1_reg_187 =  ( L & 4294967295 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               i_0_reg_175 =  0;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               s_output_1_fu_94 =  0;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               temp_reg_197 =  ( R & 4294967295 ) ;
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
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
               icmp_ln227_fu_295_p2 =   ( i_0_reg_175__temp  == 16 ? 1 :  0 ) ;
               icmp_ln227_fu_295_p2 =   ( i_0_reg_175__temp  == 16 ? 1 :  0 ) ;
   if(((icmp_ln227_fu_295_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if((icmp_ln227_fu_295_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           i_0_i_reg_265 =  0;
       }
       if((icmp_ln227_fu_295_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           inv_init_perm_res_0_s_reg_276 =  0;
       }
       if((icmp_ln227_fu_295_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           j_0_reg_208 =  0;
       }
       if((icmp_ln227_fu_295_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           s_input_0_reg_219 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_3_reg_732 =   ( ( i_0_reg_175__temp  + 1 ) & 31 ) ;
       }
       if((icmp_ln227_fu_295_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           pre_output_reg_737 =   (  ( (  ( ( temp_reg_197__temp  << 32 )  & 18446744073709551615 )  | L1_reg_187__temp  ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state14;
   }
   if(((icmp_ln227_fu_295_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if((icmp_ln227_fu_295_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               i_0_i_reg_265 =  0;
       }
       if((icmp_ln227_fu_295_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               inv_init_perm_res_0_s_reg_276 =  0;
       }
       if((icmp_ln227_fu_295_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               j_0_reg_208 =  0;
       }
       if((icmp_ln227_fu_295_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               s_input_0_reg_219 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_3_reg_732 =   ( ( i_0_reg_175__temp  + 1 ) & 31 ) ;
       }
       if((icmp_ln227_fu_295_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               pre_output_reg_737 =   (  ( (  ( ( temp_reg_197__temp  << 32 )  & 18446744073709551615 )  | L1_reg_187__temp  ) & 18446744073709551615 )  & 18446744073709551615 ) ;
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
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state3)
       {
           E_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           sub_key_ce0 =  1;
       }
               icmp_ln232_fu_315_p2 =   ( j_0_reg_208__temp  == 48 ? 1 :  0 ) ;
   if(((icmp_ln232_fu_315_p2 == 1) && (1 == ap_CS_fsm_state3)) == 1){
       if(1 == ap_CS_fsm_state3)
       {
           j_reg_745 =   ( ( j_0_reg_208__temp  + 1 ) & 63 ) ;
       }
       if(sub_key_ce0){
          sub_key_q0 = sub_key_ram[sub_key_address0];
           if(sub_key_we0){
              sub_key_ram[sub_key_address0] = sub_key_d0;
           }
       }
       if(E_ce0){
          E_q0=E_rom[E_address0];
       }
       goto ap_ST_fsm_state6;
   }
   if(((icmp_ln232_fu_315_p2 == 1) && (1 == ap_CS_fsm_state3)) == 0){
       if(1 == ap_CS_fsm_state3)
       {
               j_reg_745 =   ( ( j_0_reg_208__temp  + 1 ) & 63 ) ;
       }
       if(sub_key_ce0){
          sub_key_q0 = sub_key_ram[sub_key_address0];
           if(sub_key_we0){
              sub_key_ram[sub_key_address0] = sub_key_d0;
           }
       }
       if(E_ce0){
          E_q0=E_rom[E_address0];
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
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state4)
       {
           trunc_ln235_1_reg_765 =   ( ( s_input_0_reg_219__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
           E_load_reg_760 =  E_q0__temp ;
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
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
               icmp_ln227_fu_295_p2 =   ( i_0_reg_175__temp  == 16 ? 1 :  0 ) ;
               icmp_ln227_fu_295_p2 =   ( i_0_reg_175__temp  == 16 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state5)
       {
           j_0_reg_208 =  j_reg_745__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           s_input_0_reg_219 =   (  ( (  ( ( trunc_ln235_1_reg_765__temp  << 1 )  & 18446744073709551615 )  |  ( ( ( ( temp_reg_197__temp  >>  (  ( ( do_twos_complement( 32 , 6 )  - do_twos_complement( E_load_reg_760__temp  , 6 )  ) & 63 )  & 4294967295 )  )  & 4294967295 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 ) ;
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
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state6)
       {
           j_1_reg_231 =  0;
       }
       if(1 == ap_CS_fsm_state6)
       {
           xor_ln241_reg_775 =   ( (  ( ( ( sub_key_q0__temp  & 18446744073709551615 )  & 140737488355327 ) & 140737488355327 )  ^  ( ( s_input_0_reg_219__temp  & 140737488355327 ) & 140737488355327 )  ) & 140737488355327 ) ;
           xor_ln241_1_reg_780 =   ( (  ( ( s_input_0_reg_219__temp  & 281474976710655 ) & 281474976710655 )  ^  ( ( ( sub_key_q0__temp  & 18446744073709551615 )  & 281474976710655 ) & 281474976710655 )  ) & 281474976710655 ) ;
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
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
               icmp_ln250_fu_395_p2 =   ( j_1_reg_231__temp  == 8 ? 1 :  0 ) ;
               icmp_ln250_fu_395_p2 =   ( j_1_reg_231__temp  == 8 ? 1 :  0 ) ;
   if(((icmp_ln250_fu_395_p2 == 1) && (1 == ap_CS_fsm_state7)) == 1){
       if((icmp_ln250_fu_395_p2 == 1) && (1 == ap_CS_fsm_state7))
       {
           f_function_res_0_reg_254 =  0;
       }
       if((icmp_ln250_fu_395_p2 == 1) && (1 == ap_CS_fsm_state7))
       {
           j_2_reg_243 =  0;
       }
       if(1 == ap_CS_fsm_state7)
       {
           j_3_reg_788 =   ( ( j_1_reg_231__temp  + 1 ) & 15 ) ;
       }
       if((1 == ap_CS_fsm_state7) && (icmp_ln250_fu_395_p2 == 0))
       {
           sub_ln253_1_reg_798 =   ( (  ( (  ( (  (  ( ( j_1_reg_231__temp  << 1 )  & 15 )  & 127 )  -  (  (  ( (  ( ( j_1_reg_231__temp  & 7 ) & 7 )  << 3 )  & 18446744073709551615 )  & 63 )  & 127 )  ) & 127 )  & 126 ) & 18446744073709551615 )  |  ( ( sub_ln253_1_reg_798__temp  & 1 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
           sext_ln253_reg_793 =   ( (  ( ( ( do_twos_complement(  ( (  (  (  ( (  ( ( j_1_reg_231__temp  & 7 ) & 7 )  << 3 )  & 18446744073709551615 )  & 63 )  & 127 )  -  (  ( ( j_1_reg_231__temp  << 1 )  & 15 )  & 127 )  ) & 127 )  , 7 ) & 4294967295 )  & 4294967294 ) & 18446744073709551615 )  |  ( ( sext_ln253_reg_793__temp  & 1 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
           lshr_ln253_1_reg_803 =  ( (  ( ( xor_ln241_1_reg_780__temp  &  ( ( 145135534866432 >> ( do_twos_complement( ( do_twos_complement(  ( (  (  (  ( (  ( ( j_1_reg_231__temp  & 7 ) & 7 )  << 3 )  & 18446744073709551615 )  & 63 )  & 127 )  -  (  ( ( j_1_reg_231__temp  << 1 )  & 15 )  & 127 )  ) & 127 )  , 7 ) & 4294967295 )  , 32 ) & 281474976710655 )  )  & 281474976710655 )  ) & 281474976710655 )  >> ( do_twos_complement( ( do_twos_complement(  ( ( 42 +  ( (  (  ( ( j_1_reg_231__temp  << 1 )  & 15 )  & 127 )  -  (  (  ( (  ( ( j_1_reg_231__temp  & 7 ) & 7 )  << 3 )  & 18446744073709551615 )  & 63 )  & 127 )  ) & 127 )  ) & 127 )  , 7 ) & 4294967295 )  , 32 ) & 281474976710655 )  )  & 281474976710655 ) ;
       }
       goto ap_ST_fsm_state11;
   }
   if(((icmp_ln250_fu_395_p2 == 1) && (1 == ap_CS_fsm_state7)) == 0){
       if((icmp_ln250_fu_395_p2 == 1) && (1 == ap_CS_fsm_state7))
       {
               f_function_res_0_reg_254 =  0;
       }
       if((icmp_ln250_fu_395_p2 == 1) && (1 == ap_CS_fsm_state7))
       {
               j_2_reg_243 =  0;
       }
       if(1 == ap_CS_fsm_state7)
       {
               j_3_reg_788 =   ( ( j_1_reg_231__temp  + 1 ) & 15 ) ;
       }
       if((1 == ap_CS_fsm_state7) && (icmp_ln250_fu_395_p2 == 0))
       {
               sub_ln253_1_reg_798 =   ( (  ( (  ( (  (  ( ( j_1_reg_231__temp  << 1 )  & 15 )  & 127 )  -  (  (  ( (  ( ( j_1_reg_231__temp  & 7 ) & 7 )  << 3 )  & 18446744073709551615 )  & 63 )  & 127 )  ) & 127 )  & 126 ) & 18446744073709551615 )  |  ( ( sub_ln253_1_reg_798__temp  & 1 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               sext_ln253_reg_793 =   ( (  ( ( ( do_twos_complement(  ( (  (  (  ( (  ( ( j_1_reg_231__temp  & 7 ) & 7 )  << 3 )  & 18446744073709551615 )  & 63 )  & 127 )  -  (  ( ( j_1_reg_231__temp  << 1 )  & 15 )  & 127 )  ) & 127 )  , 7 ) & 4294967295 )  & 4294967294 ) & 18446744073709551615 )  |  ( ( sext_ln253_reg_793__temp  & 1 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               lshr_ln253_1_reg_803 =  ( (  ( ( xor_ln241_1_reg_780__temp  &  ( ( 145135534866432 >> ( do_twos_complement( ( do_twos_complement(  ( (  (  (  ( (  ( ( j_1_reg_231__temp  & 7 ) & 7 )  << 3 )  & 18446744073709551615 )  & 63 )  & 127 )  -  (  ( ( j_1_reg_231__temp  << 1 )  & 15 )  & 127 )  ) & 127 )  , 7 ) & 4294967295 )  , 32 ) & 281474976710655 )  )  & 281474976710655 )  ) & 281474976710655 )  >> ( do_twos_complement( ( do_twos_complement(  ( ( 42 +  ( (  (  ( ( j_1_reg_231__temp  << 1 )  & 15 )  & 127 )  -  (  (  ( (  ( ( j_1_reg_231__temp  & 7 ) & 7 )  << 3 )  & 18446744073709551615 )  & 63 )  & 127 )  ) & 127 )  ) & 127 )  , 7 ) & 4294967295 )  , 32 ) & 281474976710655 )  )  & 281474976710655 ) ;
       }
       goto ap_ST_fsm_state8;
   }

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
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state8)
       {
           add_ln259_1_reg_810 =   ( ( do_twos_complement( ( do_twos_complement(  ( ( do_twos_complement( ( do_twos_complement(  ( ( ( (  ( ( xor_ln241_reg_775__temp  &  ( ( 131941395333120 >> ( do_twos_complement( sext_ln253_reg_793__temp  , 32 ) & 140737488355327 )  )  & 140737488355327 )  ) & 140737488355327 )  >> ( do_twos_complement( ( do_twos_complement(  ( ( 43 + sub_ln253_1_reg_798__temp  ) & 127 )  , 7 ) & 4294967295 )  , 32 ) & 140737488355327 )  )  & 140737488355327 )  & 255 ) & 255 )  , 8 ) & 511 )  , 9 )  + do_twos_complement( ( do_twos_complement(  (  ( (  ( (  ( (  (  ( (  ( ( lshr_ln253_1_reg_803__temp  >> 5 )  & 18446744073709551615 )  & 7 ) & 18446744073709551615 )  & 7 )  << 1 )  & 18446744073709551615 )  |  ( (  ( ( lshr_ln253_1_reg_803__temp  & 1 ) & 1 )  |  ( (  ( ( lshr_ln253_1_reg_803__temp  >> 4 )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 1 )  ) & 18446744073709551615 )  << 4 )  & 18446744073709551615 )  & 255 )  , 8 ) & 511 )  , 9 )  ) & 511 )  , 9 ) & 2047 )  , 11 )  + do_twos_complement(  (  (  ( ( j_1_reg_231__temp  << 6 )  & 18446744073709551615 )  & 1023 )  & 2047 )  , 11 )  ) & 2047 ) ;
       }
       goto ap_ST_fsm_state9;

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
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state9)
       {
           S_ce0 =  1;
       }
       if(S_ce0){
          S_q0=S_rom[S_address0];
       }
       goto ap_ST_fsm_state10;

   ap_ST_fsm_state10:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 1;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state10)
       {
           j_1_reg_231 =  j_3_reg_788__temp ;
       }
       if(1 == ap_CS_fsm_state10)
       {
           s_output_1_fu_94 =   (  ( (  ( (  ( ( s_output_1_fu_94__temp  & 268435455 ) & 268435455 )  << 4 )  & 18446744073709551615 )  | S_q0__temp  ) & 18446744073709551615 )  & 4294967295 ) ;
       }
       goto ap_ST_fsm_state7;

   ap_ST_fsm_state11:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 1;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
               icmp_ln266_fu_613_p2 =   ( j_2_reg_243__temp  == 32 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state11)
       {
           P_ce0 =  1;
       }
               icmp_ln266_fu_613_p2 =   ( j_2_reg_243__temp  == 32 ? 1 :  0 ) ;
   if(((icmp_ln266_fu_613_p2 == 1) && (1 == ap_CS_fsm_state11)) == 1){
       if((icmp_ln266_fu_613_p2 == 1) && (1 == ap_CS_fsm_state11))
       {
           L1_reg_187 =  temp_reg_197__temp ;
       }
       if((icmp_ln266_fu_613_p2 == 1) && (1 == ap_CS_fsm_state11))
       {
           i_0_reg_175 =  i_3_reg_732__temp ;
       }
       if((icmp_ln266_fu_613_p2 == 1) && (1 == ap_CS_fsm_state11))
       {
           temp_reg_197 =   ( ( f_function_res_0_reg_254__temp  ^ L1_reg_187__temp  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state11)
       {
           j_4_reg_823 =   ( ( j_2_reg_243__temp  + 1 ) & 63 ) ;
       }
       if((1 == ap_CS_fsm_state11) && (icmp_ln266_fu_613_p2 == 0))
       {
           trunc_ln269_1_reg_833 =   ( ( f_function_res_0_reg_254__temp  & 2147483647 ) & 2147483647 ) ;
       }
       if(P_ce0){
          P_q0=P_rom[P_address0];
       }
       goto ap_ST_fsm_state2;
   }
   if(((icmp_ln266_fu_613_p2 == 1) && (1 == ap_CS_fsm_state11)) == 0){
       if((icmp_ln266_fu_613_p2 == 1) && (1 == ap_CS_fsm_state11))
       {
               L1_reg_187 =  temp_reg_197__temp ;
       }
       if((icmp_ln266_fu_613_p2 == 1) && (1 == ap_CS_fsm_state11))
       {
               i_0_reg_175 =  i_3_reg_732__temp ;
       }
       if((icmp_ln266_fu_613_p2 == 1) && (1 == ap_CS_fsm_state11))
       {
               temp_reg_197 =   ( ( f_function_res_0_reg_254__temp  ^ L1_reg_187__temp  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state11)
       {
               j_4_reg_823 =   ( ( j_2_reg_243__temp  + 1 ) & 63 ) ;
       }
       if((1 == ap_CS_fsm_state11) && (icmp_ln266_fu_613_p2 == 0))
       {
               trunc_ln269_1_reg_833 =   ( ( f_function_res_0_reg_254__temp  & 2147483647 ) & 2147483647 ) ;
       }
       if(P_ce0){
          P_q0=P_rom[P_address0];
       }
       goto ap_ST_fsm_state12;
   }

   ap_ST_fsm_state12:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 1;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state12)
       {
           P_load_reg_843 =  P_q0__temp ;
       }
       goto ap_ST_fsm_state13;

   ap_ST_fsm_state13:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 1;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
               icmp_ln250_fu_395_p2 =   ( j_1_reg_231__temp  == 8 ? 1 :  0 ) ;
               icmp_ln250_fu_395_p2 =   ( j_1_reg_231__temp  == 8 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state13)
       {
           f_function_res_0_reg_254 =   (  ( (  ( ( trunc_ln269_1_reg_833__temp  << 1 )  & 18446744073709551615 )  |  ( ( ( ( s_output_1_fu_94__temp  >>  (  ( ( do_twos_complement( 32 , 6 )  - do_twos_complement( P_load_reg_843__temp  , 6 )  ) & 63 )  & 4294967295 )  )  & 4294967295 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state13)
       {
           j_2_reg_243 =  j_4_reg_823__temp ;
       }
       goto ap_ST_fsm_state11;

   ap_ST_fsm_state14:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 1;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
               icmp_ln304_fu_666_p2 =   ( i_0_i_reg_265__temp  == 64 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state14)
       {
           PI_ce0 =  1;
       }
       if(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))
       {
           ap_ready =  1;
       }
       if((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))
       {
           ap_return = inv_init_perm_res_0_s_reg_276;
       }
               icmp_ln304_fu_666_p2 =   ( i_0_i_reg_265__temp  == 64 ? 1 :  0 ) ;
   if(((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)) == 1){
       if((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))
       {
           ap_return_preg = inv_init_perm_res_0_s_reg_276;
       }
       if(1 == ap_CS_fsm_state14)
       {
           i_reg_856 =   ( ( i_0_i_reg_265__temp  + 1 ) & 127 ) ;
       }
       if((1 == ap_CS_fsm_state14) && (icmp_ln304_fu_666_p2 == 0))
       {
           trunc_ln308_1_reg_866 =   ( ( inv_init_perm_res_0_s_reg_276__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
       }
       if(PI_ce0){
          PI_q0=PI_rom[PI_address0];
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)) == 0){
       if((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))
       {
               ap_return_preg = inv_init_perm_res_0_s_reg_276;
       }
       if(1 == ap_CS_fsm_state14)
       {
               i_reg_856 =   ( ( i_0_i_reg_265__temp  + 1 ) & 127 ) ;
       }
       if((1 == ap_CS_fsm_state14) && (icmp_ln304_fu_666_p2 == 0))
       {
               trunc_ln308_1_reg_866 =   ( ( inv_init_perm_res_0_s_reg_276__temp  & 9223372036854775807 ) & 9223372036854775807 ) ;
       }
       if(PI_ce0){
          PI_q0=PI_rom[PI_address0];
       }
       goto ap_ST_fsm_state15;
   }

   ap_ST_fsm_state15:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 1;
    ap_CS_fsm_state16 = 0;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state15)
       {
           PI_load_reg_871 =  PI_q0__temp ;
       }
       goto ap_ST_fsm_state16;

   ap_ST_fsm_state16:

	clock = clock + 1;
    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 1;
   sext_ln259_1_fu_560_p1__temp = sext_ln259_1_fu_560_p1 ;
   sext_ln256_fu_528_p1__temp = sext_ln256_fu_528_p1 ;
   sext_ln253_fu_439_p1__temp = sext_ln253_fu_439_p1 ;
   sext_ln259_fu_552_p1__temp = sext_ln259_fu_552_p1 ;
   sext_ln259_2_fu_570_p1__temp = sext_ln259_2_fu_570_p1 ;
   sext_ln253_1_fu_470_p1__temp = sext_ln253_1_fu_470_p1 ;
   sext_ln253_reg_793__temp = sext_ln253_reg_793 ;
   sext_ln259_3_fu_592_p1__temp = sext_ln259_3_fu_592_p1 ;
   s_input_0_reg_219__temp = s_input_0_reg_219 ;
   or_ln254_fu_497_p2__temp = or_ln254_fu_497_p2 ;
   ap_ready__temp = ap_ready ;
   sub_key_ce0__temp = sub_key_ce0 ;
   lshr_ln235_fu_350_p2__temp = lshr_ln235_fu_350_p2 ;
   i_3_fu_301_p2__temp = i_3_fu_301_p2 ;
   trunc_ln235_1_fu_337_p1__temp = trunc_ln235_1_fu_337_p1 ;
   trunc_ln308_1_fu_683_p1__temp = trunc_ln308_1_fu_683_p1 ;
   zext_ln235_fu_327_p1__temp = zext_ln235_fu_327_p1 ;
   sub_ln269_fu_640_p2__temp = sub_ln269_fu_640_p2 ;
   icmp_ln304_fu_666_p2__temp = icmp_ln304_fu_666_p2 ;
   zext_ln253_2_fu_484_p1__temp = zext_ln253_2_fu_484_p1 ;
   ap_return_preg__temp = ap_return_preg ;
   P_ce0__temp = P_ce0 ;
   j_1_reg_231_temp_17__temp = j_1_reg_231_temp_17 ;
   j_1_reg_231__temp = j_1_reg_231 ;
   sub_ln308_fu_687_p2__temp = sub_ln308_fu_687_p2 ;
   zext_ln308_fu_678_p1__temp = zext_ln308_fu_678_p1 ;
   icmp_ln266_fu_613_p2__temp = icmp_ln266_fu_613_p2 ;
   ap_return__temp = ap_return ;
   inv_init_perm_res_0_s_reg_276__temp = inv_init_perm_res_0_s_reg_276 ;
   j_fu_321_p2__temp = j_fu_321_p2 ;
   sub_ln253_1_fu_458_p2__temp = sub_ln253_1_fu_458_p2 ;
   add_ln253_fu_464_p2__temp = add_ln253_fu_464_p2 ;
   tmp_7_fu_503_p4_temp_22__temp = tmp_7_fu_503_p4_temp_22 ;
   sub_ln235_fu_341_p2__temp = sub_ln235_fu_341_p2 ;
   add_ln259_1_reg_810__temp = add_ln259_1_reg_810 ;
   lshr_ln253_fu_447_p2__temp = lshr_ln253_fu_447_p2 ;
   P_load_reg_843__temp = P_load_reg_843 ;
   j_0_reg_208__temp = j_0_reg_208 ;
   lshr_ln256_fu_512_p2__temp = lshr_ln256_fu_512_p2 ;
   zext_ln256_fu_532_p1__temp = zext_ln256_fu_532_p1 ;
   ap_idle__temp = ap_idle ;
   icmp_ln232_fu_315_p2__temp = icmp_ln232_fu_315_p2 ;
   tmp_s_fu_542_p4__temp = tmp_s_fu_542_p4 ;
   trunc_ln241_3_fu_379_p1__temp = trunc_ln241_3_fu_379_p1 ;
   PI_address0__temp = PI_address0 ;
   j_3_fu_401_p2__temp = j_3_fu_401_p2 ;
   PI_q0__temp = PI_q0 ;
   trunc_ln259_1_fu_596_p1_temp_15__temp = trunc_ln259_1_fu_596_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   j_reg_745__temp = j_reg_745 ;
   trunc_ln253_fu_407_p1_temp_16__temp = trunc_ln253_fu_407_p1_temp_16 ;
   j_3_reg_788__temp = j_3_reg_788 ;
   trunc_ln253_fu_407_p1__temp = trunc_ln253_fu_407_p1 ;
   temp_reg_197_temp_10__temp = temp_reg_197_temp_10 ;
   trunc_ln235_fu_356_p1__temp = trunc_ln235_fu_356_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   add_ln259_fu_564_p2__temp = add_ln259_fu_564_p2 ;
   zext_ln308_1_fu_692_p1__temp = zext_ln308_1_fu_692_p1 ;
   s_input_fu_360_p3__temp = s_input_fu_360_p3 ;
   PI_ce0__temp = PI_ce0 ;
   and_ln253_fu_453_p2__temp = and_ln253_fu_453_p2 ;
   zext_ln269_fu_625_p1__temp = zext_ln269_fu_625_p1 ;
   lshr_ln256_1_fu_536_p2__temp = lshr_ln256_1_fu_536_p2 ;
   lshr_ln253_1_reg_803_temp_20__temp = lshr_ln253_1_reg_803_temp_20 ;
   tmp_fu_490_p3__temp = tmp_fu_490_p3 ;
   tmp_7_fu_503_p4_temp_21__temp = tmp_7_fu_503_p4_temp_21 ;
   E_q0__temp = E_q0 ;
   and_ln256_fu_518_p2__temp = and_ln256_fu_518_p2 ;
   tmp_1_fu_574_p3__temp = tmp_1_fu_574_p3 ;
   lshr_ln253_1_fu_478_p2__temp = lshr_ln253_1_fu_478_p2 ;
   ap_start__temp = ap_start ;
   trunc_ln269_fu_655_p1__temp = trunc_ln269_fu_655_p1 ;
   lshr_ln253_1_reg_803__temp = lshr_ln253_1_reg_803 ;
   icmp_ln250_fu_395_p2__temp = icmp_ln250_fu_395_p2 ;
   zext_ln245_fu_332_p1__temp = zext_ln245_fu_332_p1 ;
   zext_ln259_fu_582_p1__temp = zext_ln259_fu_582_p1 ;
   S_address0__temp = S_address0 ;
   lshr_ln253_1_reg_803_temp_19__temp = lshr_ln253_1_reg_803_temp_19 ;
   trunc_ln259_1_fu_596_p1_temp_14__temp = trunc_ln259_1_fu_596_p1_temp_14 ;
   i_3_reg_732__temp = i_3_reg_732 ;
   trunc_ln308_1_reg_866_temp_8__temp = trunc_ln308_1_reg_866_temp_8 ;
   temp_reg_197_temp_11__temp = temp_reg_197_temp_11 ;
   j_4_fu_619_p2__temp = j_4_fu_619_p2 ;
   trunc_ln235_1_reg_765__temp = trunc_ln235_1_reg_765 ;
   lshr_ln269_fu_649_p2__temp = lshr_ln269_fu_649_p2 ;
   PI_load_reg_871__temp = PI_load_reg_871 ;
   f_function_res_0_reg_254__temp = f_function_res_0_reg_254 ;
   i_reg_856__temp = i_reg_856 ;
   i_0_i_reg_265__temp = i_0_i_reg_265 ;
   j_2_reg_243__temp = j_2_reg_243 ;
   trunc_ln235_1_reg_765_temp_13__temp = trunc_ln235_1_reg_765_temp_13 ;
   sext_ln253_fu_439_p1_temp_0_temp_2__temp = sext_ln253_fu_439_p1_temp_0_temp_2 ;
   i_fu_672_p2__temp = i_fu_672_p2 ;
   trunc_ln259_fu_556_p1__temp = trunc_ln259_fu_556_p1 ;
   sub_ln253_1_fu_458_p2_temp_3__temp = sub_ln253_1_fu_458_p2_temp_3 ;
   ap_rst__temp = ap_rst ;
   sext_ln253_fu_439_p1_temp_0__temp = sext_ln253_fu_439_p1_temp_0 ;
   sub_ln253_1_fu_458_p2_temp_3_temp_5__temp = sub_ln253_1_fu_458_p2_temp_3_temp_5 ;
   trunc_ln241_2_fu_375_p1__temp = trunc_ln241_2_fu_375_p1 ;
   trunc_ln269_1_reg_833_temp_6__temp = trunc_ln269_1_reg_833_temp_6 ;
   trunc_ln269_1_fu_630_p1__temp = trunc_ln269_1_fu_630_p1 ;
   shl_ln_fu_411_p3__temp = shl_ln_fu_411_p3 ;
   zext_ln253_1_fu_429_p1__temp = zext_ln253_1_fu_429_p1 ;
   j_4_reg_823__temp = j_4_reg_823 ;
   add_ln259_1_fu_586_p2__temp = add_ln259_1_fu_586_p2 ;
   zext_ln253_fu_419_p1__temp = zext_ln253_fu_419_p1 ;
   trunc_ln308_1_reg_866__temp = trunc_ln308_1_reg_866 ;
   trunc_ln308_fu_701_p1__temp = trunc_ln308_fu_701_p1 ;
   sext_ln253_reg_793_temp_1__temp = sext_ln253_reg_793_temp_1 ;
   tmp_7_fu_503_p4__temp = tmp_7_fu_503_p4 ;
   sub_ln253_fu_433_p2__temp = sub_ln253_fu_433_p2 ;
   zext_ln253_3_fu_443_p1__temp = zext_ln253_3_fu_443_p1 ;
   trunc_ln241_1_fu_371_p1__temp = trunc_ln241_1_fu_371_p1 ;
   pre_output_reg_737__temp = pre_output_reg_737 ;
   xor_ln241_1_reg_780__temp = xor_ln241_1_reg_780 ;
   E_ce0__temp = E_ce0 ;
   s_output_1_fu_94__temp = s_output_1_fu_94 ;
   trunc_ln253_1_fu_487_p1__temp = trunc_ln253_1_fu_487_p1 ;
   zext_ln235_1_fu_346_p1__temp = zext_ln235_1_fu_346_p1 ;
   trunc_ln241_fu_367_p1__temp = trunc_ln241_fu_367_p1 ;
   add_ln256_fu_523_p2__temp = add_ln256_fu_523_p2 ;
   R1_fu_634_p2__temp = R1_fu_634_p2 ;
   pre_output_fu_307_p3__temp = pre_output_fu_307_p3 ;
   trunc_ln269_1_reg_833__temp = trunc_ln269_1_reg_833 ;
   P_q0__temp = P_q0 ;
   xor_ln241_fu_383_p2__temp = xor_ln241_fu_383_p2 ;
   E_address0__temp = E_address0 ;
   zext_ln253_4_fu_474_p1__temp = zext_ln253_4_fu_474_p1 ;
   trunc_ln235_1_reg_765_temp_12__temp = trunc_ln235_1_reg_765_temp_12 ;
   L1_reg_187__temp = L1_reg_187 ;
   lshr_ln253_1_reg_803_temp_18__temp = lshr_ln253_1_reg_803_temp_18 ;
   xor_ln241_reg_775__temp = xor_ln241_reg_775 ;
   s_output_fu_600_p3__temp = s_output_fu_600_p3 ;
   icmp_ln227_fu_295_p2__temp = icmp_ln227_fu_295_p2 ;
   temp_reg_197__temp = temp_reg_197 ;
   trunc_ln269_1_reg_833_temp_7__temp = trunc_ln269_1_reg_833_temp_7 ;
   R__temp = R ;
   sub_ln253_1_reg_798__temp = sub_ln253_1_reg_798 ;
   S_q0__temp = S_q0 ;
   tmp_7_fu_503_p4_temp_23__temp = tmp_7_fu_503_p4_temp_23 ;
   trunc_ln259_1_fu_596_p1__temp = trunc_ln259_1_fu_596_p1 ;
   S_ce0__temp = S_ce0 ;
   inv_init_perm_res_fu_705_p3__temp = inv_init_perm_res_fu_705_p3 ;
   sub_ln253_1_reg_798_temp_4__temp = sub_ln253_1_reg_798_temp_4 ;
   sub_key_address0__temp = sub_key_address0 ;
   L__temp = L ;
   ap_clk__temp = ap_clk ;
   sub_key_q0__temp = sub_key_q0 ;
   E_load_reg_760__temp = E_load_reg_760 ;
   P_address0__temp = P_address0 ;
   zext_ln269_1_fu_645_p1__temp = zext_ln269_1_fu_645_p1 ;
   lshr_ln308_fu_696_p2__temp = lshr_ln308_fu_696_p2 ;
   shl_ln253_fu_423_p2__temp = shl_ln253_fu_423_p2 ;
   f_function_res_fu_659_p3__temp = f_function_res_fu_659_p3 ;
   trunc_ln308_1_reg_866_temp_9__temp = trunc_ln308_1_reg_866_temp_9 ;
   xor_ln241_1_fu_389_p2__temp = xor_ln241_1_fu_389_p2 ;
   i_0_reg_175__temp = i_0_reg_175 ;
   ap_done__temp = ap_done ;

       sub_key_ce0 = 0;
       sub_key_we0 = 0;
       sub_key_address0 =   (  ( i_0_reg_175__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       E_ce0 = 0;
       E_address0 =   (  ( j_0_reg_208__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       S_ce0 = 0;
       S_address0 =   ( ( do_twos_complement( add_ln259_1_reg_810__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       P_ce0 = 0;
       P_address0 =   (  ( j_2_reg_243__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
       PI_ce0 = 0;
       PI_address0 =   (  ( i_0_i_reg_265__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(ap_rst == 1){
ap_return_preg = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
E_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state14)){
PI_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state11)){
P_ce0 = 0 ; 

}
    if(!(1 == ap_CS_fsm_state9)){
S_ce0 = 0 ; 

}
    if(!(((ap_start == 0) && (1 == ap_CS_fsm_state1)) || ((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14)))){
ap_done = 0 ; 

}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_ready = 0 ; 

}
    if(!((icmp_ln304_fu_666_p2 == 1) && (1 == ap_CS_fsm_state14))){
ap_return = ap_return_preg ; 

}
    if(!(1 == ap_CS_fsm_state3)){
sub_key_ce0 = 0 ; 

}
    sext_ln253_reg_793 =  ( ( sext_ln253_reg_793 & 4294967294 ) & 4294967295 )  ; 
sub_ln253_1_reg_798 =  ( ( sub_ln253_1_reg_798 & 126 ) & 127 )  ; 
       if(1 == ap_CS_fsm_state16)
       {
           i_0_i_reg_265 =  i_reg_856__temp ;
       }
       if(1 == ap_CS_fsm_state16)
       {
           inv_init_perm_res_0_s_reg_276 =   (  ( (  ( ( trunc_ln308_1_reg_866__temp  << 1 )  & 18446744073709551615 )  |  ( ( ( ( pre_output_reg_737__temp  >>  (  ( ( do_twos_complement( 64 , 7 )  - do_twos_complement( PI_load_reg_871__temp  , 7 )  ) & 127 )  & 18446744073709551615 )  )  & 18446744073709551615 )  & 1 ) & 1 )  ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       }
       goto ap_ST_fsm_state14;
   end:
    *L__1=L;
    *R__1=R;
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_return__1=ap_return;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *sub_key_address0__1=sub_key_address0;
    *sub_key_ce0__1=sub_key_ce0;
    *sub_key_q0__1=sub_key_q0;
    *dummy=clock;
       return;
}
