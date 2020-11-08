#include<stdio.h>
void roundAndPackFloat64(int *ap_clk__1,int *ap_done__1,int *ap_idle__1,int *ap_ready__1,long long int *ap_return__1,int *ap_rst__1,int *ap_start__1,int *float_exception_flag_i__1,int *float_exception_flag_o__1,int *float_exception_flag_o_ap_vld__1,int *zExp__1,unsigned long long int *zSig__1,int *zSign__1,int* dummy)
{
/*printf("inside round and pack\n");
printf("zExp__1 %d\n",*zExp__1);
printf("zSig__1 %llu\n",*zSig__1);
printf("zSign__1 %d\n",*zSign__1);*/
int clock=*dummy;
int ap_clk=*ap_clk__1;
int ap_done=*ap_done__1;
int ap_idle=*ap_idle__1;
int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
int ap_rst=*ap_rst__1;
int ap_start=1;
int float_exception_flag_i=*float_exception_flag_i__1;
int float_exception_flag_o=*float_exception_flag_o__1;
int float_exception_flag_o_ap_vld=*float_exception_flag_o_ap_vld__1;
int zExp=*zExp__1;
unsigned long long int zSig=*zSig__1;

int zSign=*zSign__1;
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
   int ap_NS_fsm=0;
   int ap_NS_fsm__temp=0;
   int ap_clk__temp=0;
   int ap_rst__temp=0;
   int ap_start__temp=0;
   int count_assign_fu_189_p2=0;
   int count_assign_fu_189_p2__temp=0;
   int count_assign_fu_189_p2_temp60=0;
   int count_assign_fu_189_p2_temp60__temp=0;
   int count_assign_reg_475=0;
   int count_assign_reg_475__temp=0;
   int float_exception_flag_2_fu_211_p2=0;
   int float_exception_flag_2_fu_211_p2__temp=0;
   int float_exception_flag_4_fu_317_p2=0;
   int float_exception_flag_4_fu_317_p2__temp=0;
   int float_exception_flag_i__temp=0;
   int icmp_fu_205_p2=0;
   int icmp_fu_205_p2__temp=0;
   int icmp_reg_480=0;
   int icmp_reg_480__temp=0;
   int icmp_reg_480_temp50=0;
   int icmp_reg_480_temp50__temp=0;
   int roundBits_1_reg_121=986;
   int roundBits_1_reg_121__temp=986;
   int roundBits_2_fu_307_p1=0;
   int roundBits_2_fu_307_p1__temp=0;
   int roundBits_fu_145_p1=0;
   int roundBits_fu_145_p1__temp=0;
   int tmp_10_fu_363_p2=0;
   int tmp_10_fu_363_p2__temp=0;
   int tmp_10_i_fu_267_p2=0;
   int tmp_10_i_fu_267_p2__temp=0;
   int tmp_11_fu_369_p1=0;
   int tmp_11_fu_369_p1__temp=0;
   int tmp_11_i_fu_273_p4_temp51=0;
   int tmp_11_i_fu_273_p4_temp51__temp=0;
   int tmp_12_fu_373_p2=0;
   int tmp_12_fu_373_p2__temp=0;
   int tmp_13_fu_389_p2=0;
   int tmp_13_fu_389_p2__temp=0;
   int tmp_13_fu_389_p2_temp56=0;
   int tmp_13_fu_389_p2_temp56__temp=0;
   int tmp_14_fu_398_p3=0;
   int tmp_14_fu_398_p3__temp=0;
   int tmp_15_fu_245_p1=0;
   int tmp_15_fu_245_p1__temp=0;
   int tmp_16_fu_263_p1=0;
   int tmp_16_fu_263_p1__temp=0;
   int tmp_18_fu_394_p1=0;
   int tmp_18_fu_394_p1__temp=0;
   int tmp_1_fu_155_p2=0;
   int tmp_1_fu_155_p2__temp=0;
   int tmp_1_reg_460=0;
   int tmp_1_reg_460__temp=0;
   int tmp_2_fu_161_p2=0;
   int tmp_2_fu_161_p2__temp=0;
   int tmp_2_i_fu_257_p2=0;
   int tmp_2_i_fu_257_p2__temp=0;
   int tmp_2_reg_464=0;
   int tmp_2_reg_464__temp=0;
   int tmp_3_fu_311_p2=0;
   int tmp_3_fu_311_p2__temp=0;
   int tmp_4_fu_167_p2_523=0;
   int tmp_4_fu_167_p2_523__temp=0;
   int tmp_4_fu_167_p2_temp52=0;
   int tmp_4_fu_167_p2_temp522=0;
   int tmp_4_fu_167_p2_temp522__temp=0;
   int tmp_4_fu_167_p2_temp52__temp=0;
   int tmp_4_i_fu_291_p2=0;
   int tmp_4_i_fu_291_p2__temp=0;
   int tmp_5_fu_329_p2=0;
   int tmp_5_fu_329_p2__temp=0;
   int tmp_6_fu_181_p3=0;
   int tmp_6_fu_181_p3__temp=0;
   int tmp_7_fu_195_p4=0;
   int tmp_7_fu_195_p4__temp=0;
   int tmp_7_i_fu_240_p2_temp57=0;
   int tmp_7_i_fu_240_p2_temp57__temp=0;
   int tmp_8_fu_335_p2=0;
   int tmp_8_fu_335_p2__temp=0;
   int tmp_9_fu_347_p2_temp62=0;
   int tmp_9_fu_347_p2_temp62__temp=0;
   int tmp_fu_173_p3=0;
   int tmp_fu_173_p3__temp=0;
   int tmp_reg_468=0;
   int tmp_reg_468__temp=0;
   int tmp_s_fu_149_p2=0;
   int tmp_s_fu_149_p2__temp=0;
   int tmp_s_reg_456=0;
   int tmp_s_reg_456__temp=0;
   int zExp__temp=0;
   int zExp_assign_1_reg_107=0;
   int zExp_assign_1_reg_107__temp=0;
   int zExp_temp54=0;
   int zExp_temp54__temp=0;
   int zSign__temp=0;
   int zSign_temp58=0;
   int zSign_temp58__temp=0;
   int zSign_temp59=0;
   int zSign_temp59__temp=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_135_p4=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_135_p4__temp=0;
   long long int ap_return_preg=0;
   long long int ap_return_preg__temp=0;
   long long int p_0_reg_132=0;
   long long int p_0_reg_132__temp=0;
   long long int tmp_11_i_fu_273_p4=0;
   long long int tmp_11_i_fu_273_p4__temp=0;
   long long int tmp_17_cast_fu_379_p1=0;
   long long int tmp_17_cast_fu_379_p1__temp=0;
   long long int tmp_1_i_fu_252_p2=0;
   long long int tmp_1_i_fu_252_p2__temp=0;
   long long int tmp_32_i_fu_406_p3=0;
   long long int tmp_32_i_fu_406_p3__temp=0;
   long long int tmp_33_i_fu_414_p4=0;
   long long int tmp_33_i_fu_414_p4__temp=0;
   long long int tmp_34_i8_fu_422_p2=0;
   long long int tmp_34_i8_fu_422_p2__temp=0;
   long long int tmp_34_i9_fu_231_p2=0;
   long long int tmp_34_i9_fu_231_p2__temp=0;
   long long int tmp_4_fu_167_p2=0;
   long long int tmp_4_fu_167_p2__temp=0;
   long long int tmp_6_i_fu_237_p1=0;
   long long int tmp_6_i_fu_237_p1__temp=0;
   long long int tmp_7_i_fu_240_p2=0;
   long long int tmp_7_i_fu_240_p2__temp=0;
   long long int tmp_9_fu_347_p2=0;
   long long int tmp_9_fu_347_p2__temp=0;
   long long int tmp_i3_fu_248_p1=0;
   long long int tmp_i3_fu_248_p1__temp=0;
   long long int tmp_i_fu_223_p3=0;
   long long int tmp_i_fu_223_p3__temp=0;
   
   unsigned long long int zSig__temp=0;
   long long int zSig_assign1_reg_96=0;
   long long int zSig_assign1_reg_96__temp=0;
   long long int zSig_assign_1_cast_fu_353_p4=0;
   long long int zSig_assign_1_cast_fu_353_p4__temp=0;
   long long int zSig_assign_2_fu_383_p2=0;
   long long int zSig_assign_2_fu_383_p2__temp=0;
   long long int zSig_assign_2_reg_506=0;
   long long int zSig_assign_2_reg_506__temp=0;
   long long int z_1_fu_296_p1=0;
   long long int z_1_fu_296_p1__temp=0;
   long long int z_2_fu_300_p3=0;
   long long int z_2_fu_300_p3__temp=0;
   long long int z_fu_283_p3=0;
   long long int z_fu_283_p3__temp=0;
	ap_done=0;
	ap_start=1;

   ap_ST_fsm_state1:
	clock=clock+1;
        //printf("round state1\n");
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   tmp_fu_173_p3__temp = tmp_fu_173_p3 ;
   tmp_2_fu_161_p2__temp = tmp_2_fu_161_p2 ;
   tmp_4_fu_167_p2_temp522__temp = tmp_4_fu_167_p2_temp522 ;
   roundBits_2_fu_307_p1__temp = roundBits_2_fu_307_p1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   zSign_temp59__temp = zSign_temp59 ;
   count_assign_fu_189_p2__temp = count_assign_fu_189_p2 ;
   tmp_10_fu_363_p2__temp = tmp_10_fu_363_p2 ;
   tmp_13_fu_389_p2__temp = tmp_13_fu_389_p2 ;
   zExp_assign_1_reg_107__temp = zExp_assign_1_reg_107 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_5_fu_329_p2__temp = tmp_5_fu_329_p2 ;
   tmp_7_i_fu_240_p2_temp57__temp = tmp_7_i_fu_240_p2_temp57 ;
   icmp_fu_205_p2__temp = icmp_fu_205_p2 ;
   float_exception_flag_4_fu_317_p2__temp = float_exception_flag_4_fu_317_p2 ;
   tmp_4_fu_167_p2_temp52__temp = tmp_4_fu_167_p2_temp52 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   roundBits_fu_145_p1__temp = roundBits_fu_145_p1 ;
   tmp_s_reg_456__temp = tmp_s_reg_456 ;
   tmp_15_fu_245_p1__temp = tmp_15_fu_245_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   icmp_reg_480_temp50__temp = icmp_reg_480_temp50 ;
   tmp_reg_468__temp = tmp_reg_468 ;
   zSig__temp=zSig;
   tmp_11_i_fu_273_p4_temp51__temp = tmp_11_i_fu_273_p4_temp51 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_155_p2__temp = tmp_1_fu_155_p2 ;
   tmp_7_fu_195_p4__temp = tmp_7_fu_195_p4 ;
   zSign_temp58__temp = zSign_temp58 ;
   tmp_13_fu_389_p2_temp56__temp = tmp_13_fu_389_p2_temp56 ;
   tmp_18_fu_394_p1__temp = tmp_18_fu_394_p1 ;
   tmp_14_fu_398_p3__temp = tmp_14_fu_398_p3 ;
   tmp_4_i_fu_291_p2__temp = tmp_4_i_fu_291_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_6_fu_181_p3__temp = tmp_6_fu_181_p3 ;
   tmp_11_fu_369_p1__temp = tmp_11_fu_369_p1 ;
   tmp_9_fu_347_p2_temp62__temp = tmp_9_fu_347_p2_temp62 ;
   tmp_2_i_fu_257_p2__temp = tmp_2_i_fu_257_p2 ;
   icmp_reg_480__temp = icmp_reg_480 ;
   tmp_3_fu_311_p2__temp = tmp_3_fu_311_p2 ;
   tmp_12_fu_373_p2__temp = tmp_12_fu_373_p2 ;
   roundBits_1_reg_121__temp = roundBits_1_reg_121 ;
   tmp_2_reg_464__temp = tmp_2_reg_464 ;
   tmp_s_fu_149_p2__temp = tmp_s_fu_149_p2 ;
   float_exception_flag_2_fu_211_p2__temp = float_exception_flag_2_fu_211_p2 ;
   count_assign_reg_475__temp = count_assign_reg_475 ;
   tmp_4_fu_167_p2_523__temp = tmp_4_fu_167_p2_523 ;
   tmp_16_fu_263_p1__temp = tmp_16_fu_263_p1 ;
   zExp_temp54__temp = zExp_temp54 ;
   tmp_1_reg_460__temp = tmp_1_reg_460 ;
   tmp_8_fu_335_p2__temp = tmp_8_fu_335_p2 ;
   tmp_10_i_fu_267_p2__temp = tmp_10_i_fu_267_p2 ;
   count_assign_fu_189_p2_temp60__temp = count_assign_fu_189_p2_temp60 ;
   tmp_i3_fu_248_p1__temp = tmp_i3_fu_248_p1 ;
   z_fu_283_p3__temp = z_fu_283_p3 ;
   p_0_reg_132__temp = p_0_reg_132 ;
   zSig_assign1_reg_96__temp = zSig_assign1_reg_96 ;
   tmp_34_i9_fu_231_p2__temp = tmp_34_i9_fu_231_p2 ;
   tmp_i_fu_223_p3__temp = tmp_i_fu_223_p3 ;
   tmp_9_fu_347_p2__temp = tmp_9_fu_347_p2 ;
   tmp_34_i8_fu_422_p2__temp = tmp_34_i8_fu_422_p2 ;
   z_1_fu_296_p1__temp = z_1_fu_296_p1 ;
   tmp_33_i_fu_414_p4__temp = tmp_33_i_fu_414_p4 ;
   z_2_fu_300_p3__temp = z_2_fu_300_p3 ;
   tmp_32_i_fu_406_p3__temp = tmp_32_i_fu_406_p3 ;
   tmp_17_cast_fu_379_p1__temp = tmp_17_cast_fu_379_p1 ;
   zSig_assign_2_reg_506__temp = zSig_assign_2_reg_506 ;
   ap_phi_mux_p_0_phi_fu_135_p4__temp = ap_phi_mux_p_0_phi_fu_135_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_11_i_fu_273_p4__temp = tmp_11_i_fu_273_p4 ;
   zSig_assign_1_cast_fu_353_p4__temp = zSig_assign_1_cast_fu_353_p4 ;
   tmp_4_fu_167_p2__temp = tmp_4_fu_167_p2 ;
   tmp_1_i_fu_252_p2__temp = tmp_1_i_fu_252_p2 ;
   tmp_7_i_fu_240_p2__temp = tmp_7_i_fu_240_p2 ;
   tmp_6_i_fu_237_p1__temp = tmp_6_i_fu_237_p1 ;
   zSig_assign_2_fu_383_p2__temp = zSig_assign_2_fu_383_p2 ;

       ap_return_preg = 0 ;
               tmp_5_fu_329_p2 =   ( roundBits_1_reg_121__temp  == 0 ? 1 :  0 ) ;
               tmp_reg_468 =  tmp_reg_468__temp ;
               tmp_s_reg_456 =  tmp_s_reg_456__temp ;
               tmp_2_reg_464 =  tmp_2_reg_464__temp ;
               tmp_3_fu_311_p2 =   (  (  (  ( icmp_reg_480__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_475__temp  )  >> 1 )  & 9223372036854775807 )  << 1 )  |  (  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig__temp  >> count_assign_reg_475__temp  )  & 1 )  )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  )  & 1023 )  == 0 ? 1 :  0 ) ;
               tmp_2_fu_161_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
               tmp_s_fu_149_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_1_fu_155_p2 =   ( zExp__temp  > 2045 ? 1 :  0 ) ;
               tmp_1_reg_460 =  tmp_1_reg_460__temp ;
               tmp_fu_173_p3 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
               tmp_6_fu_181_p3 =   (  ( zExp__temp  >> 12 )  & 1 ) ;

		//printf("ans= %llu",(( zSign << 63 )  | 9218868437227405312 ));

   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1)))) == 1)
{
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1))))
       {   //printf("round p_0_reg_132 %llu\n",p_0_reg_132);
           p_0_reg_132 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
           roundBits_1_reg_121 =   ( zSig__temp  & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
           zExp_assign_1_reg_107 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
           zSig_assign1_reg_96 =  zSig__temp ;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_161_p2 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_fu_173_p3 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1))))
       {
           icmp_reg_480 =   (  (  (  ( 0 - zExp__temp  )  >> 6 )  & 63 )  < 1 ? 1 :  0 ) ;
           count_assign_reg_475 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_1_reg_460 =   ( zExp__temp  > 2045 ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_2_reg_464 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_reg_468 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           tmp_s_reg_456 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state4) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1))))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_5_fu_329_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_311_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state4;
   }
   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_161_p2 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_fu_173_p3 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))) == 1){
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1))))
       {
               p_0_reg_132 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
               roundBits_1_reg_121 =   ( zSig__temp  & 1023 ) ;
		//printf("roundBits_1_reg_121 %d",roundBits_1_reg_121);
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
               zExp_assign_1_reg_107 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
               zSig_assign1_reg_96 =  zSig__temp ;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_161_p2 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_fu_173_p3 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1))))
       {
               icmp_reg_480 =   (  (  (  ( 0 - zExp__temp  )  >> 6 )  & 63 )  < 1 ? 1 :  0 ) ;
               count_assign_reg_475 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_1_reg_460 =   ( zExp__temp  > 2045 ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_2_reg_464 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_reg_468 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               tmp_s_reg_456 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state4) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1))))
       {
               float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_5_fu_329_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_311_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1)))))
       {
               float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state2;
   }
   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && ((tmp_s_fu_149_p2 == 0) || ((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) || (((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0))))) == 1){
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1))))
       {
               p_0_reg_132 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
               roundBits_1_reg_121 =   ( zSig__temp  & 1023 ) ;
		//printf("state 1 roundBits_1_reg_121 %d\n",roundBits_1_reg_121);
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
               zExp_assign_1_reg_107 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
               zSig_assign1_reg_96 =  zSig__temp ;
		//printf("state1 zSig_assign1_reg_96 %llu\n",zSig_assign1_reg_96);
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_161_p2 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_fu_173_p3 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1))))
       {
               icmp_reg_480 =   (  (  (  ( 0 - zExp__temp  )  >> 6 )  & 63 )  < 1 ? 1 :  0 ) ;
               count_assign_reg_475 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_1_reg_460 =   ( zExp__temp  > 2045 ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_2_reg_464 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_reg_468 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               tmp_s_reg_456 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state4) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1))))
       {
               float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_5_fu_329_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_311_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1)))))
       {
               float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state3;
   }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1))))
       {
           p_0_reg_132 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
           roundBits_1_reg_121 =   ( zSig__temp  & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
           zExp_assign_1_reg_107 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_149_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_6_fu_181_p3 == 0) && (tmp_2_fu_161_p2 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_6_fu_181_p3 == 0) && (tmp_fu_173_p3 == 0)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)))))
       {
           zSig_assign1_reg_96 =  zSig__temp ;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_161_p2 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) || ((((tmp_fu_173_p3 == 0) && (tmp_6_fu_181_p3 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1))))
       {
           icmp_reg_480 =   (  (  (  ( 0 - zExp__temp  )  >> 6 )  & 63 )  < 1 ? 1 :  0 ) ;
           count_assign_reg_475 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_1_reg_460 =   ( zExp__temp  > 2045 ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_2_reg_464 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_1_fu_155_p2 == 0)) && (tmp_s_fu_149_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_reg_468 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           tmp_s_reg_456 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
       }
       if((1 == ap_CS_fsm_state4) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1))))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_5_fu_329_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_311_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state1;

   ap_ST_fsm_state2:
	clock=clock+1;
	//printf("round state 2\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   tmp_fu_173_p3__temp = tmp_fu_173_p3 ;
   zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   tmp_2_fu_161_p2__temp = tmp_2_fu_161_p2 ;
   tmp_4_fu_167_p2_temp522__temp = tmp_4_fu_167_p2_temp522 ;
   roundBits_2_fu_307_p1__temp = roundBits_2_fu_307_p1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zSign_temp59__temp = zSign_temp59 ;
   count_assign_fu_189_p2__temp = count_assign_fu_189_p2 ;
   tmp_10_fu_363_p2__temp = tmp_10_fu_363_p2 ;
   tmp_13_fu_389_p2__temp = tmp_13_fu_389_p2 ;
   zExp_assign_1_reg_107__temp = zExp_assign_1_reg_107 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_5_fu_329_p2__temp = tmp_5_fu_329_p2 ;
   tmp_7_i_fu_240_p2_temp57__temp = tmp_7_i_fu_240_p2_temp57 ;
   icmp_fu_205_p2__temp = icmp_fu_205_p2 ;
   float_exception_flag_4_fu_317_p2__temp = float_exception_flag_4_fu_317_p2 ;
   tmp_4_fu_167_p2_temp52__temp = tmp_4_fu_167_p2_temp52 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   roundBits_fu_145_p1__temp = roundBits_fu_145_p1 ;
   tmp_s_reg_456__temp = tmp_s_reg_456 ;
   tmp_15_fu_245_p1__temp = tmp_15_fu_245_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   icmp_reg_480_temp50__temp = icmp_reg_480_temp50 ;
   tmp_reg_468__temp = tmp_reg_468 ;
   tmp_11_i_fu_273_p4_temp51__temp = tmp_11_i_fu_273_p4_temp51 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_155_p2__temp = tmp_1_fu_155_p2 ;
   tmp_7_fu_195_p4__temp = tmp_7_fu_195_p4 ;
   zSign_temp58__temp = zSign_temp58 ;
   tmp_13_fu_389_p2_temp56__temp = tmp_13_fu_389_p2_temp56 ;
   tmp_18_fu_394_p1__temp = tmp_18_fu_394_p1 ;
   tmp_14_fu_398_p3__temp = tmp_14_fu_398_p3 ;
   tmp_4_i_fu_291_p2__temp = tmp_4_i_fu_291_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_6_fu_181_p3__temp = tmp_6_fu_181_p3 ;
   tmp_11_fu_369_p1__temp = tmp_11_fu_369_p1 ;
   tmp_9_fu_347_p2_temp62__temp = tmp_9_fu_347_p2_temp62 ;
   tmp_2_i_fu_257_p2__temp = tmp_2_i_fu_257_p2 ;
   icmp_reg_480__temp = icmp_reg_480 ;
   tmp_3_fu_311_p2__temp = tmp_3_fu_311_p2 ;
   tmp_12_fu_373_p2__temp = tmp_12_fu_373_p2 ;
   roundBits_1_reg_121__temp = roundBits_1_reg_121 ;
   tmp_2_reg_464__temp = tmp_2_reg_464 ;
   tmp_s_fu_149_p2__temp = tmp_s_fu_149_p2 ;
   float_exception_flag_2_fu_211_p2__temp = float_exception_flag_2_fu_211_p2 ;
   count_assign_reg_475__temp = count_assign_reg_475 ;
   tmp_4_fu_167_p2_523__temp = tmp_4_fu_167_p2_523 ;
   tmp_16_fu_263_p1__temp = tmp_16_fu_263_p1 ;
   zExp_temp54__temp = zExp_temp54 ;
   tmp_1_reg_460__temp = tmp_1_reg_460 ;
   tmp_8_fu_335_p2__temp = tmp_8_fu_335_p2 ;
   tmp_10_i_fu_267_p2__temp = tmp_10_i_fu_267_p2 ;
   count_assign_fu_189_p2_temp60__temp = count_assign_fu_189_p2_temp60 ;
   tmp_i3_fu_248_p1__temp = tmp_i3_fu_248_p1 ;
   z_fu_283_p3__temp = z_fu_283_p3 ;
   p_0_reg_132__temp = p_0_reg_132 ;
   zSig_assign1_reg_96__temp = zSig_assign1_reg_96 ;
   tmp_34_i9_fu_231_p2__temp = tmp_34_i9_fu_231_p2 ;
   tmp_i_fu_223_p3__temp = tmp_i_fu_223_p3 ;
   tmp_9_fu_347_p2__temp = tmp_9_fu_347_p2 ;
   tmp_34_i8_fu_422_p2__temp = tmp_34_i8_fu_422_p2 ;
   z_1_fu_296_p1__temp = z_1_fu_296_p1 ;
   tmp_33_i_fu_414_p4__temp = tmp_33_i_fu_414_p4 ;
   z_2_fu_300_p3__temp = z_2_fu_300_p3 ;
   tmp_32_i_fu_406_p3__temp = tmp_32_i_fu_406_p3 ;
   tmp_17_cast_fu_379_p1__temp = tmp_17_cast_fu_379_p1 ;
   zSig_assign_2_reg_506__temp = zSig_assign_2_reg_506 ;
   ap_phi_mux_p_0_phi_fu_135_p4__temp = ap_phi_mux_p_0_phi_fu_135_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_11_i_fu_273_p4__temp = tmp_11_i_fu_273_p4 ;
   zSig_assign_1_cast_fu_353_p4__temp = zSig_assign_1_cast_fu_353_p4 ;
   tmp_4_fu_167_p2__temp = tmp_4_fu_167_p2 ;
   tmp_1_i_fu_252_p2__temp = tmp_1_i_fu_252_p2 ;
   tmp_7_i_fu_240_p2__temp = tmp_7_i_fu_240_p2 ;
   tmp_6_i_fu_237_p1__temp = tmp_6_i_fu_237_p1 ;
   zSig_assign_2_fu_383_p2__temp = zSig_assign_2_fu_383_p2 ;

       ap_return_preg = 0 ;
               tmp_5_fu_329_p2 =   ( roundBits_1_reg_121__temp  == 0 ? 1 :  0 ) ;
               tmp_3_fu_311_p2 =   (  (  (  ( icmp_reg_480__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_475__temp  )  >> 1 )  & 9223372036854775807 )  << 1 )  |  (  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig__temp  >> count_assign_reg_475__temp  )  & 1 )  )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  )  & 1023 )  == 0 ? 1 :  0 ) ;
               tmp_2_fu_161_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
               tmp_s_fu_149_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_1_fu_155_p2 =   ( zExp__temp  > 2045 ? 1 :  0 ) ;
               tmp_fu_173_p3 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
               tmp_6_fu_181_p3 =   (  ( zExp__temp  >> 12 )  & 1 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           roundBits_1_reg_121 =   (  (  ( icmp_reg_480__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_475__temp  )  >> 1 )  & 9223372036854775807 )  << 1 )  |  (  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig__temp  >> count_assign_reg_475__temp  )  & 1 )  )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  )  & 1023 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           zExp_assign_1_reg_107 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
           zSig_assign1_reg_96 =   (  ( icmp_reg_480__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_475__temp  )  >> 1 )  & 9223372036854775807 )  << 1 )  |  (  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig__temp  >> count_assign_reg_475__temp  )  & 1 )  )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  ) ;
       }
       if((tmp_3_fu_311_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 4 ) ;
       }
       if((((tmp_5_fu_329_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_311_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:
	clock=clock+1;
	//printf("round state 3\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
   tmp_fu_173_p3__temp = tmp_fu_173_p3 ;
   tmp_2_fu_161_p2__temp = tmp_2_fu_161_p2 ;
   zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   tmp_4_fu_167_p2_temp522__temp = tmp_4_fu_167_p2_temp522 ;
   roundBits_2_fu_307_p1__temp = roundBits_2_fu_307_p1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zSign_temp59__temp = zSign_temp59 ;
   count_assign_fu_189_p2__temp = count_assign_fu_189_p2 ;
   tmp_10_fu_363_p2__temp = tmp_10_fu_363_p2 ;
   tmp_13_fu_389_p2__temp = tmp_13_fu_389_p2 ;
   zExp_assign_1_reg_107__temp = zExp_assign_1_reg_107 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_5_fu_329_p2__temp = tmp_5_fu_329_p2 ;
   tmp_7_i_fu_240_p2_temp57__temp = tmp_7_i_fu_240_p2_temp57 ;
   icmp_fu_205_p2__temp = icmp_fu_205_p2 ;
   float_exception_flag_4_fu_317_p2__temp = float_exception_flag_4_fu_317_p2 ;
   tmp_4_fu_167_p2_temp52__temp = tmp_4_fu_167_p2_temp52 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   roundBits_fu_145_p1__temp = roundBits_fu_145_p1 ;
   tmp_s_reg_456__temp = tmp_s_reg_456 ;
   tmp_15_fu_245_p1__temp = tmp_15_fu_245_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   icmp_reg_480_temp50__temp = icmp_reg_480_temp50 ;
   tmp_reg_468__temp = tmp_reg_468 ;
   tmp_11_i_fu_273_p4_temp51__temp = tmp_11_i_fu_273_p4_temp51 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_155_p2__temp = tmp_1_fu_155_p2 ;
   tmp_7_fu_195_p4__temp = tmp_7_fu_195_p4 ;
   zSign_temp58__temp = zSign_temp58 ;
   tmp_13_fu_389_p2_temp56__temp = tmp_13_fu_389_p2_temp56 ;
   tmp_18_fu_394_p1__temp = tmp_18_fu_394_p1 ;
   tmp_14_fu_398_p3__temp = tmp_14_fu_398_p3 ;
   tmp_4_i_fu_291_p2__temp = tmp_4_i_fu_291_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_6_fu_181_p3__temp = tmp_6_fu_181_p3 ;
   tmp_11_fu_369_p1__temp = tmp_11_fu_369_p1 ;
   tmp_9_fu_347_p2_temp62__temp = tmp_9_fu_347_p2_temp62 ;
   tmp_2_i_fu_257_p2__temp = tmp_2_i_fu_257_p2 ;
   icmp_reg_480__temp = icmp_reg_480 ;
   tmp_3_fu_311_p2__temp = tmp_3_fu_311_p2 ;
   tmp_12_fu_373_p2__temp = tmp_12_fu_373_p2 ;
   roundBits_1_reg_121__temp = roundBits_1_reg_121 ;
   tmp_2_reg_464__temp = tmp_2_reg_464 ;
   tmp_s_fu_149_p2__temp = tmp_s_fu_149_p2 ;
   float_exception_flag_2_fu_211_p2__temp = float_exception_flag_2_fu_211_p2 ;
   count_assign_reg_475__temp = count_assign_reg_475 ;
   tmp_4_fu_167_p2_523__temp = tmp_4_fu_167_p2_523 ;
   tmp_16_fu_263_p1__temp = tmp_16_fu_263_p1 ;
   zExp_temp54__temp = zExp_temp54 ;
   tmp_1_reg_460__temp = tmp_1_reg_460 ;
   tmp_8_fu_335_p2__temp = tmp_8_fu_335_p2 ;
   tmp_10_i_fu_267_p2__temp = tmp_10_i_fu_267_p2 ;
   count_assign_fu_189_p2_temp60__temp = count_assign_fu_189_p2_temp60 ;
   tmp_i3_fu_248_p1__temp = tmp_i3_fu_248_p1 ;
   z_fu_283_p3__temp = z_fu_283_p3 ;
   p_0_reg_132__temp = p_0_reg_132 ;
   zSig_assign1_reg_96__temp = zSig_assign1_reg_96 ;
   tmp_34_i9_fu_231_p2__temp = tmp_34_i9_fu_231_p2 ;
   tmp_i_fu_223_p3__temp = tmp_i_fu_223_p3 ;
   tmp_9_fu_347_p2__temp = tmp_9_fu_347_p2 ;
   tmp_34_i8_fu_422_p2__temp = tmp_34_i8_fu_422_p2 ;
   z_1_fu_296_p1__temp = z_1_fu_296_p1 ;
   tmp_33_i_fu_414_p4__temp = tmp_33_i_fu_414_p4 ;
   z_2_fu_300_p3__temp = z_2_fu_300_p3 ;
   tmp_32_i_fu_406_p3__temp = tmp_32_i_fu_406_p3 ;
   tmp_17_cast_fu_379_p1__temp = tmp_17_cast_fu_379_p1 ;
   zSig_assign_2_reg_506__temp = zSig_assign_2_reg_506 ;
   ap_phi_mux_p_0_phi_fu_135_p4__temp = ap_phi_mux_p_0_phi_fu_135_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_11_i_fu_273_p4__temp = tmp_11_i_fu_273_p4 ;
   zSig_assign_1_cast_fu_353_p4__temp = zSig_assign_1_cast_fu_353_p4 ;
   tmp_4_fu_167_p2__temp = tmp_4_fu_167_p2 ;
   tmp_1_i_fu_252_p2__temp = tmp_1_i_fu_252_p2 ;
   tmp_7_i_fu_240_p2__temp = tmp_7_i_fu_240_p2 ;
   tmp_6_i_fu_237_p1__temp = tmp_6_i_fu_237_p1 ;
   zSig_assign_2_fu_383_p2__temp = zSig_assign_2_fu_383_p2 ;

       ap_return_preg = 0 ;
               tmp_5_fu_329_p2 =   ( roundBits_1_reg_121__temp  == 0 ? 1 :  0 ) ;
               tmp_3_fu_311_p2 =   (  (  (  ( icmp_reg_480__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_475__temp  )  >> 1 )  & 9223372036854775807 )  << 1 )  |  (  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig__temp  >> count_assign_reg_475__temp  )  & 1 )  )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  )  & 1023 )  == 0 ? 1 :  0 ) ;
               tmp_2_fu_161_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
               tmp_s_fu_149_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_1_fu_155_p2 =   ( zExp__temp  > 2045 ? 1 :  0 ) ;
               tmp_fu_173_p3 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       if(1 == ap_CS_fsm_state3)
       {
	   signed int a=4294967295;   // anathor issue because of that signed variable
	   //zSig_assign_2_reg_506 =   (  (  (  ( 512 + zSig_assign1_reg_96__temp  )  >> 10 )  & 18014398509481983 )  &  (  ( roundBits_1_reg_121__temp  == 512 ? 1 :  0 )  ^ 4294967295 )  ) ;	 //actual equation incorrect output  

           zSig_assign_2_reg_506 =   (  (  (  ( 512 + zSig_assign1_reg_96__temp  )  >> 10 )  & 18014398509481983 )  &  (  ( roundBits_1_reg_121__temp  == 512 ? 1 :  0 )  ^ a )  ) ;

	  
	  
	  printf("a=%d\n",a);
	  printf("(  ( 512 + zSig_assign1_reg_96__temp  )  >> 10 ) %llu\n",(  ( 512 + zSig_assign1_reg_96__temp  )  >> 10 ));
	  printf("zSig_assign1_reg_96__temp %llu\n",zSig_assign1_reg_96__temp);
	  printf("roundBits_1_reg_121__temp %d\n",roundBits_1_reg_121__temp);
	  printf("zSig_assign_2_reg_506 %llu\n",zSig_assign_2_reg_506);
       }
       if((tmp_5_fu_329_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 1 ) ;
       }
       if((((tmp_5_fu_329_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_311_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_155_p2 == 1) && (tmp_s_fu_149_p2 == 1)) || (((tmp_fu_173_p3 == 1) && (tmp_2_fu_161_p2 == 1)) && (tmp_s_fu_149_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:
	clock=clock+1;
	//printf("round state 4\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
   tmp_fu_173_p3__temp = tmp_fu_173_p3 ;
   tmp_2_fu_161_p2__temp = tmp_2_fu_161_p2 ;
   zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   tmp_4_fu_167_p2_temp522__temp = tmp_4_fu_167_p2_temp522 ;
   roundBits_2_fu_307_p1__temp = roundBits_2_fu_307_p1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   zSign_temp59__temp = zSign_temp59 ;
   count_assign_fu_189_p2__temp = count_assign_fu_189_p2 ;
   tmp_10_fu_363_p2__temp = tmp_10_fu_363_p2 ;
   tmp_13_fu_389_p2__temp = tmp_13_fu_389_p2 ;
   zExp_assign_1_reg_107__temp = zExp_assign_1_reg_107 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_5_fu_329_p2__temp = tmp_5_fu_329_p2 ;
   tmp_7_i_fu_240_p2_temp57__temp = tmp_7_i_fu_240_p2_temp57 ;
   icmp_fu_205_p2__temp = icmp_fu_205_p2 ;
   float_exception_flag_4_fu_317_p2__temp = float_exception_flag_4_fu_317_p2 ;
   tmp_4_fu_167_p2_temp52__temp = tmp_4_fu_167_p2_temp52 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   roundBits_fu_145_p1__temp = roundBits_fu_145_p1 ;
   tmp_s_reg_456__temp = tmp_s_reg_456 ;
   tmp_15_fu_245_p1__temp = tmp_15_fu_245_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   icmp_reg_480_temp50__temp = icmp_reg_480_temp50 ;
   tmp_reg_468__temp = tmp_reg_468 ;
   tmp_11_i_fu_273_p4_temp51__temp = tmp_11_i_fu_273_p4_temp51 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_155_p2__temp = tmp_1_fu_155_p2 ;
   tmp_7_fu_195_p4__temp = tmp_7_fu_195_p4 ;
   zSign_temp58__temp = zSign_temp58 ;
   tmp_13_fu_389_p2_temp56__temp = tmp_13_fu_389_p2_temp56 ;
   tmp_18_fu_394_p1__temp = tmp_18_fu_394_p1 ;
   tmp_14_fu_398_p3__temp = tmp_14_fu_398_p3 ;
   tmp_4_i_fu_291_p2__temp = tmp_4_i_fu_291_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_6_fu_181_p3__temp = tmp_6_fu_181_p3 ;
   tmp_11_fu_369_p1__temp = tmp_11_fu_369_p1 ;
   tmp_9_fu_347_p2_temp62__temp = tmp_9_fu_347_p2_temp62 ;
   tmp_2_i_fu_257_p2__temp = tmp_2_i_fu_257_p2 ;
   icmp_reg_480__temp = icmp_reg_480 ;
   tmp_3_fu_311_p2__temp = tmp_3_fu_311_p2 ;
   tmp_12_fu_373_p2__temp = tmp_12_fu_373_p2 ;
   roundBits_1_reg_121__temp = roundBits_1_reg_121 ;
   tmp_2_reg_464__temp = tmp_2_reg_464 ;
   tmp_s_fu_149_p2__temp = tmp_s_fu_149_p2 ;
   float_exception_flag_2_fu_211_p2__temp = float_exception_flag_2_fu_211_p2 ;
   count_assign_reg_475__temp = count_assign_reg_475 ;
   tmp_4_fu_167_p2_523__temp = tmp_4_fu_167_p2_523 ;
   tmp_16_fu_263_p1__temp = tmp_16_fu_263_p1 ;
   zExp_temp54__temp = zExp_temp54 ;
   tmp_1_reg_460__temp = tmp_1_reg_460 ;
   tmp_8_fu_335_p2__temp = tmp_8_fu_335_p2 ;
   tmp_10_i_fu_267_p2__temp = tmp_10_i_fu_267_p2 ;
   count_assign_fu_189_p2_temp60__temp = count_assign_fu_189_p2_temp60 ;
   tmp_i3_fu_248_p1__temp = tmp_i3_fu_248_p1 ;
   z_fu_283_p3__temp = z_fu_283_p3 ;
   p_0_reg_132__temp = p_0_reg_132 ;
   zSig_assign1_reg_96__temp = zSig_assign1_reg_96 ;
   tmp_34_i9_fu_231_p2__temp = tmp_34_i9_fu_231_p2 ;
   tmp_i_fu_223_p3__temp = tmp_i_fu_223_p3 ;
   tmp_9_fu_347_p2__temp = tmp_9_fu_347_p2 ;
   tmp_34_i8_fu_422_p2__temp = tmp_34_i8_fu_422_p2 ;
   z_1_fu_296_p1__temp = z_1_fu_296_p1 ;
   tmp_33_i_fu_414_p4__temp = tmp_33_i_fu_414_p4 ;
   z_2_fu_300_p3__temp = z_2_fu_300_p3 ;
   tmp_32_i_fu_406_p3__temp = tmp_32_i_fu_406_p3 ;
   tmp_17_cast_fu_379_p1__temp = tmp_17_cast_fu_379_p1 ;
   zSig_assign_2_reg_506__temp = zSig_assign_2_reg_506 ;
   ap_phi_mux_p_0_phi_fu_135_p4__temp = ap_phi_mux_p_0_phi_fu_135_p4 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_11_i_fu_273_p4__temp = tmp_11_i_fu_273_p4 ;
   zSig_assign_1_cast_fu_353_p4__temp = zSig_assign_1_cast_fu_353_p4 ;
   tmp_4_fu_167_p2__temp = tmp_4_fu_167_p2 ;
   tmp_1_i_fu_252_p2__temp = tmp_1_i_fu_252_p2 ;
   tmp_7_i_fu_240_p2__temp = tmp_7_i_fu_240_p2 ;
   tmp_6_i_fu_237_p1__temp = tmp_6_i_fu_237_p1 ;
   zSig_assign_2_fu_383_p2__temp = zSig_assign_2_fu_383_p2 ;

       ap_return_preg = 0 ;
               tmp_1_reg_460 =  tmp_1_reg_460__temp ;
               tmp_s_reg_456 =  tmp_s_reg_456__temp ;
               tmp_reg_468 =  tmp_reg_468__temp ;
               tmp_2_reg_464 =  tmp_2_reg_464__temp ;
       if(1 == ap_CS_fsm_state4)
       {
           ap_return_preg =  ap_phi_mux_p_0_phi_fu_135_p4__temp ;
       }
       if((1 == ap_CS_fsm_state4) && ((tmp_s_reg_456 == 0) || (((tmp_2_reg_464 == 0) && (tmp_1_reg_460 == 0)) || ((tmp_reg_468 == 0) && (tmp_1_reg_460 == 0)))))
       {   printf("here1\n");
           p_0_reg_132 =   (  (  (  ( zSign << 9 )  << 54 )  | zSig_assign_2_reg_506__temp  )  +  (  (  (  ( zSig_assign_2_reg_506__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 0 :   ( zExp_assign_1_reg_107__temp  & 4095 )  )  << 52 )  ) ;
       }
       if((1 == ap_CS_fsm_state4) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {   
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((1 == ap_CS_fsm_state4) && ((tmp_s_reg_456 == 0) || (((tmp_2_reg_464 == 0) && (tmp_1_reg_460 == 0)) || ((tmp_reg_468 == 0) && (tmp_1_reg_460 == 0)))))
       {   //printf("here2\n");
	   unsigned long long int temp4=zSign;
	   unsigned long long int temp1=(  ( temp4 << 9 )  << 54 );
	   //printf("temp1 =%llu\n",temp1);
	   unsigned long long int temp2;
           unsigned long long int temp3=zExp_assign_1_reg_107__temp;
	   temp2=( temp3 & 4095)<<52;
	  // printf("%d\n",(zExp_assign_1_reg_107__temp & 4095));
	  // printf("temp 2 %llu\n",temp2);
           
           ap_phi_mux_p_0_phi_fu_135_p4 =   (  (  temp1  | zSig_assign_2_reg_506__temp  )  +  (((( zSig_assign_2_reg_506__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 0 : temp2))) ;
	 
	 // printf("(  ( zSig_assign_2_reg_506__temp  == 0 ? 1 :  0 )  & 1 )  == 1   %d",(  ( zSig_assign_2_reg_506__temp  == 0 ? 1 :  0 )  & 1 )  == 1);
	  //printf("ap_phi_mux_p_0_phi_fu_135_p4 %llu\n",ap_phi_mux_p_0_phi_fu_135_p4);
       }
	
	if(((1 == ap_CS_fsm_state4) && ((tmp_s_reg_456 == 0) || (((tmp_2_reg_464 == 0) && (tmp_1_reg_460 == 0)) || ((tmp_reg_468 == 0) && (tmp_1_reg_460 == 0)))))==0)
       {   //printf("here3\n");
           ap_phi_mux_p_0_phi_fu_135_p4 = p_0_reg_132__temp ;
       }

       if(1 == ap_CS_fsm_state4)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           ap_return =  ap_phi_mux_p_0_phi_fu_135_p4 ;
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   end:
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	//printf("ap_return %llu\n",ap_return);
	*ap_return__1=ap_return;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*float_exception_flag_i__1=float_exception_flag_i;
	*float_exception_flag_o__1=float_exception_flag_o;
	*float_exception_flag_o_ap_vld__1=float_exception_flag_o_ap_vld;
	*zExp__1=zExp;
	*zSig__1=zSig;
	*zSign__1=zSign;
	*dummy=clock;
       return;
}
