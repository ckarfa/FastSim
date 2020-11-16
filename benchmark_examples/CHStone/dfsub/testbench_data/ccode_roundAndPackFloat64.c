#include<stdio.h>
void roundAndPackFloat64(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *float_exception_flag_i__1,unsigned long long int *float_exception_flag_o__1,unsigned long long int *float_exception_flag_o_ap_vld__1,unsigned long long int *zExp__1,unsigned long long int *zSig__1,unsigned long long int *zSign__1,int dummy){
//printf("inside round and pack\n");
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int float_exception_flag_i=*float_exception_flag_i__1;
unsigned long long int float_exception_flag_o=*float_exception_flag_o__1;
unsigned long long int float_exception_flag_o_ap_vld=*float_exception_flag_o_ap_vld__1;
unsigned long long int zExp=*zExp__1;
unsigned long long int zSig=*zSig__1;
unsigned long long int zSign=*zSign__1;
/*//printf("zExp %llu\n",zExp);
//printf("zSig %llu\n",zSig);
//printf("zSign %llu\n",zSign);*/
   long long int ap_CS_fsm_state1=1;
   long long int ap_CS_fsm_state2=1;
   long long int ap_CS_fsm_state3=1;
   long long int ap_CS_fsm_state4=1;
   long long int tmp_53_cast_fu_377_p1=0;
   long long int tmp_53_cast_fu_377_p1__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_133_p4=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_133_p4__temp=0;
   unsigned long long int ap_return_preg=0;
   unsigned long long int ap_return_preg__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=1;
   unsigned long long int count_assign_fu_187_p2=0;
   unsigned long long int count_assign_fu_187_p2__temp=0;
   unsigned long long int count_assign_reg_469=0;
   unsigned long long int count_assign_reg_469__temp=0;
   unsigned long long int float_exception_flag_1_fu_315_p2=0;
   unsigned long long int float_exception_flag_1_fu_315_p2__temp=0;
   unsigned long long int float_exception_flag_9_fu_209_p2=0;
   unsigned long long int float_exception_flag_9_fu_209_p2__temp=0;
   unsigned long long int float_exception_flag_i__temp=0;
   unsigned long long int icmp_fu_203_p2=0;
   unsigned long long int icmp_fu_203_p2__temp=0;
   unsigned long long int icmp_reg_474=0;
   unsigned long long int icmp_reg_474__temp=0;
   unsigned long long int p_0_reg_130=0;
   unsigned long long int p_0_reg_130__temp=0;
   unsigned long long int roundBits_1_reg_119=0;
   unsigned long long int roundBits_1_reg_119__temp=0;
   unsigned long long int roundBits_2_fu_305_p1=0;
   unsigned long long int roundBits_2_fu_305_p1__temp=0;
   unsigned long long int roundBits_fu_143_p1=0;
   unsigned long long int roundBits_fu_143_p1__temp=0;
   unsigned long long int tmp_24_fu_153_p2=0;
   unsigned long long int tmp_24_fu_153_p2__temp=0;
   unsigned long long int tmp_24_reg_454=0;
   unsigned long long int tmp_24_reg_454__temp=0;
   unsigned long long int tmp_25_fu_159_p2=0;
   unsigned long long int tmp_25_fu_159_p2__temp=0;
   unsigned long long int tmp_25_reg_458=0;
   unsigned long long int tmp_25_reg_458__temp=0;
   unsigned long long int tmp_26_fu_165_p2=0;
   unsigned long long int tmp_26_fu_165_p2__temp=0;
   unsigned long long int tmp_29_fu_309_p2=0;
   unsigned long long int tmp_29_fu_309_p2__temp=0;
   unsigned long long int tmp_2_i_fu_265_p2=0;
   unsigned long long int tmp_2_i_fu_265_p2__temp=0;
   unsigned long long int tmp_30_fu_327_p2=0;
   unsigned long long int tmp_30_fu_327_p2__temp=0;
   unsigned long long int tmp_31_fu_333_p2=0;
   unsigned long long int tmp_31_fu_333_p2__temp=0;
   unsigned long long int tmp_32_fu_345_p2=0;
   unsigned long long int tmp_32_fu_345_p2__temp=0;
   unsigned long long int tmp_33_fu_361_p2=0;
   unsigned long long int tmp_33_fu_361_p2__temp=0;
   unsigned long long int tmp_34_fu_367_p1=0;
   unsigned long long int tmp_34_fu_367_p1__temp=0;
   unsigned long long int tmp_35_fu_371_p2=0;
   unsigned long long int tmp_35_fu_371_p2__temp=0;
   unsigned long long int tmp_36_fu_387_p2=0;
   unsigned long long int tmp_36_fu_387_p2__temp=0;
   unsigned long long int tmp_37_i_fu_235_p1=0;
   unsigned long long int tmp_37_i_fu_235_p1__temp=0;
   unsigned long long int tmp_38_i_fu_238_p2=0;
   unsigned long long int tmp_38_i_fu_238_p2__temp=0;
   unsigned long long int tmp_3_i_fu_271_p4=0;
   unsigned long long int tmp_3_i_fu_271_p4__temp=0;
   unsigned long long int tmp_41_i_fu_246_p1=0;
   unsigned long long int tmp_41_i_fu_246_p1__temp=0;
   unsigned long long int tmp_42_i_fu_250_p2=0;
   unsigned long long int tmp_42_i_fu_250_p2__temp=0;
   unsigned long long int tmp_43_i_fu_255_p2=0;
   unsigned long long int tmp_43_i_fu_255_p2__temp=0;
   unsigned long long int tmp_44_i_fu_289_p2=0;
   unsigned long long int tmp_44_i_fu_289_p2__temp=0;
   unsigned long long int tmp_56_fu_171_p3=0;
   unsigned long long int tmp_56_fu_171_p3__temp=0;
   unsigned long long int tmp_56_reg_462=0;
   unsigned long long int tmp_56_reg_462__temp=0;
   unsigned long long int tmp_57_fu_179_p3=0;
   unsigned long long int tmp_57_fu_179_p3__temp=0;
   unsigned long long int tmp_58_fu_193_p4=0;
   unsigned long long int tmp_58_fu_193_p4__temp=0;
   unsigned long long int tmp_59_fu_243_p1=0;
   unsigned long long int tmp_59_fu_243_p1__temp=0;
   unsigned long long int tmp_60_fu_261_p1=0;
   unsigned long long int tmp_60_fu_261_p1__temp=0;
   unsigned long long int tmp_72_i_fu_400_p3=0;
   unsigned long long int tmp_72_i_fu_400_p3__temp=0;
   unsigned long long int tmp_73_i_fu_408_p4=0;
   unsigned long long int tmp_73_i_fu_408_p4__temp=0;
   unsigned long long int tmp_74_i8_fu_416_p2=0;
   unsigned long long int tmp_74_i8_fu_416_p2__temp=0;
   unsigned long long int tmp_74_i9_fu_229_p2=0;
   unsigned long long int tmp_74_i9_fu_229_p2__temp=0;
   unsigned long long int tmp_fu_392_p3=0;
   unsigned long long int tmp_fu_392_p3__temp=0;
   unsigned long long int tmp_i_fu_221_p3=0;
   unsigned long long int tmp_i_fu_221_p3__temp=0;
   unsigned long long int tmp_s_fu_147_p2=0;
   unsigned long long int tmp_s_fu_147_p2__temp=0;
   unsigned long long int tmp_s_reg_450=0;
   unsigned long long int tmp_s_reg_450__temp=0;
   unsigned long long int zExp__temp=0;
   unsigned long long int zExp_assign_1_reg_105=0;
   unsigned long long int zExp_assign_1_reg_105__temp=0;
   unsigned long long int zSig__temp=0;
   unsigned long long int zSig_assign1_reg_94=0;
   unsigned long long int zSig_assign1_reg_94__temp=0;
   unsigned long long int zSig_assign_1_cast_fu_351_p4=0;
   unsigned long long int zSig_assign_1_cast_fu_351_p4__temp=0;
   unsigned long long int zSig_assign_2_fu_381_p2=0;
   unsigned long long int zSig_assign_2_fu_381_p2__temp=0;
   unsigned long long int zSig_assign_2_reg_500=0;
   unsigned long long int zSig_assign_2_reg_500__temp=0;
   unsigned long long int zSign__temp=0;
   unsigned long long int z_2_fu_294_p1=0;
   unsigned long long int z_2_fu_294_p1__temp=0;
   unsigned long long int z_6_fu_298_p3=0;
   unsigned long long int z_6_fu_298_p3__temp=0;
   unsigned long long int z_fu_281_p3=0;
   unsigned long long int z_fu_281_p3__temp=0;
	//printf("zExp %llu\n",zExp);
	//printf("zSig %llu\n",zSig);
	//printf("zSign %llu\n",zSign);
	ap_done=0;
	ap_start=1;

   ap_ST_fsm_state1:
	//printf("state 1\n");
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   tmp_53_cast_fu_377_p1__temp = tmp_53_cast_fu_377_p1 ;
   tmp_74_i9_fu_229_p2__temp = tmp_74_i9_fu_229_p2 ;
   count_assign_reg_469__temp = count_assign_reg_469 ;
   tmp_29_fu_309_p2__temp = tmp_29_fu_309_p2 ;
   zSig_assign_2_fu_381_p2__temp = zSig_assign_2_fu_381_p2 ;
   roundBits_2_fu_305_p1__temp = roundBits_2_fu_305_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
    zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   tmp_33_fu_361_p2__temp = tmp_33_fu_361_p2 ;
   tmp_74_i8_fu_416_p2__temp = tmp_74_i8_fu_416_p2 ;
   tmp_42_i_fu_250_p2__temp = tmp_42_i_fu_250_p2 ;
   tmp_34_fu_367_p1__temp = tmp_34_fu_367_p1 ;
   tmp_2_i_fu_265_p2__temp = tmp_2_i_fu_265_p2 ;
   float_exception_flag_1_fu_315_p2__temp = float_exception_flag_1_fu_315_p2 ;
   z_6_fu_298_p3__temp = z_6_fu_298_p3 ;
   tmp_fu_392_p3__temp = tmp_fu_392_p3 ;
   tmp_44_i_fu_289_p2__temp = tmp_44_i_fu_289_p2 ;
   z_2_fu_294_p1__temp = z_2_fu_294_p1 ;
   tmp_31_fu_333_p2__temp = tmp_31_fu_333_p2 ;
   tmp_25_reg_458__temp = tmp_25_reg_458 ;
   z_fu_281_p3__temp = z_fu_281_p3 ;
   tmp_i_fu_221_p3__temp = tmp_i_fu_221_p3 ;
   tmp_24_reg_454__temp = tmp_24_reg_454 ;
   tmp_s_reg_450__temp = tmp_s_reg_450 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_59_fu_243_p1__temp = tmp_59_fu_243_p1 ;
   roundBits_1_reg_119__temp = roundBits_1_reg_119 ;
   tmp_26_fu_165_p2__temp = tmp_26_fu_165_p2 ;
   zSig_assign_1_cast_fu_351_p4__temp = zSig_assign_1_cast_fu_351_p4 ;
   tmp_30_fu_327_p2__temp = tmp_30_fu_327_p2 ;
   zExp_assign_1_reg_105__temp = zExp_assign_1_reg_105 ;
   tmp_38_i_fu_238_p2__temp = tmp_38_i_fu_238_p2 ;
   tmp_56_reg_462__temp = tmp_56_reg_462 ;
   tmp_41_i_fu_246_p1__temp = tmp_41_i_fu_246_p1 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_43_i_fu_255_p2__temp = tmp_43_i_fu_255_p2 ;
   ap_phi_mux_p_0_phi_fu_133_p4__temp = ap_phi_mux_p_0_phi_fu_133_p4 ;
   tmp_3_i_fu_271_p4__temp = tmp_3_i_fu_271_p4 ;
   tmp_72_i_fu_400_p3__temp = tmp_72_i_fu_400_p3 ;
   tmp_56_fu_171_p3__temp = tmp_56_fu_171_p3 ;
   p_0_reg_130__temp = p_0_reg_130 ;
   tmp_24_fu_153_p2__temp = tmp_24_fu_153_p2 ;
   tmp_25_fu_159_p2__temp = tmp_25_fu_159_p2 ;
   tmp_58_fu_193_p4__temp = tmp_58_fu_193_p4 ;
   tmp_32_fu_345_p2__temp = tmp_32_fu_345_p2 ;
   roundBits_fu_143_p1__temp = roundBits_fu_143_p1 ;
   icmp_fu_203_p2__temp = icmp_fu_203_p2 ;
   count_assign_fu_187_p2__temp = count_assign_fu_187_p2 ;
   zSig_assign1_reg_94__temp = zSig_assign1_reg_94 ;
   icmp_reg_474__temp = icmp_reg_474 ;
   tmp_57_fu_179_p3__temp = tmp_57_fu_179_p3 ;
   tmp_35_fu_371_p2__temp = tmp_35_fu_371_p2 ;
   float_exception_flag_9_fu_209_p2__temp = float_exception_flag_9_fu_209_p2 ;
   zSig_assign_2_reg_500__temp = zSig_assign_2_reg_500 ;
   tmp_60_fu_261_p1__temp = tmp_60_fu_261_p1 ;
   tmp_s_fu_147_p2__temp = tmp_s_fu_147_p2 ;
   tmp_73_i_fu_408_p4__temp = tmp_73_i_fu_408_p4 ;
   tmp_36_fu_387_p2__temp = tmp_36_fu_387_p2 ;

       ap_return_preg = 0 ;
               tmp_57_fu_179_p3 =   (  ( zExp__temp  >> 11 )  & 1 ) ;
               tmp_24_reg_454 =  tmp_24_reg_454__temp ;
               tmp_30_fu_327_p2 =   ( roundBits_1_reg_119__temp  == 0 ? 1 :  0 ) ;
               tmp_29_fu_309_p2 =   (  (  (  ( icmp_reg_474__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 18446744073709551614 )  >> 1 )  << 1 )  |  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 1 )  |  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  )  & 1 )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  )  & 1023 )  == 0 ? 1 :  0 ) ;
               tmp_25_reg_458 =  tmp_25_reg_458__temp ;
               tmp_s_reg_450 =  tmp_s_reg_450__temp ;
               tmp_25_fu_159_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
               tmp_56_fu_171_p3 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
               tmp_s_fu_147_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_56_reg_462 =  tmp_56_reg_462__temp ;
               tmp_24_fu_153_p2 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1)))) == 1){
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1))))
       {
           p_0_reg_130 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
           roundBits_1_reg_119 =   ( zSig__temp  & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
           zExp_assign_1_reg_105 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
           zSig_assign1_reg_94 =  zSig__temp ;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_25_fu_159_p2 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_56_fu_171_p3 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1))))
       {
           icmp_reg_474 =   (  (  (  ( 0 - zExp__temp  )  >> 6 )  & 3 )  != 1 ? 1 :  0 ) ;
           count_assign_reg_469 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_24_reg_454 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_25_reg_458 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_56_reg_462 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           tmp_s_reg_450 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
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
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1))))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_30_fu_327_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_29_fu_309_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state4;
   }
   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_25_fu_159_p2 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_56_fu_171_p3 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))) == 1){
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1))))
       {
               p_0_reg_130 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
               roundBits_1_reg_119 =   ( zSig__temp  & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
               zExp_assign_1_reg_105 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
               zSig_assign1_reg_94 =  zSig__temp ;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_25_fu_159_p2 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_56_fu_171_p3 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1))))
       {
               icmp_reg_474 =   (  (  (  ( 0 - zExp__temp  )  >> 6 )  & 3 )  != 1 ? 1 :  0 ) ;
               count_assign_reg_469 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_24_reg_454 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_25_reg_458 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_56_reg_462 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               tmp_s_reg_450 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
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
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1))))
       {
               float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_30_fu_327_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_29_fu_309_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1)))))
       {
               float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state2;
   }
   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && ((tmp_s_fu_147_p2 == 0) || ((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) || (((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0))))) == 1){
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1))))
       {
               p_0_reg_130 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
               roundBits_1_reg_119 =   ( zSig__temp  & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
               zExp_assign_1_reg_105 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
               zSig_assign1_reg_94 =  zSig__temp ;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_25_fu_159_p2 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_56_fu_171_p3 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1))))
       {
               icmp_reg_474 =   (  (  (  ( 0 - zExp__temp  )  >> 6 )  & 3 )  != 1 ? 1 :  0 ) ;
               count_assign_reg_469 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_24_reg_454 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_25_reg_458 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_56_reg_462 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               tmp_s_reg_450 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
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
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1))))
       {
               float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_30_fu_327_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_29_fu_309_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1)))))
       {
               float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state3;
   }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1))))
       {
           p_0_reg_130 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
           roundBits_1_reg_119 =   ( zSig__temp  & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
           zExp_assign_1_reg_105 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_147_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_57_fu_179_p3 == 0) && (tmp_25_fu_159_p2 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_57_fu_179_p3 == 0) && (tmp_56_fu_171_p3 == 0)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)))))
       {
           zSig_assign1_reg_94 =  zSig__temp ;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_25_fu_159_p2 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) || ((((tmp_56_fu_171_p3 == 0) && (tmp_57_fu_179_p3 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1))))
       {
           icmp_reg_474 =   (  (  (  ( 0 - zExp__temp  )  >> 6 )  & 3 )  != 1 ? 1 :  0 ) ;
           count_assign_reg_469 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_24_reg_454 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_25_reg_458 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_24_fu_153_p2 == 0)) && (tmp_s_fu_147_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_56_reg_462 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           tmp_s_reg_450 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
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
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1))))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_30_fu_327_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_29_fu_309_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state1;

   ap_ST_fsm_state2:
	//printf("state 2\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   tmp_53_cast_fu_377_p1__temp = tmp_53_cast_fu_377_p1 ;
   tmp_74_i9_fu_229_p2__temp = tmp_74_i9_fu_229_p2 ;
   count_assign_reg_469__temp = count_assign_reg_469 ;
   tmp_29_fu_309_p2__temp = tmp_29_fu_309_p2 ;
   zSig_assign_2_fu_381_p2__temp = zSig_assign_2_fu_381_p2 ;
   roundBits_2_fu_305_p1__temp = roundBits_2_fu_305_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_33_fu_361_p2__temp = tmp_33_fu_361_p2 ;
   tmp_74_i8_fu_416_p2__temp = tmp_74_i8_fu_416_p2 ;
   tmp_42_i_fu_250_p2__temp = tmp_42_i_fu_250_p2 ;
   tmp_34_fu_367_p1__temp = tmp_34_fu_367_p1 ;
   tmp_2_i_fu_265_p2__temp = tmp_2_i_fu_265_p2 ;
    zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   float_exception_flag_1_fu_315_p2__temp = float_exception_flag_1_fu_315_p2 ;
   z_6_fu_298_p3__temp = z_6_fu_298_p3 ;
   tmp_fu_392_p3__temp = tmp_fu_392_p3 ;
   tmp_44_i_fu_289_p2__temp = tmp_44_i_fu_289_p2 ;
   z_2_fu_294_p1__temp = z_2_fu_294_p1 ;
   tmp_31_fu_333_p2__temp = tmp_31_fu_333_p2 ;
   tmp_25_reg_458__temp = tmp_25_reg_458 ;
   z_fu_281_p3__temp = z_fu_281_p3 ;
   tmp_i_fu_221_p3__temp = tmp_i_fu_221_p3 ;
   tmp_24_reg_454__temp = tmp_24_reg_454 ;
   tmp_s_reg_450__temp = tmp_s_reg_450 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_59_fu_243_p1__temp = tmp_59_fu_243_p1 ;
   roundBits_1_reg_119__temp = roundBits_1_reg_119 ;
   tmp_26_fu_165_p2__temp = tmp_26_fu_165_p2 ;
   zSig_assign_1_cast_fu_351_p4__temp = zSig_assign_1_cast_fu_351_p4 ;
   tmp_30_fu_327_p2__temp = tmp_30_fu_327_p2 ;
   zExp_assign_1_reg_105__temp = zExp_assign_1_reg_105 ;
   tmp_38_i_fu_238_p2__temp = tmp_38_i_fu_238_p2 ;
   tmp_56_reg_462__temp = tmp_56_reg_462 ;
   tmp_41_i_fu_246_p1__temp = tmp_41_i_fu_246_p1 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_43_i_fu_255_p2__temp = tmp_43_i_fu_255_p2 ;
   ap_phi_mux_p_0_phi_fu_133_p4__temp = ap_phi_mux_p_0_phi_fu_133_p4 ;
   tmp_3_i_fu_271_p4__temp = tmp_3_i_fu_271_p4 ;
   tmp_72_i_fu_400_p3__temp = tmp_72_i_fu_400_p3 ;
   tmp_56_fu_171_p3__temp = tmp_56_fu_171_p3 ;
   p_0_reg_130__temp = p_0_reg_130 ;
   tmp_24_fu_153_p2__temp = tmp_24_fu_153_p2 ;
   tmp_25_fu_159_p2__temp = tmp_25_fu_159_p2 ;
   tmp_58_fu_193_p4__temp = tmp_58_fu_193_p4 ;
   tmp_32_fu_345_p2__temp = tmp_32_fu_345_p2 ;
   roundBits_fu_143_p1__temp = roundBits_fu_143_p1 ;
   icmp_fu_203_p2__temp = icmp_fu_203_p2 ;
   count_assign_fu_187_p2__temp = count_assign_fu_187_p2 ;
   zSig_assign1_reg_94__temp = zSig_assign1_reg_94 ;
   icmp_reg_474__temp = icmp_reg_474 ;
   tmp_57_fu_179_p3__temp = tmp_57_fu_179_p3 ;
   tmp_35_fu_371_p2__temp = tmp_35_fu_371_p2 ;
   float_exception_flag_9_fu_209_p2__temp = float_exception_flag_9_fu_209_p2 ;
   zSig_assign_2_reg_500__temp = zSig_assign_2_reg_500 ;
   tmp_60_fu_261_p1__temp = tmp_60_fu_261_p1 ;
   tmp_s_fu_147_p2__temp = tmp_s_fu_147_p2 ;
   tmp_73_i_fu_408_p4__temp = tmp_73_i_fu_408_p4 ;
   tmp_36_fu_387_p2__temp = tmp_36_fu_387_p2 ;

       ap_return_preg = 0 ;
               tmp_57_fu_179_p3 =   (  ( zExp__temp  >> 11 )  & 1 ) ;
               tmp_29_fu_309_p2 =   (  (  (  ( icmp_reg_474__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 18446744073709551614 )  >> 1 )  << 1 )  |  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 1 )  |  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  )  & 1 )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  )  & 1023 )  == 0 ? 1 :  0 ) ;
               tmp_30_fu_327_p2 =   ( roundBits_1_reg_119__temp  == 0 ? 1 :  0 ) ;
               tmp_25_fu_159_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
               tmp_56_fu_171_p3 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
               tmp_s_fu_147_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_24_fu_153_p2 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           roundBits_1_reg_119 =   (  (  ( icmp_reg_474__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 18446744073709551614 )  >> 1 )  << 1 )  |  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 1 )  |  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  )  & 1 )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  )  & 1023 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           zExp_assign_1_reg_105 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
           zSig_assign1_reg_94 =   (  ( icmp_reg_474__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 18446744073709551614 )  >> 1 )  << 1 )  |  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 1 )  |  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  )  & 1 )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  ) ;
       }
       if((tmp_29_fu_309_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 4 ) ;
       }
       if((((tmp_30_fu_327_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_29_fu_309_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:
	//printf("state 3\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
   tmp_53_cast_fu_377_p1__temp = tmp_53_cast_fu_377_p1 ;
   tmp_74_i9_fu_229_p2__temp = tmp_74_i9_fu_229_p2 ;
   count_assign_reg_469__temp = count_assign_reg_469 ;
   tmp_29_fu_309_p2__temp = tmp_29_fu_309_p2 ;
   zSig_assign_2_fu_381_p2__temp = zSig_assign_2_fu_381_p2 ;
   roundBits_2_fu_305_p1__temp = roundBits_2_fu_305_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_33_fu_361_p2__temp = tmp_33_fu_361_p2 ;
   tmp_74_i8_fu_416_p2__temp = tmp_74_i8_fu_416_p2 ;
   tmp_42_i_fu_250_p2__temp = tmp_42_i_fu_250_p2 ;
   tmp_34_fu_367_p1__temp = tmp_34_fu_367_p1 ;
   tmp_2_i_fu_265_p2__temp = tmp_2_i_fu_265_p2 ;
   float_exception_flag_1_fu_315_p2__temp = float_exception_flag_1_fu_315_p2 ;
   z_6_fu_298_p3__temp = z_6_fu_298_p3 ;
   tmp_fu_392_p3__temp = tmp_fu_392_p3 ;
   tmp_44_i_fu_289_p2__temp = tmp_44_i_fu_289_p2 ;
   z_2_fu_294_p1__temp = z_2_fu_294_p1 ;
   tmp_31_fu_333_p2__temp = tmp_31_fu_333_p2 ;
   tmp_25_reg_458__temp = tmp_25_reg_458 ;
   z_fu_281_p3__temp = z_fu_281_p3 ;
   tmp_i_fu_221_p3__temp = tmp_i_fu_221_p3 ;
   tmp_24_reg_454__temp = tmp_24_reg_454 ;
   tmp_s_reg_450__temp = tmp_s_reg_450 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_59_fu_243_p1__temp = tmp_59_fu_243_p1 ;
   roundBits_1_reg_119__temp = roundBits_1_reg_119 ;
   tmp_26_fu_165_p2__temp = tmp_26_fu_165_p2 ;
    zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   zSig_assign_1_cast_fu_351_p4__temp = zSig_assign_1_cast_fu_351_p4 ;
   tmp_30_fu_327_p2__temp = tmp_30_fu_327_p2 ;
   zExp_assign_1_reg_105__temp = zExp_assign_1_reg_105 ;
   tmp_38_i_fu_238_p2__temp = tmp_38_i_fu_238_p2 ;
   tmp_56_reg_462__temp = tmp_56_reg_462 ;
   tmp_41_i_fu_246_p1__temp = tmp_41_i_fu_246_p1 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_43_i_fu_255_p2__temp = tmp_43_i_fu_255_p2 ;
   ap_phi_mux_p_0_phi_fu_133_p4__temp = ap_phi_mux_p_0_phi_fu_133_p4 ;
   tmp_3_i_fu_271_p4__temp = tmp_3_i_fu_271_p4 ;
   tmp_72_i_fu_400_p3__temp = tmp_72_i_fu_400_p3 ;
   tmp_56_fu_171_p3__temp = tmp_56_fu_171_p3 ;
   p_0_reg_130__temp = p_0_reg_130 ;
   tmp_24_fu_153_p2__temp = tmp_24_fu_153_p2 ;
   tmp_25_fu_159_p2__temp = tmp_25_fu_159_p2 ;
   tmp_58_fu_193_p4__temp = tmp_58_fu_193_p4 ;
   tmp_32_fu_345_p2__temp = tmp_32_fu_345_p2 ;
   roundBits_fu_143_p1__temp = roundBits_fu_143_p1 ;
   icmp_fu_203_p2__temp = icmp_fu_203_p2 ;
   count_assign_fu_187_p2__temp = count_assign_fu_187_p2 ;
   zSig_assign1_reg_94__temp = zSig_assign1_reg_94 ;
   icmp_reg_474__temp = icmp_reg_474 ;
   tmp_57_fu_179_p3__temp = tmp_57_fu_179_p3 ;
   tmp_35_fu_371_p2__temp = tmp_35_fu_371_p2 ;
   float_exception_flag_9_fu_209_p2__temp = float_exception_flag_9_fu_209_p2 ;
   zSig_assign_2_reg_500__temp = zSig_assign_2_reg_500 ;
   tmp_60_fu_261_p1__temp = tmp_60_fu_261_p1 ;
   tmp_s_fu_147_p2__temp = tmp_s_fu_147_p2 ;
   tmp_73_i_fu_408_p4__temp = tmp_73_i_fu_408_p4 ;
   tmp_36_fu_387_p2__temp = tmp_36_fu_387_p2 ;

       ap_return_preg = 0 ;
               tmp_30_fu_327_p2 =   ( roundBits_1_reg_119__temp  == 0 ? 1 :  0 ) ;
               tmp_29_fu_309_p2 =   (  (  (  ( icmp_reg_474__temp  & 1 )  == 1 ?  (  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 18446744073709551614 )  >> 1 )  << 1 )  |  (  (  (  ( zSig__temp  >> count_assign_reg_469__temp  )  & 1 )  |  (  ( zSig__temp  <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  )  & 1 )  )  :   ( zSig__temp  != 0 ? 1 :  0 )  )  & 1023 )  == 0 ? 1 :  0 ) ;
               tmp_25_fu_159_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
               tmp_56_fu_171_p3 =   (  (  ( zSig__temp  + 512 )  >> 63 )  & 1 ) ;
               tmp_s_fu_147_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_24_fu_153_p2 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state3)
       {
           zSig_assign_2_reg_500 =   (  (  (  ( zSig_assign1_reg_94__temp  + 512 )  & 18446744073709550592 )  >> 10 )  &  (  ( roundBits_1_reg_119__temp  == 512 ? 1 :  0 )  ^ -1/*4294967295*/ )  ) ;
       }
       if((tmp_30_fu_327_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 1 ) ;
       }
       if((((tmp_30_fu_327_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_29_fu_309_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_24_fu_153_p2 == 1) && (tmp_s_fu_147_p2 == 1)) || (((tmp_56_fu_171_p3 == 1) && (tmp_25_fu_159_p2 == 1)) && (tmp_s_fu_147_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:
	//printf("state 4\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
   tmp_53_cast_fu_377_p1__temp = tmp_53_cast_fu_377_p1 ;
   tmp_74_i9_fu_229_p2__temp = tmp_74_i9_fu_229_p2 ;
   count_assign_reg_469__temp = count_assign_reg_469 ;
   tmp_29_fu_309_p2__temp = tmp_29_fu_309_p2 ;
   zSig_assign_2_fu_381_p2__temp = zSig_assign_2_fu_381_p2 ;
   roundBits_2_fu_305_p1__temp = roundBits_2_fu_305_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_33_fu_361_p2__temp = tmp_33_fu_361_p2 ;
   tmp_74_i8_fu_416_p2__temp = tmp_74_i8_fu_416_p2 ;
   tmp_42_i_fu_250_p2__temp = tmp_42_i_fu_250_p2 ;
   tmp_34_fu_367_p1__temp = tmp_34_fu_367_p1 ;
   tmp_2_i_fu_265_p2__temp = tmp_2_i_fu_265_p2 ;
   float_exception_flag_1_fu_315_p2__temp = float_exception_flag_1_fu_315_p2 ;
   z_6_fu_298_p3__temp = z_6_fu_298_p3 ;
   tmp_fu_392_p3__temp = tmp_fu_392_p3 ;
   tmp_44_i_fu_289_p2__temp = tmp_44_i_fu_289_p2 ;
   z_2_fu_294_p1__temp = z_2_fu_294_p1 ;
   tmp_31_fu_333_p2__temp = tmp_31_fu_333_p2 ;
   tmp_25_reg_458__temp = tmp_25_reg_458 ;
   z_fu_281_p3__temp = z_fu_281_p3 ;
   tmp_i_fu_221_p3__temp = tmp_i_fu_221_p3 ;
   tmp_24_reg_454__temp = tmp_24_reg_454 ;
    zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   tmp_s_reg_450__temp = tmp_s_reg_450 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_59_fu_243_p1__temp = tmp_59_fu_243_p1 ;
   roundBits_1_reg_119__temp = roundBits_1_reg_119 ;
   tmp_26_fu_165_p2__temp = tmp_26_fu_165_p2 ;
   zSig_assign_1_cast_fu_351_p4__temp = zSig_assign_1_cast_fu_351_p4 ;
   tmp_30_fu_327_p2__temp = tmp_30_fu_327_p2 ;
   zExp_assign_1_reg_105__temp = zExp_assign_1_reg_105 ;
   tmp_38_i_fu_238_p2__temp = tmp_38_i_fu_238_p2 ;
   tmp_56_reg_462__temp = tmp_56_reg_462 ;
   tmp_41_i_fu_246_p1__temp = tmp_41_i_fu_246_p1 ;
   tmp_37_i_fu_235_p1__temp = tmp_37_i_fu_235_p1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_43_i_fu_255_p2__temp = tmp_43_i_fu_255_p2 ;
   ap_phi_mux_p_0_phi_fu_133_p4__temp = ap_phi_mux_p_0_phi_fu_133_p4 ;
   tmp_3_i_fu_271_p4__temp = tmp_3_i_fu_271_p4 ;
   tmp_72_i_fu_400_p3__temp = tmp_72_i_fu_400_p3 ;
   tmp_56_fu_171_p3__temp = tmp_56_fu_171_p3 ;
   p_0_reg_130__temp = p_0_reg_130 ;
   tmp_24_fu_153_p2__temp = tmp_24_fu_153_p2 ;
   tmp_25_fu_159_p2__temp = tmp_25_fu_159_p2 ;
   tmp_58_fu_193_p4__temp = tmp_58_fu_193_p4 ;
   tmp_32_fu_345_p2__temp = tmp_32_fu_345_p2 ;
   roundBits_fu_143_p1__temp = roundBits_fu_143_p1 ;
   icmp_fu_203_p2__temp = icmp_fu_203_p2 ;
   count_assign_fu_187_p2__temp = count_assign_fu_187_p2 ;
   zSig_assign1_reg_94__temp = zSig_assign1_reg_94 ;
   icmp_reg_474__temp = icmp_reg_474 ;
   tmp_57_fu_179_p3__temp = tmp_57_fu_179_p3 ;
   tmp_35_fu_371_p2__temp = tmp_35_fu_371_p2 ;
   float_exception_flag_9_fu_209_p2__temp = float_exception_flag_9_fu_209_p2 ;
   zSig_assign_2_reg_500__temp = zSig_assign_2_reg_500 ;
   tmp_60_fu_261_p1__temp = tmp_60_fu_261_p1 ;
   tmp_s_fu_147_p2__temp = tmp_s_fu_147_p2 ;
   tmp_73_i_fu_408_p4__temp = tmp_73_i_fu_408_p4 ;
   tmp_36_fu_387_p2__temp = tmp_36_fu_387_p2 ;

       ap_return_preg = 0 ;
               tmp_25_reg_458 =  tmp_25_reg_458__temp ;
               tmp_56_reg_462 =  tmp_56_reg_462__temp ;
               tmp_24_reg_454 =  tmp_24_reg_454__temp ;
               tmp_s_reg_450 =  tmp_s_reg_450__temp ;
       if(1 == ap_CS_fsm_state4)
       {
           ap_return_preg = ap_phi_mux_p_0_phi_fu_133_p4;
       }
       if((1 == ap_CS_fsm_state4) && ((tmp_s_reg_450 == 0) || (((tmp_25_reg_458 == 0) && (tmp_24_reg_454 == 0)) || ((tmp_56_reg_462 == 0) && (tmp_24_reg_454 == 0)))))
       {
           p_0_reg_130 =   (  (  (  (  ( zSig_assign_2_reg_500__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 0 :  zExp_assign_1_reg_105__temp  )  << 52 )  +  (  (  ( zSign << 9 )  << 54 )  | zSig_assign_2_reg_500__temp  )  ) ;
       }
       if((1 == ap_CS_fsm_state4) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((1 == ap_CS_fsm_state4) && ((tmp_s_reg_450 == 0) || (((tmp_25_reg_458 == 0) && (tmp_24_reg_454 == 0)) || ((tmp_56_reg_462 == 0) && (tmp_24_reg_454 == 0)))))
       {
           ap_phi_mux_p_0_phi_fu_133_p4 =   (  (  (  (  ( zSig_assign_2_reg_500__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 0 :  zExp_assign_1_reg_105__temp  )  << 52 )  +  (  (  ( zSign << 9 )  << 54 )  | zSig_assign_2_reg_500__temp  )  ) ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           ap_return = ap_phi_mux_p_0_phi_fu_133_p4;
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
	*ap_return__1=ap_return;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*float_exception_flag_i__1=float_exception_flag_i;
	*float_exception_flag_o__1=float_exception_flag_o;
	*float_exception_flag_o_ap_vld__1=float_exception_flag_o_ap_vld;
	*zExp__1=zExp;
	*zSig__1=zSig;
	*zSign__1=zSign;
       return;
}
