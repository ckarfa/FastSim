#include<stdio.h>
do_twos_complement( long long unsigned int a ){
 long long int temp = (long long int) a;
 return temp; 
}
void roundAndPackFloat64(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int* dummy);

void addFloat64Sigs(unsigned long long int *a__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *b__1,unsigned long long int *zSign__1,int* dummy){
int clock=*dummy;
//printf("addFloat64Sigs %d\n",clock);
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
   long long int ap_CS_fsm_state2=1;
   long long int ap_CS_fsm_state3=1;
   long long int ap_CS_fsm_state4=1;
   long long int ap_CS_fsm_state5=1;
   long long int ap_CS_fsm_state6=1;
   long long int ap_CS_fsm_state7=1;
   long long int ap_CS_fsm_state8=1;
   unsigned long long int aExp_cast_fu_285_p1=0;
   unsigned long long int aExp_cast_fu_285_p1__temp=0;
   unsigned long long int aExp_fu_273_p4=0;
   unsigned long long int aExp_fu_273_p4__temp=0;
   unsigned long long int aExp_reg_1122=0;
   unsigned long long int aExp_reg_1122__temp=0;
   unsigned long long int aSig_1_fu_808_p4=0;
   unsigned long long int aSig_1_fu_808_p4__temp=0;
   unsigned long long int aSig_2_cast_fu_824_p1=0;
   unsigned long long int aSig_2_cast_fu_824_p1__temp=0;
   unsigned long long int aSig_2_fu_817_p3=0;
   unsigned long long int aSig_2_fu_817_p3__temp=0;
   unsigned long long int aSig_2_reg_1271=0;
   unsigned long long int aSig_2_reg_1271__temp=0;
   unsigned long long int aSig_4_cast_fu_1059_p1=0;
   unsigned long long int aSig_4_cast_fu_1059_p1__temp=0;
   unsigned long long int aSig_4_fu_1053_p2=0;
   unsigned long long int aSig_4_fu_1053_p2__temp=0;
   unsigned long long int aSig_cast2_cast_fu_325_p1=0;
   unsigned long long int aSig_cast2_cast_fu_325_p1__temp=0;
   unsigned long long int aSig_cast2_cast_reg_1149=0;
   unsigned long long int aSig_cast2_cast_reg_1149__temp=0;
   unsigned long long int aSig_fu_317_p3=0;
   unsigned long long int aSig_fu_317_p3__temp=0;
   unsigned long long int aSig_s_reg_139=0;
   unsigned long long int aSig_s_reg_139__temp=0;
   unsigned long long int a__temp=0;
   unsigned long long int a_assign_3_fu_795_p3=0;
   unsigned long long int a_assign_3_fu_795_p3__temp=0;
   unsigned long long int a_assign_4_fu_617_p3=0;
   unsigned long long int a_assign_4_fu_617_p3__temp=0;
   unsigned long long int a_assign_5_fu_511_p3=0;
   unsigned long long int a_assign_5_fu_511_p3__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_180_p22=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_180_p22__temp=0;
   unsigned long long int ap_return_preg=0;
   unsigned long long int ap_return_preg__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=1;
   unsigned long long int bExp_cast_fu_299_p1=0;
   unsigned long long int bExp_cast_fu_299_p1__temp=0;
   unsigned long long int bExp_fu_289_p4=0;
   unsigned long long int bExp_fu_289_p4__temp=0;
   unsigned long long int bExp_reg_1133=0;
   unsigned long long int bExp_reg_1133__temp=0;
   unsigned long long int bSig_1_fu_651_p4=0;
   unsigned long long int bSig_1_fu_651_p4__temp=0;
   unsigned long long int bSig_2_cast_fu_951_p1=0;
   unsigned long long int bSig_2_cast_fu_951_p1__temp=0;
   unsigned long long int bSig_2_fu_661_p3=0;
   unsigned long long int bSig_2_fu_661_p3__temp=0;
   unsigned long long int bSig_2_reg_1231=0;
   unsigned long long int bSig_2_reg_1231__temp=0;
   unsigned long long int bSig_cast1_cast_fu_345_p1=0;
   unsigned long long int bSig_cast1_cast_fu_345_p1__temp=0;
   unsigned long long int bSig_cast1_cast_reg_1155=0;
   unsigned long long int bSig_cast1_cast_reg_1155__temp=0;
   unsigned long long int bSig_cast1_fu_341_p1=0;
   unsigned long long int bSig_cast1_fu_341_p1__temp=0;
   unsigned long long int bSig_cast_fu_1045_p1=0;
   unsigned long long int bSig_cast_fu_1045_p1__temp=0;
   unsigned long long int bSig_fu_333_p3=0;
   unsigned long long int bSig_fu_333_p3__temp=0;
   unsigned long long int bSig_s_reg_130=0;
   unsigned long long int bSig_s_reg_130__temp=0;
   unsigned long long int b__temp=0;
   unsigned long long int b_assign_1_mux_fu_609_p3=0;
   unsigned long long int b_assign_1_mux_fu_609_p3__temp=0;
   unsigned long long int b_assign_2_mux_fu_503_p3=0;
   unsigned long long int b_assign_2_mux_fu_503_p3__temp=0;
   unsigned long long int b_assign_mux_fu_787_p3=0;
   unsigned long long int b_assign_mux_fu_787_p3__temp=0;
   unsigned long long int count_assign_1_fu_839_p2=0;
   unsigned long long int count_assign_1_fu_839_p2__temp=0;
   unsigned long long int count_assign_1_reg_1278=0;
   unsigned long long int count_assign_1_reg_1278__temp=0;
   unsigned long long int expDiff_1_fu_828_p3=0;
   unsigned long long int expDiff_1_fu_828_p3__temp=0;
   unsigned long long int expDiff_2_cast_fu_645_p2=0;
   unsigned long long int expDiff_2_cast_fu_645_p2__temp=0;
   unsigned long long int expDiff_2_fu_669_p3=0;
   unsigned long long int expDiff_2_fu_669_p3__temp=0;
   unsigned long long int expDiff_2_reg_1239=0;
   unsigned long long int expDiff_2_reg_1239__temp=0;
   unsigned long long int expDiff_3_fu_803_p2=0;
   unsigned long long int expDiff_3_fu_803_p2__temp=0;
   unsigned long long int expDiff_fu_303_p2=0;
   unsigned long long int expDiff_fu_303_p2__temp=0;
   unsigned long long int expDiff_reg_1138=0;
   unsigned long long int expDiff_reg_1138__temp=0;
   unsigned long long int float_exception_flag=0;
   unsigned long long int float_exception_flag__temp=0;
   unsigned long long int grp_fu_215_p2=0;
   unsigned long long int grp_fu_215_p2__temp=0;
   unsigned long long int grp_fu_220_p0;
   unsigned long long int grp_fu_220_p0__temp;
   unsigned long long int grp_fu_220_p2=0;
   unsigned long long int grp_fu_220_p2__temp=0;
   unsigned long long int grp_fu_225_p4=0;
   unsigned long long int grp_fu_225_p4__temp=0;
   unsigned long long int grp_fu_235_p4=0;
   unsigned long long int grp_fu_235_p4__temp=0;
   unsigned long long int grp_fu_245_p2=0;
   unsigned long long int grp_fu_245_p2__temp=0;
   unsigned long long int grp_fu_251_p2=0;
   unsigned long long int grp_fu_251_p2__temp=0;
   unsigned long long int grp_fu_261_p2=0;
   unsigned long long int grp_fu_261_p2__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_done=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_done__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_idle=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_idle__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_ready=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_ready__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_return=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_return__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_start=1;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_start__temp=1;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_start_reg=1;
   unsigned long long int grp_roundAndPackFloat64_fu_204_ap_start_reg__temp=1;
   unsigned long long int grp_roundAndPackFloat64_fu_204_float_exception_flag_o=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld=0;
   unsigned long long int grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp=0;
   unsigned long long int icmp8_fu_861_p2=0;
   unsigned long long int icmp8_fu_861_p2__temp=0;
   unsigned long long int icmp8_reg_1289=0;
   unsigned long long int icmp8_reg_1289__temp=0;
   unsigned long long int icmp_fu_691_p2=0;
   unsigned long long int icmp_fu_691_p2__temp=0;
   unsigned long long int icmp_reg_1245=0;
   unsigned long long int icmp_reg_1245__temp=0;
   unsigned long long int p_0_reg_177=0;
   unsigned long long int p_0_reg_177__temp=0;
   unsigned long long int p_s_fu_1103_p3=0;
   unsigned long long int p_s_fu_1103_p3__temp=0;
   unsigned long long int sel_tmp1_i1_fu_932_p2=0;
   unsigned long long int sel_tmp1_i1_fu_932_p2__temp=0;
   unsigned long long int sel_tmp1_i_fu_1025_p2=0;
   unsigned long long int sel_tmp1_i_fu_1025_p2__temp=0;
   unsigned long long int sel_tmp_i1_fu_927_p2=0;
   unsigned long long int sel_tmp_i1_fu_927_p2__temp=0;
   unsigned long long int sel_tmp_i_fu_1019_p2=0;
   unsigned long long int sel_tmp_i_fu_1019_p2__temp=0;
   unsigned long long int tmp_10_i1_fu_895_p2=0;
   unsigned long long int tmp_10_i1_fu_895_p2__temp=0;
   unsigned long long int tmp_10_i_fu_986_p2=0;
   unsigned long long int tmp_10_i_fu_986_p2__temp=0;
   unsigned long long int tmp_14_fu_703_p2=0;
   unsigned long long int tmp_14_fu_703_p2__temp=0;
   unsigned long long int tmp_15_fu_639_p2=0;
   unsigned long long int tmp_15_fu_639_p2__temp=0;
   unsigned long long int tmp_16_fu_519_p2=0;
   unsigned long long int tmp_16_fu_519_p2__temp=0;
   unsigned long long int tmp_16_reg_1202=0;//
   unsigned long long int tmp_16_reg_1202__temp=0;//
   unsigned long long int tmp_17_reg_1168=0;//
   unsigned long long int tmp_17_reg_1168__temp=0;//
   unsigned long long int tmp_19_fu_781_p2=0;
   unsigned long long int tmp_19_fu_781_p2__temp=0;
   unsigned long long int tmp_1_i1_fu_871_p2=0;
   unsigned long long int tmp_1_i1_fu_871_p2__temp=0;
   unsigned long long int tmp_1_i_fu_970_p2=0;
   unsigned long long int tmp_1_i_fu_970_p2__temp=0;
   unsigned long long int tmp_20_fu_525_p2=0;
   unsigned long long int tmp_20_fu_525_p2__temp=0;
   unsigned long long int tmp_22_fu_309_p1=0;
   unsigned long long int tmp_22_fu_309_p1__temp=0;
   unsigned long long int tmp_23_fu_413_p2=0;
   unsigned long long int tmp_23_fu_413_p2__temp=0;
   unsigned long long int tmp_24_fu_419_p2=0;
   unsigned long long int tmp_24_fu_419_p2__temp=0;
   unsigned long long int tmp_24_i1_fu_769_p2=0;
   unsigned long long int tmp_24_i1_fu_769_p2__temp=0;
   unsigned long long int tmp_24_i2_fu_549_p2=0;
   unsigned long long int tmp_24_i2_fu_549_p2__temp=0;
   unsigned long long int tmp_24_i3_fu_591_p2=0;
   unsigned long long int tmp_24_i3_fu_591_p2__temp=0;
   unsigned long long int tmp_24_i4_fu_443_p2=0;
   unsigned long long int tmp_24_i4_fu_443_p2__temp=0;
   unsigned long long int tmp_24_i5_fu_485_p2=0;
   unsigned long long int tmp_24_i5_fu_485_p2__temp=0;
   unsigned long long int tmp_24_i_fu_727_p2=0;
   unsigned long long int tmp_24_i_fu_727_p2__temp=0;
   unsigned long long int tmp_25_i1_fu_775_p2=0;
   unsigned long long int tmp_25_i1_fu_775_p2__temp=0;
   unsigned long long int tmp_25_i2_fu_555_p2=0;
   unsigned long long int tmp_25_i2_fu_555_p2__temp=0;
   unsigned long long int tmp_25_i3_fu_597_p2=0;
   unsigned long long int tmp_25_i3_fu_597_p2__temp=0;
   unsigned long long int tmp_25_i4_fu_449_p2=0;
   unsigned long long int tmp_25_i4_fu_449_p2__temp=0;
   unsigned long long int tmp_25_i5_fu_491_p2=0;
   unsigned long long int tmp_25_i5_fu_491_p2__temp=0;
   unsigned long long int tmp_25_i_fu_733_p2=0;
   unsigned long long int tmp_25_i_fu_733_p2__temp=0;
   unsigned long long int tmp_25_reg_1172=0;//
   unsigned long long int tmp_25_reg_1172__temp=0;//
   unsigned long long int tmp_26_fu_603_p2=0;
   unsigned long long int tmp_26_fu_603_p2__temp=0;
   unsigned long long int tmp_27_fu_313_p1=0;
   unsigned long long int tmp_27_fu_313_p1__temp=0;
   unsigned long long int tmp_27_reg_1144=0;
   unsigned long long int tmp_27_reg_1144__temp=0;
   unsigned long long int tmp_28_fu_497_p2=0;
   unsigned long long int tmp_28_fu_497_p2__temp=0;
   unsigned long long int tmp_29_fu_383_p2=0;
   unsigned long long int tmp_29_fu_383_p2__temp=0;
   unsigned long long int tmp_29_i_fu_403_p4=0;
   unsigned long long int tmp_29_i_fu_403_p4__temp=0;
   unsigned long long int tmp_2_i1_fu_877_p2=0;
   unsigned long long int tmp_2_i1_fu_877_p2__temp=0;
   unsigned long long int tmp_2_i1_reg_1294=0;
   unsigned long long int tmp_2_i1_reg_1294__temp=0;
   unsigned long long int tmp_2_i_fu_976_p2=0;
   unsigned long long int tmp_2_i_fu_976_p2__temp=0;
   unsigned long long int tmp_30_fu_363_p4=0;
   unsigned long long int tmp_30_fu_363_p4__temp=0;
   unsigned long long int tmp_30_i_fu_633_p2=0;
   unsigned long long int tmp_30_i_fu_633_p2__temp=0;
   unsigned long long int tmp_31_reg_1319=0;
   unsigned long long int tmp_31_reg_1319__temp=0;
   unsigned long long int tmp_32_fu_329_p1=0;
   unsigned long long int tmp_32_fu_329_p1__temp=0;
   unsigned long long int tmp_34_fu_355_p3=0;
   unsigned long long int tmp_34_fu_355_p3__temp=0;
   unsigned long long int tmp_34_reg_1164=0;
   unsigned long long int tmp_34_reg_1164__temp=0;//
   unsigned long long int tmp_36_fu_677_p1=0;//
   unsigned long long int tmp_36_fu_677_p1__temp=0;
   unsigned long long int tmp_38_fu_681_p4=0;
   unsigned long long int tmp_38_fu_681_p4__temp=0;
   unsigned long long int tmp_3_fu_992_p4=0;
   unsigned long long int tmp_3_fu_992_p4__temp=0;
   unsigned long long int tmp_40_fu_982_p1=0;
   unsigned long long int tmp_40_fu_982_p1__temp=0;
   unsigned long long int tmp_42_fu_723_p1=0;
   unsigned long long int tmp_42_fu_723_p1__temp=0;
   unsigned long long int tmp_43_fu_399_p1=0;
   unsigned long long int tmp_43_fu_399_p1__temp=0;
   unsigned long long int tmp_45_fu_739_p2=0;
   unsigned long long int tmp_45_fu_739_p2__temp=0;
   unsigned long long int tmp_46_fu_765_p1=0;
   unsigned long long int tmp_46_fu_765_p1__temp=0;
   unsigned long long int tmp_47_cast_fu_373_p1=0;
   unsigned long long int tmp_47_cast_fu_373_p1__temp=0;
   unsigned long long int tmp_47_fu_835_p1=0;
   unsigned long long int tmp_47_fu_835_p1__temp=0;
   unsigned long long int tmp_48_fu_851_p4=0;
   unsigned long long int tmp_48_fu_851_p4__temp=0;
   unsigned long long int tmp_49_fu_891_p1=0;
   unsigned long long int tmp_49_fu_891_p1__temp=0;
   unsigned long long int tmp_4_fu_1002_p3=0;
   unsigned long long int tmp_4_fu_1002_p3__temp=0;
   unsigned long long int tmp_4_i1_fu_918_p2=0;
   unsigned long long int tmp_4_i1_fu_918_p2__temp=0;
   unsigned long long int tmp_4_i_fu_1010_p2=0;
   unsigned long long int tmp_4_i_fu_1010_p2__temp=0;
   unsigned long long int tmp_50_fu_545_p1=0;
   unsigned long long int tmp_50_fu_545_p1__temp=0;
   unsigned long long int tmp_51_fu_561_p2=0;
   unsigned long long int tmp_51_fu_561_p2__temp=0;
   unsigned long long int tmp_52_fu_587_p1=0;
   unsigned long long int tmp_52_fu_587_p1__temp=0;
   unsigned long long int tmp_53_fu_1087_p3=0;
   unsigned long long int tmp_53_fu_1087_p3__temp=0;
   unsigned long long int tmp_54_fu_439_p1=0;
   unsigned long long int tmp_54_fu_439_p1__temp=0;
   unsigned long long int tmp_55_fu_455_p2=0;
   unsigned long long int tmp_55_fu_455_p2__temp=0;
   unsigned long long int tmp_56_fu_481_p1=0;
   unsigned long long int tmp_56_fu_481_p1__temp=0;
   unsigned long long int tmp_5_fu_900_p4=0;
   unsigned long long int tmp_5_fu_900_p4__temp=0;
   unsigned long long int tmp_6_fu_910_p3=0;
   unsigned long long int tmp_6_fu_910_p3__temp=0;
   unsigned long long int tmp_6_i33_cast_fu_883_p1=0;
   unsigned long long int tmp_6_i33_cast_fu_883_p1__temp=0;
   unsigned long long int tmp_6_i_cast_fu_959_p1=0;
   unsigned long long int tmp_6_i_cast_fu_959_p1__temp=0;
   unsigned long long int tmp_7_i1_fu_886_p2=0;
   unsigned long long int tmp_7_i1_fu_886_p2__temp=0;
   unsigned long long int tmp_7_i_fu_962_p2=0;
   unsigned long long int tmp_7_i_fu_962_p2__temp=0;
   unsigned long long int tmp_8_i_fu_697_p2=0;
   unsigned long long int tmp_8_i_fu_697_p2__temp=0;
   unsigned long long int tmp_8_i_reg_1250=0;
   unsigned long long int tmp_8_i_reg_1250__temp=0;
   unsigned long long int tmp_fu_349_p2=0;
   unsigned long long int tmp_fu_349_p2__temp=0;
   unsigned long long int tmp_i10_fu_433_p2=0;
   unsigned long long int tmp_i10_fu_433_p2__temp=0;
   unsigned long long int tmp_i11_fu_475_p2=0;
   unsigned long long int tmp_i11_fu_475_p2__temp=0;
   unsigned long long int tmp_i1_17_fu_467_p3=0;
   unsigned long long int tmp_i1_17_fu_467_p3__temp=0;
   unsigned long long int tmp_i1_fu_745_p2=0;
   unsigned long long int tmp_i1_fu_745_p2__temp=0;
   unsigned long long int tmp_i2_14_fu_625_p3=0;
   unsigned long long int tmp_i2_14_fu_625_p3__temp=0;
   unsigned long long int tmp_i2_fu_531_p3=0;
   unsigned long long int tmp_i2_fu_531_p3__temp=0;
   unsigned long long int tmp_i3_fu_567_p2=0;
   unsigned long long int tmp_i3_fu_567_p2__temp=0;
   unsigned long long int tmp_i4_fu_461_p2=0;
   unsigned long long int tmp_i4_fu_461_p2__temp=0;
   unsigned long long int tmp_i5_10_fu_751_p3=0;
   unsigned long long int tmp_i5_10_fu_751_p3__temp=0;
   unsigned long long int tmp_i5_fu_717_p2=0;
   unsigned long long int tmp_i5_fu_717_p2__temp=0;
   unsigned long long int tmp_i6_12_fu_573_p3=0;
   unsigned long long int tmp_i6_12_fu_573_p3__temp=0;
   unsigned long long int tmp_i6_fu_759_p2=0;
   unsigned long long int tmp_i6_fu_759_p2__temp=0;
   unsigned long long int tmp_i7_15_fu_867_p1=0;
   unsigned long long int tmp_i7_15_fu_867_p1__temp=0;
   unsigned long long int tmp_i7_fu_845_p2=0;
   unsigned long long int tmp_i7_fu_845_p2__temp=0;
   unsigned long long int tmp_i7_reg_1283=0;
   unsigned long long int tmp_i7_reg_1283__temp=0;
   unsigned long long int tmp_i8_16_fu_425_p3=0;
   unsigned long long int tmp_i8_16_fu_425_p3__temp=0;
   unsigned long long int tmp_i8_fu_539_p2=0;
   unsigned long long int tmp_i8_fu_539_p2__temp=0;
   unsigned long long int tmp_i9_13_fu_581_p2=0;
   unsigned long long int tmp_i9_13_fu_581_p2__temp=0;
   unsigned long long int tmp_i9_fu_709_p3=0;
   unsigned long long int tmp_i9_fu_709_p3__temp=0;
   unsigned long long int tmp_i_11_fu_967_p1=0;
   unsigned long long int tmp_i_11_fu_967_p1__temp=0;
   unsigned long long int tmp_i_fu_954_p2=0;
   unsigned long long int tmp_i_fu_954_p2__temp=0;
   unsigned long long int tmp_reg_1160=0;//
   unsigned long long int tmp_reg_1160__temp=0;//
   unsigned long long int tmp_s_reg_1227=0;//
   unsigned long long int tmp_s_reg_1227__temp=0;//
   unsigned long long int zExp_0_s_fu_1095_p3=0;
   unsigned long long int zExp_0_s_fu_1095_p3__temp=0;
   unsigned long long int zExp_2_reg_157=0;
   unsigned long long int zExp_2_reg_157__temp=0;
   unsigned long long int zExp_3_cast_fu_1049_p1=0;
   unsigned long long int zExp_3_cast_fu_1049_p1__temp=0;
   unsigned long long int zExp_3_reg_148=0;
   unsigned long long int zExp_3_reg_148__temp=0;
   unsigned long long int zExp_4_fu_1081_p2=0;
   unsigned long long int zExp_4_fu_1081_p2__temp=0;
   unsigned long long int zSig_1_reg_167=0;
   unsigned long long int zSig_1_reg_167__temp=0;
   unsigned long long int zSig_2_cast_fu_1069_p1=0;
   unsigned long long int zSig_2_cast_fu_1069_p1__temp=0;
   unsigned long long int zSig_2_fu_1063_p2=0;
   unsigned long long int zSig_2_fu_1063_p2__temp=0;
   unsigned long long int zSig_3_fu_1073_p3=0;
   unsigned long long int zSig_3_fu_1073_p3__temp=0;
   unsigned long long int zSig_assign_fu_389_p4=0;
   unsigned long long int zSig_assign_fu_389_p4__temp=0;
   unsigned long long int zSig_fu_377_p2=0;
   unsigned long long int zSig_fu_377_p2__temp=0;
   unsigned long long int zSign__temp=0;
   unsigned long long int z_1_cast_fu_1015_p1=0;
   unsigned long long int z_1_cast_fu_1015_p1__temp=0;
   unsigned long long int z_2_fu_937_p3=0;
   unsigned long long int z_2_fu_937_p3__temp=0;
   unsigned long long int z_4_fu_1038_p3=0;
   unsigned long long int z_4_fu_1038_p3__temp=0;
   unsigned long long int z_5_cast_fu_923_p1=0;
   unsigned long long int z_5_cast_fu_923_p1__temp=0;
   unsigned long long int z_5_fu_945_p3=0;
   unsigned long long int z_5_fu_945_p3__temp=0;
   unsigned long long int z_fu_1030_p3=0;
   unsigned long long int z_fu_1030_p3__temp=0;
	ap_done=0;
	ap_start=1;
   //printf("a=%llu\n",a);
   //printf("b=%llu\n",b);

   ap_ST_fsm_state1:
	clock=clock+1;
	//printf("state 1\n");
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   aSig_1_fu_808_p4__temp = aSig_1_fu_808_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_19_fu_781_p2__temp = tmp_19_fu_781_p2 ;
   aExp_cast_fu_285_p1__temp = aExp_cast_fu_285_p1 ;
   tmp_24_fu_419_p2__temp = tmp_24_fu_419_p2 ;
   tmp_51_fu_561_p2__temp = tmp_51_fu_561_p2 ;
   icmp_fu_691_p2__temp = icmp_fu_691_p2 ;
   tmp_20_fu_525_p2__temp = tmp_20_fu_525_p2 ;
   aSig_2_reg_1271__temp = aSig_2_reg_1271 ;
   grp_fu_220_p0__temp = grp_fu_220_p0 ;
   expDiff_reg_1138__temp = expDiff_reg_1138 ;
   tmp_i7_reg_1283__temp = tmp_i7_reg_1283 ;
   aSig_2_cast_fu_824_p1__temp = aSig_2_cast_fu_824_p1 ;
   tmp_24_i1_fu_769_p2__temp = tmp_24_i1_fu_769_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld ;
   tmp_i4_fu_461_p2__temp = tmp_i4_fu_461_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o ;
   tmp_i7_15_fu_867_p1__temp = tmp_i7_15_fu_867_p1 ;
   tmp_1_i_fu_970_p2__temp = tmp_1_i_fu_970_p2 ;
   expDiff_2_reg_1239__temp = expDiff_2_reg_1239 ;
   tmp_i_11_fu_967_p1__temp = tmp_i_11_fu_967_p1 ;
   tmp_29_i_fu_403_p4__temp = tmp_29_i_fu_403_p4 ;
   tmp_i1_fu_745_p2__temp = tmp_i1_fu_745_p2 ;
   tmp_29_fu_383_p2__temp = tmp_29_fu_383_p2 ;
   bExp_fu_289_p4__temp = bExp_fu_289_p4 ;
   aSig_cast2_cast_fu_325_p1__temp = aSig_cast2_cast_fu_325_p1 ;
   bSig_cast1_cast_reg_1155__temp = bSig_cast1_cast_reg_1155 ;
   zExp_0_s_fu_1095_p3__temp = zExp_0_s_fu_1095_p3 ;
   bSig_cast1_fu_341_p1__temp = bSig_cast1_fu_341_p1 ;
   tmp_25_i4_fu_449_p2__temp = tmp_25_i4_fu_449_p2 ;
   aExp_reg_1122__temp = aExp_reg_1122 ;
   tmp_7_i_fu_962_p2__temp = tmp_7_i_fu_962_p2 ;
   aSig_s_reg_139__temp = aSig_s_reg_139 ;
   aSig_cast2_cast_reg_1149__temp = aSig_cast2_cast_reg_1149 ;
   bSig_cast1_cast_fu_345_p1__temp = bSig_cast1_cast_fu_345_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start__temp = grp_roundAndPackFloat64_fu_204_ap_start ;
   zExp_2_reg_157__temp = zExp_2_reg_157 ;
   tmp_27_reg_1144__temp = tmp_27_reg_1144 ;
   tmp_26_fu_603_p2__temp = tmp_26_fu_603_p2 ;
   sel_tmp_i_fu_1019_p2__temp = sel_tmp_i_fu_1019_p2 ;
   zExp_3_cast_fu_1049_p1__temp = zExp_3_cast_fu_1049_p1 ;
   z_4_fu_1038_p3__temp = z_4_fu_1038_p3 ;
   expDiff_2_cast_fu_645_p2__temp = expDiff_2_cast_fu_645_p2 ;
   tmp_8_i_reg_1250__temp = tmp_8_i_reg_1250 ;
   ap_phi_mux_p_0_phi_fu_180_p22__temp = ap_phi_mux_p_0_phi_fu_180_p22 ;
   bSig_1_fu_651_p4__temp = bSig_1_fu_651_p4 ;
   tmp_5_fu_900_p4__temp = tmp_5_fu_900_p4 ;
   tmp_42_fu_723_p1__temp = tmp_42_fu_723_p1 ;
   bSig_cast_fu_1045_p1__temp = bSig_cast_fu_1045_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start_reg__temp = grp_roundAndPackFloat64_fu_204_ap_start_reg ;
   tmp_47_fu_835_p1__temp = tmp_47_fu_835_p1 ;
   tmp_i8_fu_539_p2__temp = tmp_i8_fu_539_p2 ;
   tmp_25_reg_1172__temp = tmp_25_reg_1172 ;
   tmp_i_fu_954_p2__temp = tmp_i_fu_954_p2 ;
   tmp_2_i_fu_976_p2__temp = tmp_2_i_fu_976_p2 ;
   tmp_49_fu_891_p1__temp = tmp_49_fu_891_p1 ;
   tmp_16_fu_519_p2__temp = tmp_16_fu_519_p2 ;
   tmp_reg_1160__temp = tmp_reg_1160 ;
   tmp_24_i4_fu_443_p2__temp = tmp_24_i4_fu_443_p2 ;
   tmp_52_fu_587_p1__temp = tmp_52_fu_587_p1 ;
   sel_tmp_i1_fu_927_p2__temp = sel_tmp_i1_fu_927_p2 ;
   tmp_i5_fu_717_p2__temp = tmp_i5_fu_717_p2 ;
   z_5_fu_945_p3__temp = z_5_fu_945_p3 ;
   tmp_24_i5_fu_485_p2__temp = tmp_24_i5_fu_485_p2 ;
   tmp_6_i33_cast_fu_883_p1__temp = tmp_6_i33_cast_fu_883_p1 ;
   grp_fu_215_p2__temp = grp_fu_215_p2 ;
   tmp_55_fu_455_p2__temp = tmp_55_fu_455_p2 ;
   bSig_s_reg_130__temp = bSig_s_reg_130 ;
   tmp_43_fu_399_p1__temp = tmp_43_fu_399_p1 ;
   tmp_53_fu_1087_p3__temp = tmp_53_fu_1087_p3 ;
   grp_fu_235_p4__temp = grp_fu_235_p4 ;
   tmp_i1_17_fu_467_p3__temp = tmp_i1_17_fu_467_p3 ;
   b_assign_1_mux_fu_609_p3__temp = b_assign_1_mux_fu_609_p3 ;
   z_2_fu_937_p3__temp = z_2_fu_937_p3 ;
   tmp_i3_fu_567_p2__temp = tmp_i3_fu_567_p2 ;
   zSig_2_cast_fu_1069_p1__temp = zSig_2_cast_fu_1069_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_done__temp = grp_roundAndPackFloat64_fu_204_ap_done ;
   tmp_6_fu_910_p3__temp = tmp_6_fu_910_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_idle__temp = grp_roundAndPackFloat64_fu_204_ap_idle ;
   p_0_reg_177__temp = p_0_reg_177 ;
   tmp_2_i1_reg_1294__temp = tmp_2_i1_reg_1294 ;
   tmp_24_i3_fu_591_p2__temp = tmp_24_i3_fu_591_p2 ;
   tmp_27_fu_313_p1__temp = tmp_27_fu_313_p1 ;
   tmp_31_reg_1319__temp = tmp_31_reg_1319 ;
   tmp_16_reg_1202__temp = tmp_16_reg_1202 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_32_fu_329_p1__temp = tmp_32_fu_329_p1 ;
   tmp_30_fu_363_p4__temp = tmp_30_fu_363_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_i6_12_fu_573_p3__temp = tmp_i6_12_fu_573_p3 ;
   zSig_2_fu_1063_p2__temp = zSig_2_fu_1063_p2 ;
   tmp_48_fu_851_p4__temp = tmp_48_fu_851_p4 ;
   bExp_cast_fu_299_p1__temp = bExp_cast_fu_299_p1 ;
   tmp_28_fu_497_p2__temp = tmp_28_fu_497_p2 ;
   count_assign_1_reg_1278__temp = count_assign_1_reg_1278 ;
   float_exception_flag__temp = float_exception_flag ;
   zExp_4_fu_1081_p2__temp = zExp_4_fu_1081_p2 ;
   aSig_fu_317_p3__temp = aSig_fu_317_p3 ;
   zSig_fu_377_p2__temp = zSig_fu_377_p2 ;
   zSig_assign_fu_389_p4__temp = zSig_assign_fu_389_p4 ;
   tmp_56_fu_481_p1__temp = tmp_56_fu_481_p1 ;
   sel_tmp1_i_fu_1025_p2__temp = sel_tmp1_i_fu_1025_p2 ;
   tmp_50_fu_545_p1__temp = tmp_50_fu_545_p1 ;
   tmp_40_fu_982_p1__temp = tmp_40_fu_982_p1 ;
   tmp_i9_fu_709_p3__temp = tmp_i9_fu_709_p3 ;
   tmp_54_fu_439_p1__temp = tmp_54_fu_439_p1 ;
   zSig_1_reg_167__temp = zSig_1_reg_167 ;
   tmp_25_i3_fu_597_p2__temp = tmp_25_i3_fu_597_p2 ;
   bSig_fu_333_p3__temp = bSig_fu_333_p3 ;
   tmp_24_i2_fu_549_p2__temp = tmp_24_i2_fu_549_p2 ;
   aExp_fu_273_p4__temp = aExp_fu_273_p4 ;
   z_fu_1030_p3__temp = z_fu_1030_p3 ;
   expDiff_3_fu_803_p2__temp = expDiff_3_fu_803_p2 ;
   tmp_i5_10_fu_751_p3__temp = tmp_i5_10_fu_751_p3 ;
   tmp_46_fu_765_p1__temp = tmp_46_fu_765_p1 ;
   grp_fu_220_p2__temp = grp_fu_220_p2 ;
   expDiff_1_fu_828_p3__temp = expDiff_1_fu_828_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_return__temp = grp_roundAndPackFloat64_fu_204_ap_return ;
   tmp_2_i1_fu_877_p2__temp = tmp_2_i1_fu_877_p2 ;
   aSig_2_fu_817_p3__temp = aSig_2_fu_817_p3 ;
   z_1_cast_fu_1015_p1__temp = z_1_cast_fu_1015_p1 ;
   bSig_2_cast_fu_951_p1__temp = bSig_2_cast_fu_951_p1 ;
   bSig_2_fu_661_p3__temp = bSig_2_fu_661_p3 ;
   grp_fu_245_p2__temp = grp_fu_245_p2 ;
   a_assign_3_fu_795_p3__temp = a_assign_3_fu_795_p3 ;
   p_s_fu_1103_p3__temp = p_s_fu_1103_p3 ;
   expDiff_2_fu_669_p3__temp = expDiff_2_fu_669_p3 ;
   tmp_i6_fu_759_p2__temp = tmp_i6_fu_759_p2 ;
   tmp_25_i5_fu_491_p2__temp = tmp_25_i5_fu_491_p2 ;
   icmp8_reg_1289__temp = icmp8_reg_1289 ;
   tmp_10_i_fu_986_p2__temp = tmp_10_i_fu_986_p2 ;
   grp_roundAndPackFloat64_fu_204_ap_ready__temp = grp_roundAndPackFloat64_fu_204_ap_ready ;
   zExp_3_reg_148__temp = zExp_3_reg_148 ;
   tmp_22_fu_309_p1__temp = tmp_22_fu_309_p1 ;
   a_assign_4_fu_617_p3__temp = a_assign_4_fu_617_p3 ;
   tmp_38_fu_681_p4__temp = tmp_38_fu_681_p4 ;
   tmp_34_fu_355_p3__temp = tmp_34_fu_355_p3 ;
   zSig_3_fu_1073_p3__temp = zSig_3_fu_1073_p3 ;
   z_5_cast_fu_923_p1__temp = z_5_cast_fu_923_p1 ;
   tmp_fu_349_p2__temp = tmp_fu_349_p2 ;
   b_assign_2_mux_fu_503_p3__temp = b_assign_2_mux_fu_503_p3 ;
   icmp8_fu_861_p2__temp = icmp8_fu_861_p2 ;
   count_assign_1_fu_839_p2__temp = count_assign_1_fu_839_p2 ;
   tmp_24_i_fu_727_p2__temp = tmp_24_i_fu_727_p2 ;
   tmp_25_i2_fu_555_p2__temp = tmp_25_i2_fu_555_p2 ;
   grp_fu_261_p2__temp = grp_fu_261_p2 ;
   tmp_25_i_fu_733_p2__temp = tmp_25_i_fu_733_p2 ;
   tmp_i2_fu_531_p3__temp = tmp_i2_fu_531_p3 ;
   aSig_4_fu_1053_p2__temp = aSig_4_fu_1053_p2 ;
   tmp_1_i1_fu_871_p2__temp = tmp_1_i1_fu_871_p2 ;
   grp_fu_225_p4__temp = grp_fu_225_p4 ;
   tmp_4_fu_1002_p3__temp = tmp_4_fu_1002_p3 ;
   tmp_3_fu_992_p4__temp = tmp_3_fu_992_p4 ;
   tmp_i11_fu_475_p2__temp = tmp_i11_fu_475_p2 ;
   a_assign_5_fu_511_p3__temp = a_assign_5_fu_511_p3 ;
   bSig_2_reg_1231__temp = bSig_2_reg_1231 ;
   tmp_i9_13_fu_581_p2__temp = tmp_i9_13_fu_581_p2 ;
   tmp_10_i1_fu_895_p2__temp = tmp_10_i1_fu_895_p2 ;
   tmp_25_i1_fu_775_p2__temp = tmp_25_i1_fu_775_p2 ;
   expDiff_fu_303_p2__temp = expDiff_fu_303_p2 ;
   tmp_14_fu_703_p2__temp = tmp_14_fu_703_p2 ;
   sel_tmp1_i1_fu_932_p2__temp = sel_tmp1_i1_fu_932_p2 ;
   tmp_17_reg_1168__temp = tmp_17_reg_1168 ;
   tmp_15_fu_639_p2__temp = tmp_15_fu_639_p2 ;
   icmp_reg_1245__temp = icmp_reg_1245 ;
   grp_fu_251_p2__temp = grp_fu_251_p2 ;
   tmp_7_i1_fu_886_p2__temp = tmp_7_i1_fu_886_p2 ;
   bExp_reg_1133__temp = bExp_reg_1133 ;
   tmp_34_reg_1164__temp = tmp_34_reg_1164 ;
   tmp_6_i_cast_fu_959_p1__temp = tmp_6_i_cast_fu_959_p1 ;
   tmp_4_i1_fu_918_p2__temp = tmp_4_i1_fu_918_p2 ;
   tmp_s_reg_1227__temp = tmp_s_reg_1227 ;
   b_assign_mux_fu_787_p3__temp = b_assign_mux_fu_787_p3 ;
   tmp_36_fu_677_p1__temp = tmp_36_fu_677_p1 ;
   tmp_i10_fu_433_p2__temp = tmp_i10_fu_433_p2 ;
   tmp_47_cast_fu_373_p1__temp = tmp_47_cast_fu_373_p1 ;
   tmp_i2_14_fu_625_p3__temp = tmp_i2_14_fu_625_p3 ;
   tmp_8_i_fu_697_p2__temp = tmp_8_i_fu_697_p2 ;
   tmp_i8_16_fu_425_p3__temp = tmp_i8_16_fu_425_p3 ;
   tmp_23_fu_413_p2__temp = tmp_23_fu_413_p2 ;
   tmp_30_i_fu_633_p2__temp = tmp_30_i_fu_633_p2 ;
   aSig_4_cast_fu_1059_p1__temp = aSig_4_cast_fu_1059_p1 ;
   tmp_i7_fu_845_p2__temp = tmp_i7_fu_845_p2 ;
   tmp_4_i_fu_1010_p2__temp = tmp_4_i_fu_1010_p2 ;
   tmp_45_fu_739_p2__temp = tmp_45_fu_739_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_204_ap_start_reg = 0 ;
               tmp_20_fu_525_p2 =   (  (  ( b & 4503599627370495 )  << 9 )  == 0 ? 1 :  0 ) ;
               /*tmp_fu_349_p2 =   ( ( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0)  ? 1 :  0 ) ;*/   //incorrect value obtain because of a and b both are unsigned long long 
  
	        tmp_fu_349_p2 =(((a>>52)&2047)-((b>>52)&2047)) > 0 ? 1:0 ;

                int a1=(a>>52)&2047;
		int b1=(b>>52)&2047;
		
		int tempp= a1-b1 > 0 ? 1:0;
		tmp_fu_349_p2=tempp;
		//printf("%d\n",tempp);
		
		//printf("a_cond %llu\n",(a>>52)&2047);
		//printf("b_cond %llu\n",(b>>52)&2047);
		//printf("tmp_fu_349_p2  %d\n",tmp_fu_349_p2 );

               tmp_16_fu_519_p2 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;  //bexp
	       //printf(" tmp_16_fu_519_p2 %llu\n", tmp_16_fu_519_p2);

               tmp_28_fu_497_p2 =   (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;

               grp_fu_215_p2 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ; //aexp
		//printf("grp_fu_215_p2 %llu\n",grp_fu_215_p2);
		if(1 == ap_CS_fsm_state1)
       		{
                    grp_fu_220_p0 =   (  ( a >> 52 )  & 2047 ) ;
		    grp_fu_220_p0__temp = grp_fu_220_p0;
       		}
                 grp_fu_220_p2 =   ( grp_fu_220_p0  == 0 ? 1 :  0 ) ;
               tmp_26_fu_603_p2 =   (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_34_fu_355_p3 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;		//printf("tmp_34_fu_355_p3 %llu\n",tmp_34_fu_355_p3);
               tmp_19_fu_781_p2 =   (  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_24_fu_419_p2 =   (  (  (  ( b & 4503599627370495 )  << 9 )  |  (  ( a & 4503599627370495 )  << 9 )  )  == 0 ? 1 :  0 ) ;
               tmp_14_fu_703_p2 =   (  (  ( a & 4503599627370495 )  << 9 )  == 0 ? 1 :  0 ) ;
			   //printf("grp_fu_220_p2:%d\n",grp_fu_220_p2);			   
   if(((((grp_fu_215_p2 == 0) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) == 1){
       if((((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
           float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_14_fu_703_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || ((((((tmp_24_fu_419_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
           p_0_reg_177 =  a;
       }
       if(((((((grp_fu_215_p2 == 1) && (tmp_28_fu_497_p2 == 0)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 0)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_215_p2 == 1) && (tmp_19_fu_781_p2 == 0)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_220_p2 == 1) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  ( zSign << 1 )  << 62 )  |  (  (  (  (  ( a & 4503599627370495 )  << 9 )  +  (  ( b & 4503599627370495 )  << 9 )  )  & 4611686018427387392 )  >> 9 )  ) ;
       }
       if((((((tmp_16_fu_519_p2 == 1) && (tmp_20_fu_525_p2 == 1)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           zExp_2_reg_157 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           zSig_1_reg_167 =   (  (  ( b & 4503599627370495 )  << 9 )  +  (  (  ( 2 << 52 )  |  ( a & 4503599627370495 )  )  << 9 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           /*tmp_reg_1160 =   ( ( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;*/
	   int a11=(a>>52)&2047;
	   int b11=(b>>52)&2047;
	   tmp_reg_1160 = a11-b11>0 ? 1:0;
	   //printf("tmp_reg_1160 %llu\n",tmp_reg_1160);
           tmp_27_reg_1144 =   ( a & 4503599627370495 ) ;
           expDiff_reg_1138 =  a11-b11; //(  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
           bSig_cast1_cast_reg_1155 =   (  ( bSig_cast1_cast_reg_1155__temp  & 511 )  |  (  (  ( b & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
           bExp_reg_1133 =   (  ( b >> 52 )  & 2047 ) ;
           aSig_cast2_cast_reg_1149 =   (  ( aSig_cast2_cast_reg_1149__temp  & 511 )  |  (  (  ( a & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
           aExp_reg_1122 =   (  ( a >> 52 )  & 2047 ) ;
	
	   //printf("bSig_cast1_cast_reg_1155 %llu\n",bSig_cast1_cast_reg_1155);

		
       }
       if((((grp_fu_215_p2 == 0) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {    //printf("here \n");

           tmp_8_i_reg_1250 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;

           icmp_reg_1245 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
	    icmp_reg_1245=0;
           expDiff_2_reg_1239 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;

           bSig_2_reg_1231 =   (  ( bSig_2_reg_1231__temp  & 511 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 9 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 9 )  )  & 4611686018427387392 )  ) ;

	 /*printf(" bSig_2_reg_1231 %llu\n",( b & 4503599627370495 )  << 9 );
	printf("temp1=%llu\n",bSig_2_reg_1231__temp & 511);
	 printf("temp2 %llu\n", (  ( 1 << 52 )  |  ( b & 4503599627370495 )));
	  printf(" bSig_2_reg_1231 %llu\n", bSig_2_reg_1231);*/
		//bSig_2_reg_1231=bSig_2_reg_1231|2305843009213693952;
		//printf(" bSig_2_reg_1231 %llu\n", bSig_2_reg_1231);
	   bSig_2_reg_1231=bSig_2_reg_1231|2305843009213693952;
       }
       if((((tmp_34_fu_355_p3 == 1) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_16_reg_1202 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_34_fu_355_p3 == 0) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_17_reg_1168 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if(((((grp_fu_215_p2 == 0) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_25_reg_1172 =   ( grp_fu_220_p0__temp  == 0 ? 1 :  0 ) ;
       }
       if(((tmp_fu_349_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_34_reg_1164 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_349_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_s_reg_1227 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state8) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
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
           grp_fu_220_p0 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state4;
   }
   if((((((tmp_16_fu_519_p2 == 0) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) == 1){
       if((((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_14_fu_703_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || ((((((tmp_24_fu_419_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               p_0_reg_177 =  a;
       }
       if(((((((grp_fu_215_p2 == 1) && (tmp_28_fu_497_p2 == 0)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 0)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_215_p2 == 1) && (tmp_19_fu_781_p2 == 0)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_220_p2 == 1) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  ( zSign << 1 )  << 62 )  |  (  (  (  (  ( a & 4503599627370495 )  << 9 )  +  (  ( b & 4503599627370495 )  << 9 )  )  & 4611686018427387392 )  >> 9 )  ) ;
       }
       if((((((tmp_16_fu_519_p2 == 1) && (tmp_20_fu_525_p2 == 1)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_2_reg_157 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zSig_1_reg_167 =   (  (  ( b & 4503599627370495 )  << 9 )  +  (  (  ( 2 << 52 )  |  ( a & 4503599627370495 )  )  << 9 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               tmp_reg_1160 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_27_reg_1144 =   ( a & 4503599627370495 ) ;
               expDiff_reg_1138 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
               bSig_cast1_cast_reg_1155 =   (  ( bSig_cast1_cast_reg_1155__temp  & 511 )  |  (  (  ( b & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
               bExp_reg_1133 =   (  ( b >> 52 )  & 2047 ) ;
               aSig_cast2_cast_reg_1149 =   (  ( aSig_cast2_cast_reg_1149__temp  & 511 )  |  (  (  ( a & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
		//printf("aSig_cast2_cast_reg_1149 %llu\n",aSig_cast2_cast_reg_1149);
               aExp_reg_1122 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((grp_fu_215_p2 == 0) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_8_i_reg_1250 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
               icmp_reg_1245 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
	       // icmp_reg_1245 =0;
               expDiff_2_reg_1239 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;

               bSig_2_reg_1231 =   (  ( bSig_2_reg_1231__temp  & 511 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 9 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 9 )  )  & 4611686018427387392 )  ) ;
       }
       if((((tmp_34_fu_355_p3 == 1) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_16_reg_1202 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_34_fu_355_p3 == 0) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_17_reg_1168 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if(((((grp_fu_215_p2 == 0) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_25_reg_1172 =   ( grp_fu_220_p0__temp  == 0 ? 1 :  0 ) ;
       }
       if(((tmp_fu_349_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_34_reg_1164 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_349_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_s_reg_1227 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state8) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
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
               grp_fu_220_p0 =   (  ( a >> 52 )  & 2047 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if((((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (((((grp_fu_215_p2 == 1) && (tmp_fu_349_p2 == 1)) || (((tmp_16_fu_519_p2 == 1) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0))) || (((grp_fu_220_p2 == 1) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0))) || (((grp_fu_215_p2 == 1) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)))) == 1){
       if((((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_14_fu_703_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || ((((((tmp_24_fu_419_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               p_0_reg_177 =  a;
       }
       if(((((((grp_fu_215_p2 == 1) && (tmp_28_fu_497_p2 == 0)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 0)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_215_p2 == 1) && (tmp_19_fu_781_p2 == 0)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_220_p2 == 1) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  ( zSign << 1 )  << 62 )  |  (  (  (  (  ( a & 4503599627370495 )  << 9 )  +  (  ( b & 4503599627370495 )  << 9 )  )  & 4611686018427387392 )  >> 9 )  ) ;
       }
       if((((((tmp_16_fu_519_p2 == 1) && (tmp_20_fu_525_p2 == 1)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_2_reg_157 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zSig_1_reg_167 =   (  (  ( b & 4503599627370495 )  << 9 )  +  (  (  ( 2 << 52 )  |  ( a & 4503599627370495 )  )  << 9 )  ) ;
		//printf("zSig_1_reg_167 %llu\n",zSig_1_reg_167);
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               tmp_reg_1160 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_27_reg_1144 =   ( a & 4503599627370495 ) ;
               expDiff_reg_1138 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
               bSig_cast1_cast_reg_1155 =   (  ( bSig_cast1_cast_reg_1155__temp  & 511 )  |  (  (  ( b & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
               bExp_reg_1133 =   (  ( b >> 52 )  & 2047 ) ;
               aSig_cast2_cast_reg_1149 =   (  ( aSig_cast2_cast_reg_1149__temp  & 511 )  |  (  (  ( a & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
               aExp_reg_1122 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((grp_fu_215_p2 == 0) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_8_i_reg_1250 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
               icmp_reg_1245 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
               expDiff_2_reg_1239 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;
               bSig_2_reg_1231 =   (  ( bSig_2_reg_1231__temp  & 511 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 9 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 9 )  )  & 4611686018427387392 )  ) ;
       }
       if((((tmp_34_fu_355_p3 == 1) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_16_reg_1202 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_34_fu_355_p3 == 0) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_17_reg_1168 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if(((((grp_fu_215_p2 == 0) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_25_reg_1172 =   ( grp_fu_220_p0__temp  == 0 ? 1 :  0 ) ;
       }
       if(((tmp_fu_349_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_34_reg_1164 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_349_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_s_reg_1227 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state8) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
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
               grp_fu_220_p0 =   (  ( a >> 52 )  & 2047 ) ;
       }
       goto ap_ST_fsm_state8;
   }
   if(((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) == 1){
       if((((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_14_fu_703_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || ((((((tmp_24_fu_419_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
               p_0_reg_177 =  a;
       }
       if(((((((grp_fu_215_p2 == 1) && (tmp_28_fu_497_p2 == 0)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 0)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_215_p2 == 1) && (tmp_19_fu_781_p2 == 0)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_220_p2 == 1) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  (  ( zSign << 1 )  << 62 )  |  (  (  (  (  ( a & 4503599627370495 )  << 9 )  +  (  ( b & 4503599627370495 )  << 9 )  )  & 4611686018427387392 )  >> 9 )  ) ;
       }
       if((((((tmp_16_fu_519_p2 == 1) && (tmp_20_fu_525_p2 == 1)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               p_0_reg_177 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zExp_2_reg_157 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               zSig_1_reg_167 =   (  (  ( b & 4503599627370495 )  << 9 )  +  (  (     ( a & 4503599627370495 )  )  << 9 )  ) ;
		
		zSig_1_reg_167=zSig_1_reg_167 + 4611686018427387904;
		/*printf("hello\n");
		printf("zSig_1_reg_167 %llu\n",zSig_1_reg_167);*/
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               //tmp_reg_1160 =   (do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
	        int a_102=(a>>52)&2047;
		int b_103=(b>>52)&2047;
		int t1=a_102-b_103>0 ? 1:0;
		tmp_reg_1160 =t1;
		//printf("tmp_reg_1160  %llu\n",tmp_reg_1160 );
               tmp_27_reg_1144 =   ( a & 4503599627370495 ) ;
               expDiff_reg_1138 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
               bSig_cast1_cast_reg_1155 =   (  ( bSig_cast1_cast_reg_1155__temp  & 511 )  |  (  (  ( b & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
               bExp_reg_1133 =   (  ( b >> 52 )  & 2047 ) ;
               aSig_cast2_cast_reg_1149 =   (  ( aSig_cast2_cast_reg_1149__temp  & 511 )  |  (  (  ( a & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
               aExp_reg_1122 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((grp_fu_215_p2 == 0) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_8_i_reg_1250 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
               icmp_reg_1245 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
               expDiff_2_reg_1239 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;

               bSig_2_reg_1231 =   (  ( bSig_2_reg_1231__temp  & 511 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 9 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 9 )  )  & 4611686018427387392 )  ) ;
       }
       if((((tmp_34_fu_355_p3 == 1) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_16_reg_1202 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_34_fu_355_p3 == 0) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_17_reg_1168 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if(((((grp_fu_215_p2 == 0) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_25_reg_1172 =   ( grp_fu_220_p0__temp  == 0 ? 1 :  0 ) ;
       }
       if(((tmp_fu_349_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_34_reg_1164 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_349_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_s_reg_1227 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state8) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
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
               grp_fu_220_p0 =   (  ( a >> 52 )  & 2047 ) ;
       }
       goto ap_ST_fsm_state6;
   }
       if((((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || (((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))) || (((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
           float_exception_flag =   ( float_exception_flag__temp  | 16 ) ;
       }
       if(((((((tmp_28_fu_497_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 1)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_19_fu_781_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((tmp_14_fu_703_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) || ((((((tmp_24_fu_419_p2 == 1) && (grp_fu_215_p2 == 1)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)))
       {
           p_0_reg_177 =  a;
       }
       if(((((((grp_fu_215_p2 == 1) && (tmp_28_fu_497_p2 == 0)) && (tmp_24_fu_419_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if(((((((tmp_16_fu_519_p2 == 1) && (tmp_26_fu_603_p2 == 0)) && (tmp_20_fu_525_p2 == 0)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_215_p2 == 1) && (tmp_19_fu_781_p2 == 0)) && (tmp_14_fu_703_p2 == 0)) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  (  ( b << 1 )  > 18437736874454810624 ? 1 :  0 )  & 1 )  == 1 ?  ( b | 2251799813685248 )  :   ( 2251799813685248 | a )  ) ;
       }
       if((((((grp_fu_220_p2 == 1) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  (  ( zSign << 1 )  << 62 )  |  (  (  (  (  ( a & 4503599627370495 )  << 9 )  +  (  ( b & 4503599627370495 )  << 9 )  )  & 4611686018427387392 )  >> 9 )  ) ;
       }
       if((((((tmp_16_fu_519_p2 == 1) && (tmp_20_fu_525_p2 == 1)) && (tmp_34_fu_355_p3 == 1)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           p_0_reg_177 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           zExp_2_reg_157 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((((grp_fu_220_p2 == 0) && (grp_fu_215_p2 == 0)) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           zSig_1_reg_167 =   (  (  ( b & 4503599627370495 )  << 9 )  +  (  (  ( 2 << 52 )  |  ( a & 4503599627370495 )  )  << 9 )  ) ;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           tmp_reg_1160 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
           tmp_27_reg_1144 =   ( a & 4503599627370495 ) ;
           expDiff_reg_1138 =   (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  ) ;
           bSig_cast1_cast_reg_1155 =   (  ( bSig_cast1_cast_reg_1155__temp  & 511 )  |  (  (  ( b & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
           bExp_reg_1133 =   (  ( b >> 52 )  & 2047 ) ;
           aSig_cast2_cast_reg_1149 =   (  ( aSig_cast2_cast_reg_1149__temp  & 511 )  |  (  (  ( a & 4503599627370495 )  << 9 )  & 2305843009213693440 )  ) ;
           aExp_reg_1122 =   (  ( a >> 52 )  & 2047 ) ;
       }
       if((((grp_fu_215_p2 == 0) && (tmp_fu_349_p2 == 1)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_8_i_reg_1250 =   ( 0 -  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  & 63 )  ) ;
           icmp_reg_1245 =   (  (  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  >> 6 )  & 31 )  == 0 ? 1 :  0 ) ;
           expDiff_2_reg_1239 =   (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( do_twos_complement( 2047 )  + do_twos_complement(  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  )  )  :   (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  & 2047 )  ) ;

           bSig_2_reg_1231 =   (  ( bSig_2_reg_1231__temp  & 511 )  |  (  (  (  (  (  ( b >> 52 )  & 2047 )  == 0 ? 1 :  0 )  & 1 )  == 1 ?  (  ( b & 4503599627370495 )  << 9 )  :   (  (  ( 1 << 52 )  |  ( b & 4503599627370495 )  )  << 9 )  )  & 4611686018427387392 )  ) ;
	  
	   
       }
       if((((tmp_34_fu_355_p3 == 1) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_16_reg_1202 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((((tmp_34_fu_355_p3 == 0) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_17_reg_1168 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if(((((grp_fu_215_p2 == 0) && (tmp_34_fu_355_p3 == 0)) && (tmp_fu_349_p2 == 0)) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_25_reg_1172 =   ( grp_fu_220_p0__temp  == 0 ? 1 :  0 ) ;
       }
       if(((tmp_fu_349_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_34_reg_1164 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
       }
       if(((tmp_fu_349_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
           tmp_s_reg_1227 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state8) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
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
           grp_fu_220_p0 =   (  ( a >> 52 )  & 2047 ) ;
       }
       goto ap_ST_fsm_state1;

   ap_ST_fsm_state2:
	//clock=clock+1;
	//printf("state 2\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   aSig_1_fu_808_p4__temp = aSig_1_fu_808_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_19_fu_781_p2__temp = tmp_19_fu_781_p2 ;
   aExp_cast_fu_285_p1__temp = aExp_cast_fu_285_p1 ;
   tmp_24_fu_419_p2__temp = tmp_24_fu_419_p2 ;
   tmp_51_fu_561_p2__temp = tmp_51_fu_561_p2 ;
   icmp_fu_691_p2__temp = icmp_fu_691_p2 ;
   tmp_20_fu_525_p2__temp = tmp_20_fu_525_p2 ;
   aSig_2_reg_1271__temp = aSig_2_reg_1271 ;
   grp_fu_220_p0__temp = grp_fu_220_p0 ;
   expDiff_reg_1138__temp = expDiff_reg_1138 ;
   tmp_i7_reg_1283__temp = tmp_i7_reg_1283 ;
   aSig_2_cast_fu_824_p1__temp = aSig_2_cast_fu_824_p1 ;
   tmp_24_i1_fu_769_p2__temp = tmp_24_i1_fu_769_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld ;
   tmp_i4_fu_461_p2__temp = tmp_i4_fu_461_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o ;
   tmp_i7_15_fu_867_p1__temp = tmp_i7_15_fu_867_p1 ;
   tmp_1_i_fu_970_p2__temp = tmp_1_i_fu_970_p2 ;
   expDiff_2_reg_1239__temp = expDiff_2_reg_1239 ;
   tmp_i_11_fu_967_p1__temp = tmp_i_11_fu_967_p1 ;
   tmp_29_i_fu_403_p4__temp = tmp_29_i_fu_403_p4 ;
   tmp_i1_fu_745_p2__temp = tmp_i1_fu_745_p2 ;
   tmp_29_fu_383_p2__temp = tmp_29_fu_383_p2 ;
   bExp_fu_289_p4__temp = bExp_fu_289_p4 ;
   aSig_cast2_cast_fu_325_p1__temp = aSig_cast2_cast_fu_325_p1 ;
   bSig_cast1_cast_reg_1155__temp = bSig_cast1_cast_reg_1155 ;
   zExp_0_s_fu_1095_p3__temp = zExp_0_s_fu_1095_p3 ;
   bSig_cast1_fu_341_p1__temp = bSig_cast1_fu_341_p1 ;
   tmp_25_i4_fu_449_p2__temp = tmp_25_i4_fu_449_p2 ;
   aExp_reg_1122__temp = aExp_reg_1122 ;
   tmp_7_i_fu_962_p2__temp = tmp_7_i_fu_962_p2 ;
   aSig_s_reg_139__temp = aSig_s_reg_139 ;
   aSig_cast2_cast_reg_1149__temp = aSig_cast2_cast_reg_1149 ;
   bSig_cast1_cast_fu_345_p1__temp = bSig_cast1_cast_fu_345_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start__temp = grp_roundAndPackFloat64_fu_204_ap_start ;
   zExp_2_reg_157__temp = zExp_2_reg_157 ;
   tmp_27_reg_1144__temp = tmp_27_reg_1144 ;
   tmp_26_fu_603_p2__temp = tmp_26_fu_603_p2 ;
   sel_tmp_i_fu_1019_p2__temp = sel_tmp_i_fu_1019_p2 ;
   zExp_3_cast_fu_1049_p1__temp = zExp_3_cast_fu_1049_p1 ;
   z_4_fu_1038_p3__temp = z_4_fu_1038_p3 ;
   expDiff_2_cast_fu_645_p2__temp = expDiff_2_cast_fu_645_p2 ;
   tmp_8_i_reg_1250__temp = tmp_8_i_reg_1250 ;
   ap_phi_mux_p_0_phi_fu_180_p22__temp = ap_phi_mux_p_0_phi_fu_180_p22 ;
   bSig_1_fu_651_p4__temp = bSig_1_fu_651_p4 ;
   tmp_5_fu_900_p4__temp = tmp_5_fu_900_p4 ;
   tmp_42_fu_723_p1__temp = tmp_42_fu_723_p1 ;
   bSig_cast_fu_1045_p1__temp = bSig_cast_fu_1045_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start_reg__temp = grp_roundAndPackFloat64_fu_204_ap_start_reg ;
   tmp_47_fu_835_p1__temp = tmp_47_fu_835_p1 ;
   tmp_i8_fu_539_p2__temp = tmp_i8_fu_539_p2 ;
   tmp_25_reg_1172__temp = tmp_25_reg_1172 ;
   tmp_i_fu_954_p2__temp = tmp_i_fu_954_p2 ;
   tmp_2_i_fu_976_p2__temp = tmp_2_i_fu_976_p2 ;
   tmp_49_fu_891_p1__temp = tmp_49_fu_891_p1 ;
   tmp_16_fu_519_p2__temp = tmp_16_fu_519_p2 ;
   tmp_reg_1160__temp = tmp_reg_1160 ;
   tmp_24_i4_fu_443_p2__temp = tmp_24_i4_fu_443_p2 ;
   tmp_52_fu_587_p1__temp = tmp_52_fu_587_p1 ;
   sel_tmp_i1_fu_927_p2__temp = sel_tmp_i1_fu_927_p2 ;
   tmp_i5_fu_717_p2__temp = tmp_i5_fu_717_p2 ;
   z_5_fu_945_p3__temp = z_5_fu_945_p3 ;
   tmp_24_i5_fu_485_p2__temp = tmp_24_i5_fu_485_p2 ;
   tmp_6_i33_cast_fu_883_p1__temp = tmp_6_i33_cast_fu_883_p1 ;
   grp_fu_215_p2__temp = grp_fu_215_p2 ;
   tmp_55_fu_455_p2__temp = tmp_55_fu_455_p2 ;
   bSig_s_reg_130__temp = bSig_s_reg_130 ;
   tmp_43_fu_399_p1__temp = tmp_43_fu_399_p1 ;
   tmp_53_fu_1087_p3__temp = tmp_53_fu_1087_p3 ;
   grp_fu_235_p4__temp = grp_fu_235_p4 ;
   tmp_i1_17_fu_467_p3__temp = tmp_i1_17_fu_467_p3 ;
   b_assign_1_mux_fu_609_p3__temp = b_assign_1_mux_fu_609_p3 ;
   z_2_fu_937_p3__temp = z_2_fu_937_p3 ;
   tmp_i3_fu_567_p2__temp = tmp_i3_fu_567_p2 ;
   zSig_2_cast_fu_1069_p1__temp = zSig_2_cast_fu_1069_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_done__temp = grp_roundAndPackFloat64_fu_204_ap_done ;
   tmp_6_fu_910_p3__temp = tmp_6_fu_910_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_idle__temp = grp_roundAndPackFloat64_fu_204_ap_idle ;
   p_0_reg_177__temp = p_0_reg_177 ;
   tmp_2_i1_reg_1294__temp = tmp_2_i1_reg_1294 ;
   tmp_24_i3_fu_591_p2__temp = tmp_24_i3_fu_591_p2 ;
   tmp_27_fu_313_p1__temp = tmp_27_fu_313_p1 ;
   tmp_31_reg_1319__temp = tmp_31_reg_1319 ;
   tmp_16_reg_1202__temp = tmp_16_reg_1202 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_32_fu_329_p1__temp = tmp_32_fu_329_p1 ;
   tmp_30_fu_363_p4__temp = tmp_30_fu_363_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_i6_12_fu_573_p3__temp = tmp_i6_12_fu_573_p3 ;
   zSig_2_fu_1063_p2__temp = zSig_2_fu_1063_p2 ;
   tmp_48_fu_851_p4__temp = tmp_48_fu_851_p4 ;
   bExp_cast_fu_299_p1__temp = bExp_cast_fu_299_p1 ;
   tmp_28_fu_497_p2__temp = tmp_28_fu_497_p2 ;
   count_assign_1_reg_1278__temp = count_assign_1_reg_1278 ;
   float_exception_flag__temp = float_exception_flag ;
   zExp_4_fu_1081_p2__temp = zExp_4_fu_1081_p2 ;
   aSig_fu_317_p3__temp = aSig_fu_317_p3 ;
   zSig_fu_377_p2__temp = zSig_fu_377_p2 ;
   zSig_assign_fu_389_p4__temp = zSig_assign_fu_389_p4 ;
   tmp_56_fu_481_p1__temp = tmp_56_fu_481_p1 ;
   sel_tmp1_i_fu_1025_p2__temp = sel_tmp1_i_fu_1025_p2 ;
   tmp_50_fu_545_p1__temp = tmp_50_fu_545_p1 ;
   tmp_40_fu_982_p1__temp = tmp_40_fu_982_p1 ;
   tmp_i9_fu_709_p3__temp = tmp_i9_fu_709_p3 ;
   tmp_54_fu_439_p1__temp = tmp_54_fu_439_p1 ;
   zSig_1_reg_167__temp = zSig_1_reg_167 ;
   tmp_25_i3_fu_597_p2__temp = tmp_25_i3_fu_597_p2 ;
   bSig_fu_333_p3__temp = bSig_fu_333_p3 ;
   tmp_24_i2_fu_549_p2__temp = tmp_24_i2_fu_549_p2 ;
   aExp_fu_273_p4__temp = aExp_fu_273_p4 ;
   z_fu_1030_p3__temp = z_fu_1030_p3 ;
   expDiff_3_fu_803_p2__temp = expDiff_3_fu_803_p2 ;
   tmp_i5_10_fu_751_p3__temp = tmp_i5_10_fu_751_p3 ;
   tmp_46_fu_765_p1__temp = tmp_46_fu_765_p1 ;
   grp_fu_220_p2__temp = grp_fu_220_p2 ;
   expDiff_1_fu_828_p3__temp = expDiff_1_fu_828_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_return__temp = grp_roundAndPackFloat64_fu_204_ap_return ;
   tmp_2_i1_fu_877_p2__temp = tmp_2_i1_fu_877_p2 ;
   aSig_2_fu_817_p3__temp = aSig_2_fu_817_p3 ;
   z_1_cast_fu_1015_p1__temp = z_1_cast_fu_1015_p1 ;
   bSig_2_cast_fu_951_p1__temp = bSig_2_cast_fu_951_p1 ;
   bSig_2_fu_661_p3__temp = bSig_2_fu_661_p3 ;
   grp_fu_245_p2__temp = grp_fu_245_p2 ;
   a_assign_3_fu_795_p3__temp = a_assign_3_fu_795_p3 ;
   p_s_fu_1103_p3__temp = p_s_fu_1103_p3 ;
   expDiff_2_fu_669_p3__temp = expDiff_2_fu_669_p3 ;
   tmp_i6_fu_759_p2__temp = tmp_i6_fu_759_p2 ;
   tmp_25_i5_fu_491_p2__temp = tmp_25_i5_fu_491_p2 ;
   icmp8_reg_1289__temp = icmp8_reg_1289 ;
   tmp_10_i_fu_986_p2__temp = tmp_10_i_fu_986_p2 ;
   grp_roundAndPackFloat64_fu_204_ap_ready__temp = grp_roundAndPackFloat64_fu_204_ap_ready ;
   zExp_3_reg_148__temp = zExp_3_reg_148 ;
   tmp_22_fu_309_p1__temp = tmp_22_fu_309_p1 ;
   a_assign_4_fu_617_p3__temp = a_assign_4_fu_617_p3 ;
   tmp_38_fu_681_p4__temp = tmp_38_fu_681_p4 ;
   tmp_34_fu_355_p3__temp = tmp_34_fu_355_p3 ;
   zSig_3_fu_1073_p3__temp = zSig_3_fu_1073_p3 ;
   z_5_cast_fu_923_p1__temp = z_5_cast_fu_923_p1 ;
   tmp_fu_349_p2__temp = tmp_fu_349_p2 ;
   b_assign_2_mux_fu_503_p3__temp = b_assign_2_mux_fu_503_p3 ;
   icmp8_fu_861_p2__temp = icmp8_fu_861_p2 ;
   count_assign_1_fu_839_p2__temp = count_assign_1_fu_839_p2 ;
   tmp_24_i_fu_727_p2__temp = tmp_24_i_fu_727_p2 ;
   tmp_25_i2_fu_555_p2__temp = tmp_25_i2_fu_555_p2 ;
   grp_fu_261_p2__temp = grp_fu_261_p2 ;
   tmp_25_i_fu_733_p2__temp = tmp_25_i_fu_733_p2 ;
   tmp_i2_fu_531_p3__temp = tmp_i2_fu_531_p3 ;
   aSig_4_fu_1053_p2__temp = aSig_4_fu_1053_p2 ;
   tmp_1_i1_fu_871_p2__temp = tmp_1_i1_fu_871_p2 ;
   grp_fu_225_p4__temp = grp_fu_225_p4 ;
   tmp_4_fu_1002_p3__temp = tmp_4_fu_1002_p3 ;
   tmp_3_fu_992_p4__temp = tmp_3_fu_992_p4 ;
   tmp_i11_fu_475_p2__temp = tmp_i11_fu_475_p2 ;
   a_assign_5_fu_511_p3__temp = a_assign_5_fu_511_p3 ;
   bSig_2_reg_1231__temp = bSig_2_reg_1231 ;
   tmp_i9_13_fu_581_p2__temp = tmp_i9_13_fu_581_p2 ;
   tmp_10_i1_fu_895_p2__temp = tmp_10_i1_fu_895_p2 ;
   tmp_25_i1_fu_775_p2__temp = tmp_25_i1_fu_775_p2 ;
   expDiff_fu_303_p2__temp = expDiff_fu_303_p2 ;
   tmp_14_fu_703_p2__temp = tmp_14_fu_703_p2 ;
   sel_tmp1_i1_fu_932_p2__temp = sel_tmp1_i1_fu_932_p2 ;
   tmp_17_reg_1168__temp = tmp_17_reg_1168 ;
   tmp_15_fu_639_p2__temp = tmp_15_fu_639_p2 ;
   icmp_reg_1245__temp = icmp_reg_1245 ;
   grp_fu_251_p2__temp = grp_fu_251_p2 ;
   tmp_7_i1_fu_886_p2__temp = tmp_7_i1_fu_886_p2 ;
   bExp_reg_1133__temp = bExp_reg_1133 ;
   tmp_34_reg_1164__temp = tmp_34_reg_1164 ;
   tmp_6_i_cast_fu_959_p1__temp = tmp_6_i_cast_fu_959_p1 ;
   tmp_4_i1_fu_918_p2__temp = tmp_4_i1_fu_918_p2 ;
   tmp_s_reg_1227__temp = tmp_s_reg_1227 ;
   b_assign_mux_fu_787_p3__temp = b_assign_mux_fu_787_p3 ;
   tmp_36_fu_677_p1__temp = tmp_36_fu_677_p1 ;
   tmp_i10_fu_433_p2__temp = tmp_i10_fu_433_p2 ;
   tmp_47_cast_fu_373_p1__temp = tmp_47_cast_fu_373_p1 ;
   tmp_i2_14_fu_625_p3__temp = tmp_i2_14_fu_625_p3 ;
   tmp_8_i_fu_697_p2__temp = tmp_8_i_fu_697_p2 ;
   tmp_i8_16_fu_425_p3__temp = tmp_i8_16_fu_425_p3 ;
   tmp_23_fu_413_p2__temp = tmp_23_fu_413_p2 ;
   tmp_30_i_fu_633_p2__temp = tmp_30_i_fu_633_p2 ;
   aSig_4_cast_fu_1059_p1__temp = aSig_4_cast_fu_1059_p1 ;
   tmp_i7_fu_845_p2__temp = tmp_i7_fu_845_p2 ;
   tmp_4_i_fu_1010_p2__temp = tmp_4_i_fu_1010_p2 ;
   tmp_45_fu_739_p2__temp = tmp_45_fu_739_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_204_ap_start_reg = 0 ;
       if(1 == ap_CS_fsm_state2)
       {
           tmp_i7_reg_1283 =   (  (  (  ( grp_fu_220_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 1 + expDiff_reg_1138__temp  )  :  expDiff_reg_1138__temp  )  == 0 ? 1 :  0 ) ;

           tmp_2_i1_reg_1294 =   (  (  (  (  ( grp_fu_220_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? aSig_cast2_cast_reg_1149__temp  :   (  (  ( 1 << 52 )  | tmp_27_reg_1144__temp  )  << 9 )  )  <<  (  (  (  ( grp_fu_220_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 1 + expDiff_reg_1138__temp  )  :  expDiff_reg_1138__temp  )  & 63 )  )  != 0 ? 1 :  0 ) ;

           icmp8_reg_1289 =   ( do_twos_complement( (  (  ( 0 -  (  (  ( grp_fu_220_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 1 + expDiff_reg_1138__temp  )  :  expDiff_reg_1138__temp  )  )  >> 6 )  & 63 )  )  < do_twos_complement(1)  ? 1 :  0 ) ;

           count_assign_1_reg_1278 =   ( 0 -  (  (  ( grp_fu_220_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 1 + expDiff_reg_1138__temp  )  :  expDiff_reg_1138__temp  )  ) ;

           aSig_2_reg_1271 =   (  ( aSig_2_reg_1271__temp  & 511 )  |  (  (  (  ( grp_fu_220_p0__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? aSig_cast2_cast_reg_1149__temp  :   (  (  ( 1 << 52 )  | tmp_27_reg_1144__temp  )  << 9 )  )  & 4611686018427387392 )  ) ;

	   //printf("aSig_2_reg_1271 %llu\n",aSig_2_reg_1271);

	aSig_2_reg_1271=aSig_2_reg_1271|2305843009213693952;
	//printf("aSig_2_reg_1271 %llu\n",aSig_2_reg_1271);

       }
       if(1 == ap_CS_fsm_state2)
       {
           grp_fu_220_p0 =  aExp_reg_1122__temp ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:
	clock=clock+1;
	//printf("state 3\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   aSig_1_fu_808_p4__temp = aSig_1_fu_808_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_19_fu_781_p2__temp = tmp_19_fu_781_p2 ;
   aExp_cast_fu_285_p1__temp = aExp_cast_fu_285_p1 ;
   tmp_24_fu_419_p2__temp = tmp_24_fu_419_p2 ;
   tmp_51_fu_561_p2__temp = tmp_51_fu_561_p2 ;
   icmp_fu_691_p2__temp = icmp_fu_691_p2 ;
   tmp_20_fu_525_p2__temp = tmp_20_fu_525_p2 ;
   aSig_2_reg_1271__temp = aSig_2_reg_1271 ;
   grp_fu_220_p0__temp = grp_fu_220_p0 ;
   expDiff_reg_1138__temp = expDiff_reg_1138 ;
   tmp_i7_reg_1283__temp = tmp_i7_reg_1283 ;
   aSig_2_cast_fu_824_p1__temp = aSig_2_cast_fu_824_p1 ;
   tmp_24_i1_fu_769_p2__temp = tmp_24_i1_fu_769_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld ;
   tmp_i4_fu_461_p2__temp = tmp_i4_fu_461_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o ;
   tmp_i7_15_fu_867_p1__temp = tmp_i7_15_fu_867_p1 ;
   tmp_1_i_fu_970_p2__temp = tmp_1_i_fu_970_p2 ;
   expDiff_2_reg_1239__temp = expDiff_2_reg_1239 ;
   tmp_i_11_fu_967_p1__temp = tmp_i_11_fu_967_p1 ;
   tmp_29_i_fu_403_p4__temp = tmp_29_i_fu_403_p4 ;
   tmp_i1_fu_745_p2__temp = tmp_i1_fu_745_p2 ;
   tmp_29_fu_383_p2__temp = tmp_29_fu_383_p2 ;
   bExp_fu_289_p4__temp = bExp_fu_289_p4 ;
   aSig_cast2_cast_fu_325_p1__temp = aSig_cast2_cast_fu_325_p1 ;
   bSig_cast1_cast_reg_1155__temp = bSig_cast1_cast_reg_1155 ;
   zExp_0_s_fu_1095_p3__temp = zExp_0_s_fu_1095_p3 ;
   bSig_cast1_fu_341_p1__temp = bSig_cast1_fu_341_p1 ;
   tmp_25_i4_fu_449_p2__temp = tmp_25_i4_fu_449_p2 ;
   aExp_reg_1122__temp = aExp_reg_1122 ;
   tmp_7_i_fu_962_p2__temp = tmp_7_i_fu_962_p2 ;
   aSig_s_reg_139__temp = aSig_s_reg_139 ;
   aSig_cast2_cast_reg_1149__temp = aSig_cast2_cast_reg_1149 ;
   bSig_cast1_cast_fu_345_p1__temp = bSig_cast1_cast_fu_345_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start__temp = grp_roundAndPackFloat64_fu_204_ap_start ;
   zExp_2_reg_157__temp = zExp_2_reg_157 ;
   tmp_27_reg_1144__temp = tmp_27_reg_1144 ;
   tmp_26_fu_603_p2__temp = tmp_26_fu_603_p2 ;
   sel_tmp_i_fu_1019_p2__temp = sel_tmp_i_fu_1019_p2 ;
   zExp_3_cast_fu_1049_p1__temp = zExp_3_cast_fu_1049_p1 ;
   z_4_fu_1038_p3__temp = z_4_fu_1038_p3 ;
   expDiff_2_cast_fu_645_p2__temp = expDiff_2_cast_fu_645_p2 ;
   tmp_8_i_reg_1250__temp = tmp_8_i_reg_1250 ;
   ap_phi_mux_p_0_phi_fu_180_p22__temp = ap_phi_mux_p_0_phi_fu_180_p22 ;
   bSig_1_fu_651_p4__temp = bSig_1_fu_651_p4 ;
   tmp_5_fu_900_p4__temp = tmp_5_fu_900_p4 ;
   tmp_42_fu_723_p1__temp = tmp_42_fu_723_p1 ;
   bSig_cast_fu_1045_p1__temp = bSig_cast_fu_1045_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start_reg__temp = grp_roundAndPackFloat64_fu_204_ap_start_reg ;
   tmp_47_fu_835_p1__temp = tmp_47_fu_835_p1 ;
   tmp_i8_fu_539_p2__temp = tmp_i8_fu_539_p2 ;
   tmp_25_reg_1172__temp = tmp_25_reg_1172 ;
   tmp_i_fu_954_p2__temp = tmp_i_fu_954_p2 ;
   tmp_2_i_fu_976_p2__temp = tmp_2_i_fu_976_p2 ;
   tmp_49_fu_891_p1__temp = tmp_49_fu_891_p1 ;
   tmp_16_fu_519_p2__temp = tmp_16_fu_519_p2 ;
   tmp_reg_1160__temp = tmp_reg_1160 ;
   tmp_24_i4_fu_443_p2__temp = tmp_24_i4_fu_443_p2 ;
   tmp_52_fu_587_p1__temp = tmp_52_fu_587_p1 ;
   sel_tmp_i1_fu_927_p2__temp = sel_tmp_i1_fu_927_p2 ;
   tmp_i5_fu_717_p2__temp = tmp_i5_fu_717_p2 ;
   z_5_fu_945_p3__temp = z_5_fu_945_p3 ;
   tmp_24_i5_fu_485_p2__temp = tmp_24_i5_fu_485_p2 ;
   tmp_6_i33_cast_fu_883_p1__temp = tmp_6_i33_cast_fu_883_p1 ;
   grp_fu_215_p2__temp = grp_fu_215_p2 ;
   tmp_55_fu_455_p2__temp = tmp_55_fu_455_p2 ;
   bSig_s_reg_130__temp = bSig_s_reg_130 ;
   tmp_43_fu_399_p1__temp = tmp_43_fu_399_p1 ;
   tmp_53_fu_1087_p3__temp = tmp_53_fu_1087_p3 ;
   grp_fu_235_p4__temp = grp_fu_235_p4 ;
   tmp_i1_17_fu_467_p3__temp = tmp_i1_17_fu_467_p3 ;
   b_assign_1_mux_fu_609_p3__temp = b_assign_1_mux_fu_609_p3 ;
   z_2_fu_937_p3__temp = z_2_fu_937_p3 ;
   tmp_i3_fu_567_p2__temp = tmp_i3_fu_567_p2 ;
   zSig_2_cast_fu_1069_p1__temp = zSig_2_cast_fu_1069_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_done__temp = grp_roundAndPackFloat64_fu_204_ap_done ;
   tmp_6_fu_910_p3__temp = tmp_6_fu_910_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_idle__temp = grp_roundAndPackFloat64_fu_204_ap_idle ;
   p_0_reg_177__temp = p_0_reg_177 ;
   tmp_2_i1_reg_1294__temp = tmp_2_i1_reg_1294 ;
   tmp_24_i3_fu_591_p2__temp = tmp_24_i3_fu_591_p2 ;
   tmp_27_fu_313_p1__temp = tmp_27_fu_313_p1 ;
   tmp_31_reg_1319__temp = tmp_31_reg_1319 ;
   tmp_16_reg_1202__temp = tmp_16_reg_1202 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_32_fu_329_p1__temp = tmp_32_fu_329_p1 ;
   tmp_30_fu_363_p4__temp = tmp_30_fu_363_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_i6_12_fu_573_p3__temp = tmp_i6_12_fu_573_p3 ;
   zSig_2_fu_1063_p2__temp = zSig_2_fu_1063_p2 ;
   tmp_48_fu_851_p4__temp = tmp_48_fu_851_p4 ;
   bExp_cast_fu_299_p1__temp = bExp_cast_fu_299_p1 ;
   tmp_28_fu_497_p2__temp = tmp_28_fu_497_p2 ;
   count_assign_1_reg_1278__temp = count_assign_1_reg_1278 ;
   float_exception_flag__temp = float_exception_flag ;
   zExp_4_fu_1081_p2__temp = zExp_4_fu_1081_p2 ;
   aSig_fu_317_p3__temp = aSig_fu_317_p3 ;
   zSig_fu_377_p2__temp = zSig_fu_377_p2 ;
   zSig_assign_fu_389_p4__temp = zSig_assign_fu_389_p4 ;
   tmp_56_fu_481_p1__temp = tmp_56_fu_481_p1 ;
   sel_tmp1_i_fu_1025_p2__temp = sel_tmp1_i_fu_1025_p2 ;
   tmp_50_fu_545_p1__temp = tmp_50_fu_545_p1 ;
   tmp_40_fu_982_p1__temp = tmp_40_fu_982_p1 ;
   tmp_i9_fu_709_p3__temp = tmp_i9_fu_709_p3 ;
   tmp_54_fu_439_p1__temp = tmp_54_fu_439_p1 ;
   zSig_1_reg_167__temp = zSig_1_reg_167 ;
   tmp_25_i3_fu_597_p2__temp = tmp_25_i3_fu_597_p2 ;
   bSig_fu_333_p3__temp = bSig_fu_333_p3 ;
   tmp_24_i2_fu_549_p2__temp = tmp_24_i2_fu_549_p2 ;
   aExp_fu_273_p4__temp = aExp_fu_273_p4 ;
   z_fu_1030_p3__temp = z_fu_1030_p3 ;
   expDiff_3_fu_803_p2__temp = expDiff_3_fu_803_p2 ;
   tmp_i5_10_fu_751_p3__temp = tmp_i5_10_fu_751_p3 ;
   tmp_46_fu_765_p1__temp = tmp_46_fu_765_p1 ;
   grp_fu_220_p2__temp = grp_fu_220_p2 ;
   expDiff_1_fu_828_p3__temp = expDiff_1_fu_828_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_return__temp = grp_roundAndPackFloat64_fu_204_ap_return ;
   tmp_2_i1_fu_877_p2__temp = tmp_2_i1_fu_877_p2 ;
   aSig_2_fu_817_p3__temp = aSig_2_fu_817_p3 ;
   z_1_cast_fu_1015_p1__temp = z_1_cast_fu_1015_p1 ;
   bSig_2_cast_fu_951_p1__temp = bSig_2_cast_fu_951_p1 ;
   bSig_2_fu_661_p3__temp = bSig_2_fu_661_p3 ;
   grp_fu_245_p2__temp = grp_fu_245_p2 ;
   a_assign_3_fu_795_p3__temp = a_assign_3_fu_795_p3 ;
   p_s_fu_1103_p3__temp = p_s_fu_1103_p3 ;
   expDiff_2_fu_669_p3__temp = expDiff_2_fu_669_p3 ;
   tmp_i6_fu_759_p2__temp = tmp_i6_fu_759_p2 ;
   tmp_25_i5_fu_491_p2__temp = tmp_25_i5_fu_491_p2 ;
   icmp8_reg_1289__temp = icmp8_reg_1289 ;
   tmp_10_i_fu_986_p2__temp = tmp_10_i_fu_986_p2 ;
   grp_roundAndPackFloat64_fu_204_ap_ready__temp = grp_roundAndPackFloat64_fu_204_ap_ready ;
   zExp_3_reg_148__temp = zExp_3_reg_148 ;
   tmp_22_fu_309_p1__temp = tmp_22_fu_309_p1 ;
   a_assign_4_fu_617_p3__temp = a_assign_4_fu_617_p3 ;
   tmp_38_fu_681_p4__temp = tmp_38_fu_681_p4 ;
   tmp_34_fu_355_p3__temp = tmp_34_fu_355_p3 ;
   zSig_3_fu_1073_p3__temp = zSig_3_fu_1073_p3 ;
   z_5_cast_fu_923_p1__temp = z_5_cast_fu_923_p1 ;
   tmp_fu_349_p2__temp = tmp_fu_349_p2 ;
   b_assign_2_mux_fu_503_p3__temp = b_assign_2_mux_fu_503_p3 ;
   icmp8_fu_861_p2__temp = icmp8_fu_861_p2 ;
   count_assign_1_fu_839_p2__temp = count_assign_1_fu_839_p2 ;
   tmp_24_i_fu_727_p2__temp = tmp_24_i_fu_727_p2 ;
   tmp_25_i2_fu_555_p2__temp = tmp_25_i2_fu_555_p2 ;
   grp_fu_261_p2__temp = grp_fu_261_p2 ;
   tmp_25_i_fu_733_p2__temp = tmp_25_i_fu_733_p2 ;
   tmp_i2_fu_531_p3__temp = tmp_i2_fu_531_p3 ;
   aSig_4_fu_1053_p2__temp = aSig_4_fu_1053_p2 ;
   tmp_1_i1_fu_871_p2__temp = tmp_1_i1_fu_871_p2 ;
   grp_fu_225_p4__temp = grp_fu_225_p4 ;
   tmp_4_fu_1002_p3__temp = tmp_4_fu_1002_p3 ;
   tmp_3_fu_992_p4__temp = tmp_3_fu_992_p4 ;
   tmp_i11_fu_475_p2__temp = tmp_i11_fu_475_p2 ;
   a_assign_5_fu_511_p3__temp = a_assign_5_fu_511_p3 ;
   bSig_2_reg_1231__temp = bSig_2_reg_1231 ;
   tmp_i9_13_fu_581_p2__temp = tmp_i9_13_fu_581_p2 ;
   tmp_10_i1_fu_895_p2__temp = tmp_10_i1_fu_895_p2 ;
   tmp_25_i1_fu_775_p2__temp = tmp_25_i1_fu_775_p2 ;
   expDiff_fu_303_p2__temp = expDiff_fu_303_p2 ;
   tmp_14_fu_703_p2__temp = tmp_14_fu_703_p2 ;
   sel_tmp1_i1_fu_932_p2__temp = sel_tmp1_i1_fu_932_p2 ;
   tmp_17_reg_1168__temp = tmp_17_reg_1168 ;
   tmp_15_fu_639_p2__temp = tmp_15_fu_639_p2 ;
   icmp_reg_1245__temp = icmp_reg_1245 ;
   grp_fu_251_p2__temp = grp_fu_251_p2 ;
   tmp_7_i1_fu_886_p2__temp = tmp_7_i1_fu_886_p2 ;
   bExp_reg_1133__temp = bExp_reg_1133 ;
   tmp_34_reg_1164__temp = tmp_34_reg_1164 ;
   tmp_6_i_cast_fu_959_p1__temp = tmp_6_i_cast_fu_959_p1 ;
   tmp_4_i1_fu_918_p2__temp = tmp_4_i1_fu_918_p2 ;
   tmp_s_reg_1227__temp = tmp_s_reg_1227 ;
   b_assign_mux_fu_787_p3__temp = b_assign_mux_fu_787_p3 ;
   tmp_36_fu_677_p1__temp = tmp_36_fu_677_p1 ;
   tmp_i10_fu_433_p2__temp = tmp_i10_fu_433_p2 ;
   tmp_47_cast_fu_373_p1__temp = tmp_47_cast_fu_373_p1 ;
   tmp_i2_14_fu_625_p3__temp = tmp_i2_14_fu_625_p3 ;
   tmp_8_i_fu_697_p2__temp = tmp_8_i_fu_697_p2 ;
   tmp_i8_16_fu_425_p3__temp = tmp_i8_16_fu_425_p3 ;
   tmp_23_fu_413_p2__temp = tmp_23_fu_413_p2 ;
   tmp_30_i_fu_633_p2__temp = tmp_30_i_fu_633_p2 ;
   aSig_4_cast_fu_1059_p1__temp = aSig_4_cast_fu_1059_p1 ;
   tmp_i7_fu_845_p2__temp = tmp_i7_fu_845_p2 ;
   tmp_4_i_fu_1010_p2__temp = tmp_4_i_fu_1010_p2 ;
   tmp_45_fu_739_p2__temp = tmp_45_fu_739_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_204_ap_start_reg = 0 ;
       if(1 == ap_CS_fsm_state3)
       {
           aSig_s_reg_139 =   (  ( tmp_i7_reg_1283__temp  & 1 )  == 1 ? aSig_2_reg_1271__temp  :   (  (  (  ( tmp_i7_reg_1283__temp  ^ 1 )  & icmp8_reg_1289__temp  )  & 1 )  == 1 ?  (  (  (  (  ( aSig_2_reg_1271__temp  >> count_assign_1_reg_1278__temp  )  & 4611686018427387902 )  >> 1 )  << 1 )  |  (  (  (  ( aSig_2_reg_1271__temp  >> count_assign_1_reg_1278__temp  )  & 1 )  | tmp_2_i1_reg_1294__temp  )  & 1 )  )  :   ( aSig_2_reg_1271__temp  != 0 ? 1 :  0 )  )  ) ;

	//printf(" aSig_s_reg_139 %llu\n",aSig_s_reg_139); 
       }
       if(1 == ap_CS_fsm_state3)
       {
           bSig_s_reg_130 =  bSig_cast1_cast_reg_1155__temp ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           zExp_3_reg_148 =  bExp_reg_1133__temp ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state4:
	clock=clock+1;
	//printf("state 4\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   aSig_1_fu_808_p4__temp = aSig_1_fu_808_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_19_fu_781_p2__temp = tmp_19_fu_781_p2 ;
   aExp_cast_fu_285_p1__temp = aExp_cast_fu_285_p1 ;
   tmp_24_fu_419_p2__temp = tmp_24_fu_419_p2 ;
   tmp_51_fu_561_p2__temp = tmp_51_fu_561_p2 ;
   icmp_fu_691_p2__temp = icmp_fu_691_p2 ;
   tmp_20_fu_525_p2__temp = tmp_20_fu_525_p2 ;
   aSig_2_reg_1271__temp = aSig_2_reg_1271 ;
   grp_fu_220_p0__temp = grp_fu_220_p0 ;
   expDiff_reg_1138__temp = expDiff_reg_1138 ;
   tmp_i7_reg_1283__temp = tmp_i7_reg_1283 ;
   aSig_2_cast_fu_824_p1__temp = aSig_2_cast_fu_824_p1 ;
   tmp_24_i1_fu_769_p2__temp = tmp_24_i1_fu_769_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld ;
   tmp_i4_fu_461_p2__temp = tmp_i4_fu_461_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o ;
   tmp_i7_15_fu_867_p1__temp = tmp_i7_15_fu_867_p1 ;
   tmp_1_i_fu_970_p2__temp = tmp_1_i_fu_970_p2 ;
   expDiff_2_reg_1239__temp = expDiff_2_reg_1239 ;
   tmp_i_11_fu_967_p1__temp = tmp_i_11_fu_967_p1 ;
   tmp_29_i_fu_403_p4__temp = tmp_29_i_fu_403_p4 ;
   tmp_i1_fu_745_p2__temp = tmp_i1_fu_745_p2 ;
   tmp_29_fu_383_p2__temp = tmp_29_fu_383_p2 ;
   bExp_fu_289_p4__temp = bExp_fu_289_p4 ;
   aSig_cast2_cast_fu_325_p1__temp = aSig_cast2_cast_fu_325_p1 ;
   bSig_cast1_cast_reg_1155__temp = bSig_cast1_cast_reg_1155 ;
   zExp_0_s_fu_1095_p3__temp = zExp_0_s_fu_1095_p3 ;
   bSig_cast1_fu_341_p1__temp = bSig_cast1_fu_341_p1 ;
   tmp_25_i4_fu_449_p2__temp = tmp_25_i4_fu_449_p2 ;
   aExp_reg_1122__temp = aExp_reg_1122 ;
   tmp_7_i_fu_962_p2__temp = tmp_7_i_fu_962_p2 ;
   aSig_s_reg_139__temp = aSig_s_reg_139 ;
   aSig_cast2_cast_reg_1149__temp = aSig_cast2_cast_reg_1149 ;
   bSig_cast1_cast_fu_345_p1__temp = bSig_cast1_cast_fu_345_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start__temp = grp_roundAndPackFloat64_fu_204_ap_start ;
   zExp_2_reg_157__temp = zExp_2_reg_157 ;
   tmp_27_reg_1144__temp = tmp_27_reg_1144 ;
   tmp_26_fu_603_p2__temp = tmp_26_fu_603_p2 ;
   sel_tmp_i_fu_1019_p2__temp = sel_tmp_i_fu_1019_p2 ;
   zExp_3_cast_fu_1049_p1__temp = zExp_3_cast_fu_1049_p1 ;
   z_4_fu_1038_p3__temp = z_4_fu_1038_p3 ;
   expDiff_2_cast_fu_645_p2__temp = expDiff_2_cast_fu_645_p2 ;
   tmp_8_i_reg_1250__temp = tmp_8_i_reg_1250 ;
   ap_phi_mux_p_0_phi_fu_180_p22__temp = ap_phi_mux_p_0_phi_fu_180_p22 ;
   bSig_1_fu_651_p4__temp = bSig_1_fu_651_p4 ;
   tmp_5_fu_900_p4__temp = tmp_5_fu_900_p4 ;
   tmp_42_fu_723_p1__temp = tmp_42_fu_723_p1 ;
   bSig_cast_fu_1045_p1__temp = bSig_cast_fu_1045_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start_reg__temp = grp_roundAndPackFloat64_fu_204_ap_start_reg ;
   tmp_47_fu_835_p1__temp = tmp_47_fu_835_p1 ;
   tmp_i8_fu_539_p2__temp = tmp_i8_fu_539_p2 ;
   tmp_25_reg_1172__temp = tmp_25_reg_1172 ;
   tmp_i_fu_954_p2__temp = tmp_i_fu_954_p2 ;
   tmp_2_i_fu_976_p2__temp = tmp_2_i_fu_976_p2 ;
   tmp_49_fu_891_p1__temp = tmp_49_fu_891_p1 ;
   tmp_16_fu_519_p2__temp = tmp_16_fu_519_p2 ;
   tmp_reg_1160__temp = tmp_reg_1160 ;
   tmp_24_i4_fu_443_p2__temp = tmp_24_i4_fu_443_p2 ;
   tmp_52_fu_587_p1__temp = tmp_52_fu_587_p1 ;
   sel_tmp_i1_fu_927_p2__temp = sel_tmp_i1_fu_927_p2 ;
   tmp_i5_fu_717_p2__temp = tmp_i5_fu_717_p2 ;
   z_5_fu_945_p3__temp = z_5_fu_945_p3 ;
   tmp_24_i5_fu_485_p2__temp = tmp_24_i5_fu_485_p2 ;
   tmp_6_i33_cast_fu_883_p1__temp = tmp_6_i33_cast_fu_883_p1 ;
   grp_fu_215_p2__temp = grp_fu_215_p2 ;
   tmp_55_fu_455_p2__temp = tmp_55_fu_455_p2 ;
   bSig_s_reg_130__temp = bSig_s_reg_130 ;
   tmp_43_fu_399_p1__temp = tmp_43_fu_399_p1 ;
   tmp_53_fu_1087_p3__temp = tmp_53_fu_1087_p3 ;
   grp_fu_235_p4__temp = grp_fu_235_p4 ;
   tmp_i1_17_fu_467_p3__temp = tmp_i1_17_fu_467_p3 ;
   b_assign_1_mux_fu_609_p3__temp = b_assign_1_mux_fu_609_p3 ;
   z_2_fu_937_p3__temp = z_2_fu_937_p3 ;
   tmp_i3_fu_567_p2__temp = tmp_i3_fu_567_p2 ;
   zSig_2_cast_fu_1069_p1__temp = zSig_2_cast_fu_1069_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_done__temp = grp_roundAndPackFloat64_fu_204_ap_done ;
   tmp_6_fu_910_p3__temp = tmp_6_fu_910_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_idle__temp = grp_roundAndPackFloat64_fu_204_ap_idle ;
   p_0_reg_177__temp = p_0_reg_177 ;
   tmp_2_i1_reg_1294__temp = tmp_2_i1_reg_1294 ;
   tmp_24_i3_fu_591_p2__temp = tmp_24_i3_fu_591_p2 ;
   tmp_27_fu_313_p1__temp = tmp_27_fu_313_p1 ;
   tmp_31_reg_1319__temp = tmp_31_reg_1319 ;
   tmp_16_reg_1202__temp = tmp_16_reg_1202 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_32_fu_329_p1__temp = tmp_32_fu_329_p1 ;
   tmp_30_fu_363_p4__temp = tmp_30_fu_363_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_i6_12_fu_573_p3__temp = tmp_i6_12_fu_573_p3 ;
   zSig_2_fu_1063_p2__temp = zSig_2_fu_1063_p2 ;
   tmp_48_fu_851_p4__temp = tmp_48_fu_851_p4 ;
   bExp_cast_fu_299_p1__temp = bExp_cast_fu_299_p1 ;
   tmp_28_fu_497_p2__temp = tmp_28_fu_497_p2 ;
   count_assign_1_reg_1278__temp = count_assign_1_reg_1278 ;
   float_exception_flag__temp = float_exception_flag ;
   zExp_4_fu_1081_p2__temp = zExp_4_fu_1081_p2 ;
   aSig_fu_317_p3__temp = aSig_fu_317_p3 ;
   zSig_fu_377_p2__temp = zSig_fu_377_p2 ;
   zSig_assign_fu_389_p4__temp = zSig_assign_fu_389_p4 ;
   tmp_56_fu_481_p1__temp = tmp_56_fu_481_p1 ;
   sel_tmp1_i_fu_1025_p2__temp = sel_tmp1_i_fu_1025_p2 ;
   tmp_50_fu_545_p1__temp = tmp_50_fu_545_p1 ;
   tmp_40_fu_982_p1__temp = tmp_40_fu_982_p1 ;
   tmp_i9_fu_709_p3__temp = tmp_i9_fu_709_p3 ;
   tmp_54_fu_439_p1__temp = tmp_54_fu_439_p1 ;
   zSig_1_reg_167__temp = zSig_1_reg_167 ;
   tmp_25_i3_fu_597_p2__temp = tmp_25_i3_fu_597_p2 ;
   bSig_fu_333_p3__temp = bSig_fu_333_p3 ;
   tmp_24_i2_fu_549_p2__temp = tmp_24_i2_fu_549_p2 ;
   aExp_fu_273_p4__temp = aExp_fu_273_p4 ;
   z_fu_1030_p3__temp = z_fu_1030_p3 ;
   expDiff_3_fu_803_p2__temp = expDiff_3_fu_803_p2 ;
   tmp_i5_10_fu_751_p3__temp = tmp_i5_10_fu_751_p3 ;
   tmp_46_fu_765_p1__temp = tmp_46_fu_765_p1 ;
   grp_fu_220_p2__temp = grp_fu_220_p2 ;
   expDiff_1_fu_828_p3__temp = expDiff_1_fu_828_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_return__temp = grp_roundAndPackFloat64_fu_204_ap_return ;
   tmp_2_i1_fu_877_p2__temp = tmp_2_i1_fu_877_p2 ;
   aSig_2_fu_817_p3__temp = aSig_2_fu_817_p3 ;
   z_1_cast_fu_1015_p1__temp = z_1_cast_fu_1015_p1 ;
   bSig_2_cast_fu_951_p1__temp = bSig_2_cast_fu_951_p1 ;
   bSig_2_fu_661_p3__temp = bSig_2_fu_661_p3 ;
   grp_fu_245_p2__temp = grp_fu_245_p2 ;
   a_assign_3_fu_795_p3__temp = a_assign_3_fu_795_p3 ;
   p_s_fu_1103_p3__temp = p_s_fu_1103_p3 ;
   expDiff_2_fu_669_p3__temp = expDiff_2_fu_669_p3 ;
   tmp_i6_fu_759_p2__temp = tmp_i6_fu_759_p2 ;
   tmp_25_i5_fu_491_p2__temp = tmp_25_i5_fu_491_p2 ;
   icmp8_reg_1289__temp = icmp8_reg_1289 ;
   tmp_10_i_fu_986_p2__temp = tmp_10_i_fu_986_p2 ;
   grp_roundAndPackFloat64_fu_204_ap_ready__temp = grp_roundAndPackFloat64_fu_204_ap_ready ;
   zExp_3_reg_148__temp = zExp_3_reg_148 ;
   tmp_22_fu_309_p1__temp = tmp_22_fu_309_p1 ;
   a_assign_4_fu_617_p3__temp = a_assign_4_fu_617_p3 ;
   tmp_38_fu_681_p4__temp = tmp_38_fu_681_p4 ;
   tmp_34_fu_355_p3__temp = tmp_34_fu_355_p3 ;
   zSig_3_fu_1073_p3__temp = zSig_3_fu_1073_p3 ;
   z_5_cast_fu_923_p1__temp = z_5_cast_fu_923_p1 ;
   tmp_fu_349_p2__temp = tmp_fu_349_p2 ;
   b_assign_2_mux_fu_503_p3__temp = b_assign_2_mux_fu_503_p3 ;
   icmp8_fu_861_p2__temp = icmp8_fu_861_p2 ;
   count_assign_1_fu_839_p2__temp = count_assign_1_fu_839_p2 ;
   tmp_24_i_fu_727_p2__temp = tmp_24_i_fu_727_p2 ;
   tmp_25_i2_fu_555_p2__temp = tmp_25_i2_fu_555_p2 ;
   grp_fu_261_p2__temp = grp_fu_261_p2 ;
   tmp_25_i_fu_733_p2__temp = tmp_25_i_fu_733_p2 ;
   tmp_i2_fu_531_p3__temp = tmp_i2_fu_531_p3 ;
   aSig_4_fu_1053_p2__temp = aSig_4_fu_1053_p2 ;
   tmp_1_i1_fu_871_p2__temp = tmp_1_i1_fu_871_p2 ;
   grp_fu_225_p4__temp = grp_fu_225_p4 ;
   tmp_4_fu_1002_p3__temp = tmp_4_fu_1002_p3 ;
   tmp_3_fu_992_p4__temp = tmp_3_fu_992_p4 ;
   tmp_i11_fu_475_p2__temp = tmp_i11_fu_475_p2 ;
   a_assign_5_fu_511_p3__temp = a_assign_5_fu_511_p3 ;
   bSig_2_reg_1231__temp = bSig_2_reg_1231 ;
   tmp_i9_13_fu_581_p2__temp = tmp_i9_13_fu_581_p2 ;
   tmp_10_i1_fu_895_p2__temp = tmp_10_i1_fu_895_p2 ;
   tmp_25_i1_fu_775_p2__temp = tmp_25_i1_fu_775_p2 ;
   expDiff_fu_303_p2__temp = expDiff_fu_303_p2 ;
   tmp_14_fu_703_p2__temp = tmp_14_fu_703_p2 ;
   sel_tmp1_i1_fu_932_p2__temp = sel_tmp1_i1_fu_932_p2 ;
   tmp_17_reg_1168__temp = tmp_17_reg_1168 ;
   tmp_15_fu_639_p2__temp = tmp_15_fu_639_p2 ;
   icmp_reg_1245__temp = icmp_reg_1245 ;
   grp_fu_251_p2__temp = grp_fu_251_p2 ;
   tmp_7_i1_fu_886_p2__temp = tmp_7_i1_fu_886_p2 ;
   bExp_reg_1133__temp = bExp_reg_1133 ;
   tmp_34_reg_1164__temp = tmp_34_reg_1164 ;
   tmp_6_i_cast_fu_959_p1__temp = tmp_6_i_cast_fu_959_p1 ;
   tmp_4_i1_fu_918_p2__temp = tmp_4_i1_fu_918_p2 ;
   tmp_s_reg_1227__temp = tmp_s_reg_1227 ;
   b_assign_mux_fu_787_p3__temp = b_assign_mux_fu_787_p3 ;
   tmp_36_fu_677_p1__temp = tmp_36_fu_677_p1 ;
   tmp_i10_fu_433_p2__temp = tmp_i10_fu_433_p2 ;
   tmp_47_cast_fu_373_p1__temp = tmp_47_cast_fu_373_p1 ;
   tmp_i2_14_fu_625_p3__temp = tmp_i2_14_fu_625_p3 ;
   tmp_8_i_fu_697_p2__temp = tmp_8_i_fu_697_p2 ;
   tmp_i8_16_fu_425_p3__temp = tmp_i8_16_fu_425_p3 ;
   tmp_23_fu_413_p2__temp = tmp_23_fu_413_p2 ;
   tmp_30_i_fu_633_p2__temp = tmp_30_i_fu_633_p2 ;
   aSig_4_cast_fu_1059_p1__temp = aSig_4_cast_fu_1059_p1 ;
   tmp_i7_fu_845_p2__temp = tmp_i7_fu_845_p2 ;
   tmp_4_i_fu_1010_p2__temp = tmp_4_i_fu_1010_p2 ;
   tmp_45_fu_739_p2__temp = tmp_45_fu_739_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_204_ap_start_reg = 0 ;
       if(1 == ap_CS_fsm_state4)
       {
           aSig_s_reg_139 =  aSig_cast2_cast_reg_1149__temp ;
       }
       if(1 == ap_CS_fsm_state4)
       {
	   //printf("expDiff_2_reg_1239__temp %llu\n",expDiff_2_reg_1239__temp);
	   int a_temp=expDiff_2_reg_1239__temp;
	   int b_temp;
	    b_temp = -(a_temp);
	    //printf("b_temp %d\n",b_temp);
	  // tmp_8_i_reg_1250__temp =-(expDiff_2_reg_1239__temp);
	   //printf("tmp_8_i_reg_1250 %llu\n",tmp_8_i_reg_1250);
	  //printf("bSig_2_reg_1231__temp %llu\n",bSig_2_reg_1231__temp);
	  //printf("icmp_reg_1245__temp %llu\n",icmp_reg_1245__temp);
	 //bSig_2_reg_1231__temp=3458764513820540928;
	 icmp_reg_1245__temp=1;

           bSig_s_reg_130 =   (  (  ( expDiff_2_reg_1239__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? bSig_2_reg_1231__temp  :   (  (  (  (  ( expDiff_2_reg_1239__temp  == 0 ? 1 :  0 )  ^ 1 )  & icmp_reg_1245__temp  )  & 1 )  == 1 ?  (  (  (  (  ( bSig_2_reg_1231__temp  >> expDiff_2_reg_1239__temp  )  & 4611686018427387902 )  >> 1 )  << 1 )  |  (  (  (  ( bSig_2_reg_1231__temp  >> expDiff_2_reg_1239__temp  )  & 1 )  |  (  ( bSig_2_reg_1231__temp  << b_temp/*tmp_8_i_reg_1250__temp*/  )  != 0 ? 1 :  0 )  )  & 1 )  )  :   ( bSig_2_reg_1231__temp  != 0 ? 1 :  0 )  )  ) ;
	   
	   
	   //printf("bSig_s_reg_130 %llu\n",bSig_s_reg_130);
       }
       if(1 == ap_CS_fsm_state4)
       {
           zExp_3_reg_148 =  aExp_reg_1122__temp ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:
	clock=clock+1;
	//printf("state 5\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   aSig_1_fu_808_p4__temp = aSig_1_fu_808_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_19_fu_781_p2__temp = tmp_19_fu_781_p2 ;
   aExp_cast_fu_285_p1__temp = aExp_cast_fu_285_p1 ;
   tmp_24_fu_419_p2__temp = tmp_24_fu_419_p2 ;
   tmp_51_fu_561_p2__temp = tmp_51_fu_561_p2 ;
   icmp_fu_691_p2__temp = icmp_fu_691_p2 ;
   tmp_20_fu_525_p2__temp = tmp_20_fu_525_p2 ;
   aSig_2_reg_1271__temp = aSig_2_reg_1271 ;
   grp_fu_220_p0__temp = grp_fu_220_p0 ;
   expDiff_reg_1138__temp = expDiff_reg_1138 ;
   tmp_i7_reg_1283__temp = tmp_i7_reg_1283 ;
   aSig_2_cast_fu_824_p1__temp = aSig_2_cast_fu_824_p1 ;
   tmp_24_i1_fu_769_p2__temp = tmp_24_i1_fu_769_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld ;
   tmp_i4_fu_461_p2__temp = tmp_i4_fu_461_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o ;
   tmp_i7_15_fu_867_p1__temp = tmp_i7_15_fu_867_p1 ;
   tmp_1_i_fu_970_p2__temp = tmp_1_i_fu_970_p2 ;
   expDiff_2_reg_1239__temp = expDiff_2_reg_1239 ;
   tmp_i_11_fu_967_p1__temp = tmp_i_11_fu_967_p1 ;
   tmp_29_i_fu_403_p4__temp = tmp_29_i_fu_403_p4 ;
   tmp_i1_fu_745_p2__temp = tmp_i1_fu_745_p2 ;
   tmp_29_fu_383_p2__temp = tmp_29_fu_383_p2 ;
   bExp_fu_289_p4__temp = bExp_fu_289_p4 ;
   aSig_cast2_cast_fu_325_p1__temp = aSig_cast2_cast_fu_325_p1 ;
   bSig_cast1_cast_reg_1155__temp = bSig_cast1_cast_reg_1155 ;
   zExp_0_s_fu_1095_p3__temp = zExp_0_s_fu_1095_p3 ;
   bSig_cast1_fu_341_p1__temp = bSig_cast1_fu_341_p1 ;
   tmp_25_i4_fu_449_p2__temp = tmp_25_i4_fu_449_p2 ;
   aExp_reg_1122__temp = aExp_reg_1122 ;
   tmp_7_i_fu_962_p2__temp = tmp_7_i_fu_962_p2 ;
   aSig_s_reg_139__temp = aSig_s_reg_139 ;
   aSig_cast2_cast_reg_1149__temp = aSig_cast2_cast_reg_1149 ;
   bSig_cast1_cast_fu_345_p1__temp = bSig_cast1_cast_fu_345_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start__temp = grp_roundAndPackFloat64_fu_204_ap_start ;
   zExp_2_reg_157__temp = zExp_2_reg_157 ;
   tmp_27_reg_1144__temp = tmp_27_reg_1144 ;
   tmp_26_fu_603_p2__temp = tmp_26_fu_603_p2 ;
   sel_tmp_i_fu_1019_p2__temp = sel_tmp_i_fu_1019_p2 ;
   zExp_3_cast_fu_1049_p1__temp = zExp_3_cast_fu_1049_p1 ;
   z_4_fu_1038_p3__temp = z_4_fu_1038_p3 ;
   expDiff_2_cast_fu_645_p2__temp = expDiff_2_cast_fu_645_p2 ;
   tmp_8_i_reg_1250__temp = tmp_8_i_reg_1250 ;
   ap_phi_mux_p_0_phi_fu_180_p22__temp = ap_phi_mux_p_0_phi_fu_180_p22 ;
   bSig_1_fu_651_p4__temp = bSig_1_fu_651_p4 ;
   tmp_5_fu_900_p4__temp = tmp_5_fu_900_p4 ;
   tmp_42_fu_723_p1__temp = tmp_42_fu_723_p1 ;
   bSig_cast_fu_1045_p1__temp = bSig_cast_fu_1045_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start_reg__temp = grp_roundAndPackFloat64_fu_204_ap_start_reg ;
   tmp_47_fu_835_p1__temp = tmp_47_fu_835_p1 ;
   tmp_i8_fu_539_p2__temp = tmp_i8_fu_539_p2 ;
   tmp_25_reg_1172__temp = tmp_25_reg_1172 ;
   tmp_i_fu_954_p2__temp = tmp_i_fu_954_p2 ;
   tmp_2_i_fu_976_p2__temp = tmp_2_i_fu_976_p2 ;
   tmp_49_fu_891_p1__temp = tmp_49_fu_891_p1 ;
   tmp_16_fu_519_p2__temp = tmp_16_fu_519_p2 ;
   tmp_reg_1160__temp = tmp_reg_1160 ;
   tmp_24_i4_fu_443_p2__temp = tmp_24_i4_fu_443_p2 ;
   tmp_52_fu_587_p1__temp = tmp_52_fu_587_p1 ;
   sel_tmp_i1_fu_927_p2__temp = sel_tmp_i1_fu_927_p2 ;
   tmp_i5_fu_717_p2__temp = tmp_i5_fu_717_p2 ;
   z_5_fu_945_p3__temp = z_5_fu_945_p3 ;
   tmp_24_i5_fu_485_p2__temp = tmp_24_i5_fu_485_p2 ;
   tmp_6_i33_cast_fu_883_p1__temp = tmp_6_i33_cast_fu_883_p1 ;
   grp_fu_215_p2__temp = grp_fu_215_p2 ;
   tmp_55_fu_455_p2__temp = tmp_55_fu_455_p2 ;
   bSig_s_reg_130__temp = bSig_s_reg_130 ;
   tmp_43_fu_399_p1__temp = tmp_43_fu_399_p1 ;
   tmp_53_fu_1087_p3__temp = tmp_53_fu_1087_p3 ;
   grp_fu_235_p4__temp = grp_fu_235_p4 ;
   tmp_i1_17_fu_467_p3__temp = tmp_i1_17_fu_467_p3 ;
   b_assign_1_mux_fu_609_p3__temp = b_assign_1_mux_fu_609_p3 ;
   z_2_fu_937_p3__temp = z_2_fu_937_p3 ;
   tmp_i3_fu_567_p2__temp = tmp_i3_fu_567_p2 ;
   zSig_2_cast_fu_1069_p1__temp = zSig_2_cast_fu_1069_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_done__temp = grp_roundAndPackFloat64_fu_204_ap_done ;
   tmp_6_fu_910_p3__temp = tmp_6_fu_910_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_idle__temp = grp_roundAndPackFloat64_fu_204_ap_idle ;
   p_0_reg_177__temp = p_0_reg_177 ;
   tmp_2_i1_reg_1294__temp = tmp_2_i1_reg_1294 ;
   tmp_24_i3_fu_591_p2__temp = tmp_24_i3_fu_591_p2 ;
   tmp_27_fu_313_p1__temp = tmp_27_fu_313_p1 ;
   tmp_31_reg_1319__temp = tmp_31_reg_1319 ;
   tmp_16_reg_1202__temp = tmp_16_reg_1202 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_32_fu_329_p1__temp = tmp_32_fu_329_p1 ;
   tmp_30_fu_363_p4__temp = tmp_30_fu_363_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_i6_12_fu_573_p3__temp = tmp_i6_12_fu_573_p3 ;
   zSig_2_fu_1063_p2__temp = zSig_2_fu_1063_p2 ;
   tmp_48_fu_851_p4__temp = tmp_48_fu_851_p4 ;
   bExp_cast_fu_299_p1__temp = bExp_cast_fu_299_p1 ;
   tmp_28_fu_497_p2__temp = tmp_28_fu_497_p2 ;
   count_assign_1_reg_1278__temp = count_assign_1_reg_1278 ;
   float_exception_flag__temp = float_exception_flag ;
   zExp_4_fu_1081_p2__temp = zExp_4_fu_1081_p2 ;
   aSig_fu_317_p3__temp = aSig_fu_317_p3 ;
   zSig_fu_377_p2__temp = zSig_fu_377_p2 ;
   zSig_assign_fu_389_p4__temp = zSig_assign_fu_389_p4 ;
   tmp_56_fu_481_p1__temp = tmp_56_fu_481_p1 ;
   sel_tmp1_i_fu_1025_p2__temp = sel_tmp1_i_fu_1025_p2 ;
   tmp_50_fu_545_p1__temp = tmp_50_fu_545_p1 ;
   tmp_40_fu_982_p1__temp = tmp_40_fu_982_p1 ;
   tmp_i9_fu_709_p3__temp = tmp_i9_fu_709_p3 ;
   tmp_54_fu_439_p1__temp = tmp_54_fu_439_p1 ;
   zSig_1_reg_167__temp = zSig_1_reg_167 ;
   tmp_25_i3_fu_597_p2__temp = tmp_25_i3_fu_597_p2 ;
   bSig_fu_333_p3__temp = bSig_fu_333_p3 ;
   tmp_24_i2_fu_549_p2__temp = tmp_24_i2_fu_549_p2 ;
   aExp_fu_273_p4__temp = aExp_fu_273_p4 ;
   z_fu_1030_p3__temp = z_fu_1030_p3 ;
   expDiff_3_fu_803_p2__temp = expDiff_3_fu_803_p2 ;
   tmp_i5_10_fu_751_p3__temp = tmp_i5_10_fu_751_p3 ;
   tmp_46_fu_765_p1__temp = tmp_46_fu_765_p1 ;
   grp_fu_220_p2__temp = grp_fu_220_p2 ;
   expDiff_1_fu_828_p3__temp = expDiff_1_fu_828_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_return__temp = grp_roundAndPackFloat64_fu_204_ap_return ;
   tmp_2_i1_fu_877_p2__temp = tmp_2_i1_fu_877_p2 ;
   aSig_2_fu_817_p3__temp = aSig_2_fu_817_p3 ;
   z_1_cast_fu_1015_p1__temp = z_1_cast_fu_1015_p1 ;
   bSig_2_cast_fu_951_p1__temp = bSig_2_cast_fu_951_p1 ;
   bSig_2_fu_661_p3__temp = bSig_2_fu_661_p3 ;
   grp_fu_245_p2__temp = grp_fu_245_p2 ;
   a_assign_3_fu_795_p3__temp = a_assign_3_fu_795_p3 ;
   p_s_fu_1103_p3__temp = p_s_fu_1103_p3 ;
   expDiff_2_fu_669_p3__temp = expDiff_2_fu_669_p3 ;
   tmp_i6_fu_759_p2__temp = tmp_i6_fu_759_p2 ;
   tmp_25_i5_fu_491_p2__temp = tmp_25_i5_fu_491_p2 ;
   icmp8_reg_1289__temp = icmp8_reg_1289 ;
   tmp_10_i_fu_986_p2__temp = tmp_10_i_fu_986_p2 ;
   grp_roundAndPackFloat64_fu_204_ap_ready__temp = grp_roundAndPackFloat64_fu_204_ap_ready ;
   zExp_3_reg_148__temp = zExp_3_reg_148 ;
   tmp_22_fu_309_p1__temp = tmp_22_fu_309_p1 ;
   a_assign_4_fu_617_p3__temp = a_assign_4_fu_617_p3 ;
   tmp_38_fu_681_p4__temp = tmp_38_fu_681_p4 ;
   tmp_34_fu_355_p3__temp = tmp_34_fu_355_p3 ;
   zSig_3_fu_1073_p3__temp = zSig_3_fu_1073_p3 ;
   z_5_cast_fu_923_p1__temp = z_5_cast_fu_923_p1 ;
   tmp_fu_349_p2__temp = tmp_fu_349_p2 ;
   b_assign_2_mux_fu_503_p3__temp = b_assign_2_mux_fu_503_p3 ;
   icmp8_fu_861_p2__temp = icmp8_fu_861_p2 ;
   count_assign_1_fu_839_p2__temp = count_assign_1_fu_839_p2 ;
   tmp_24_i_fu_727_p2__temp = tmp_24_i_fu_727_p2 ;
   tmp_25_i2_fu_555_p2__temp = tmp_25_i2_fu_555_p2 ;
   grp_fu_261_p2__temp = grp_fu_261_p2 ;
   tmp_25_i_fu_733_p2__temp = tmp_25_i_fu_733_p2 ;
   tmp_i2_fu_531_p3__temp = tmp_i2_fu_531_p3 ;
   aSig_4_fu_1053_p2__temp = aSig_4_fu_1053_p2 ;
   tmp_1_i1_fu_871_p2__temp = tmp_1_i1_fu_871_p2 ;
   grp_fu_225_p4__temp = grp_fu_225_p4 ;
   tmp_4_fu_1002_p3__temp = tmp_4_fu_1002_p3 ;
   tmp_3_fu_992_p4__temp = tmp_3_fu_992_p4 ;
   tmp_i11_fu_475_p2__temp = tmp_i11_fu_475_p2 ;
   a_assign_5_fu_511_p3__temp = a_assign_5_fu_511_p3 ;
   bSig_2_reg_1231__temp = bSig_2_reg_1231 ;
   tmp_i9_13_fu_581_p2__temp = tmp_i9_13_fu_581_p2 ;
   tmp_10_i1_fu_895_p2__temp = tmp_10_i1_fu_895_p2 ;
   tmp_25_i1_fu_775_p2__temp = tmp_25_i1_fu_775_p2 ;
   expDiff_fu_303_p2__temp = expDiff_fu_303_p2 ;
   tmp_14_fu_703_p2__temp = tmp_14_fu_703_p2 ;
   sel_tmp1_i1_fu_932_p2__temp = sel_tmp1_i1_fu_932_p2 ;
   tmp_17_reg_1168__temp = tmp_17_reg_1168 ;
   tmp_15_fu_639_p2__temp = tmp_15_fu_639_p2 ;
   icmp_reg_1245__temp = icmp_reg_1245 ;
   grp_fu_251_p2__temp = grp_fu_251_p2 ;
   tmp_7_i1_fu_886_p2__temp = tmp_7_i1_fu_886_p2 ;
   bExp_reg_1133__temp = bExp_reg_1133 ;
   tmp_34_reg_1164__temp = tmp_34_reg_1164 ;
   tmp_6_i_cast_fu_959_p1__temp = tmp_6_i_cast_fu_959_p1 ;
   tmp_4_i1_fu_918_p2__temp = tmp_4_i1_fu_918_p2 ;
   tmp_s_reg_1227__temp = tmp_s_reg_1227 ;
   b_assign_mux_fu_787_p3__temp = b_assign_mux_fu_787_p3 ;
   tmp_36_fu_677_p1__temp = tmp_36_fu_677_p1 ;
   tmp_i10_fu_433_p2__temp = tmp_i10_fu_433_p2 ;
   tmp_47_cast_fu_373_p1__temp = tmp_47_cast_fu_373_p1 ;
   tmp_i2_14_fu_625_p3__temp = tmp_i2_14_fu_625_p3 ;
   tmp_8_i_fu_697_p2__temp = tmp_8_i_fu_697_p2 ;
   tmp_i8_16_fu_425_p3__temp = tmp_i8_16_fu_425_p3 ;
   tmp_23_fu_413_p2__temp = tmp_23_fu_413_p2 ;
   tmp_30_i_fu_633_p2__temp = tmp_30_i_fu_633_p2 ;
   aSig_4_cast_fu_1059_p1__temp = aSig_4_cast_fu_1059_p1 ;
   tmp_i7_fu_845_p2__temp = tmp_i7_fu_845_p2 ;
   tmp_4_i_fu_1010_p2__temp = tmp_4_i_fu_1010_p2 ;
   tmp_45_fu_739_p2__temp = tmp_45_fu_739_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_204_ap_start_reg = 0 ;
       if(1 == ap_CS_fsm_state5)
       { 
	  long long int ans= !(4095)+1;
	  ans=-(ans);
	  //printf("zExp_3_reg_148__temp %llu\n",zExp_3_reg_148__temp);
          long long int ans3=ans+zExp_3_reg_148__temp;
	  //printf("ans=%lld\n",ans3);
	  //printf("ans1= %lld\n",ans1);

           zExp_2_reg_157 =   (  (  (  (  (  ( 2305843009213693952 | aSig_s_reg_139__temp  )  + bSig_s_reg_130__temp  )  >> 62 )  & 1 )  & 1 )  == 1 ? zExp_3_reg_148__temp  :  ans3 /*( do_twos_complement( 4095 )  + do_twos_complement( zExp_3_reg_148__temp  )  )*/  ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           zSig_1_reg_167 =   (  (  (  (  (  ( 2305843009213693952 | aSig_s_reg_139__temp  )  + bSig_s_reg_130__temp  )  >> 62 )  & 1 )  & 1 )  == 1 ?  (  ( 2305843009213693952 | aSig_s_reg_139__temp  )  + bSig_s_reg_130__temp  )  :   (  (  ( 2305843009213693952 | aSig_s_reg_139__temp  )  + bSig_s_reg_130__temp  )  << 1 )  ) ;
	  /*printf("bSig_s_reg_130__temp %llu\n",bSig_s_reg_130__temp);
	  printf("zSig_1_reg_167 %llu\n",zSig_1_reg_167);*/
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:
	clock=clock+1;
	//printf("state 6\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 1;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   aSig_1_fu_808_p4__temp = aSig_1_fu_808_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_19_fu_781_p2__temp = tmp_19_fu_781_p2 ;
   aExp_cast_fu_285_p1__temp = aExp_cast_fu_285_p1 ;
   tmp_24_fu_419_p2__temp = tmp_24_fu_419_p2 ;
   tmp_51_fu_561_p2__temp = tmp_51_fu_561_p2 ;
   icmp_fu_691_p2__temp = icmp_fu_691_p2 ;
   tmp_20_fu_525_p2__temp = tmp_20_fu_525_p2 ;
   aSig_2_reg_1271__temp = aSig_2_reg_1271 ;
   grp_fu_220_p0__temp = grp_fu_220_p0 ;
   expDiff_reg_1138__temp = expDiff_reg_1138 ;
   tmp_i7_reg_1283__temp = tmp_i7_reg_1283 ;
   aSig_2_cast_fu_824_p1__temp = aSig_2_cast_fu_824_p1 ;
   tmp_24_i1_fu_769_p2__temp = tmp_24_i1_fu_769_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld ;
   tmp_i4_fu_461_p2__temp = tmp_i4_fu_461_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o ;
   tmp_i7_15_fu_867_p1__temp = tmp_i7_15_fu_867_p1 ;
   tmp_1_i_fu_970_p2__temp = tmp_1_i_fu_970_p2 ;
   expDiff_2_reg_1239__temp = expDiff_2_reg_1239 ;
   tmp_i_11_fu_967_p1__temp = tmp_i_11_fu_967_p1 ;
   tmp_29_i_fu_403_p4__temp = tmp_29_i_fu_403_p4 ;
   tmp_i1_fu_745_p2__temp = tmp_i1_fu_745_p2 ;
   tmp_29_fu_383_p2__temp = tmp_29_fu_383_p2 ;
   bExp_fu_289_p4__temp = bExp_fu_289_p4 ;
   aSig_cast2_cast_fu_325_p1__temp = aSig_cast2_cast_fu_325_p1 ;
   bSig_cast1_cast_reg_1155__temp = bSig_cast1_cast_reg_1155 ;
   zExp_0_s_fu_1095_p3__temp = zExp_0_s_fu_1095_p3 ;
   bSig_cast1_fu_341_p1__temp = bSig_cast1_fu_341_p1 ;
   tmp_25_i4_fu_449_p2__temp = tmp_25_i4_fu_449_p2 ;
   aExp_reg_1122__temp = aExp_reg_1122 ;
   tmp_7_i_fu_962_p2__temp = tmp_7_i_fu_962_p2 ;
   aSig_s_reg_139__temp = aSig_s_reg_139 ;
   aSig_cast2_cast_reg_1149__temp = aSig_cast2_cast_reg_1149 ;
   bSig_cast1_cast_fu_345_p1__temp = bSig_cast1_cast_fu_345_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start__temp = grp_roundAndPackFloat64_fu_204_ap_start ;
   zExp_2_reg_157__temp = zExp_2_reg_157 ;
   tmp_27_reg_1144__temp = tmp_27_reg_1144 ;
   tmp_26_fu_603_p2__temp = tmp_26_fu_603_p2 ;
   sel_tmp_i_fu_1019_p2__temp = sel_tmp_i_fu_1019_p2 ;
   zExp_3_cast_fu_1049_p1__temp = zExp_3_cast_fu_1049_p1 ;
   z_4_fu_1038_p3__temp = z_4_fu_1038_p3 ;
   expDiff_2_cast_fu_645_p2__temp = expDiff_2_cast_fu_645_p2 ;
   tmp_8_i_reg_1250__temp = tmp_8_i_reg_1250 ;
   ap_phi_mux_p_0_phi_fu_180_p22__temp = ap_phi_mux_p_0_phi_fu_180_p22 ;
   bSig_1_fu_651_p4__temp = bSig_1_fu_651_p4 ;
   tmp_5_fu_900_p4__temp = tmp_5_fu_900_p4 ;
   tmp_42_fu_723_p1__temp = tmp_42_fu_723_p1 ;
   bSig_cast_fu_1045_p1__temp = bSig_cast_fu_1045_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start_reg__temp = grp_roundAndPackFloat64_fu_204_ap_start_reg ;
   tmp_47_fu_835_p1__temp = tmp_47_fu_835_p1 ;
   tmp_i8_fu_539_p2__temp = tmp_i8_fu_539_p2 ;
   tmp_25_reg_1172__temp = tmp_25_reg_1172 ;
   tmp_i_fu_954_p2__temp = tmp_i_fu_954_p2 ;
   tmp_2_i_fu_976_p2__temp = tmp_2_i_fu_976_p2 ;
   tmp_49_fu_891_p1__temp = tmp_49_fu_891_p1 ;
   tmp_16_fu_519_p2__temp = tmp_16_fu_519_p2 ;
   tmp_reg_1160__temp = tmp_reg_1160 ;
   tmp_24_i4_fu_443_p2__temp = tmp_24_i4_fu_443_p2 ;
   tmp_52_fu_587_p1__temp = tmp_52_fu_587_p1 ;
   sel_tmp_i1_fu_927_p2__temp = sel_tmp_i1_fu_927_p2 ;
   tmp_i5_fu_717_p2__temp = tmp_i5_fu_717_p2 ;
   z_5_fu_945_p3__temp = z_5_fu_945_p3 ;
   tmp_24_i5_fu_485_p2__temp = tmp_24_i5_fu_485_p2 ;
   tmp_6_i33_cast_fu_883_p1__temp = tmp_6_i33_cast_fu_883_p1 ;
   grp_fu_215_p2__temp = grp_fu_215_p2 ;
   tmp_55_fu_455_p2__temp = tmp_55_fu_455_p2 ;
   bSig_s_reg_130__temp = bSig_s_reg_130 ;
   tmp_43_fu_399_p1__temp = tmp_43_fu_399_p1 ;
   tmp_53_fu_1087_p3__temp = tmp_53_fu_1087_p3 ;
   grp_fu_235_p4__temp = grp_fu_235_p4 ;
   tmp_i1_17_fu_467_p3__temp = tmp_i1_17_fu_467_p3 ;
   b_assign_1_mux_fu_609_p3__temp = b_assign_1_mux_fu_609_p3 ;
   z_2_fu_937_p3__temp = z_2_fu_937_p3 ;
   tmp_i3_fu_567_p2__temp = tmp_i3_fu_567_p2 ;
   zSig_2_cast_fu_1069_p1__temp = zSig_2_cast_fu_1069_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_done__temp = grp_roundAndPackFloat64_fu_204_ap_done ;
   tmp_6_fu_910_p3__temp = tmp_6_fu_910_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_idle__temp = grp_roundAndPackFloat64_fu_204_ap_idle ;
   p_0_reg_177__temp = p_0_reg_177 ;
   tmp_2_i1_reg_1294__temp = tmp_2_i1_reg_1294 ;
   tmp_24_i3_fu_591_p2__temp = tmp_24_i3_fu_591_p2 ;
   tmp_27_fu_313_p1__temp = tmp_27_fu_313_p1 ;
   tmp_31_reg_1319__temp = tmp_31_reg_1319 ;
   tmp_16_reg_1202__temp = tmp_16_reg_1202 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_32_fu_329_p1__temp = tmp_32_fu_329_p1 ;
   tmp_30_fu_363_p4__temp = tmp_30_fu_363_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_i6_12_fu_573_p3__temp = tmp_i6_12_fu_573_p3 ;
   zSig_2_fu_1063_p2__temp = zSig_2_fu_1063_p2 ;
   tmp_48_fu_851_p4__temp = tmp_48_fu_851_p4 ;
   bExp_cast_fu_299_p1__temp = bExp_cast_fu_299_p1 ;
   tmp_28_fu_497_p2__temp = tmp_28_fu_497_p2 ;
   count_assign_1_reg_1278__temp = count_assign_1_reg_1278 ;
   float_exception_flag__temp = float_exception_flag ;
   zExp_4_fu_1081_p2__temp = zExp_4_fu_1081_p2 ;
   aSig_fu_317_p3__temp = aSig_fu_317_p3 ;
   zSig_fu_377_p2__temp = zSig_fu_377_p2 ;
   zSig_assign_fu_389_p4__temp = zSig_assign_fu_389_p4 ;
   tmp_56_fu_481_p1__temp = tmp_56_fu_481_p1 ;
   sel_tmp1_i_fu_1025_p2__temp = sel_tmp1_i_fu_1025_p2 ;
   tmp_50_fu_545_p1__temp = tmp_50_fu_545_p1 ;
   tmp_40_fu_982_p1__temp = tmp_40_fu_982_p1 ;
   tmp_i9_fu_709_p3__temp = tmp_i9_fu_709_p3 ;
   tmp_54_fu_439_p1__temp = tmp_54_fu_439_p1 ;
   zSig_1_reg_167__temp = zSig_1_reg_167 ;
   tmp_25_i3_fu_597_p2__temp = tmp_25_i3_fu_597_p2 ;
   bSig_fu_333_p3__temp = bSig_fu_333_p3 ;
   tmp_24_i2_fu_549_p2__temp = tmp_24_i2_fu_549_p2 ;
   aExp_fu_273_p4__temp = aExp_fu_273_p4 ;
   z_fu_1030_p3__temp = z_fu_1030_p3 ;
   expDiff_3_fu_803_p2__temp = expDiff_3_fu_803_p2 ;
   tmp_i5_10_fu_751_p3__temp = tmp_i5_10_fu_751_p3 ;
   tmp_46_fu_765_p1__temp = tmp_46_fu_765_p1 ;
   grp_fu_220_p2__temp = grp_fu_220_p2 ;
   expDiff_1_fu_828_p3__temp = expDiff_1_fu_828_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_return__temp = grp_roundAndPackFloat64_fu_204_ap_return ;
   tmp_2_i1_fu_877_p2__temp = tmp_2_i1_fu_877_p2 ;
   aSig_2_fu_817_p3__temp = aSig_2_fu_817_p3 ;
   z_1_cast_fu_1015_p1__temp = z_1_cast_fu_1015_p1 ;
   bSig_2_cast_fu_951_p1__temp = bSig_2_cast_fu_951_p1 ;
   bSig_2_fu_661_p3__temp = bSig_2_fu_661_p3 ;
   grp_fu_245_p2__temp = grp_fu_245_p2 ;
   a_assign_3_fu_795_p3__temp = a_assign_3_fu_795_p3 ;
   p_s_fu_1103_p3__temp = p_s_fu_1103_p3 ;
   expDiff_2_fu_669_p3__temp = expDiff_2_fu_669_p3 ;
   tmp_i6_fu_759_p2__temp = tmp_i6_fu_759_p2 ;
   tmp_25_i5_fu_491_p2__temp = tmp_25_i5_fu_491_p2 ;
   icmp8_reg_1289__temp = icmp8_reg_1289 ;
   tmp_10_i_fu_986_p2__temp = tmp_10_i_fu_986_p2 ;
   grp_roundAndPackFloat64_fu_204_ap_ready__temp = grp_roundAndPackFloat64_fu_204_ap_ready ;
   zExp_3_reg_148__temp = zExp_3_reg_148 ;
   tmp_22_fu_309_p1__temp = tmp_22_fu_309_p1 ;
   a_assign_4_fu_617_p3__temp = a_assign_4_fu_617_p3 ;
   tmp_38_fu_681_p4__temp = tmp_38_fu_681_p4 ;
   tmp_34_fu_355_p3__temp = tmp_34_fu_355_p3 ;
   zSig_3_fu_1073_p3__temp = zSig_3_fu_1073_p3 ;
   z_5_cast_fu_923_p1__temp = z_5_cast_fu_923_p1 ;
   tmp_fu_349_p2__temp = tmp_fu_349_p2 ;
   b_assign_2_mux_fu_503_p3__temp = b_assign_2_mux_fu_503_p3 ;
   icmp8_fu_861_p2__temp = icmp8_fu_861_p2 ;
   count_assign_1_fu_839_p2__temp = count_assign_1_fu_839_p2 ;
   tmp_24_i_fu_727_p2__temp = tmp_24_i_fu_727_p2 ;
   tmp_25_i2_fu_555_p2__temp = tmp_25_i2_fu_555_p2 ;
   grp_fu_261_p2__temp = grp_fu_261_p2 ;
   tmp_25_i_fu_733_p2__temp = tmp_25_i_fu_733_p2 ;
   tmp_i2_fu_531_p3__temp = tmp_i2_fu_531_p3 ;
   aSig_4_fu_1053_p2__temp = aSig_4_fu_1053_p2 ;
   tmp_1_i1_fu_871_p2__temp = tmp_1_i1_fu_871_p2 ;
   grp_fu_225_p4__temp = grp_fu_225_p4 ;
   tmp_4_fu_1002_p3__temp = tmp_4_fu_1002_p3 ;
   tmp_3_fu_992_p4__temp = tmp_3_fu_992_p4 ;
   tmp_i11_fu_475_p2__temp = tmp_i11_fu_475_p2 ;
   a_assign_5_fu_511_p3__temp = a_assign_5_fu_511_p3 ;
   bSig_2_reg_1231__temp = bSig_2_reg_1231 ;
   tmp_i9_13_fu_581_p2__temp = tmp_i9_13_fu_581_p2 ;
   tmp_10_i1_fu_895_p2__temp = tmp_10_i1_fu_895_p2 ;
   tmp_25_i1_fu_775_p2__temp = tmp_25_i1_fu_775_p2 ;
   expDiff_fu_303_p2__temp = expDiff_fu_303_p2 ;
   tmp_14_fu_703_p2__temp = tmp_14_fu_703_p2 ;
   sel_tmp1_i1_fu_932_p2__temp = sel_tmp1_i1_fu_932_p2 ;
   tmp_17_reg_1168__temp = tmp_17_reg_1168 ;
   tmp_15_fu_639_p2__temp = tmp_15_fu_639_p2 ;
   icmp_reg_1245__temp = icmp_reg_1245 ;
   grp_fu_251_p2__temp = grp_fu_251_p2 ;
   tmp_7_i1_fu_886_p2__temp = tmp_7_i1_fu_886_p2 ;
   bExp_reg_1133__temp = bExp_reg_1133 ;
   tmp_34_reg_1164__temp = tmp_34_reg_1164 ;
   tmp_6_i_cast_fu_959_p1__temp = tmp_6_i_cast_fu_959_p1 ;
   tmp_4_i1_fu_918_p2__temp = tmp_4_i1_fu_918_p2 ;
   tmp_s_reg_1227__temp = tmp_s_reg_1227 ;
   b_assign_mux_fu_787_p3__temp = b_assign_mux_fu_787_p3 ;
   tmp_36_fu_677_p1__temp = tmp_36_fu_677_p1 ;
   tmp_i10_fu_433_p2__temp = tmp_i10_fu_433_p2 ;
   tmp_47_cast_fu_373_p1__temp = tmp_47_cast_fu_373_p1 ;
   tmp_i2_14_fu_625_p3__temp = tmp_i2_14_fu_625_p3 ;
   tmp_8_i_fu_697_p2__temp = tmp_8_i_fu_697_p2 ;
   tmp_i8_16_fu_425_p3__temp = tmp_i8_16_fu_425_p3 ;
   tmp_23_fu_413_p2__temp = tmp_23_fu_413_p2 ;
   tmp_30_i_fu_633_p2__temp = tmp_30_i_fu_633_p2 ;
   aSig_4_cast_fu_1059_p1__temp = aSig_4_cast_fu_1059_p1 ;
   tmp_i7_fu_845_p2__temp = tmp_i7_fu_845_p2 ;
   tmp_4_i_fu_1010_p2__temp = tmp_4_i_fu_1010_p2 ;
   tmp_45_fu_739_p2__temp = tmp_45_fu_739_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_204_ap_start_reg = 0 ;
       if(1 == ap_CS_fsm_state6)
       {
           grp_roundAndPackFloat64_fu_204_ap_start_reg =  1;
       }
	/*printf("zExp_2_reg_157 %llu\n",zExp_2_reg_157);
	printf("zSig_1_reg_167 %llu\n",zSig_1_reg_167);
	printf("zSign %llu\n",zSign);*/
if (grp_roundAndPackFloat64_fu_204_ap_start_reg==1){
grp_roundAndPackFloat64_fu_204_ap_start=1;
roundAndPackFloat64(&ap_clk,&grp_roundAndPackFloat64_fu_204_ap_done,&grp_roundAndPackFloat64_fu_204_ap_idle,&grp_roundAndPackFloat64_fu_204_ap_ready,&grp_roundAndPackFloat64_fu_204_ap_return,&ap_rst,&grp_roundAndPackFloat64_fu_204_ap_start,&float_exception_flag,&grp_roundAndPackFloat64_fu_204_float_exception_flag_o,&grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld,&zExp_2_reg_157,&zSig_1_reg_167,&zSign,&clock);
grp_roundAndPackFloat64_fu_204_ap_done=1;
}
       goto ap_ST_fsm_state7;

   ap_ST_fsm_state7:
	clock=clock+1;
	//printf("state 7\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 1;
	ap_CS_fsm_state8 = 0;
   aSig_1_fu_808_p4__temp = aSig_1_fu_808_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_19_fu_781_p2__temp = tmp_19_fu_781_p2 ;
   aExp_cast_fu_285_p1__temp = aExp_cast_fu_285_p1 ;
   tmp_24_fu_419_p2__temp = tmp_24_fu_419_p2 ;
   tmp_51_fu_561_p2__temp = tmp_51_fu_561_p2 ;
   icmp_fu_691_p2__temp = icmp_fu_691_p2 ;
   tmp_20_fu_525_p2__temp = tmp_20_fu_525_p2 ;
   aSig_2_reg_1271__temp = aSig_2_reg_1271 ;
   grp_fu_220_p0__temp = grp_fu_220_p0 ;
   expDiff_reg_1138__temp = expDiff_reg_1138 ;
   tmp_i7_reg_1283__temp = tmp_i7_reg_1283 ;
   aSig_2_cast_fu_824_p1__temp = aSig_2_cast_fu_824_p1 ;
   tmp_24_i1_fu_769_p2__temp = tmp_24_i1_fu_769_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld ;
   tmp_i4_fu_461_p2__temp = tmp_i4_fu_461_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o ;
   tmp_i7_15_fu_867_p1__temp = tmp_i7_15_fu_867_p1 ;
   tmp_1_i_fu_970_p2__temp = tmp_1_i_fu_970_p2 ;
   expDiff_2_reg_1239__temp = expDiff_2_reg_1239 ;
   tmp_i_11_fu_967_p1__temp = tmp_i_11_fu_967_p1 ;
   tmp_29_i_fu_403_p4__temp = tmp_29_i_fu_403_p4 ;
   tmp_i1_fu_745_p2__temp = tmp_i1_fu_745_p2 ;
   tmp_29_fu_383_p2__temp = tmp_29_fu_383_p2 ;
   bExp_fu_289_p4__temp = bExp_fu_289_p4 ;
   aSig_cast2_cast_fu_325_p1__temp = aSig_cast2_cast_fu_325_p1 ;
   bSig_cast1_cast_reg_1155__temp = bSig_cast1_cast_reg_1155 ;
   zExp_0_s_fu_1095_p3__temp = zExp_0_s_fu_1095_p3 ;
   bSig_cast1_fu_341_p1__temp = bSig_cast1_fu_341_p1 ;
   tmp_25_i4_fu_449_p2__temp = tmp_25_i4_fu_449_p2 ;
   aExp_reg_1122__temp = aExp_reg_1122 ;
   tmp_7_i_fu_962_p2__temp = tmp_7_i_fu_962_p2 ;
   aSig_s_reg_139__temp = aSig_s_reg_139 ;
   aSig_cast2_cast_reg_1149__temp = aSig_cast2_cast_reg_1149 ;
   bSig_cast1_cast_fu_345_p1__temp = bSig_cast1_cast_fu_345_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start__temp = grp_roundAndPackFloat64_fu_204_ap_start ;
   zExp_2_reg_157__temp = zExp_2_reg_157 ;
   tmp_27_reg_1144__temp = tmp_27_reg_1144 ;
   tmp_26_fu_603_p2__temp = tmp_26_fu_603_p2 ;
   sel_tmp_i_fu_1019_p2__temp = sel_tmp_i_fu_1019_p2 ;
   zExp_3_cast_fu_1049_p1__temp = zExp_3_cast_fu_1049_p1 ;
   z_4_fu_1038_p3__temp = z_4_fu_1038_p3 ;
   expDiff_2_cast_fu_645_p2__temp = expDiff_2_cast_fu_645_p2 ;
   tmp_8_i_reg_1250__temp = tmp_8_i_reg_1250 ;
   ap_phi_mux_p_0_phi_fu_180_p22__temp = ap_phi_mux_p_0_phi_fu_180_p22 ;
   bSig_1_fu_651_p4__temp = bSig_1_fu_651_p4 ;
   tmp_5_fu_900_p4__temp = tmp_5_fu_900_p4 ;
   tmp_42_fu_723_p1__temp = tmp_42_fu_723_p1 ;
   bSig_cast_fu_1045_p1__temp = bSig_cast_fu_1045_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start_reg__temp = grp_roundAndPackFloat64_fu_204_ap_start_reg ;
   tmp_47_fu_835_p1__temp = tmp_47_fu_835_p1 ;
   tmp_i8_fu_539_p2__temp = tmp_i8_fu_539_p2 ;
   tmp_25_reg_1172__temp = tmp_25_reg_1172 ;
   tmp_i_fu_954_p2__temp = tmp_i_fu_954_p2 ;
   tmp_2_i_fu_976_p2__temp = tmp_2_i_fu_976_p2 ;
   tmp_49_fu_891_p1__temp = tmp_49_fu_891_p1 ;
   tmp_16_fu_519_p2__temp = tmp_16_fu_519_p2 ;
   tmp_reg_1160__temp = tmp_reg_1160 ;
   tmp_24_i4_fu_443_p2__temp = tmp_24_i4_fu_443_p2 ;
   tmp_52_fu_587_p1__temp = tmp_52_fu_587_p1 ;
   sel_tmp_i1_fu_927_p2__temp = sel_tmp_i1_fu_927_p2 ;
   tmp_i5_fu_717_p2__temp = tmp_i5_fu_717_p2 ;
   z_5_fu_945_p3__temp = z_5_fu_945_p3 ;
   tmp_24_i5_fu_485_p2__temp = tmp_24_i5_fu_485_p2 ;
   tmp_6_i33_cast_fu_883_p1__temp = tmp_6_i33_cast_fu_883_p1 ;
   grp_fu_215_p2__temp = grp_fu_215_p2 ;
   tmp_55_fu_455_p2__temp = tmp_55_fu_455_p2 ;
   bSig_s_reg_130__temp = bSig_s_reg_130 ;
   tmp_43_fu_399_p1__temp = tmp_43_fu_399_p1 ;
   tmp_53_fu_1087_p3__temp = tmp_53_fu_1087_p3 ;
   grp_fu_235_p4__temp = grp_fu_235_p4 ;
   tmp_i1_17_fu_467_p3__temp = tmp_i1_17_fu_467_p3 ;
   b_assign_1_mux_fu_609_p3__temp = b_assign_1_mux_fu_609_p3 ;
   z_2_fu_937_p3__temp = z_2_fu_937_p3 ;
   tmp_i3_fu_567_p2__temp = tmp_i3_fu_567_p2 ;
   zSig_2_cast_fu_1069_p1__temp = zSig_2_cast_fu_1069_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_done__temp = grp_roundAndPackFloat64_fu_204_ap_done ;
   tmp_6_fu_910_p3__temp = tmp_6_fu_910_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_idle__temp = grp_roundAndPackFloat64_fu_204_ap_idle ;
   p_0_reg_177__temp = p_0_reg_177 ;
   tmp_2_i1_reg_1294__temp = tmp_2_i1_reg_1294 ;
   tmp_24_i3_fu_591_p2__temp = tmp_24_i3_fu_591_p2 ;
   tmp_27_fu_313_p1__temp = tmp_27_fu_313_p1 ;
   tmp_31_reg_1319__temp = tmp_31_reg_1319 ;
   tmp_16_reg_1202__temp = tmp_16_reg_1202 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_32_fu_329_p1__temp = tmp_32_fu_329_p1 ;
   tmp_30_fu_363_p4__temp = tmp_30_fu_363_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_i6_12_fu_573_p3__temp = tmp_i6_12_fu_573_p3 ;
   zSig_2_fu_1063_p2__temp = zSig_2_fu_1063_p2 ;
   tmp_48_fu_851_p4__temp = tmp_48_fu_851_p4 ;
   bExp_cast_fu_299_p1__temp = bExp_cast_fu_299_p1 ;
   tmp_28_fu_497_p2__temp = tmp_28_fu_497_p2 ;
   count_assign_1_reg_1278__temp = count_assign_1_reg_1278 ;
   float_exception_flag__temp = float_exception_flag ;
   zExp_4_fu_1081_p2__temp = zExp_4_fu_1081_p2 ;
   aSig_fu_317_p3__temp = aSig_fu_317_p3 ;
   zSig_fu_377_p2__temp = zSig_fu_377_p2 ;
   zSig_assign_fu_389_p4__temp = zSig_assign_fu_389_p4 ;
   tmp_56_fu_481_p1__temp = tmp_56_fu_481_p1 ;
   sel_tmp1_i_fu_1025_p2__temp = sel_tmp1_i_fu_1025_p2 ;
   tmp_50_fu_545_p1__temp = tmp_50_fu_545_p1 ;
   tmp_40_fu_982_p1__temp = tmp_40_fu_982_p1 ;
   tmp_i9_fu_709_p3__temp = tmp_i9_fu_709_p3 ;
   tmp_54_fu_439_p1__temp = tmp_54_fu_439_p1 ;
   zSig_1_reg_167__temp = zSig_1_reg_167 ;
   tmp_25_i3_fu_597_p2__temp = tmp_25_i3_fu_597_p2 ;
   bSig_fu_333_p3__temp = bSig_fu_333_p3 ;
   tmp_24_i2_fu_549_p2__temp = tmp_24_i2_fu_549_p2 ;
   aExp_fu_273_p4__temp = aExp_fu_273_p4 ;
   z_fu_1030_p3__temp = z_fu_1030_p3 ;
   expDiff_3_fu_803_p2__temp = expDiff_3_fu_803_p2 ;
   tmp_i5_10_fu_751_p3__temp = tmp_i5_10_fu_751_p3 ;
   tmp_46_fu_765_p1__temp = tmp_46_fu_765_p1 ;
   grp_fu_220_p2__temp = grp_fu_220_p2 ;
   expDiff_1_fu_828_p3__temp = expDiff_1_fu_828_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_return__temp = grp_roundAndPackFloat64_fu_204_ap_return ;
   tmp_2_i1_fu_877_p2__temp = tmp_2_i1_fu_877_p2 ;
   aSig_2_fu_817_p3__temp = aSig_2_fu_817_p3 ;
   z_1_cast_fu_1015_p1__temp = z_1_cast_fu_1015_p1 ;
   bSig_2_cast_fu_951_p1__temp = bSig_2_cast_fu_951_p1 ;
   bSig_2_fu_661_p3__temp = bSig_2_fu_661_p3 ;
   grp_fu_245_p2__temp = grp_fu_245_p2 ;
   a_assign_3_fu_795_p3__temp = a_assign_3_fu_795_p3 ;
   p_s_fu_1103_p3__temp = p_s_fu_1103_p3 ;
   expDiff_2_fu_669_p3__temp = expDiff_2_fu_669_p3 ;
   tmp_i6_fu_759_p2__temp = tmp_i6_fu_759_p2 ;
   tmp_25_i5_fu_491_p2__temp = tmp_25_i5_fu_491_p2 ;
   icmp8_reg_1289__temp = icmp8_reg_1289 ;
   tmp_10_i_fu_986_p2__temp = tmp_10_i_fu_986_p2 ;
   grp_roundAndPackFloat64_fu_204_ap_ready__temp = grp_roundAndPackFloat64_fu_204_ap_ready ;
   zExp_3_reg_148__temp = zExp_3_reg_148 ;
   tmp_22_fu_309_p1__temp = tmp_22_fu_309_p1 ;
   a_assign_4_fu_617_p3__temp = a_assign_4_fu_617_p3 ;
   tmp_38_fu_681_p4__temp = tmp_38_fu_681_p4 ;
   tmp_34_fu_355_p3__temp = tmp_34_fu_355_p3 ;
   zSig_3_fu_1073_p3__temp = zSig_3_fu_1073_p3 ;
   z_5_cast_fu_923_p1__temp = z_5_cast_fu_923_p1 ;
   tmp_fu_349_p2__temp = tmp_fu_349_p2 ;
   b_assign_2_mux_fu_503_p3__temp = b_assign_2_mux_fu_503_p3 ;
   icmp8_fu_861_p2__temp = icmp8_fu_861_p2 ;
   count_assign_1_fu_839_p2__temp = count_assign_1_fu_839_p2 ;
   tmp_24_i_fu_727_p2__temp = tmp_24_i_fu_727_p2 ;
   tmp_25_i2_fu_555_p2__temp = tmp_25_i2_fu_555_p2 ;
   grp_fu_261_p2__temp = grp_fu_261_p2 ;
   tmp_25_i_fu_733_p2__temp = tmp_25_i_fu_733_p2 ;
   tmp_i2_fu_531_p3__temp = tmp_i2_fu_531_p3 ;
   aSig_4_fu_1053_p2__temp = aSig_4_fu_1053_p2 ;
   tmp_1_i1_fu_871_p2__temp = tmp_1_i1_fu_871_p2 ;
   grp_fu_225_p4__temp = grp_fu_225_p4 ;
   tmp_4_fu_1002_p3__temp = tmp_4_fu_1002_p3 ;
   tmp_3_fu_992_p4__temp = tmp_3_fu_992_p4 ;
   tmp_i11_fu_475_p2__temp = tmp_i11_fu_475_p2 ;
   a_assign_5_fu_511_p3__temp = a_assign_5_fu_511_p3 ;
   bSig_2_reg_1231__temp = bSig_2_reg_1231 ;
   tmp_i9_13_fu_581_p2__temp = tmp_i9_13_fu_581_p2 ;
   tmp_10_i1_fu_895_p2__temp = tmp_10_i1_fu_895_p2 ;
   tmp_25_i1_fu_775_p2__temp = tmp_25_i1_fu_775_p2 ;
   expDiff_fu_303_p2__temp = expDiff_fu_303_p2 ;
   tmp_14_fu_703_p2__temp = tmp_14_fu_703_p2 ;
   sel_tmp1_i1_fu_932_p2__temp = sel_tmp1_i1_fu_932_p2 ;
   tmp_17_reg_1168__temp = tmp_17_reg_1168 ;
   tmp_15_fu_639_p2__temp = tmp_15_fu_639_p2 ;
   icmp_reg_1245__temp = icmp_reg_1245 ;
   grp_fu_251_p2__temp = grp_fu_251_p2 ;
   tmp_7_i1_fu_886_p2__temp = tmp_7_i1_fu_886_p2 ;
   bExp_reg_1133__temp = bExp_reg_1133 ;
   tmp_34_reg_1164__temp = tmp_34_reg_1164 ;
   tmp_6_i_cast_fu_959_p1__temp = tmp_6_i_cast_fu_959_p1 ;
   tmp_4_i1_fu_918_p2__temp = tmp_4_i1_fu_918_p2 ;
   tmp_s_reg_1227__temp = tmp_s_reg_1227 ;
   b_assign_mux_fu_787_p3__temp = b_assign_mux_fu_787_p3 ;
   tmp_36_fu_677_p1__temp = tmp_36_fu_677_p1 ;
   tmp_i10_fu_433_p2__temp = tmp_i10_fu_433_p2 ;
   tmp_47_cast_fu_373_p1__temp = tmp_47_cast_fu_373_p1 ;
   tmp_i2_14_fu_625_p3__temp = tmp_i2_14_fu_625_p3 ;
   tmp_8_i_fu_697_p2__temp = tmp_8_i_fu_697_p2 ;
   tmp_i8_16_fu_425_p3__temp = tmp_i8_16_fu_425_p3 ;
   tmp_23_fu_413_p2__temp = tmp_23_fu_413_p2 ;
   tmp_30_i_fu_633_p2__temp = tmp_30_i_fu_633_p2 ;
   aSig_4_cast_fu_1059_p1__temp = aSig_4_cast_fu_1059_p1 ;
   tmp_i7_fu_845_p2__temp = tmp_i7_fu_845_p2 ;
   tmp_4_i_fu_1010_p2__temp = tmp_4_i_fu_1010_p2 ;
   tmp_45_fu_739_p2__temp = tmp_45_fu_739_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_204_ap_start_reg = 0 ;
               tmp_20_fu_525_p2 =   (  (  ( b & 4503599627370495 )  << 9 )  == 0 ? 1 :  0 ) ;
              /* tmp_fu_349_p2 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;*/
		//tmp_fu_349_p2 =(((a>>52)&2047)-((b>>52)&2047)) > 0 ? 1:0 ;

                /*int a101=(a>>52)&2047;
		int b101=(b>>52)&2047;
		
		int tempp1= a101-b101 > 0 ? 1:0;*/
		//tmp_fu_349_p2=tmp_fu_349_p2;

               tmp_16_fu_519_p2 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_28_fu_497_p2 =   (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               grp_fu_215_p2 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_34_fu_355_p3 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
               tmp_26_fu_603_p2 =   (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_19_fu_781_p2 =   (  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_24_fu_419_p2 =   (  (  (  ( b & 4503599627370495 )  << 9 )  |  (  ( a & 4503599627370495 )  << 9 )  )  == 0 ? 1 :  0 ) ;
               tmp_14_fu_703_p2 =   (  (  ( a & 4503599627370495 )  << 9 )  == 0 ? 1 :  0 ) ;
   if(((1 == ap_CS_fsm_state7) && (grp_roundAndPackFloat64_fu_204_ap_done == 1)) == 1){
       if((grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld == 1) && (1 == ap_CS_fsm_state7))
       {
           float_exception_flag =  grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp ;
       }
       if((1 == ap_CS_fsm_state7) && (grp_roundAndPackFloat64_fu_204_ap_done == 1))
       {
           tmp_31_reg_1319 =  grp_roundAndPackFloat64_fu_204_ap_return__temp ;
	  //printf("tmp_31_reg_1319 %llu\n",tmp_31_reg_1319);
       }
       goto ap_ST_fsm_state8;
   }
   if(((1 == ap_CS_fsm_state7) && (grp_roundAndPackFloat64_fu_204_ap_done == 1)) == 0){
       if((grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld == 1) && (1 == ap_CS_fsm_state7))
       {
               float_exception_flag =  grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp ;
       }
       if((1 == ap_CS_fsm_state7) && (grp_roundAndPackFloat64_fu_204_ap_done == 1))
       {
               tmp_31_reg_1319 =  grp_roundAndPackFloat64_fu_204_ap_return__temp ;
       }
       goto ap_ST_fsm_state7;
   }

   ap_ST_fsm_state8:
	//clock=clock+1;
	//printf("state 8\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 1;
   aSig_1_fu_808_p4__temp = aSig_1_fu_808_p4 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_19_fu_781_p2__temp = tmp_19_fu_781_p2 ;
   aExp_cast_fu_285_p1__temp = aExp_cast_fu_285_p1 ;
   tmp_24_fu_419_p2__temp = tmp_24_fu_419_p2 ;
   tmp_51_fu_561_p2__temp = tmp_51_fu_561_p2 ;
   icmp_fu_691_p2__temp = icmp_fu_691_p2 ;
   tmp_20_fu_525_p2__temp = tmp_20_fu_525_p2 ;
   aSig_2_reg_1271__temp = aSig_2_reg_1271 ;
   grp_fu_220_p0__temp = grp_fu_220_p0 ;
   expDiff_reg_1138__temp = expDiff_reg_1138 ;
   tmp_i7_reg_1283__temp = tmp_i7_reg_1283 ;
   aSig_2_cast_fu_824_p1__temp = aSig_2_cast_fu_824_p1 ;
   tmp_24_i1_fu_769_p2__temp = tmp_24_i1_fu_769_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o_ap_vld ;
   tmp_i4_fu_461_p2__temp = tmp_i4_fu_461_p2 ;
   grp_roundAndPackFloat64_fu_204_float_exception_flag_o__temp = grp_roundAndPackFloat64_fu_204_float_exception_flag_o ;
   tmp_i7_15_fu_867_p1__temp = tmp_i7_15_fu_867_p1 ;
   tmp_1_i_fu_970_p2__temp = tmp_1_i_fu_970_p2 ;
   expDiff_2_reg_1239__temp = expDiff_2_reg_1239 ;
   tmp_i_11_fu_967_p1__temp = tmp_i_11_fu_967_p1 ;
   tmp_29_i_fu_403_p4__temp = tmp_29_i_fu_403_p4 ;
   tmp_i1_fu_745_p2__temp = tmp_i1_fu_745_p2 ;
   tmp_29_fu_383_p2__temp = tmp_29_fu_383_p2 ;
   bExp_fu_289_p4__temp = bExp_fu_289_p4 ;
   aSig_cast2_cast_fu_325_p1__temp = aSig_cast2_cast_fu_325_p1 ;
   bSig_cast1_cast_reg_1155__temp = bSig_cast1_cast_reg_1155 ;
   zExp_0_s_fu_1095_p3__temp = zExp_0_s_fu_1095_p3 ;
   bSig_cast1_fu_341_p1__temp = bSig_cast1_fu_341_p1 ;
   tmp_25_i4_fu_449_p2__temp = tmp_25_i4_fu_449_p2 ;
   aExp_reg_1122__temp = aExp_reg_1122 ;
   tmp_7_i_fu_962_p2__temp = tmp_7_i_fu_962_p2 ;
   aSig_s_reg_139__temp = aSig_s_reg_139 ;
   aSig_cast2_cast_reg_1149__temp = aSig_cast2_cast_reg_1149 ;
   bSig_cast1_cast_fu_345_p1__temp = bSig_cast1_cast_fu_345_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start__temp = grp_roundAndPackFloat64_fu_204_ap_start ;
   zExp_2_reg_157__temp = zExp_2_reg_157 ;
   tmp_27_reg_1144__temp = tmp_27_reg_1144 ;
   tmp_26_fu_603_p2__temp = tmp_26_fu_603_p2 ;
   sel_tmp_i_fu_1019_p2__temp = sel_tmp_i_fu_1019_p2 ;
   zExp_3_cast_fu_1049_p1__temp = zExp_3_cast_fu_1049_p1 ;
   z_4_fu_1038_p3__temp = z_4_fu_1038_p3 ;
   expDiff_2_cast_fu_645_p2__temp = expDiff_2_cast_fu_645_p2 ;
   tmp_8_i_reg_1250__temp = tmp_8_i_reg_1250 ;
   ap_phi_mux_p_0_phi_fu_180_p22__temp = ap_phi_mux_p_0_phi_fu_180_p22 ;
   bSig_1_fu_651_p4__temp = bSig_1_fu_651_p4 ;
   tmp_5_fu_900_p4__temp = tmp_5_fu_900_p4 ;
   tmp_42_fu_723_p1__temp = tmp_42_fu_723_p1 ;
   bSig_cast_fu_1045_p1__temp = bSig_cast_fu_1045_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_start_reg__temp = grp_roundAndPackFloat64_fu_204_ap_start_reg ;
   tmp_47_fu_835_p1__temp = tmp_47_fu_835_p1 ;
   tmp_i8_fu_539_p2__temp = tmp_i8_fu_539_p2 ;
   tmp_25_reg_1172__temp = tmp_25_reg_1172 ;
   tmp_i_fu_954_p2__temp = tmp_i_fu_954_p2 ;
   tmp_2_i_fu_976_p2__temp = tmp_2_i_fu_976_p2 ;
   tmp_49_fu_891_p1__temp = tmp_49_fu_891_p1 ;
   tmp_16_fu_519_p2__temp = tmp_16_fu_519_p2 ;
   tmp_reg_1160__temp = tmp_reg_1160 ;
   tmp_24_i4_fu_443_p2__temp = tmp_24_i4_fu_443_p2 ;
   tmp_52_fu_587_p1__temp = tmp_52_fu_587_p1 ;
   sel_tmp_i1_fu_927_p2__temp = sel_tmp_i1_fu_927_p2 ;
   tmp_i5_fu_717_p2__temp = tmp_i5_fu_717_p2 ;
   z_5_fu_945_p3__temp = z_5_fu_945_p3 ;
   tmp_24_i5_fu_485_p2__temp = tmp_24_i5_fu_485_p2 ;
   tmp_6_i33_cast_fu_883_p1__temp = tmp_6_i33_cast_fu_883_p1 ;
   grp_fu_215_p2__temp = grp_fu_215_p2 ;
   tmp_55_fu_455_p2__temp = tmp_55_fu_455_p2 ;
   bSig_s_reg_130__temp = bSig_s_reg_130 ;
   tmp_43_fu_399_p1__temp = tmp_43_fu_399_p1 ;
   tmp_53_fu_1087_p3__temp = tmp_53_fu_1087_p3 ;
   grp_fu_235_p4__temp = grp_fu_235_p4 ;
   tmp_i1_17_fu_467_p3__temp = tmp_i1_17_fu_467_p3 ;
   b_assign_1_mux_fu_609_p3__temp = b_assign_1_mux_fu_609_p3 ;
   z_2_fu_937_p3__temp = z_2_fu_937_p3 ;
   tmp_i3_fu_567_p2__temp = tmp_i3_fu_567_p2 ;
   zSig_2_cast_fu_1069_p1__temp = zSig_2_cast_fu_1069_p1 ;
   grp_roundAndPackFloat64_fu_204_ap_done__temp = grp_roundAndPackFloat64_fu_204_ap_done ;
   tmp_6_fu_910_p3__temp = tmp_6_fu_910_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_idle__temp = grp_roundAndPackFloat64_fu_204_ap_idle ;
   p_0_reg_177__temp = p_0_reg_177 ;
   tmp_2_i1_reg_1294__temp = tmp_2_i1_reg_1294 ;
   tmp_24_i3_fu_591_p2__temp = tmp_24_i3_fu_591_p2 ;
   tmp_27_fu_313_p1__temp = tmp_27_fu_313_p1 ;
   tmp_31_reg_1319__temp = tmp_31_reg_1319 ;
   tmp_16_reg_1202__temp = tmp_16_reg_1202 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_32_fu_329_p1__temp = tmp_32_fu_329_p1 ;
   tmp_30_fu_363_p4__temp = tmp_30_fu_363_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_i6_12_fu_573_p3__temp = tmp_i6_12_fu_573_p3 ;
   zSig_2_fu_1063_p2__temp = zSig_2_fu_1063_p2 ;
   tmp_48_fu_851_p4__temp = tmp_48_fu_851_p4 ;
   bExp_cast_fu_299_p1__temp = bExp_cast_fu_299_p1 ;
   tmp_28_fu_497_p2__temp = tmp_28_fu_497_p2 ;
   count_assign_1_reg_1278__temp = count_assign_1_reg_1278 ;
   float_exception_flag__temp = float_exception_flag ;
   zExp_4_fu_1081_p2__temp = zExp_4_fu_1081_p2 ;
   aSig_fu_317_p3__temp = aSig_fu_317_p3 ;
   zSig_fu_377_p2__temp = zSig_fu_377_p2 ;
   zSig_assign_fu_389_p4__temp = zSig_assign_fu_389_p4 ;
   tmp_56_fu_481_p1__temp = tmp_56_fu_481_p1 ;
   sel_tmp1_i_fu_1025_p2__temp = sel_tmp1_i_fu_1025_p2 ;
   tmp_50_fu_545_p1__temp = tmp_50_fu_545_p1 ;
   tmp_40_fu_982_p1__temp = tmp_40_fu_982_p1 ;
   tmp_i9_fu_709_p3__temp = tmp_i9_fu_709_p3 ;
   tmp_54_fu_439_p1__temp = tmp_54_fu_439_p1 ;
   zSig_1_reg_167__temp = zSig_1_reg_167 ;
   tmp_25_i3_fu_597_p2__temp = tmp_25_i3_fu_597_p2 ;
   bSig_fu_333_p3__temp = bSig_fu_333_p3 ;
   tmp_24_i2_fu_549_p2__temp = tmp_24_i2_fu_549_p2 ;
   aExp_fu_273_p4__temp = aExp_fu_273_p4 ;
   z_fu_1030_p3__temp = z_fu_1030_p3 ;
   expDiff_3_fu_803_p2__temp = expDiff_3_fu_803_p2 ;
   tmp_i5_10_fu_751_p3__temp = tmp_i5_10_fu_751_p3 ;
   tmp_46_fu_765_p1__temp = tmp_46_fu_765_p1 ;
   grp_fu_220_p2__temp = grp_fu_220_p2 ;
   expDiff_1_fu_828_p3__temp = expDiff_1_fu_828_p3 ;
   grp_roundAndPackFloat64_fu_204_ap_return__temp = grp_roundAndPackFloat64_fu_204_ap_return ;
   tmp_2_i1_fu_877_p2__temp = tmp_2_i1_fu_877_p2 ;
   aSig_2_fu_817_p3__temp = aSig_2_fu_817_p3 ;
   z_1_cast_fu_1015_p1__temp = z_1_cast_fu_1015_p1 ;
   bSig_2_cast_fu_951_p1__temp = bSig_2_cast_fu_951_p1 ;
   bSig_2_fu_661_p3__temp = bSig_2_fu_661_p3 ;
   grp_fu_245_p2__temp = grp_fu_245_p2 ;
   a_assign_3_fu_795_p3__temp = a_assign_3_fu_795_p3 ;
   p_s_fu_1103_p3__temp = p_s_fu_1103_p3 ;
   expDiff_2_fu_669_p3__temp = expDiff_2_fu_669_p3 ;
   tmp_i6_fu_759_p2__temp = tmp_i6_fu_759_p2 ;
   tmp_25_i5_fu_491_p2__temp = tmp_25_i5_fu_491_p2 ;
   icmp8_reg_1289__temp = icmp8_reg_1289 ;
   tmp_10_i_fu_986_p2__temp = tmp_10_i_fu_986_p2 ;
   grp_roundAndPackFloat64_fu_204_ap_ready__temp = grp_roundAndPackFloat64_fu_204_ap_ready ;
   zExp_3_reg_148__temp = zExp_3_reg_148 ;
   tmp_22_fu_309_p1__temp = tmp_22_fu_309_p1 ;
   a_assign_4_fu_617_p3__temp = a_assign_4_fu_617_p3 ;
   tmp_38_fu_681_p4__temp = tmp_38_fu_681_p4 ;
   tmp_34_fu_355_p3__temp = tmp_34_fu_355_p3 ;
   zSig_3_fu_1073_p3__temp = zSig_3_fu_1073_p3 ;
   z_5_cast_fu_923_p1__temp = z_5_cast_fu_923_p1 ;
   tmp_fu_349_p2__temp = tmp_fu_349_p2 ;
   b_assign_2_mux_fu_503_p3__temp = b_assign_2_mux_fu_503_p3 ;
   icmp8_fu_861_p2__temp = icmp8_fu_861_p2 ;
   count_assign_1_fu_839_p2__temp = count_assign_1_fu_839_p2 ;
   tmp_24_i_fu_727_p2__temp = tmp_24_i_fu_727_p2 ;
   tmp_25_i2_fu_555_p2__temp = tmp_25_i2_fu_555_p2 ;
   grp_fu_261_p2__temp = grp_fu_261_p2 ;
   tmp_25_i_fu_733_p2__temp = tmp_25_i_fu_733_p2 ;
   tmp_i2_fu_531_p3__temp = tmp_i2_fu_531_p3 ;
   aSig_4_fu_1053_p2__temp = aSig_4_fu_1053_p2 ;
   tmp_1_i1_fu_871_p2__temp = tmp_1_i1_fu_871_p2 ;
   grp_fu_225_p4__temp = grp_fu_225_p4 ;
   tmp_4_fu_1002_p3__temp = tmp_4_fu_1002_p3 ;
   tmp_3_fu_992_p4__temp = tmp_3_fu_992_p4 ;
   tmp_i11_fu_475_p2__temp = tmp_i11_fu_475_p2 ;
   a_assign_5_fu_511_p3__temp = a_assign_5_fu_511_p3 ;
   bSig_2_reg_1231__temp = bSig_2_reg_1231 ;
   tmp_i9_13_fu_581_p2__temp = tmp_i9_13_fu_581_p2 ;
   tmp_10_i1_fu_895_p2__temp = tmp_10_i1_fu_895_p2 ;
   tmp_25_i1_fu_775_p2__temp = tmp_25_i1_fu_775_p2 ;
   expDiff_fu_303_p2__temp = expDiff_fu_303_p2 ;
   tmp_14_fu_703_p2__temp = tmp_14_fu_703_p2 ;
   sel_tmp1_i1_fu_932_p2__temp = sel_tmp1_i1_fu_932_p2 ;
   tmp_17_reg_1168__temp = tmp_17_reg_1168 ;
   tmp_15_fu_639_p2__temp = tmp_15_fu_639_p2 ;
   icmp_reg_1245__temp = icmp_reg_1245 ;
   grp_fu_251_p2__temp = grp_fu_251_p2 ;
   tmp_7_i1_fu_886_p2__temp = tmp_7_i1_fu_886_p2 ;
   bExp_reg_1133__temp = bExp_reg_1133 ;
   tmp_34_reg_1164__temp = tmp_34_reg_1164 ;
   tmp_6_i_cast_fu_959_p1__temp = tmp_6_i_cast_fu_959_p1 ;
   tmp_4_i1_fu_918_p2__temp = tmp_4_i1_fu_918_p2 ;
   tmp_s_reg_1227__temp = tmp_s_reg_1227 ;
   b_assign_mux_fu_787_p3__temp = b_assign_mux_fu_787_p3 ;
   tmp_36_fu_677_p1__temp = tmp_36_fu_677_p1 ;
   tmp_i10_fu_433_p2__temp = tmp_i10_fu_433_p2 ;
   tmp_47_cast_fu_373_p1__temp = tmp_47_cast_fu_373_p1 ;
   tmp_i2_14_fu_625_p3__temp = tmp_i2_14_fu_625_p3 ;
   tmp_8_i_fu_697_p2__temp = tmp_8_i_fu_697_p2 ;
   tmp_i8_16_fu_425_p3__temp = tmp_i8_16_fu_425_p3 ;
   tmp_23_fu_413_p2__temp = tmp_23_fu_413_p2 ;
   tmp_30_i_fu_633_p2__temp = tmp_30_i_fu_633_p2 ;
   aSig_4_cast_fu_1059_p1__temp = aSig_4_cast_fu_1059_p1 ;
   tmp_i7_fu_845_p2__temp = tmp_i7_fu_845_p2 ;
   tmp_4_i_fu_1010_p2__temp = tmp_4_i_fu_1010_p2 ;
   tmp_45_fu_739_p2__temp = tmp_45_fu_739_p2 ;

       ap_return_preg = 0 ;
       grp_roundAndPackFloat64_fu_204_ap_start_reg = 0 ;
               tmp_25_reg_1172 =  tmp_25_reg_1172__temp ;
               tmp_17_reg_1168 =  tmp_17_reg_1168__temp ;
               tmp_16_reg_1202 =  tmp_16_reg_1202__temp ;
               tmp_20_fu_525_p2 =   (  (  ( b & 4503599627370495 )  << 9 )  == 0 ? 1 :  0 ) ;
               tmp_34_reg_1164 =  tmp_34_reg_1164__temp ;
               tmp_s_reg_1227 =  tmp_s_reg_1227__temp ;
               tmp_16_fu_519_p2 =   (  (  ( b >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_fu_349_p2 =   ( do_twos_complement( (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  )  > do_twos_complement(0 )  ? 1 :  0 ) ;
               tmp_28_fu_497_p2 =   (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               grp_fu_220_p2 =   ( grp_fu_220_p0__temp  == 0 ? 1 :  0 ) ;
               tmp_reg_1160 =  tmp_reg_1160__temp ;
               grp_fu_215_p2 =   (  (  ( a >> 52 )  & 2047 )  == 2047 ? 1 :  0 ) ;
               tmp_34_fu_355_p3 =   (  (  (  (  ( a >> 52 )  & 2047 )  -  (  ( b >> 52 )  & 2047 )  )  >> 11 )  & 1 ) ;
               tmp_26_fu_603_p2 =   (  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_19_fu_781_p2 =   (  (  (  (  (  ( a >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( a & 2251799813685247 )  != 0 ? 1 :  0 )  )  |  (  (  (  (  ( b >> 51 )  & 4095 )  << 51 )  == 9218868437227405312 ? 1 :  0 )  &  (  ( b & 2251799813685247 )  != 0 ? 1 :  0 )  )  ) ;
               tmp_24_fu_419_p2 =   (  (  (  ( b & 4503599627370495 )  << 9 )  |  (  ( a & 4503599627370495 )  << 9 )  )  == 0 ? 1 :  0 ) ;
               tmp_14_fu_703_p2 =   (  (  ( a & 4503599627370495 )  << 9 )  == 0 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state8)
       {
           ap_return_preg = ap_phi_mux_p_0_phi_fu_180_p22;
       }
       if((1 == ap_CS_fsm_state8) && (((((tmp_16_reg_1202 == 0) && (tmp_34_reg_1164 == 1)) && (tmp_reg_1160 == 0)) || ((tmp_s_reg_1227 == 0) && (tmp_reg_1160 == 1))) || ((((tmp_25_reg_1172 == 0) && (tmp_17_reg_1168 == 0)) && (tmp_34_reg_1164 == 0)) && (tmp_reg_1160 == 0))))
       {
           p_0_reg_177 =  tmp_31_reg_1319__temp ;
       }
       if((1 == ap_CS_fsm_state8) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((1 == ap_CS_fsm_state8) && (((((tmp_16_reg_1202 == 0) && (tmp_34_reg_1164 == 1)) && (tmp_reg_1160 == 0)) || ((tmp_s_reg_1227 == 0) && (tmp_reg_1160 == 1))) || ((((tmp_25_reg_1172 == 0) && (tmp_17_reg_1168 == 0)) && (tmp_34_reg_1164 == 0)) && (tmp_reg_1160 == 0))))
       {
		   //printf("HERE 1\n");
           ap_phi_mux_p_0_phi_fu_180_p22 =  tmp_31_reg_1319__temp ;
       }
       if(((1 == ap_CS_fsm_state8) && (((((tmp_16_reg_1202 == 0) && (tmp_34_reg_1164 == 1)) && (tmp_reg_1160 == 0)) || ((tmp_s_reg_1227 == 0) && (tmp_reg_1160 == 1))) || ((((tmp_25_reg_1172 == 0) && (tmp_17_reg_1168 == 0)) && (tmp_34_reg_1164 == 0)) && (tmp_reg_1160 == 0)))) == 0)
       {
		   /*printf("HERE 2\n");
		   printf("tmp_16_reg_1202 %d\n",tmp_16_reg_1202);
		   printf("tmp_34_reg_1164 %d\n",tmp_34_reg_1164);
		   printf("tmp_reg_1160 %d\n",tmp_reg_1160);
		   printf("tmp_s_reg_1227 %d\n",tmp_s_reg_1227);
		   printf("tmp_25_reg_1172 %d\n",tmp_25_reg_1172);
		   printf("tmp_17_reg_1168 %d\n",tmp_17_reg_1168);*/
		   
           ap_phi_mux_p_0_phi_fu_180_p22 =  p_0_reg_177__temp ;
       }
       if(1 == ap_CS_fsm_state8)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state8)
       {
           ap_return = ap_phi_mux_p_0_phi_fu_180_p22;
       }
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
	*dummy=clock;
	//printf("%llu\n",ap_return);
	//printf("clock %d\n",clock);
       return;
}
