#include<stdio.h>
#define countLeadingZerosHig_DataWidth 4
#define countLeadingZerosHig_AddressRange 256
#define countLeadingZerosHig_AddressWidth 8
#define countLeadingZerosHig_DWIDTH 4
#define countLeadingZerosHig_AWIDTH 8
#define countLeadingZerosHig_MEM_SIZE 256
void roundAndPackFloat64(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void subFloat64Sigs(unsigned long long int *a__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *b__1,unsigned long long int *zSign__1,int dummy){
unsigned long long int a=*a__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int b=*b__1;
unsigned long long int zSign=*zSign__1;
   long long int ap_CS_fsm_state1=1;
   long long int ap_CS_fsm_state10=1;
   long long int ap_CS_fsm_state11=1;
   long long int ap_CS_fsm_state12=1;
   long long int ap_CS_fsm_state2=1;
   long long int ap_CS_fsm_state3=1;
   long long int ap_CS_fsm_state4=1;
   long long int ap_CS_fsm_state5=1;
   long long int ap_CS_fsm_state6=1;
   long long int ap_CS_fsm_state7=1;
   long long int ap_CS_fsm_state8=1;
   long long int ap_CS_fsm_state9=1;
   long long int shiftCount_1_fu_1304_p2=0;
   long long int shiftCount_1_fu_1304_p2__temp=0;
   long long int shiftCount_1_reg_1610=0;
   long long int shiftCount_1_reg_1610__temp=0;
   long long int shiftCount_3_cast1_fu_1320_p1=0;
   long long int shiftCount_3_cast1_fu_1320_p1__temp=0;
   long long int shiftCount_3_cast_fu_1323_p1=0;
   long long int shiftCount_3_cast_fu_1323_p1__temp=0;
   unsigned long long int a1_3_fu_848_p3=0;
   unsigned long long int a1_3_fu_848_p3__temp=0;
   unsigned long long int a1_4_fu_670_p3=0;
   unsigned long long int a1_4_fu_670_p3__temp=0;
   unsigned long long int a1_5_fu_564_p3=0;
   unsigned long long int a1_5_fu_564_p3__temp=0;
   unsigned long long int aExp_cast_fu_364_p1=0;
   unsigned long long int aExp_cast_fu_364_p1__temp=0;
   unsigned long long int aExp_fu_352_p4=0;
   unsigned long long int aExp_fu_352_p4__temp=0;
   unsigned long long int aExp_reg_1355=0;
   unsigned long long int aExp_reg_1355__temp=0;
   unsigned long long int aSig_1_fu_1121_p4=0;
   unsigned long long int aSig_1_fu_1121_p4__temp=0;
   unsigned long long int aSig_2_fu_861_p4=0;
   unsigned long long int aSig_2_fu_861_p4__temp=0;
   unsigned long long int aSig_3_cast_fu_877_p1=0;
   unsigned long long int aSig_3_cast_fu_877_p1__temp=0;
   unsigned long long int aSig_3_fu_870_p3=0;
   unsigned long long int aSig_3_fu_870_p3__temp=0;
   unsigned long long int aSig_3_reg_1511=0;
   unsigned long long int aSig_3_reg_1511__temp=0;
   unsigned long long int aSig_cast1_cast_fu_404_p1=0;
   unsigned long long int aSig_cast1_cast_fu_404_p1__temp=0;
   unsigned long long int aSig_cast1_cast_reg_1378=0;
   unsigned long long int aSig_cast1_cast_reg_1378__temp=0;
   unsigned long long int aSig_cast_fu_1013_p1=0;
   unsigned long long int aSig_cast_fu_1013_p1__temp=0;
   unsigned long long int aSig_fu_396_p3=0;
   unsigned long long int aSig_fu_396_p3__temp=0;
   unsigned long long int aSig_s_reg_159=0;
   unsigned long long int aSig_s_reg_159__temp=0;
   unsigned long long int a__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_252_p22=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_252_p22__temp=0;
   unsigned long long int ap_return_preg=0;
   unsigned long long int ap_return_preg__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=1;
   unsigned long long int b1_1_mux_fu_662_p3=0;
   unsigned long long int b1_1_mux_fu_662_p3__temp=0;
   unsigned long long int b1_2_mux_fu_556_p3=0;
   unsigned long long int b1_2_mux_fu_556_p3__temp=0;
   unsigned long long int b1_mux_fu_840_p3=0;
   unsigned long long int b1_mux_fu_840_p3__temp=0;
   unsigned long long int bExp_cast_fu_378_p1=0;
   unsigned long long int bExp_cast_fu_378_p1__temp=0;
   unsigned long long int bExp_fu_368_p4=0;
   unsigned long long int bExp_fu_368_p4__temp=0;
   unsigned long long int bExp_reg_1361=0;
   unsigned long long int bExp_reg_1361__temp=0;
   unsigned long long int bSig_1_fu_704_p4=0;
   unsigned long long int bSig_1_fu_704_p4__temp=0;
   unsigned long long int bSig_2_cast_fu_1027_p1=0;
   unsigned long long int bSig_2_cast_fu_1027_p1__temp=0;
   unsigned long long int bSig_2_fu_714_p3=0;
   unsigned long long int bSig_2_fu_714_p3__temp=0;
   unsigned long long int bSig_2_reg_1471=0;
   unsigned long long int bSig_2_reg_1471__temp=0;
   unsigned long long int bSig_4_fu_1004_p4=0;
   unsigned long long int bSig_4_fu_1004_p4__temp=0;
   unsigned long long int bSig_cast1_cast_fu_420_p1=0;
   unsigned long long int bSig_cast1_cast_fu_420_p1__temp=0;
   unsigned long long int bSig_cast_fu_1130_p1=0;
   unsigned long long int bSig_cast_fu_1130_p1__temp=0;
   unsigned long long int bSig_fu_412_p3=0;
   unsigned long long int bSig_fu_412_p3__temp=0;
   unsigned long long int bSig_s_reg_187=0;
   unsigned long long int bSig_s_reg_187__temp=0;
   unsigned long long int b__temp=0;
   unsigned long long int countLeadingZerosHig_3_fu_1283_p1=0;
   unsigned long long int countLeadingZerosHig_3_fu_1283_p1__temp=0;
   unsigned long long int countLeadingZerosHig_address0=0;
   unsigned long long int countLeadingZerosHig_address0__temp=0;
   unsigned long long int countLeadingZerosHig_ce0=0;
   unsigned long long int countLeadingZerosHig_ce0__temp=0;
   unsigned long long int countLeadingZerosHig_q0=0;
   unsigned long long int countLeadingZerosHig_q0__temp=0;
   unsigned long long int count_assign_1_fu_892_p2=0;
   unsigned long long int count_assign_1_fu_892_p2__temp=0;
   unsigned long long int count_assign_1_reg_1518=0;
   unsigned long long int count_assign_1_reg_1518__temp=0;
   unsigned long long int expDiff_1_fu_722_p3=0;
   unsigned long long int expDiff_1_fu_722_p3__temp=0;
   unsigned long long int expDiff_1_reg_1479=0;
   unsigned long long int expDiff_1_reg_1479__temp=0;
   unsigned long long int expDiff_2_cast_fu_698_p2=0;
   unsigned long long int expDiff_2_cast_fu_698_p2__temp=0;
   unsigned long long int expDiff_2_fu_856_p2=0;
   unsigned long long int expDiff_2_fu_856_p2__temp=0;
   unsigned long long int expDiff_3_fu_881_p3=0;
   unsigned long long int expDiff_3_fu_881_p3__temp=0;
   unsigned long long int expDiff_fu_382_p2=0;
   unsigned long long int expDiff_fu_382_p2__temp=0;
   unsigned long long int expDiff_reg_1366=0;
   unsigned long long int expDiff_reg_1366__temp=0;
   unsigned long long int float_exception_flag=0;
   unsigned long long int float_exception_flag__temp=0;
   unsigned long long int grp_fu_288_p2=0;
   unsigned long long int grp_fu_288_p2__temp=0;
   unsigned long long int grp_fu_293_p0=0;
   unsigned long long int grp_fu_293_p0__temp=0;
   unsigned long long int grp_fu_293_p2=0;
   unsigned long long int grp_fu_293_p2__temp=0;
   unsigned long long int grp_fu_298_p4=0;
   unsigned long long int grp_fu_298_p4__temp=0;
   unsigned long long int grp_fu_308_p4=0;
   unsigned long long int grp_fu_308_p4__temp=0;
   unsigned long long int grp_fu_318_p2=0;
   unsigned long long int grp_fu_318_p2__temp=0;
   unsigned long long int grp_fu_324_p2=0;
   unsigned long long int grp_fu_324_p2__temp=0;
   unsigned long long int grp_fu_334_p2=0;
   unsigned long long int grp_fu_334_p2__temp=0;
   unsigned long long int grp_fu_346_p2=0;
   unsigned long long int grp_fu_346_p2__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_done=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_done__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_idle=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_idle__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_ready=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_ready__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_return=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_return__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_start=1;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_start__temp=1;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_start_reg=1;
   unsigned long long int grp_roundAndPackFloat64_fu_278_ap_start_reg__temp=1;
   unsigned long long int grp_roundAndPackFloat64_fu_278_float_exception_flag_o=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld=0;
   unsigned long long int grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp=0;
   unsigned long long int icmp1_fu_1154_p2=0;
   unsigned long long int icmp1_fu_1154_p2__temp=0;
   unsigned long long int icmp1_reg_1574=0;
   unsigned long long int icmp1_reg_1574__temp=0;
   unsigned long long int icmp2_fu_1192_p2=0;
   unsigned long long int icmp2_fu_1192_p2__temp=0;
   unsigned long long int icmp2_reg_1579=0;
   unsigned long long int icmp2_reg_1579__temp=0;
   unsigned long long int icmp3_fu_1242_p2=0;
   unsigned long long int icmp3_fu_1242_p2__temp=0;
   unsigned long long int icmp3_reg_1600=0;
   unsigned long long int icmp3_reg_1600__temp=0;
   unsigned long long int icmp9_fu_744_p2=0;
   unsigned long long int icmp9_fu_744_p2__temp=0;
   unsigned long long int icmp9_reg_1485=0;
   unsigned long long int icmp9_reg_1485__temp=0;
   unsigned long long int icmp_fu_914_p2=0;
   unsigned long long int icmp_fu_914_p2__temp=0;
   unsigned long long int icmp_reg_1529=0;
   unsigned long long int icmp_reg_1529__temp=0;
   unsigned long long int p_0_reg_247=0;
   unsigned long long int p_0_reg_247__temp=0;
   unsigned long long int p_2_fu_446_p3=0;
   unsigned long long int p_2_fu_446_p3__temp=0;
   unsigned long long int p_a_i_i_i_fu_1204_p3=0;
   unsigned long long int p_a_i_i_i_fu_1204_p3__temp=0;
   unsigned long long int p_i_i_i_fu_1258_p3=0;
   unsigned long long int p_i_i_i_fu_1258_p3__temp=0;
   unsigned long long int p_s_fu_438_p3=0;
   unsigned long long int p_s_fu_438_p3__temp=0;
   unsigned long long int p_v_fu_1247_p3=0;
   unsigned long long int p_v_fu_1247_p3__temp=0;
   unsigned long long int sel_tmp1_i1_fu_1101_p2=0;
   unsigned long long int sel_tmp1_i1_fu_1101_p2__temp=0;
   unsigned long long int sel_tmp1_i_fu_985_p2=0;
   unsigned long long int sel_tmp1_i_fu_985_p2__temp=0;
   unsigned long long int sel_tmp_i1_fu_1095_p2=0;
   unsigned long long int sel_tmp_i1_fu_1095_p2__temp=0;
   unsigned long long int sel_tmp_i_fu_980_p2=0;
   unsigned long long int sel_tmp_i_fu_980_p2__temp=0;
   unsigned long long int shiftCount_1_i_i_i_c_fu_1279_p1=0;
   unsigned long long int shiftCount_1_i_i_i_c_fu_1279_p1__temp=0;
   unsigned long long int shiftCount_1_i_i_i_fu_1272_p3=0;
   unsigned long long int shiftCount_1_i_i_i_fu_1272_p3__temp=0;
   unsigned long long int shiftCount_fu_1265_p3=0;
   unsigned long long int shiftCount_fu_1265_p3__temp=0;
   unsigned long long int tmp26_fu_1287_p2=0;
   unsigned long long int tmp26_fu_1287_p2__temp=0;
   unsigned long long int tmp63_cast_fu_1293_p1=0;
   unsigned long long int tmp63_cast_fu_1293_p1__temp=0;
   unsigned long long int tmp64_cast_cast_fu_1297_p3=0;
   unsigned long long int tmp64_cast_cast_fu_1297_p3__temp=0;
   unsigned long long int tmp_10_fu_466_p2=0;
   unsigned long long int tmp_10_fu_466_p2__temp=0;
   unsigned long long int tmp_11_fu_472_p2=0;
   unsigned long long int tmp_11_fu_472_p2__temp=0;
   unsigned long long int tmp_13_fu_454_p2=0;
   unsigned long long int tmp_13_fu_454_p2__temp=0;
   unsigned long long int tmp_13_reg_1418=0;
   unsigned long long int tmp_13_reg_1418__temp=0;
   unsigned long long int tmp_14_fu_392_p1=0;
   unsigned long long int tmp_14_fu_392_p1__temp=0;
   unsigned long long int tmp_14_reg_1372=0;
   unsigned long long int tmp_14_reg_1372__temp=0;
   unsigned long long int tmp_15_fu_834_p2=0;
   unsigned long long int tmp_15_fu_834_p2__temp=0;
   unsigned long long int tmp_16_fu_953_p4=0;
   unsigned long long int tmp_16_fu_953_p4__temp=0;
   unsigned long long int tmp_17_fu_963_p3=0;
   unsigned long long int tmp_17_fu_963_p3__temp=0;
   unsigned long long int tmp_18_fu_408_p1=0;
   unsigned long long int tmp_18_fu_408_p1__temp=0;
   unsigned long long int tmp_18_reg_1385=0;
   unsigned long long int tmp_18_reg_1385__temp=0;
   unsigned long long int tmp_19_fu_656_p2=0;
   unsigned long long int tmp_19_fu_656_p2__temp=0;
   unsigned long long int tmp_1_fu_1078_p3=0;
   unsigned long long int tmp_1_fu_1078_p3__temp=0;
   unsigned long long int tmp_20_cast_fu_1134_p1=0;
   unsigned long long int tmp_20_cast_fu_1134_p1__temp=0;
   unsigned long long int tmp_20_reg_196=0;
   unsigned long long int tmp_20_reg_196__temp=0;
   unsigned long long int tmp_21_fu_460_p2=0;
   unsigned long long int tmp_21_fu_460_p2__temp=0;
   unsigned long long int tmp_21_reg_1422=0;
   unsigned long long int tmp_21_reg_1422__temp=0;
   unsigned long long int tmp_22_fu_550_p2=0;
   unsigned long long int tmp_22_fu_550_p2__temp=0;
   unsigned long long int tmp_23_cast_fu_1017_p1=0;
   unsigned long long int tmp_23_cast_fu_1017_p1__temp=0;
   unsigned long long int tmp_23_reg_168=0;
   unsigned long long int tmp_23_reg_168__temp=0;
   unsigned long long int tmp_24_fu_430_p3=0;
   unsigned long long int tmp_24_fu_430_p3__temp=0;
   unsigned long long int tmp_24_reg_1400=0;
   unsigned long long int tmp_24_reg_1400__temp=0;
   unsigned long long int tmp_25_fu_730_p1=0;
   unsigned long long int tmp_25_fu_730_p1__temp=0;
   unsigned long long int tmp_27_fu_734_p4=0;
   unsigned long long int tmp_27_fu_734_p4__temp=0;
   unsigned long long int tmp_29_i43_cast_fu_1035_p1=0;
   unsigned long long int tmp_29_i43_cast_fu_1035_p1__temp=0;
   unsigned long long int tmp_29_i_cast_fu_936_p1=0;
   unsigned long long int tmp_29_i_cast_fu_936_p1__temp=0;
   unsigned long long int tmp_2_fu_1068_p4=0;
   unsigned long long int tmp_2_fu_1068_p4__temp=0;
   unsigned long long int tmp_2_i1_fu_1062_p2=0;
   unsigned long long int tmp_2_i1_fu_1062_p2__temp=0;
   unsigned long long int tmp_2_i_fu_948_p2=0;
   unsigned long long int tmp_2_i_fu_948_p2__temp=0;
   unsigned long long int tmp_30_fu_1058_p1=0;
   unsigned long long int tmp_30_fu_1058_p1__temp=0;
   unsigned long long int tmp_30_i1_fu_1038_p2=0;
   unsigned long long int tmp_30_i1_fu_1038_p2__temp=0;
   unsigned long long int tmp_30_i_fu_939_p2=0;
   unsigned long long int tmp_30_i_fu_939_p2__temp=0;
   unsigned long long int tmp_31_i_fu_750_p2=0;
   unsigned long long int tmp_31_i_fu_750_p2__temp=0;
   unsigned long long int tmp_31_i_reg_1490=0;
   unsigned long long int tmp_31_i_reg_1490__temp=0;
   unsigned long long int tmp_33_fu_776_p1=0;
   unsigned long long int tmp_33_fu_776_p1__temp=0;
   unsigned long long int tmp_33_i1_fu_1043_p1=0;
   unsigned long long int tmp_33_i1_fu_1043_p1__temp=0;
   unsigned long long int tmp_33_i_fu_920_p1=0;
   unsigned long long int tmp_33_i_fu_920_p1__temp=0;
   unsigned long long int tmp_34_i1_fu_1046_p2=0;
   unsigned long long int tmp_34_i1_fu_1046_p2__temp=0;
   unsigned long long int tmp_34_i_fu_924_p2=0;
   unsigned long long int tmp_34_i_fu_924_p2__temp=0;
   unsigned long long int tmp_35_fu_792_p2=0;
   unsigned long long int tmp_35_fu_792_p2__temp=0;
   unsigned long long int tmp_35_i1_fu_1052_p2=0;
   unsigned long long int tmp_35_i1_fu_1052_p2__temp=0;
   unsigned long long int tmp_35_i_fu_930_p2=0;
   unsigned long long int tmp_35_i_fu_930_p2__temp=0;
   unsigned long long int tmp_35_i_reg_1534=0;
   unsigned long long int tmp_35_i_reg_1534__temp=0;
   unsigned long long int tmp_36_fu_1164_p4=0;
   unsigned long long int tmp_36_fu_1164_p4__temp=0;
   unsigned long long int tmp_36_i1_fu_1086_p2=0;
   unsigned long long int tmp_36_i1_fu_1086_p2__temp=0;
   unsigned long long int tmp_36_i_fu_971_p2=0;
   unsigned long long int tmp_36_i_fu_971_p2__temp=0;
   unsigned long long int tmp_37_fu_1174_p3=0;
   unsigned long long int tmp_37_fu_1174_p3__temp=0;
   unsigned long long int tmp_38_fu_818_p1=0;
   unsigned long long int tmp_38_fu_818_p1__temp=0;
   unsigned long long int tmp_39_reg_1590=0;
   unsigned long long int tmp_39_reg_1590__temp=0;
   unsigned long long int tmp_3_fu_578_p2=0;
   unsigned long long int tmp_3_fu_578_p2__temp=0;
   unsigned long long int tmp_40_reg_1595=0;
   unsigned long long int tmp_40_reg_1595__temp=0;
   unsigned long long int tmp_41_fu_888_p1=0;
   unsigned long long int tmp_41_fu_888_p1__temp=0;
   unsigned long long int tmp_42_fu_904_p4=0;
   unsigned long long int tmp_42_fu_904_p4__temp=0;
   unsigned long long int tmp_43_fu_944_p1=0;
   unsigned long long int tmp_43_fu_944_p1__temp=0;
   unsigned long long int tmp_44_fu_598_p1=0;
   unsigned long long int tmp_44_fu_598_p1__temp=0;
   unsigned long long int tmp_45_fu_614_p2=0;
   unsigned long long int tmp_45_fu_614_p2__temp=0;
   unsigned long long int tmp_46_fu_640_p1=0;
   unsigned long long int tmp_46_fu_640_p1__temp=0;
   unsigned long long int tmp_47_fu_492_p1=0;
   unsigned long long int tmp_47_fu_492_p1__temp=0;
   unsigned long long int tmp_48_fu_508_p2=0;
   unsigned long long int tmp_48_fu_508_p2__temp=0;
   unsigned long long int tmp_49_fu_534_p1=0;
   unsigned long long int tmp_49_fu_534_p1__temp=0;
   unsigned long long int tmp_50_fu_1144_p4=0;
   unsigned long long int tmp_50_fu_1144_p4__temp=0;
   unsigned long long int tmp_51_fu_1160_p1=0;
   unsigned long long int tmp_51_fu_1160_p1__temp=0;
   unsigned long long int tmp_52_fu_1182_p4=0;
   unsigned long long int tmp_52_fu_1182_p4__temp=0;
   unsigned long long int tmp_53_fu_1198_p2=0;
   unsigned long long int tmp_53_fu_1198_p2__temp=0;
   unsigned long long int tmp_54_reg_1585=0;
   unsigned long long int tmp_54_reg_1585__temp=0;
   unsigned long long int tmp_56_i1_fu_780_p2=0;
   unsigned long long int tmp_56_i1_fu_780_p2__temp=0;
   unsigned long long int tmp_56_i2_fu_822_p2=0;
   unsigned long long int tmp_56_i2_fu_822_p2__temp=0;
   unsigned long long int tmp_56_i3_fu_602_p2=0;
   unsigned long long int tmp_56_i3_fu_602_p2__temp=0;
   unsigned long long int tmp_56_i4_fu_644_p2=0;
   unsigned long long int tmp_56_i4_fu_644_p2__temp=0;
   unsigned long long int tmp_56_i5_fu_538_p2=0;
   unsigned long long int tmp_56_i5_fu_538_p2__temp=0;
   unsigned long long int tmp_56_i_fu_496_p2=0;
   unsigned long long int tmp_56_i_fu_496_p2__temp=0;
   unsigned long long int tmp_57_i1_fu_786_p2=0;
   unsigned long long int tmp_57_i1_fu_786_p2__temp=0;
   unsigned long long int tmp_57_i2_fu_828_p2=0;
   unsigned long long int tmp_57_i2_fu_828_p2__temp=0;
   unsigned long long int tmp_57_i3_fu_608_p2=0;
   unsigned long long int tmp_57_i3_fu_608_p2__temp=0;
   unsigned long long int tmp_57_i4_fu_650_p2=0;
   unsigned long long int tmp_57_i4_fu_650_p2__temp=0;
   unsigned long long int tmp_57_i5_fu_544_p2=0;
   unsigned long long int tmp_57_i5_fu_544_p2__temp=0;
   unsigned long long int tmp_57_i_fu_502_p2=0;
   unsigned long long int tmp_57_i_fu_502_p2__temp=0;
   unsigned long long int tmp_5_reg_1467=0;
   unsigned long long int tmp_5_reg_1467__temp=0;
   unsigned long long int tmp_6_fu_388_p1=0;
   unsigned long long int tmp_6_fu_388_p1__temp=0;
   unsigned long long int tmp_74_i_fu_686_p2=0;
   unsigned long long int tmp_74_i_fu_686_p2__temp=0;
   unsigned long long int tmp_75_i_fu_1333_p1=0;
   unsigned long long int tmp_75_i_fu_1333_p1__temp=0;
   unsigned long long int tmp_76_i_fu_1337_p2=0;
   unsigned long long int tmp_76_i_fu_1337_p2__temp=0;
   unsigned long long int tmp_76_i_reg_1621=0;
   unsigned long long int tmp_76_i_reg_1621__temp=0;
   unsigned long long int tmp_77_i_reg_1626=0;
   unsigned long long int tmp_77_i_reg_1626__temp=0;
   unsigned long long int tmp_7_fu_756_p2=0;
   unsigned long long int tmp_7_fu_756_p2__temp=0;
   unsigned long long int tmp_85_i_i_i_fu_1253_p1=0;
   unsigned long long int tmp_85_i_i_i_fu_1253_p1__temp=0;
   unsigned long long int tmp_8_fu_692_p2=0;
   unsigned long long int tmp_8_fu_692_p2__temp=0;
   unsigned long long int tmp_9_fu_572_p2=0;
   unsigned long long int tmp_9_fu_572_p2__temp=0;
   unsigned long long int tmp_9_reg_1442=0;
   unsigned long long int tmp_9_reg_1442__temp=0;
   unsigned long long int tmp_fu_424_p2=0;
   unsigned long long int tmp_fu_424_p2__temp=0;
   unsigned long long int tmp_i10_fu_528_p2=0;
   unsigned long long int tmp_i10_fu_528_p2__temp=0;
   unsigned long long int tmp_i1_17_fu_798_p2=0;
   unsigned long long int tmp_i1_17_fu_798_p2__temp=0;
   unsigned long long int tmp_i1_fu_626_p3=0;
   unsigned long long int tmp_i1_fu_626_p3__temp=0;
   unsigned long long int tmp_i2_16_fu_762_p3=0;
   unsigned long long int tmp_i2_16_fu_762_p3__temp=0;
   unsigned long long int tmp_i2_fu_678_p3=0;
   unsigned long long int tmp_i2_fu_678_p3__temp=0;
   unsigned long long int tmp_i3_fu_620_p2=0;
   unsigned long long int tmp_i3_fu_620_p2__temp=0;
   unsigned long long int tmp_i4_fu_514_p2=0;
   unsigned long long int tmp_i4_fu_514_p2__temp=0;
   unsigned long long int tmp_i5_21_fu_1326_p2=0;
   unsigned long long int tmp_i5_21_fu_1326_p2__temp=0;
   unsigned long long int tmp_i5_21_reg_1616=0;
   unsigned long long int tmp_i5_21_reg_1616__temp=0;
   unsigned long long int tmp_i5_fu_478_p3=0;
   unsigned long long int tmp_i5_fu_478_p3__temp=0;
   unsigned long long int tmp_i6_15_fu_898_p2=0;
   unsigned long long int tmp_i6_15_fu_898_p2__temp=0;
   unsigned long long int tmp_i6_15_reg_1523=0;
   unsigned long long int tmp_i6_15_reg_1523__temp=0;
   unsigned long long int tmp_i6_fu_486_p2=0;
   unsigned long long int tmp_i6_fu_486_p2__temp=0;
   unsigned long long int tmp_i7_18_fu_804_p3=0;
   unsigned long long int tmp_i7_18_fu_804_p3__temp=0;
   unsigned long long int tmp_i7_fu_770_p2=0;
   unsigned long long int tmp_i7_fu_770_p2__temp=0;
   unsigned long long int tmp_i8_19_fu_812_p2=0;
   unsigned long long int tmp_i8_19_fu_812_p2__temp=0;
   unsigned long long int tmp_i8_fu_584_p3=0;
   unsigned long long int tmp_i8_fu_584_p3__temp=0;
   unsigned long long int tmp_i9_14_fu_634_p2=0;
   unsigned long long int tmp_i9_14_fu_634_p2__temp=0;
   unsigned long long int tmp_i9_fu_520_p3=0;
   unsigned long long int tmp_i9_fu_520_p3__temp=0;
   unsigned long long int tmp_i_20_fu_1030_p2=0;
   unsigned long long int tmp_i_20_fu_1030_p2__temp=0;
   unsigned long long int tmp_i_fu_592_p2=0;
   unsigned long long int tmp_i_fu_592_p2__temp=0;
   unsigned long long int tmp_reg_1396=0;
   unsigned long long int tmp_reg_1396__temp=0;
   unsigned long long int tmp_s_reg_1404=0;
   unsigned long long int tmp_s_reg_1404__temp=0;
   unsigned long long int zExp2_cast_fu_1310_p1=0;
   unsigned long long int zExp2_cast_fu_1310_p1__temp=0;
   unsigned long long int zExp2_reg_225=0;
   unsigned long long int zExp2_reg_225__temp=0;
   unsigned long long int zExp_1_reg_177=0;
   unsigned long long int zExp_1_reg_177__temp=0;
   unsigned long long int zExp_2_fu_1314_p2=0;
   unsigned long long int zExp_2_fu_1314_p2__temp=0;
   unsigned long long int zExp_reg_205=0;
   unsigned long long int zExp_reg_205__temp=0;
   unsigned long long int zSig_1_fu_1021_p2=0;
   unsigned long long int zSig_1_fu_1021_p2__temp=0;
   unsigned long long int zSig_assign_reg_215=0;
   unsigned long long int zSig_assign_reg_215__temp=0;
   unsigned long long int zSig_fu_1138_p2=0;
   unsigned long long int zSig_fu_1138_p2__temp=0;
   unsigned long long int zSign__temp=0;
   unsigned long long int zSign_assign_1_reg_237=0;
   unsigned long long int zSign_assign_1_reg_237__temp=0;
   unsigned long long int z_1_cast_fu_1091_p1=0;
   unsigned long long int z_1_cast_fu_1091_p1__temp=0;
   unsigned long long int z_2_fu_990_p3=0;
   unsigned long long int z_2_fu_990_p3__temp=0;
   unsigned long long int z_4_fu_998_p3=0;
   unsigned long long int z_4_fu_998_p3__temp=0;
   unsigned long long int z_5_cast_fu_976_p1=0;
   unsigned long long int z_5_cast_fu_976_p1__temp=0;
   unsigned long long int z_5_fu_1114_p3=0;
   unsigned long long int z_5_fu_1114_p3__temp=0;
   unsigned long long int z_fu_1106_p3=0;
   unsigned long long int z_fu_1106_p3__temp=0;
	ap_done=0;
	ap_start=1;
   unsigned long long int countLeadingZerosHig_rom[countLeadingZerosHig_MEM_SIZE]={
8,7,6,6,5,5,5,5,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

   ap_ST_fsm_state1:
	//printf("state 1\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
               tmp_fu_424_p2 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
		/*int a1=(a>>52)&2047;
		int b1=(b>>52)&2047;
		int t1=a1-b1 > 0 ? 1:0;
		tmp_fu_424_p2=t1;*/
		////printf("t1 %d\n",t1);
		 if(1 == ap_CS_fsm_state1)
       		{
           		grp_fu_293_p0 =   (  ( a >> 52 )  & 4095 ) ;
       		}
               tmp_15_fu_834_p2 =   (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_19_fu_656_p2 =   (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_3_fu_578_p2 =   (  (  ( b & 4503599627370495 )  << 10 )  == 0 ? 1 :  0 ) ;
               tmp_22_fu_550_p2 =   (  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_24_fu_430_p3 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
               tmp_21_fu_460_p2 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
               tmp_7_fu_756_p2 =   (  (  ( a & 4503599627370495 )  << 10 )  == 0 ? 1 :  0 ) ;
               tmp_11_fu_472_p2 =   (  (  (  ( b & 4503599627370495 )  << 10 )  |  (  ( a & 4503599627370495 )  << 10 )  )  == 0 ? 1 :  0 ) ;
               tmp_9_fu_572_p2 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               grp_fu_288_p2 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_13_fu_454_p2 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
   if(((((grp_fu_288_p2 == 0) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) == 1){
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           aSig_s_reg_159 =   (  ( a & 4503599627370495 )  << 10 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           bSig_s_reg_187 =   (  ( b & 4503599627370495 )  << 10 ) ;
       }
       if(((((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || ((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
           float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 0) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =  0;
       }
       if((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((tmp_7_fu_756_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =  a;
       }
       if(((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_288_p2 == 1) && (tmp_15_fu_834_p2 == 0)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_9_fu_572_p2 == 1) && (tmp_19_fu_656_p2 == 0)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((grp_fu_288_p2 == 1) && (tmp_11_fu_472_p2 == 0)) && (tmp_22_fu_550_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =  9223372036854775807;
       }
       if((((((tmp_3_fu_578_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  ( zSign ^ 1 )  << 63 )  | 9218868437227405312 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_20_reg_196 =   (  ( tmp_20_reg_196__temp  & 1023 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
	 //printf("tmp_20_reg_196 %llu\n",tmp_20_reg_196);
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_23_reg_168 =   (  ( tmp_23_reg_168__temp  & 1023 )  |  (  (  ( b & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;

	   //printf("tmp_23_reg_168 %llu\n",tmp_23_reg_168);
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           zExp_1_reg_177 =   (  (  ( grp_fu_293_p0  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( b >> 52 )  & 2047 )  ) ;
	   //printf("zExp_1_reg_177 %llu\n",zExp_1_reg_177);
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           zExp_reg_205 =   (  (  ( grp_fu_293_p0  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( a >> 52 )  & 2047 )  ) ;
	   //printf("zExp_reg_205 %llu\n",zExp_reg_205);
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           tmp_reg_1396 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
	
	   //tmp_reg_1396=t1;
           tmp_18_reg_1385 =   ( b & 4503599627370495 ) ;
           tmp_14_reg_1372 =   ( a & 4503599627370495 ) ;
	   //printf("tmp_14_reg_1372 %llu\n",tmp_14_reg_1372);
           expDiff_reg_1366 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
           bExp_reg_1361 =   (  ( b >> 52 )  & 4095 ) ;
           aSig_cast1_cast_reg_1378 =   (  ( aSig_cast1_cast_reg_1378__temp  & 4611686018427388927 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 4611686018427386880 )  ) ;
           aExp_reg_1355 =   (  ( a >> 52 )  & 2047 /*4095*/ ) ;
	   //printf("aExp_reg_1355 %llu\n",aExp_reg_1355);
       }
       if((((grp_fu_288_p2 == 0) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_31_i_reg_1490 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;

           icmp9_reg_1485 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;

           expDiff_1_reg_1479 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;

           bSig_2_reg_1471 =   (  ( bSig_2_reg_1471__temp  & 1023 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 10 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 10 )  )  & 9223372036854774784 )  ) ;
	   //printf("bSig_2_reg_1471 %llu\n",bSig_2_reg_1471);
	   bSig_2_reg_1471=bSig_2_reg_1471|4611686018427387904;
       }
       if(((((grp_fu_288_p2 == 0) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_13_reg_1418 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 0) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_21_reg_1422 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if(((tmp_fu_424_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_24_reg_1400 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_424_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_5_reg_1467 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 1) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_9_reg_1442 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 0) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_s_reg_1404 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state12) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       if(1 == ap_CS_fsm_state1)
       {
           grp_fu_293_p0 =   (  ( a >> 52 )  & 4095 ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state5;
   }
   if((((((tmp_9_fu_572_p2 == 0) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) == 1){
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               aSig_s_reg_159 =   (  ( a & 4503599627370495 )  << 10 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               bSig_s_reg_187 =   (  ( b & 4503599627370495 )  << 10 ) ;
       }
       if(((((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || ((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 0) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  0;
       }
       if((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((tmp_7_fu_756_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  a;
       }
       if(((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_288_p2 == 1) && (tmp_15_fu_834_p2 == 0)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_9_fu_572_p2 == 1) && (tmp_19_fu_656_p2 == 0)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((grp_fu_288_p2 == 1) && (tmp_11_fu_472_p2 == 0)) && (tmp_22_fu_550_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  9223372036854775807;
       }
       if((((((tmp_3_fu_578_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  ( zSign ^ 1 )  << 63 )  | 9218868437227405312 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_20_reg_196 =   (  ( tmp_20_reg_196__temp  & 1023 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_23_reg_168 =   (  ( tmp_23_reg_168__temp  & 1023 )  |  (  (  ( b & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
		tmp_23_reg_168=tmp_23_reg_168|4611686018427387904;

		//printf("tmp_23_reg_168 %llu\n",tmp_23_reg_168);
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_1_reg_177 =   (  (  ( grp_fu_293_p0  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( b >> 52 )  & 2047 )  ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_reg_205 =   (  (  ( grp_fu_293_p0  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( a >> 52 )  & 2047 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               tmp_reg_1396 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
		//tmp_reg_1396=t1;
               tmp_18_reg_1385 =   ( b & 4503599627370495 ) ;
               tmp_14_reg_1372 =   ( a & 4503599627370495 ) ;
               expDiff_reg_1366 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
               bExp_reg_1361 =   (  ( b >> 52 )  & 2047/*4095*/ ) ;
		//printf("bExp_reg_1361 %llu\n",bExp_reg_1361);

               aSig_cast1_cast_reg_1378 =   (  ( aSig_cast1_cast_reg_1378__temp  & 4611686018427388927 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 4611686018427386880 )  ) ;
		//printf(" aSig_cast1_cast_reg_1378 %llu\n", aSig_cast1_cast_reg_1378);
		aSig_cast1_cast_reg_1378=aSig_cast1_cast_reg_1378|4611686018427387904;
		//printf(" aSig_cast1_cast_reg_1378 %llu\n", aSig_cast1_cast_reg_1378);
               aExp_reg_1355 =   (  ( a >> 52 )  & 4095 ) ;
       }
       if((((grp_fu_288_p2 == 0) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_31_i_reg_1490 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
               icmp9_reg_1485 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
               expDiff_1_reg_1479 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;

               bSig_2_reg_1471 =   (  ( bSig_2_reg_1471__temp  & 1023 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 10 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 10 )  )  & 9223372036854774784 )  ) ;
       }
       if(((((grp_fu_288_p2 == 0) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_13_reg_1418 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 0) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_21_reg_1422 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if(((tmp_fu_424_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_24_reg_1400 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_424_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_5_reg_1467 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 1) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_9_reg_1442 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 0) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_s_reg_1404 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state12) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
       if(1 == ap_CS_fsm_state1)
       {
               grp_fu_293_p0 =   (  ( a >> 52 )  & 4095 ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state2;
   }
   if((((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (((((grp_fu_288_p2 == 1) && (tmp_fu_424_p2 == 1)) || (((tmp_9_fu_572_p2 == 1) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0))) || ((((tmp_21_fu_460_p2 == 0) && (tmp_13_fu_454_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0))) || (((grp_fu_288_p2 == 1) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)))) == 1){
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               aSig_s_reg_159 =   (  ( a & 4503599627370495 )  << 10 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               bSig_s_reg_187 =   (  ( b & 4503599627370495 )  << 10 ) ;
       }
       if(((((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || ((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 0) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  0;
       }
       if((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((tmp_7_fu_756_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  a;
       }
       if(((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_288_p2 == 1) && (tmp_15_fu_834_p2 == 0)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_9_fu_572_p2 == 1) && (tmp_19_fu_656_p2 == 0)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((grp_fu_288_p2 == 1) && (tmp_11_fu_472_p2 == 0)) && (tmp_22_fu_550_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  9223372036854775807;
       }
       if((((((tmp_3_fu_578_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  ( zSign ^ 1 )  << 63 )  | 9218868437227405312 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_20_reg_196 =   (  ( tmp_20_reg_196__temp  & 1023 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_23_reg_168 =   (  ( tmp_23_reg_168__temp  & 1023 )  |  (  (  ( b & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_1_reg_177 =   (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( b >> 52 )  & 2047 )  ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_reg_205 =   (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( a >> 52 )  & 2047 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               tmp_reg_1396 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_18_reg_1385 =   ( b & 4503599627370495 ) ;
               tmp_14_reg_1372 =   ( a & 4503599627370495 ) ;
               expDiff_reg_1366 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
               bExp_reg_1361 =   (  ( b >> 52 )  & 4095 ) ;
               aSig_cast1_cast_reg_1378 =   (  ( aSig_cast1_cast_reg_1378__temp  & 4611686018427388927 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 4611686018427386880 )  ) ;
               aExp_reg_1355 =   (  ( a >> 52 )  & 4095 ) ;
       }
       if((((grp_fu_288_p2 == 0) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_31_i_reg_1490 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
               icmp9_reg_1485 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
               expDiff_1_reg_1479 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;
               bSig_2_reg_1471 =   (  ( bSig_2_reg_1471__temp  & 1023 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 10 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 10 )  )  & 9223372036854774784 )  ) ;
       }
       if(((((grp_fu_288_p2 == 0) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_13_reg_1418 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 0) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_21_reg_1422 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if(((tmp_fu_424_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_24_reg_1400 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_424_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_5_reg_1467 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 1) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_9_reg_1442 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 0) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_s_reg_1404 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state12) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
       if(1 == ap_CS_fsm_state1)
       {
               grp_fu_293_p0 =   (  ( a >> 52 )  & 4095 ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state12;
   }
   if((((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) == 1){
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               aSig_s_reg_159 =   (  ( a & 4503599627370495 )  << 10 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               bSig_s_reg_187 =   (  ( b & 4503599627370495 )  << 10 ) ;
       }
       if(((((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || ((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 0) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  0;
       }
       if((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((tmp_7_fu_756_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  a;
       }
       if(((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_288_p2 == 1) && (tmp_15_fu_834_p2 == 0)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_9_fu_572_p2 == 1) && (tmp_19_fu_656_p2 == 0)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((grp_fu_288_p2 == 1) && (tmp_11_fu_472_p2 == 0)) && (tmp_22_fu_550_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  9223372036854775807;
       }
       if((((((tmp_3_fu_578_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  ( zSign ^ 1 )  << 63 )  | 9218868437227405312 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_20_reg_196 =   (  ( tmp_20_reg_196__temp  & 1023 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_23_reg_168 =   (  ( tmp_23_reg_168__temp  & 1023 )  |  (  (  ( b & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
		
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_1_reg_177 =   (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( b >> 52 )  & 2047 )  ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_reg_205 =   (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( a >> 52 )  & 2047 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               tmp_reg_1396 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_18_reg_1385 =   ( b & 4503599627370495 ) ;
               tmp_14_reg_1372 =   ( a & 4503599627370495 ) ;
               expDiff_reg_1366 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
               bExp_reg_1361 =   (  ( b >> 52 )  & 4095 ) ;
               aSig_cast1_cast_reg_1378 =   (  ( aSig_cast1_cast_reg_1378__temp  & 4611686018427388927 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 4611686018427386880 )  ) ;
               aExp_reg_1355 =   (  ( a >> 52 )  & 4095 ) ;
       }
       if((((grp_fu_288_p2 == 0) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_31_i_reg_1490 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
               icmp9_reg_1485 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
               expDiff_1_reg_1479 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;
               bSig_2_reg_1471 =   (  ( bSig_2_reg_1471__temp  & 1023 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 10 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 10 )  )  & 9223372036854774784 )  ) ;
       }
       if(((((grp_fu_288_p2 == 0) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_13_reg_1418 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 0) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_21_reg_1422 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if(((tmp_fu_424_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_24_reg_1400 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_424_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_5_reg_1467 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 1) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_9_reg_1442 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 0) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_s_reg_1404 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state12) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
       if(1 == ap_CS_fsm_state1)
       {
               grp_fu_293_p0 =   (  ( a >> 52 )  & 4095 ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state4;
   }
   if(((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) == 1){
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               aSig_s_reg_159 =   (  ( a & 4503599627370495 )  << 10 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               bSig_s_reg_187 =   (  ( b & 4503599627370495 )  << 10 ) ;
       }
       if(((((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || ((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 0) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  0;
       }
       if((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((tmp_7_fu_756_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  a;
       }
       if(((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_288_p2 == 1) && (tmp_15_fu_834_p2 == 0)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_9_fu_572_p2 == 1) && (tmp_19_fu_656_p2 == 0)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((grp_fu_288_p2 == 1) && (tmp_11_fu_472_p2 == 0)) && (tmp_22_fu_550_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =  9223372036854775807;
       }
       if((((((tmp_3_fu_578_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_247 =   (  (  ( zSign ^ 1 )  << 63 )  | 9218868437227405312 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_20_reg_196 =   (  ( tmp_20_reg_196__temp  & 1023 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_23_reg_168 =   (  ( tmp_23_reg_168__temp  & 1023 )  |  (  (  ( b & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_1_reg_177 =   (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( b >> 52 )  & 2047 )  ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_reg_205 =   (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( a >> 52 )  & 2047 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               tmp_reg_1396 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_18_reg_1385 =   ( b & 4503599627370495 ) ;
               tmp_14_reg_1372 =   ( a & 4503599627370495 ) ;
               expDiff_reg_1366 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
               bExp_reg_1361 =   (  ( b >> 52 )  & 4095 ) ;
               aSig_cast1_cast_reg_1378 =   (  ( aSig_cast1_cast_reg_1378__temp  & 4611686018427388927 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 4611686018427386880 )  ) ;
               aExp_reg_1355 =   (  ( a >> 52 )  & 4095 ) ;
       }
       if((((grp_fu_288_p2 == 0) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_31_i_reg_1490 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
               icmp9_reg_1485 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
               expDiff_1_reg_1479 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;
               bSig_2_reg_1471 =   (  ( bSig_2_reg_1471__temp  & 1023 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 10 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 10 )  )  & 9223372036854774784 )  ) ;
       }
       if(((((grp_fu_288_p2 == 0) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_13_reg_1418 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 0) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_21_reg_1422 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if(((tmp_fu_424_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_24_reg_1400 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_424_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_5_reg_1467 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 1) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_9_reg_1442 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 0) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_s_reg_1404 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state12) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
       if(1 == ap_CS_fsm_state1)
       {
               grp_fu_293_p0 =   (  ( a >> 52 )  & 4095 ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state6;
   }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           aSig_s_reg_159 =   (  ( a & 4503599627370495 )  << 10 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           bSig_s_reg_187 =   (  ( b & 4503599627370495 )  << 10 ) ;
       }
       if(((((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || ((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
           float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 0) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =  0;
       }
       if((((((tmp_15_fu_834_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((tmp_7_fu_756_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =  a;
       }
       if(((((((tmp_19_fu_656_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_22_fu_550_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_11_fu_472_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_288_p2 == 1) && (tmp_15_fu_834_p2 == 0)) && (tmp_7_fu_756_p2 == 0)) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_9_fu_572_p2 == 1) && (tmp_19_fu_656_p2 == 0)) && (tmp_3_fu_578_p2 == 0)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((grp_fu_288_p2 == 1) && (tmp_11_fu_472_p2 == 0)) && (tmp_22_fu_550_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_11_fu_472_p2 == 1) && (grp_fu_288_p2 == 1)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =  9223372036854775807;
       }
       if((((((tmp_3_fu_578_p2 == 1) && (tmp_9_fu_572_p2 == 1)) && (tmp_24_fu_430_p3 == 1)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_247 =   (  (  ( zSign ^ 1 )  << 63 )  | 9218868437227405312 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_20_reg_196 =   (  ( tmp_20_reg_196__temp  & 1023 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_23_reg_168 =   (  ( tmp_23_reg_168__temp  & 1023 )  |  (  (  ( b & 4503599627370495 )  << 10 )  & 9223372036854774784 )  ) ;
       }
       if(((((((tmp_21_fu_460_p2 == 1) && (tmp_13_fu_454_p2 == 0)) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           zExp_1_reg_177 =   (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( b >> 52 )  & 2047 )  ) ;
       }
       if((((((tmp_13_fu_454_p2 == 1) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           zExp_reg_205 =   (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 1 :   (  ( a >> 52 )  & 2047 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           tmp_reg_1396 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
           tmp_18_reg_1385 =   ( b & 4503599627370495 ) ;
           tmp_14_reg_1372 =   ( a & 4503599627370495 ) ;
           expDiff_reg_1366 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
           bExp_reg_1361 =   (  ( b >> 52 )  & 4095 ) ;
           aSig_cast1_cast_reg_1378 =   (  ( aSig_cast1_cast_reg_1378__temp  & 4611686018427388927 )  |  (  (  ( a & 4503599627370495 )  << 10 )  & 4611686018427386880 )  ) ;
           aExp_reg_1355 =   (  ( a >> 52 )  & 4095 ) ;
       }
       if((((grp_fu_288_p2 == 0) && (tmp_fu_424_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_31_i_reg_1490 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
           icmp9_reg_1485 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
           expDiff_1_reg_1479 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;
           bSig_2_reg_1471 =   (  ( bSig_2_reg_1471__temp  & 1023 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 10 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 10 )  )  & 9223372036854774784 )  ) ;
       }
       if(((((grp_fu_288_p2 == 0) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_13_reg_1418 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if((((((tmp_13_fu_454_p2 == 0) && (grp_fu_288_p2 == 0)) && (tmp_24_fu_430_p3 == 0)) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_21_reg_1422 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       }
       if(((tmp_fu_424_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_24_reg_1400 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_424_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_5_reg_1467 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 1) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_9_reg_1442 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_24_fu_430_p3 == 0) && (tmp_fu_424_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_s_reg_1404 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state12) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       if(1 == ap_CS_fsm_state1)
       {
           grp_fu_293_p0 =   (  ( a >> 52 )  & 4095 ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state1;

   ap_ST_fsm_state2:
	//printf("state 2\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
       if(1 == ap_CS_fsm_state2)
       {
           tmp_i6_15_reg_1523 =   (  (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 1 + expDiff_reg_1366__temp  )  :  expDiff_reg_1366__temp  )  == 0 ? 1 :  0 ) ;

           tmp_35_i_reg_1534 =   (  (  (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? aSig_cast1_cast_reg_1378__temp  :   (  (  ( 1 << 52 )  | tmp_14_reg_1372__temp  )  << 10 )  )  <<  (  (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 1 + expDiff_reg_1366__temp  )  :  expDiff_reg_1366__temp  )  & 63 )  )  != 0 ? 1 :  0 ) ;

           icmp_reg_1529 =   ( do_twos_complement( (  (  ( 0 -  (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 1 + expDiff_reg_1366__temp  )  :  expDiff_reg_1366__temp  )  )  >> 6 )  & 63 )  )  < do_twos_complement(1 )  ? 1 :  0 ) ;

           count_assign_1_reg_1518 =   ( 0 -  (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 1 + expDiff_reg_1366__temp  )  :  expDiff_reg_1366__temp  )  ) ;

           aSig_3_reg_1511 =   (  ( aSig_3_reg_1511__temp  & 1023 )  |  (  (  (  ( grp_fu_293_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? aSig_cast1_cast_reg_1378__temp  :   (  (  ( 1 << 52 )  | tmp_14_reg_1372__temp  )  << 10 )  )  & 9223372036854774784 )  ) ;
	  aSig_3_reg_1511=aSig_3_reg_1511|4611686018427387904;
	   //printf("aSig_3_reg_1511 %llu\n",aSig_3_reg_1511);
       }
       if(1 == ap_CS_fsm_state2)
       {
           grp_fu_293_p0 =  aExp_reg_1355__temp ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:
	//printf("state 3\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
               tmp_fu_424_p2 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_24_fu_430_p3 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
               tmp_21_fu_460_p2 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
               grp_fu_288_p2 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_13_fu_454_p2 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       if(1 == ap_CS_fsm_state3)
       {
           aSig_s_reg_159 =   (  ( tmp_i6_15_reg_1523__temp  & 1 )  == 1 ? aSig_3_reg_1511__temp  :   (  (  (  ( tmp_i6_15_reg_1523__temp  ^ 1 )  & icmp_reg_1529__temp  )  & 1 )  == 1 ?  (  (  (  (  ( aSig_3_reg_1511__temp  >> count_assign_1_reg_1518__temp  )  >> 1 )  & 2305843009213693950 )  << 1 )  |  (  (  (  ( aSig_3_reg_1511__temp  >> count_assign_1_reg_1518__temp  )  & 1 )  | tmp_35_i_reg_1534__temp  )  & 1 )  )  :   ( aSig_3_reg_1511__temp  != 0 ? 1 :  0 )  )  ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           tmp_23_reg_168 =   (  ( tmp_23_reg_168__temp  & 1023 )  |  (  (  (  ( 1 << 52 )  | tmp_18_reg_1385__temp  )  << 10 )  & 9223372036854774784 )  ) ;
	tmp_23_reg_168=tmp_23_reg_168|4611686018427387904;
       }
       if(1 == ap_CS_fsm_state3)
       {
           zExp_1_reg_177 =  bExp_reg_1361__temp ;
	    //printf("zExp_1_reg_177 %llu\n",zExp_1_reg_177);
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:
	//printf("state 4\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
       if(1 == ap_CS_fsm_state4)
       {
           zExp2_reg_225 =  zExp_1_reg_177__temp ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           zSig_assign_reg_215 =   ( tmp_23_reg_168__temp  - aSig_s_reg_159__temp  ) ;
	   //printf("zSig_assign_reg_215 %llu\n",zSig_assign_reg_215);
	   //printf("tmp_23_reg_168__temp %llu\n",tmp_23_reg_168__temp);
	   //printf("aSig_s_reg_159__temp %llu\n",aSig_s_reg_159__temp);
       }
       if(1 == ap_CS_fsm_state4)
       {
           zSign_assign_1_reg_237 =   ( zSign ^ 1 ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state7;

   ap_ST_fsm_state5:
	//printf("state 5\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
               grp_fu_288_p2 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_fu_424_p2 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_24_fu_430_p3 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
               tmp_13_fu_454_p2 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
       if(1 == ap_CS_fsm_state5)
       {
           bSig_s_reg_187 =   (  (  ( expDiff_1_reg_1479__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? bSig_2_reg_1471__temp  :   (  (  (  (  ( expDiff_1_reg_1479__temp  == 0 ? 1 :  0 )  ^ 1 )  & icmp9_reg_1485__temp  )  & 1 )  == 1 ?  (  (  (  (  ( bSig_2_reg_1471__temp  >> expDiff_1_reg_1479__temp  )  >> 1 )  & 2305843009213693950 )  << 1 )  |  (  (  (  ( bSig_2_reg_1471__temp  << tmp_31_i_reg_1490__temp  )  != 0 ? 1 :  0 )  |  (  ( bSig_2_reg_1471__temp  >> expDiff_1_reg_1479__temp  )  & 1 )  )  & 1 )  )  :   ( bSig_2_reg_1471__temp  != 0 ? 1 :  0 )  )  ) ;

       }
       if(1 == ap_CS_fsm_state5)
       {
           tmp_20_reg_196 =   (  ( tmp_20_reg_196__temp  & 1023 )  |  (  (  (  ( 1 << 52 )  | tmp_14_reg_1372__temp  )  << 10 )  & 9223372036854774784 )  ) ;
	   
	   
	   //printf("tmp_20_reg_196 %llu\n",tmp_20_reg_196);
	   //printf("tmp_14_reg_1372__temp %llu\n",tmp_14_reg_1372__temp);
       }
       if(1 == ap_CS_fsm_state5)
       {
           zExp_reg_205 =  aExp_reg_1355__temp ;
	   //printf("zExp_reg_205 %llu\n",zExp_reg_205);
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:
	//printf("state 6\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
       if(1 == ap_CS_fsm_state6)
       {
           zExp2_reg_225 =  zExp_reg_205__temp ;
       }
       if(1 == ap_CS_fsm_state6)
       {  
	   tmp_20_reg_196__temp = tmp_20_reg_196__temp|4611686018427387904;
           zSig_assign_reg_215 =   ( tmp_20_reg_196__temp  - bSig_s_reg_187__temp  ) ;
	   //printf("tmp_20_reg_196__temp %llu\n", tmp_20_reg_196__temp);
	   //printf("bSig_s_reg_187__temp %llu\n",bSig_s_reg_187__temp);
	   //printf("zSig_assign_reg_215 %llu\n",zSig_assign_reg_215);
       }
       if(1 == ap_CS_fsm_state6)
       {
           zSign_assign_1_reg_237 =  zSign;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state7;

   ap_ST_fsm_state7:
	//printf("state 7\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
       if(1 == ap_CS_fsm_state7)
       {
           tmp_54_reg_1585 =   (  (  (  (  (  (  (  (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  >> 16 )  & 65535 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  << 16 )  :   (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  )  >> 24 )  & 255 ) ;

           tmp_40_reg_1595 =   (  (  (  (  (  (  (  (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  >> 16 )  & 65535 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  << 16 )  :   (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  )  >> 24 )  & 255 ) ;
           tmp_39_reg_1590 =   (  (  (  (  (  (  (  (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  >> 16 )  & 65535 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  << 16 )  :   (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  )  >> 16 )  & 255 ) ;

           icmp2_reg_1579 =   (  (  (  (  (  (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( zSig_assign_reg_215__temp  & 4294967295 )  :   (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  )  >> 16 )  & 65535 )  == 0 ? 1 :  0 ) ;

           icmp1_reg_1574 =   (  (  ( zSig_assign_reg_215__temp  >> 32 )  & 17179869183 )  == 0 ? 1 :  0 ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state8;

   ap_ST_fsm_state8:
	//printf("state 8\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 1;
       if(1 == ap_CS_fsm_state8)
       {
           icmp3_reg_1600 =   ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 ) ;
       }
       if(1 == ap_CS_fsm_state8)
       {
           countLeadingZerosHig_ce0 =  1;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       if(countLeadingZerosHig_ce0){
	 //printf("countLeadingZerosHig_address0 %llu\n",countLeadingZerosHig_address0);
          countLeadingZerosHig_q0=countLeadingZerosHig_rom[countLeadingZerosHig_address0];
	  //printf("countLeadingZerosHig_q0 %llu\n",countLeadingZerosHig_q0);
       }
       goto ap_ST_fsm_state9;

   ap_ST_fsm_state9:
	//printf("state 9\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
       if(1 == ap_CS_fsm_state9)
       {
	    //printf("countLeadingZerosHig_q0__temp %llu\n",countLeadingZerosHig_q0__temp);
	    //printf("icmp3_reg_1600__temp %llu\n",icmp3_reg_1600__temp);
            //printf("icmp2_reg_1579__temp %llu\n",icmp2_reg_1579__temp);
	    //printf("icmp1_reg_1574__temp %llu\n",icmp1_reg_1574__temp);

           shiftCount_1_reg_1610 =   (  (  (  ( icmp3_reg_1600__temp  & 1 )  == 1 ?  (  ( icmp2_reg_1579__temp  & 1 )  == 1 ? 24 :  8 )  :   (  ( icmp2_reg_1579__temp  & 1 )  == 1 ? 16 :  0 )  )  + countLeadingZerosHig_q0__temp  )  +  (  ( icmp1_reg_1574__temp  & 1 )  == 1 ? -1/*31*/ :-1  /*127*/ )  ) ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state10;

   ap_ST_fsm_state10:
	//printf("state 10\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
       if(1 == ap_CS_fsm_state10)
       {
           grp_roundAndPackFloat64_fu_278_ap_start_reg =  1;
       }
       if(1 == ap_CS_fsm_state10)
       {
	  //printf("shiftCount_1_reg_1610__temp %llu\n",shiftCount_1_reg_1610__temp);
           tmp_i5_21_reg_1616 =   ( do_twos_complement( ( /*do_twos_complement( 4095 )*/ -1  + do_twos_complement( zExp2_reg_225__temp  )  )  )  - do_twos_complement( shiftCount_1_reg_1610__temp  )  ) ;

           tmp_76_i_reg_1621 =   ( zSig_assign_reg_215__temp  << shiftCount_1_reg_1610__temp  ) ;

	   //printf("tmp_i5_21_reg_1616 %llu\n",tmp_i5_21_reg_1616);
	   //printf("zSig_assign_reg_215__temp %llu\n",zSig_assign_reg_215__temp);
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
if (grp_roundAndPackFloat64_fu_278_ap_start_reg==1){
grp_roundAndPackFloat64_fu_278_ap_start=1;
roundAndPackFloat64(&ap_clk,&grp_roundAndPackFloat64_fu_278_ap_done,&grp_roundAndPackFloat64_fu_278_ap_idle,&grp_roundAndPackFloat64_fu_278_ap_ready,&grp_roundAndPackFloat64_fu_278_ap_return,&ap_rst,&grp_roundAndPackFloat64_fu_278_ap_start,&float_exception_flag,&grp_roundAndPackFloat64_fu_278_float_exception_flag_o,&grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld,&tmp_i5_21_reg_1616,&tmp_76_i_reg_1621,&zSign_assign_1_reg_237,dummy);
grp_roundAndPackFloat64_fu_278_ap_done=1;
}
       goto ap_ST_fsm_state11;

   ap_ST_fsm_state11:
	//printf("state 11\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
               tmp_fu_424_p2 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
		
		//tmp_fu_424_p2=t1;
		////printf("t1 %d\n",t1);
               tmp_15_fu_834_p2 =   (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_19_fu_656_p2 =   (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_3_fu_578_p2 =   (  (  ( b & 4503599627370495 )  << 10 )  == 0 ? 1 :  0 ) ;
               tmp_22_fu_550_p2 =   (  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_24_fu_430_p3 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
               tmp_7_fu_756_p2 =   (  (  ( a & 4503599627370495 )  << 10 )  == 0 ? 1 :  0 ) ;
               tmp_9_fu_572_p2 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               grp_fu_288_p2 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_11_fu_472_p2 =   (  (  (  ( b & 4503599627370495 )  << 10 )  |  (  ( a & 4503599627370495 )  << 10 )  )  == 0 ? 1 :  0 ) ;
   if(((grp_roundAndPackFloat64_fu_278_ap_done == 1) && (1 == ap_CS_fsm_state11)) == 1){
       if((grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld == 1) && (1 == ap_CS_fsm_state11))
       {
           float_exception_flag =  grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp ;
       }
       if((grp_roundAndPackFloat64_fu_278_ap_done == 1) && (1 == ap_CS_fsm_state11))
       {
           tmp_77_i_reg_1626 =  grp_roundAndPackFloat64_fu_278_ap_return__temp ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state12;
   }
   if(((grp_roundAndPackFloat64_fu_278_ap_done == 1) && (1 == ap_CS_fsm_state11)) == 0){
       if((grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld == 1) && (1 == ap_CS_fsm_state11))
       {
               float_exception_flag =  grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp ;
       }
       if((grp_roundAndPackFloat64_fu_278_ap_done == 1) && (1 == ap_CS_fsm_state11))
       {
               tmp_77_i_reg_1626 =  grp_roundAndPackFloat64_fu_278_ap_return__temp ;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       goto ap_ST_fsm_state11;
   }

   ap_ST_fsm_state12:
	//printf("state 12\n");
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
   shiftCount_1_reg_1610__temp = shiftCount_1_reg_1610 ;
   shiftCount_3_cast1_fu_1320_p1__temp = shiftCount_3_cast1_fu_1320_p1 ;
   shiftCount_3_cast_fu_1323_p1__temp = shiftCount_3_cast_fu_1323_p1 ;
   shiftCount_1_fu_1304_p2__temp = shiftCount_1_fu_1304_p2 ;
   b1_1_mux_fu_662_p3__temp = b1_1_mux_fu_662_p3 ;
   tmp_11_fu_472_p2__temp = tmp_11_fu_472_p2 ;
   tmp_36_i1_fu_1086_p2__temp = tmp_36_i1_fu_1086_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_start_reg__temp = grp_roundAndPackFloat64_fu_278_ap_start_reg ;
   countLeadingZerosHig_q0__temp = countLeadingZerosHig_q0 ;
   bExp_fu_368_p4__temp = bExp_fu_368_p4 ;
   countLeadingZerosHig_address0__temp = countLeadingZerosHig_address0 ;
   tmp_45_fu_614_p2__temp = tmp_45_fu_614_p2 ;
   tmp_1_fu_1078_p3__temp = tmp_1_fu_1078_p3 ;
   tmp_57_i5_fu_544_p2__temp = tmp_57_i5_fu_544_p2 ;
   tmp_35_i_fu_930_p2__temp = tmp_35_i_fu_930_p2 ;
   tmp_i_fu_592_p2__temp = tmp_i_fu_592_p2 ;
   float_exception_flag__temp = float_exception_flag ;
   tmp26_fu_1287_p2__temp = tmp26_fu_1287_p2 ;
   tmp_13_fu_454_p2__temp = tmp_13_fu_454_p2 ;
   tmp_56_i4_fu_644_p2__temp = tmp_56_i4_fu_644_p2 ;
   tmp_i2_fu_678_p3__temp = tmp_i2_fu_678_p3 ;
   grp_fu_346_p2__temp = grp_fu_346_p2 ;
   p_i_i_i_fu_1258_p3__temp = p_i_i_i_fu_1258_p3 ;
   tmp_23_reg_168__temp = tmp_23_reg_168 ;
   tmp_7_fu_756_p2__temp = tmp_7_fu_756_p2 ;
   grp_fu_293_p2__temp = grp_fu_293_p2 ;
   z_5_cast_fu_976_p1__temp = z_5_cast_fu_976_p1 ;
   z_5_fu_1114_p3__temp = z_5_fu_1114_p3 ;
   sel_tmp_i1_fu_1095_p2__temp = sel_tmp_i1_fu_1095_p2 ;
   count_assign_1_fu_892_p2__temp = count_assign_1_fu_892_p2 ;
   p_v_fu_1247_p3__temp = p_v_fu_1247_p3 ;
   aSig_3_fu_870_p3__temp = aSig_3_fu_870_p3 ;
   tmp_24_fu_430_p3__temp = tmp_24_fu_430_p3 ;
   count_assign_1_reg_1518__temp = count_assign_1_reg_1518 ;
   zSig_fu_1138_p2__temp = zSig_fu_1138_p2 ;
   tmp_25_fu_730_p1__temp = tmp_25_fu_730_p1 ;
   z_1_cast_fu_1091_p1__temp = z_1_cast_fu_1091_p1 ;
   aSig_fu_396_p3__temp = aSig_fu_396_p3 ;
   grp_fu_298_p4__temp = grp_fu_298_p4 ;
   grp_roundAndPackFloat64_fu_278_ap_idle__temp = grp_roundAndPackFloat64_fu_278_ap_idle ;
   tmp_57_i4_fu_650_p2__temp = tmp_57_i4_fu_650_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_i5_21_reg_1616__temp = tmp_i5_21_reg_1616 ;
   p_s_fu_438_p3__temp = p_s_fu_438_p3 ;
   aExp_fu_352_p4__temp = aExp_fu_352_p4 ;
   shiftCount_fu_1265_p3__temp = shiftCount_fu_1265_p3 ;
   tmp_14_fu_392_p1__temp = tmp_14_fu_392_p1 ;
   icmp3_reg_1600__temp = icmp3_reg_1600 ;
   a1_3_fu_848_p3__temp = a1_3_fu_848_p3 ;
   grp_fu_293_p0__temp = grp_fu_293_p0 ;
   tmp_i2_16_fu_762_p3__temp = tmp_i2_16_fu_762_p3 ;
   tmp_30_fu_1058_p1__temp = tmp_30_fu_1058_p1 ;
   ap_phi_mux_p_0_phi_fu_252_p22__temp = ap_phi_mux_p_0_phi_fu_252_p22 ;
   icmp2_fu_1192_p2__temp = icmp2_fu_1192_p2 ;
   tmp_29_i43_cast_fu_1035_p1__temp = tmp_29_i43_cast_fu_1035_p1 ;
   tmp_i9_fu_520_p3__temp = tmp_i9_fu_520_p3 ;
   tmp_i4_fu_514_p2__temp = tmp_i4_fu_514_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_ready__temp = grp_roundAndPackFloat64_fu_278_ap_ready ;
   grp_roundAndPackFloat64_fu_278_ap_start__temp = grp_roundAndPackFloat64_fu_278_ap_start ;
   tmp_i6_15_reg_1523__temp = tmp_i6_15_reg_1523 ;
   tmp_i6_15_fu_898_p2__temp = tmp_i6_15_fu_898_p2 ;
   icmp1_fu_1154_p2__temp = icmp1_fu_1154_p2 ;
   tmp_35_i_reg_1534__temp = tmp_35_i_reg_1534 ;
   tmp_16_fu_953_p4__temp = tmp_16_fu_953_p4 ;
   bSig_cast_fu_1130_p1__temp = bSig_cast_fu_1130_p1 ;
   tmp_i5_fu_478_p3__temp = tmp_i5_fu_478_p3 ;
   zSign_assign_1_reg_237__temp = zSign_assign_1_reg_237 ;
   p_a_i_i_i_fu_1204_p3__temp = p_a_i_i_i_fu_1204_p3 ;
   bSig_2_fu_714_p3__temp = bSig_2_fu_714_p3 ;
   tmp_17_fu_963_p3__temp = tmp_17_fu_963_p3 ;
   tmp_23_cast_fu_1017_p1__temp = tmp_23_cast_fu_1017_p1 ;
   icmp9_fu_744_p2__temp = icmp9_fu_744_p2 ;
   tmp_22_fu_550_p2__temp = tmp_22_fu_550_p2 ;
   bSig_cast1_cast_fu_420_p1__temp = bSig_cast1_cast_fu_420_p1 ;
   expDiff_fu_382_p2__temp = expDiff_fu_382_p2 ;
   tmp_i7_18_fu_804_p3__temp = tmp_i7_18_fu_804_p3 ;
   tmp_38_fu_818_p1__temp = tmp_38_fu_818_p1 ;
   tmp_fu_424_p2__temp = tmp_fu_424_p2 ;
   tmp_i8_fu_584_p3__temp = tmp_i8_fu_584_p3 ;
   tmp_36_i_fu_971_p2__temp = tmp_36_i_fu_971_p2 ;
   aSig_cast1_cast_reg_1378__temp = aSig_cast1_cast_reg_1378 ;
   b1_mux_fu_840_p3__temp = b1_mux_fu_840_p3 ;
   tmp_9_fu_572_p2__temp = tmp_9_fu_572_p2 ;
   expDiff_1_reg_1479__temp = expDiff_1_reg_1479 ;
   zExp_1_reg_177__temp = zExp_1_reg_177 ;
   tmp_10_fu_466_p2__temp = tmp_10_fu_466_p2 ;
   tmp_77_i_reg_1626__temp = tmp_77_i_reg_1626 ;
   sel_tmp1_i1_fu_1101_p2__temp = sel_tmp1_i1_fu_1101_p2 ;
   tmp_74_i_fu_686_p2__temp = tmp_74_i_fu_686_p2 ;
   sel_tmp1_i_fu_985_p2__temp = sel_tmp1_i_fu_985_p2 ;
   tmp_s_reg_1404__temp = tmp_s_reg_1404 ;
   tmp_30_i_fu_939_p2__temp = tmp_30_i_fu_939_p2 ;
   tmp_30_i1_fu_1038_p2__temp = tmp_30_i1_fu_1038_p2 ;
   expDiff_3_fu_881_p3__temp = expDiff_3_fu_881_p3 ;
   tmp_42_fu_904_p4__temp = tmp_42_fu_904_p4 ;
   zExp_reg_205__temp = zExp_reg_205 ;
   tmp_33_i1_fu_1043_p1__temp = tmp_33_i1_fu_1043_p1 ;
   zSig_assign_reg_215__temp = zSig_assign_reg_215 ;
   tmp_8_fu_692_p2__temp = tmp_8_fu_692_p2 ;
   aSig_3_cast_fu_877_p1__temp = aSig_3_cast_fu_877_p1 ;
   z_2_fu_990_p3__temp = z_2_fu_990_p3 ;
   tmp_85_i_i_i_fu_1253_p1__temp = tmp_85_i_i_i_fu_1253_p1 ;
   tmp_56_i1_fu_780_p2__temp = tmp_56_i1_fu_780_p2 ;
   tmp_34_i_fu_924_p2__temp = tmp_34_i_fu_924_p2 ;
   tmp_i1_17_fu_798_p2__temp = tmp_i1_17_fu_798_p2 ;
   a1_5_fu_564_p3__temp = a1_5_fu_564_p3 ;
   z_fu_1106_p3__temp = z_fu_1106_p3 ;
   tmp_reg_1396__temp = tmp_reg_1396 ;
   tmp_37_fu_1174_p3__temp = tmp_37_fu_1174_p3 ;
   tmp_29_i_cast_fu_936_p1__temp = tmp_29_i_cast_fu_936_p1 ;
   grp_fu_334_p2__temp = grp_fu_334_p2 ;
   expDiff_2_fu_856_p2__temp = expDiff_2_fu_856_p2 ;
   ap_return_preg__temp = ap_return_preg ;
   aSig_s_reg_159__temp = aSig_s_reg_159 ;
   tmp_18_fu_408_p1__temp = tmp_18_fu_408_p1 ;
   aSig_cast1_cast_fu_404_p1__temp = aSig_cast1_cast_fu_404_p1 ;
   tmp_41_fu_888_p1__temp = tmp_41_fu_888_p1 ;
   icmp3_fu_1242_p2__temp = icmp3_fu_1242_p2 ;
   tmp_39_reg_1590__temp = tmp_39_reg_1590 ;
   tmp_6_fu_388_p1__temp = tmp_6_fu_388_p1 ;
   tmp_i8_19_fu_812_p2__temp = tmp_i8_19_fu_812_p2 ;
   bSig_fu_412_p3__temp = bSig_fu_412_p3 ;
   bExp_cast_fu_378_p1__temp = bExp_cast_fu_378_p1 ;
   expDiff_reg_1366__temp = expDiff_reg_1366 ;
   tmp_76_i_reg_1621__temp = tmp_76_i_reg_1621 ;
   tmp_57_i1_fu_786_p2__temp = tmp_57_i1_fu_786_p2 ;
   tmp_14_reg_1372__temp = tmp_14_reg_1372 ;
   bSig_1_fu_704_p4__temp = bSig_1_fu_704_p4 ;
   p_0_reg_247__temp = p_0_reg_247 ;
   grp_fu_318_p2__temp = grp_fu_318_p2 ;
   tmp_35_fu_792_p2__temp = tmp_35_fu_792_p2 ;
   grp_fu_288_p2__temp = grp_fu_288_p2 ;
   tmp_21_fu_460_p2__temp = tmp_21_fu_460_p2 ;
   tmp_5_reg_1467__temp = tmp_5_reg_1467 ;
   tmp_34_i1_fu_1046_p2__temp = tmp_34_i1_fu_1046_p2 ;
   grp_fu_324_p2__temp = grp_fu_324_p2 ;
   tmp_53_fu_1198_p2__temp = tmp_53_fu_1198_p2 ;
   tmp_18_reg_1385__temp = tmp_18_reg_1385 ;
   icmp9_reg_1485__temp = icmp9_reg_1485 ;
   tmp_33_fu_776_p1__temp = tmp_33_fu_776_p1 ;
   tmp_43_fu_944_p1__temp = tmp_43_fu_944_p1 ;
   icmp1_reg_1574__temp = icmp1_reg_1574 ;
   tmp_56_i3_fu_602_p2__temp = tmp_56_i3_fu_602_p2 ;
   tmp_35_i1_fu_1052_p2__temp = tmp_35_i1_fu_1052_p2 ;
   tmp_2_i_fu_948_p2__temp = tmp_2_i_fu_948_p2 ;
   p_2_fu_446_p3__temp = p_2_fu_446_p3 ;
   shiftCount_1_i_i_i_fu_1272_p3__temp = shiftCount_1_i_i_i_fu_1272_p3 ;
   tmp_i7_fu_770_p2__temp = tmp_i7_fu_770_p2 ;
   z_4_fu_998_p3__temp = z_4_fu_998_p3 ;
   tmp_2_fu_1068_p4__temp = tmp_2_fu_1068_p4 ;
   tmp_52_fu_1182_p4__temp = tmp_52_fu_1182_p4 ;
   tmp_46_fu_640_p1__temp = tmp_46_fu_640_p1 ;
   countLeadingZerosHig_3_fu_1283_p1__temp = countLeadingZerosHig_3_fu_1283_p1 ;
   tmp_i3_fu_620_p2__temp = tmp_i3_fu_620_p2 ;
   tmp_76_i_fu_1337_p2__temp = tmp_76_i_fu_1337_p2 ;
   tmp_54_reg_1585__temp = tmp_54_reg_1585 ;
   aSig_2_fu_861_p4__temp = aSig_2_fu_861_p4 ;
   tmp_i6_fu_486_p2__temp = tmp_i6_fu_486_p2 ;
   tmp_33_i_fu_920_p1__temp = tmp_33_i_fu_920_p1 ;
   icmp2_reg_1579__temp = icmp2_reg_1579 ;
   sel_tmp_i_fu_980_p2__temp = sel_tmp_i_fu_980_p2 ;
   tmp_i1_fu_626_p3__temp = tmp_i1_fu_626_p3 ;
   tmp_56_i_fu_496_p2__temp = tmp_56_i_fu_496_p2 ;
   tmp_20_cast_fu_1134_p1__temp = tmp_20_cast_fu_1134_p1 ;
   tmp_56_i5_fu_538_p2__temp = tmp_56_i5_fu_538_p2 ;
   tmp_49_fu_534_p1__temp = tmp_49_fu_534_p1 ;
   tmp_36_fu_1164_p4__temp = tmp_36_fu_1164_p4 ;
   tmp_51_fu_1160_p1__temp = tmp_51_fu_1160_p1 ;
   tmp_15_fu_834_p2__temp = tmp_15_fu_834_p2 ;
   tmp_57_i_fu_502_p2__temp = tmp_57_i_fu_502_p2 ;
   zExp2_cast_fu_1310_p1__temp = zExp2_cast_fu_1310_p1 ;
   bSig_s_reg_187__temp = bSig_s_reg_187 ;
   aExp_reg_1355__temp = aExp_reg_1355 ;
   tmp_48_fu_508_p2__temp = tmp_48_fu_508_p2 ;
   tmp_3_fu_578_p2__temp = tmp_3_fu_578_p2 ;
   tmp_44_fu_598_p1__temp = tmp_44_fu_598_p1 ;
   bSig_2_reg_1471__temp = bSig_2_reg_1471 ;
   tmp_57_i3_fu_608_p2__temp = tmp_57_i3_fu_608_p2 ;
   zSig_1_fu_1021_p2__temp = zSig_1_fu_1021_p2 ;
   zExp2_reg_225__temp = zExp2_reg_225 ;
   expDiff_2_cast_fu_698_p2__temp = expDiff_2_cast_fu_698_p2 ;
   grp_roundAndPackFloat64_fu_278_ap_return__temp = grp_roundAndPackFloat64_fu_278_ap_return ;
   aSig_cast_fu_1013_p1__temp = aSig_cast_fu_1013_p1 ;
   tmp_47_fu_492_p1__temp = tmp_47_fu_492_p1 ;
   tmp_31_i_reg_1490__temp = tmp_31_i_reg_1490 ;
   grp_roundAndPackFloat64_fu_278_ap_done__temp = grp_roundAndPackFloat64_fu_278_ap_done ;
   tmp_i_20_fu_1030_p2__temp = tmp_i_20_fu_1030_p2 ;
   tmp_21_reg_1422__temp = tmp_21_reg_1422 ;
   zExp_2_fu_1314_p2__temp = zExp_2_fu_1314_p2 ;
   tmp_50_fu_1144_p4__temp = tmp_50_fu_1144_p4 ;
   tmp63_cast_fu_1293_p1__temp = tmp63_cast_fu_1293_p1 ;
   tmp64_cast_cast_fu_1297_p3__temp = tmp64_cast_cast_fu_1297_p3 ;
   grp_fu_308_p4__temp = grp_fu_308_p4 ;
   b1_2_mux_fu_556_p3__temp = b1_2_mux_fu_556_p3 ;
   tmp_i10_fu_528_p2__temp = tmp_i10_fu_528_p2 ;
   tmp_40_reg_1595__temp = tmp_40_reg_1595 ;
   tmp_57_i2_fu_828_p2__temp = tmp_57_i2_fu_828_p2 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o_ap_vld ;
   a1_4_fu_670_p3__temp = a1_4_fu_670_p3 ;
   tmp_24_reg_1400__temp = tmp_24_reg_1400 ;
   aSig_3_reg_1511__temp = aSig_3_reg_1511 ;
   grp_roundAndPackFloat64_fu_278_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_278_float_exception_flag_o ;
   tmp_27_fu_734_p4__temp = tmp_27_fu_734_p4 ;
   tmp_i9_14_fu_634_p2__temp = tmp_i9_14_fu_634_p2 ;
   shiftCount_1_i_i_i_c_fu_1279_p1__temp = shiftCount_1_i_i_i_c_fu_1279_p1 ;
   tmp_75_i_fu_1333_p1__temp = tmp_75_i_fu_1333_p1 ;
   expDiff_1_fu_722_p3__temp = expDiff_1_fu_722_p3 ;
   tmp_i5_21_fu_1326_p2__temp = tmp_i5_21_fu_1326_p2 ;
   bSig_4_fu_1004_p4__temp = bSig_4_fu_1004_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_reg_1529__temp = icmp_reg_1529 ;
   tmp_19_fu_656_p2__temp = tmp_19_fu_656_p2 ;
   tmp_56_i2_fu_822_p2__temp = tmp_56_i2_fu_822_p2 ;
   tmp_20_reg_196__temp = tmp_20_reg_196 ;
   aExp_cast_fu_364_p1__temp = aExp_cast_fu_364_p1 ;
   tmp_9_reg_1442__temp = tmp_9_reg_1442 ;
   bExp_reg_1361__temp = bExp_reg_1361 ;
   aSig_1_fu_1121_p4__temp = aSig_1_fu_1121_p4 ;
   tmp_13_reg_1418__temp = tmp_13_reg_1418 ;
   bSig_2_cast_fu_1027_p1__temp = bSig_2_cast_fu_1027_p1 ;
   countLeadingZerosHig_ce0__temp = countLeadingZerosHig_ce0 ;
   tmp_31_i_fu_750_p2__temp = tmp_31_i_fu_750_p2 ;
   icmp_fu_914_p2__temp = icmp_fu_914_p2 ;
   tmp_2_i1_fu_1062_p2__temp = tmp_2_i1_fu_1062_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_278_ap_start_reg = 0 ;
       bSig_2_reg_1471 = bSig_2_reg_1471 & 9223372036854774784 ;
       aSig_3_reg_1511 = aSig_3_reg_1511 & 9223372036854774784 ;
       tmp_23_reg_168 = tmp_23_reg_168 & 9223372036854774784 ;
       tmp_20_reg_196 = tmp_20_reg_196 & 9223372036854774784 ;
       aSig_cast1_cast_reg_1378 = aSig_cast1_cast_reg_1378 & 4611686018427386880 ;
       countLeadingZerosHig_ce0 = 0;
               tmp_21_reg_1422 =  tmp_21_reg_1422__temp ;
               tmp_fu_424_p2 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_15_fu_834_p2 =   (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_reg_1396 =  tmp_reg_1396__temp ;
               tmp_19_fu_656_p2 =   (  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_3_fu_578_p2 =   (  (  ( b & 4503599627370495 )  << 10 )  == 0 ? 1 :  0 ) ;
               tmp_13_fu_454_p2 =   (  (  ( b & 4503599627370495 )  << 10 )  <  (  ( a & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
               tmp_22_fu_550_p2 =   (  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  ( grp_fu_308_p4__temp  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_24_fu_430_p3 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
               tmp_9_fu_572_p2 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_21_fu_460_p2 =   (  (  ( a & 4503599627370495 )  << 10 )  <  (  ( b & 4503599627370495 )  << 10 )  ? 1 : 0 ) ;
               tmp_7_fu_756_p2 =   (  (  ( a & 4503599627370495 )  << 10 )  == 0 ? 1 :  0 ) ;
               tmp_24_reg_1400 =  tmp_24_reg_1400__temp ;
               tmp_13_reg_1418 =  tmp_13_reg_1418__temp ;
               tmp_s_reg_1404 =  tmp_s_reg_1404__temp ;
               tmp_5_reg_1467 =  tmp_5_reg_1467__temp ;
               grp_fu_288_p2 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_9_reg_1442 =  tmp_9_reg_1442__temp ;
               tmp_11_fu_472_p2 =   (  (  (  ( b & 4503599627370495 )  << 10 )  |  (  ( a & 4503599627370495 )  << 10 )  )  == 0 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state12)
       {
           ap_return_preg = ap_phi_mux_p_0_phi_fu_252_p22;
       }
       if((1 == ap_CS_fsm_state12) && ((((((tmp_9_reg_1442 == 0) && (tmp_24_reg_1400 == 1)) && (tmp_reg_1396 == 0)) || ((tmp_5_reg_1467 == 0) && (tmp_reg_1396 == 1))) || ((((tmp_21_reg_1422 == 1) && (tmp_s_reg_1404 == 0)) && (tmp_24_reg_1400 == 0)) && (tmp_reg_1396 == 0))) || ((((tmp_13_reg_1418 == 1) && (tmp_s_reg_1404 == 0)) && (tmp_24_reg_1400 == 0)) && (tmp_reg_1396 == 0))))
       {
           p_0_reg_247 =  tmp_77_i_reg_1626__temp ;
       }
       if((1 == ap_CS_fsm_state12) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((1 == ap_CS_fsm_state12) && ((((((tmp_9_reg_1442 == 0) && (tmp_24_reg_1400 == 1)) && (tmp_reg_1396 == 0)) || ((tmp_5_reg_1467 == 0) && (tmp_reg_1396 == 1))) || ((((tmp_21_reg_1422 == 1) && (tmp_s_reg_1404 == 0)) && (tmp_24_reg_1400 == 0)) && (tmp_reg_1396 == 0))) || ((((tmp_13_reg_1418 == 1) && (tmp_s_reg_1404 == 0)) && (tmp_24_reg_1400 == 0)) && (tmp_reg_1396 == 0))))
       {
           ap_phi_mux_p_0_phi_fu_252_p22 =  tmp_77_i_reg_1626__temp ;
       }
       if(((1 == ap_CS_fsm_state12) && ((((((tmp_9_reg_1442 == 0) && (tmp_24_reg_1400 == 1)) && (tmp_reg_1396 == 0)) || ((tmp_5_reg_1467 == 0) && (tmp_reg_1396 == 1))) || ((((tmp_21_reg_1422 == 1) && (tmp_s_reg_1404 == 0)) && (tmp_24_reg_1400 == 0)) && (tmp_reg_1396 == 0))) || ((((tmp_13_reg_1418 == 1) && (tmp_s_reg_1404 == 0)) && (tmp_24_reg_1400 == 0)) && (tmp_reg_1396 == 0)))) == 0)
       {
           ap_phi_mux_p_0_phi_fu_252_p22 =  p_0_reg_247__temp ;
       }
       if(1 == ap_CS_fsm_state12)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state12)
       {
           ap_return = ap_phi_mux_p_0_phi_fu_252_p22;
       }
          countLeadingZerosHig_address0 =   (  (  ( tmp_54_reg_1585__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? tmp_39_reg_1590__temp  :  tmp_40_reg_1595__temp  ) ;
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   end:
	*a__1=a;
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_return__1=ap_return;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*b__1=b;
	*zSign__1=zSign;
       return;
}
