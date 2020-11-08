#include<stdio.h>
/*do_twos_complement( long long unsigned int a ){
 long long int temp =  !(a)+1;
 temp=-(temp);
 
 return temp; 
}*/
void roundAndPackFloat64(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *float_exception_flag_i__1,unsigned long long int *float_exception_flag_o__1,unsigned long long int *float_exception_flag_o_ap_vld__1,unsigned long long int *zExp__1,unsigned long long int *zSig__1,unsigned long long int *zSign__1,int dummy){	
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
   long long int ap_CS_fsm_state1=1;
   long long int ap_CS_fsm_state2=1;
   long long int ap_CS_fsm_state3=1;
   long long int ap_CS_fsm_state4=1;
   long long int tmp_21_cast_fu_355_p1=0;
   long long int tmp_21_cast_fu_355_p1__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_129_p4=0;
   unsigned long long int ap_phi_mux_p_0_phi_fu_129_p4__temp=0;
   unsigned long long int ap_return_preg=0;
   unsigned long long int ap_return_preg__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=1;
   unsigned long long int count_assign_fu_183_p2=0;
   unsigned long long int count_assign_fu_183_p2__temp=0;
   unsigned long long int count_assign_reg_446=0;
   unsigned long long int count_assign_reg_446__temp=0;
   unsigned long long int float_exception_flag_2_fu_189_p2=0;
   unsigned long long int float_exception_flag_2_fu_189_p2__temp=0;
   unsigned long long int float_exception_flag_4_fu_293_p2=0;
   unsigned long long int float_exception_flag_4_fu_293_p2__temp=0;
   unsigned long long int float_exception_flag_i__temp=0;
   unsigned long long int p_0_reg_126=0;
   unsigned long long int p_0_reg_126__temp=0;
   unsigned long long int roundBits_1_reg_115;
   unsigned long long int roundBits_1_reg_115__temp;
   unsigned long long int roundBits_2_fu_279_p3=0;
   unsigned long long int roundBits_2_fu_279_p3__temp=0;
   unsigned long long int roundBits_fu_139_p1=0;
   unsigned long long int roundBits_fu_139_p1__temp=0;
   unsigned long long int tmp_10_fu_345_p1=0;
   unsigned long long int tmp_10_fu_345_p1__temp=0;
   unsigned long long int tmp_10_i_fu_245_p2=0;
   unsigned long long int tmp_10_i_fu_245_p2__temp=0;
   unsigned long long int tmp_11_fu_349_p2=0;
   unsigned long long int tmp_11_fu_349_p2__temp=0;
   unsigned long long int tmp_11_i_fu_251_p4=0;
   unsigned long long int tmp_11_i_fu_251_p4__temp=0;
   unsigned long long int tmp_12_fu_365_p2=0;
   unsigned long long int tmp_12_fu_365_p2__temp=0;
   unsigned long long int tmp_13_fu_370_p3=0;
   unsigned long long int tmp_13_fu_370_p3__temp=0;
   unsigned long long int tmp_15_fu_175_p3=0;
   unsigned long long int tmp_15_fu_175_p3__temp=0;
   unsigned long long int tmp_16_fu_223_p1=0;
   unsigned long long int tmp_16_fu_223_p1__temp=0;
   unsigned long long int tmp_17_fu_241_p1=0;
   unsigned long long int tmp_17_fu_241_p1__temp=0;
   unsigned long long int tmp_1_fu_149_p2=0;
   unsigned long long int tmp_1_fu_149_p2__temp=0;
   unsigned long long int tmp_1_i_fu_230_p2=0;
   unsigned long long int tmp_1_i_fu_230_p2__temp=0;
   unsigned long long int tmp_1_reg_431;
   unsigned long long int tmp_1_reg_431__temp;
   unsigned long long int tmp_28_i_fu_378_p3=0;
   unsigned long long int tmp_28_i_fu_378_p3__temp=0;
   unsigned long long int tmp_29_i_fu_386_p4=0;
   unsigned long long int tmp_29_i_fu_386_p4__temp=0;
   unsigned long long int tmp_2_fu_155_p2=0;
   unsigned long long int tmp_2_fu_155_p2__temp=0;
   unsigned long long int tmp_2_i_fu_235_p2=0;
   unsigned long long int tmp_2_i_fu_235_p2__temp=0;
   unsigned long long int tmp_2_reg_435;
   unsigned long long int tmp_2_reg_435__temp;
   unsigned long long int tmp_30_i8_fu_394_p2=0;
   unsigned long long int tmp_30_i8_fu_394_p2__temp=0;
   unsigned long long int tmp_30_i9_fu_209_p2=0;
   unsigned long long int tmp_30_i9_fu_209_p2__temp=0;
   unsigned long long int tmp_3_fu_287_p2=0;
   unsigned long long int tmp_3_fu_287_p2__temp=0;
   unsigned long long int tmp_4_fu_161_p2=0;
   unsigned long long int tmp_4_fu_161_p2__temp=0;
   unsigned long long int tmp_5_fu_305_p2=0;
   unsigned long long int tmp_5_fu_305_p2__temp=0;
   unsigned long long int tmp_6_fu_339_p2=0;
   unsigned long long int tmp_6_fu_339_p2__temp=0;
   unsigned long long int tmp_6_i_fu_215_p1=0;
   unsigned long long int tmp_6_i_fu_215_p1__temp=0;
   unsigned long long int tmp_7_fu_167_p3=0;
   unsigned long long int tmp_7_fu_167_p3__temp=0;
   unsigned long long int tmp_7_i_fu_218_p2=0;
   unsigned long long int tmp_7_i_fu_218_p2__temp=0;
   unsigned long long int tmp_7_reg_439;
   unsigned long long int tmp_7_reg_439__temp;
   unsigned long long int tmp_8_fu_311_p2=0;
   unsigned long long int tmp_8_fu_311_p2__temp=0;
   unsigned long long int tmp_9_fu_323_p2=0;
   unsigned long long int tmp_9_fu_323_p2__temp=0;
   unsigned long long int tmp_fu_269_p4=0;
   unsigned long long int tmp_fu_269_p4__temp=0;
   unsigned long long int tmp_i3_fu_226_p1=0;
   unsigned long long int tmp_i3_fu_226_p1__temp=0;
   unsigned long long int tmp_i_fu_201_p3=0;
   unsigned long long int tmp_i_fu_201_p3__temp=0;
   unsigned long long int tmp_s_fu_143_p2=0;
   unsigned long long int tmp_s_fu_143_p2__temp=0;
   unsigned long long int tmp_s_reg_427;
   unsigned long long int tmp_s_reg_427__temp;
   unsigned long long int zExp__temp=0;
   unsigned long long int zExp_assign_1_reg_101=0;
   unsigned long long int zExp_assign_1_reg_101__temp=0;
   unsigned long long int zSig__temp=0;
   unsigned long long int zSig_assign1_reg_90=0;
   unsigned long long int zSig_assign1_reg_90__temp=0;
   unsigned long long int zSig_assign_1_cast_fu_329_p4=0;
   unsigned long long int zSig_assign_1_cast_fu_329_p4__temp=0;
   unsigned long long int zSig_assign_2_fu_359_p2=0;
   unsigned long long int zSig_assign_2_fu_359_p2__temp=0;
   unsigned long long int zSig_assign_2_reg_472=0;
   unsigned long long int zSig_assign_2_reg_472__temp=0;
   unsigned long long int zSign__temp=0;
   unsigned long long int z_fu_261_p3=0;
   unsigned long long int z_fu_261_p3__temp=0;
	ap_done=0;
	ap_start=1;

   ap_ST_fsm_state1:        
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   tmp_21_cast_fu_355_p1__temp = tmp_21_cast_fu_355_p1 ;
   ap_phi_mux_p_0_phi_fu_129_p4__temp = ap_phi_mux_p_0_phi_fu_129_p4 ;
   tmp_16_fu_223_p1__temp = tmp_16_fu_223_p1 ;
   tmp_15_fu_175_p3__temp = tmp_15_fu_175_p3 ;
   tmp_fu_269_p4__temp = tmp_fu_269_p4 ;
   z_fu_261_p3__temp = z_fu_261_p3 ;
   tmp_7_i_fu_218_p2__temp = tmp_7_i_fu_218_p2 ;
   tmp_i3_fu_226_p1__temp = tmp_i3_fu_226_p1 ;
   p_0_reg_126__temp = p_0_reg_126 ;
   tmp_29_i_fu_386_p4__temp = tmp_29_i_fu_386_p4 ;
   tmp_2_reg_435__temp = tmp_2_reg_435 ;
   count_assign_reg_446__temp = count_assign_reg_446 ;
   zSig_assign_2_reg_472__temp = zSig_assign_2_reg_472 ;
   tmp_8_fu_311_p2__temp = tmp_8_fu_311_p2 ;
   tmp_28_i_fu_378_p3__temp = tmp_28_i_fu_378_p3 ;
   tmp_2_i_fu_235_p2__temp = tmp_2_i_fu_235_p2 ;
   tmp_10_fu_345_p1__temp = tmp_10_fu_345_p1 ;
   tmp_30_i9_fu_209_p2__temp = tmp_30_i9_fu_209_p2 ;
   zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   tmp_12_fu_365_p2__temp = tmp_12_fu_365_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_7_reg_439__temp = tmp_7_reg_439 ;
   count_assign_fu_183_p2__temp = count_assign_fu_183_p2 ;
   zSig_assign1_reg_90__temp = zSig_assign1_reg_90 ;
   tmp_1_fu_149_p2__temp = tmp_1_fu_149_p2 ;
   tmp_17_fu_241_p1__temp = tmp_17_fu_241_p1 ;
   float_exception_flag_2_fu_189_p2__temp = float_exception_flag_2_fu_189_p2 ;
   zSig_assign_1_cast_fu_329_p4__temp = zSig_assign_1_cast_fu_329_p4 ;
   tmp_2_fu_155_p2__temp = tmp_2_fu_155_p2 ;
   tmp_s_fu_143_p2__temp = tmp_s_fu_143_p2 ;
   roundBits_2_fu_279_p3__temp = roundBits_2_fu_279_p3 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_6_i_fu_215_p1__temp = tmp_6_i_fu_215_p1 ;
   tmp_9_fu_323_p2__temp = tmp_9_fu_323_p2 ;
   tmp_1_i_fu_230_p2__temp = tmp_1_i_fu_230_p2 ;
   zExp_assign_1_reg_101__temp = zExp_assign_1_reg_101 ;
   zSig_assign_2_fu_359_p2__temp = zSig_assign_2_fu_359_p2 ;
   tmp_i_fu_201_p3__temp = tmp_i_fu_201_p3 ;
   tmp_6_fu_339_p2__temp = tmp_6_fu_339_p2 ;
   roundBits_fu_139_p1__temp = roundBits_fu_139_p1 ;
   tmp_11_i_fu_251_p4__temp = tmp_11_i_fu_251_p4 ;
   tmp_11_fu_349_p2__temp = tmp_11_fu_349_p2 ;
   tmp_3_fu_287_p2__temp = tmp_3_fu_287_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_4_fu_161_p2__temp = tmp_4_fu_161_p2 ;
   float_exception_flag_4_fu_293_p2__temp = float_exception_flag_4_fu_293_p2 ;
   tmp_5_fu_305_p2__temp = tmp_5_fu_305_p2 ;
   tmp_13_fu_370_p3__temp = tmp_13_fu_370_p3 ;
   tmp_1_reg_431__temp = tmp_1_reg_431 ;
   tmp_30_i8_fu_394_p2__temp = tmp_30_i8_fu_394_p2 ;
   tmp_7_fu_167_p3__temp = tmp_7_fu_167_p3 ;
   tmp_s_reg_427__temp = tmp_s_reg_427 ;
   tmp_10_i_fu_245_p2__temp = tmp_10_i_fu_245_p2 ;
   roundBits_1_reg_115__temp = roundBits_1_reg_115 ;

       ap_return_preg = 0 ;
               tmp_7_reg_439 =  tmp_7_reg_439__temp ;
               tmp_15_fu_175_p3 =   (  ( zExp__temp  >> 11 )  & 1 ) ;
               tmp_2_reg_435 =  tmp_2_reg_435__temp ;
               tmp_3_fu_287_p2 =   (  (  (  (  ( zSig >> count_assign_reg_446__temp  )  >> 1 )  << 1 )  |  (  (  (  ( zSig <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig >> count_assign_reg_446__temp  )  & 1 )  )  & 1 )  )  == 0 ? 1 :  0 ) ;
               tmp_7_fu_167_p3 =   (  (  ( zSig + 512 )  >> 63 )  & 1 ) ;
               tmp_s_fu_143_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_5_fu_305_p2 =   ( roundBits_1_reg_115__temp  == 0 ? 1 :  0 ) ;
               tmp_s_reg_427 =  tmp_s_reg_427__temp ;
               tmp_1_reg_431 =  tmp_1_reg_431__temp ;
               tmp_1_fu_149_p2 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
               tmp_2_fu_155_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1)))) == 1){
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1))))
       {
           p_0_reg_126 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
           roundBits_1_reg_115 =   ( zSig & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
           zExp_assign_1_reg_101 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
           zSig_assign1_reg_90 =  zSig;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_155_p2 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_7_fu_167_p3 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1))))
       {
           count_assign_reg_446 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_1_reg_431 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_2_reg_435 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_7_reg_439 =   (  (  ( zSig + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           tmp_s_reg_427 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
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
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1))))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_5_fu_305_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_287_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state4;
   }
   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_155_p2 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_7_fu_167_p3 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))) == 1){
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1))))
       {
               p_0_reg_126 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
               roundBits_1_reg_115 =   ( zSig & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
               zExp_assign_1_reg_101 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
               zSig_assign1_reg_90 =  zSig;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_155_p2 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_7_fu_167_p3 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1))))
       {
               count_assign_reg_446 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_1_reg_431 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_2_reg_435 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_7_reg_439 =   (  (  ( zSig + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               tmp_s_reg_427 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
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
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1))))
       {
               float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_5_fu_305_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_287_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1)))))
       {
               float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state2;
   }
   if((((ap_start == 1) && (1 == ap_CS_fsm_state1)) && ((tmp_s_fu_143_p2 == 0) || ((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) || (((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0))))) == 1){
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1))))
       {
               p_0_reg_126 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
               roundBits_1_reg_115 =   ( zSig & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
               zExp_assign_1_reg_101 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
               zSig_assign1_reg_90 =  zSig;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_155_p2 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_7_fu_167_p3 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1))))
       {
               count_assign_reg_446 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_1_reg_431 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_2_reg_435 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               tmp_7_reg_439 =   (  (  ( zSig + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               tmp_s_reg_427 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
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
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1))))
       {
               float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_5_fu_305_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_287_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1)))))
       {
               float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state3;
   }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1))))
       {
           p_0_reg_126 =   (  ( zSign << 63 )  | 9218868437227405312 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
           roundBits_1_reg_115 =   ( zSig & 1023 ) ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
           zExp_assign_1_reg_101 =  zExp__temp ;
       }
       if((((ap_start == 1) && (tmp_s_fu_143_p2 == 0)) && (1 == ap_CS_fsm_state1)) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_15_fu_175_p3 == 0) && (tmp_2_fu_155_p2 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_15_fu_175_p3 == 0) && (tmp_7_fu_167_p3 == 0)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)))))
       {
           zSig_assign1_reg_90 =  zSig;
       }
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((((tmp_2_fu_155_p2 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) || ((((tmp_7_fu_167_p3 == 0) && (tmp_15_fu_175_p3 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1))))
       {
           count_assign_reg_446 =   ( 0 - zExp__temp  ) ;
       }
       if(((ap_start == 1) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_1_reg_431 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
       }
       if((((ap_start == 1) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_2_reg_435 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       }
       if(((((ap_start == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_1_fu_149_p2 == 0)) && (tmp_s_fu_143_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           tmp_7_reg_439 =   (  (  ( zSig + 512 )  >> 63 )  & 1 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           tmp_s_reg_427 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
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
       if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1))))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 9 ) ;
       }
       if((((tmp_5_fu_305_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_287_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state1;

   ap_ST_fsm_state2:	
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   tmp_21_cast_fu_355_p1__temp = tmp_21_cast_fu_355_p1 ;
   ap_phi_mux_p_0_phi_fu_129_p4__temp = ap_phi_mux_p_0_phi_fu_129_p4 ;
   tmp_16_fu_223_p1__temp = tmp_16_fu_223_p1 ;
   tmp_15_fu_175_p3__temp = tmp_15_fu_175_p3 ;
   tmp_fu_269_p4__temp = tmp_fu_269_p4 ;
   z_fu_261_p3__temp = z_fu_261_p3 ;
   zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   tmp_7_i_fu_218_p2__temp = tmp_7_i_fu_218_p2 ;
   tmp_i3_fu_226_p1__temp = tmp_i3_fu_226_p1 ;
   p_0_reg_126__temp = p_0_reg_126 ;
   tmp_29_i_fu_386_p4__temp = tmp_29_i_fu_386_p4 ;
   tmp_2_reg_435__temp = tmp_2_reg_435 ;
   count_assign_reg_446__temp = count_assign_reg_446 ;
   zSig_assign_2_reg_472__temp = zSig_assign_2_reg_472 ;
   tmp_8_fu_311_p2__temp = tmp_8_fu_311_p2 ;
   tmp_28_i_fu_378_p3__temp = tmp_28_i_fu_378_p3 ;
   tmp_2_i_fu_235_p2__temp = tmp_2_i_fu_235_p2 ;
   tmp_10_fu_345_p1__temp = tmp_10_fu_345_p1 ;
   tmp_30_i9_fu_209_p2__temp = tmp_30_i9_fu_209_p2 ;
   tmp_12_fu_365_p2__temp = tmp_12_fu_365_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_7_reg_439__temp = tmp_7_reg_439 ;
   count_assign_fu_183_p2__temp = count_assign_fu_183_p2 ;
   zSig_assign1_reg_90__temp = zSig_assign1_reg_90 ;
   tmp_1_fu_149_p2__temp = tmp_1_fu_149_p2 ;
   tmp_17_fu_241_p1__temp = tmp_17_fu_241_p1 ;
   float_exception_flag_2_fu_189_p2__temp = float_exception_flag_2_fu_189_p2 ;
   zSig_assign_1_cast_fu_329_p4__temp = zSig_assign_1_cast_fu_329_p4 ;
   tmp_2_fu_155_p2__temp = tmp_2_fu_155_p2 ;
   tmp_s_fu_143_p2__temp = tmp_s_fu_143_p2 ;
   roundBits_2_fu_279_p3__temp = roundBits_2_fu_279_p3 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_6_i_fu_215_p1__temp = tmp_6_i_fu_215_p1 ;
   tmp_9_fu_323_p2__temp = tmp_9_fu_323_p2 ;
   tmp_1_i_fu_230_p2__temp = tmp_1_i_fu_230_p2 ;
   zExp_assign_1_reg_101__temp = zExp_assign_1_reg_101 ;
   zSig_assign_2_fu_359_p2__temp = zSig_assign_2_fu_359_p2 ;
   tmp_i_fu_201_p3__temp = tmp_i_fu_201_p3 ;
   tmp_6_fu_339_p2__temp = tmp_6_fu_339_p2 ;
   roundBits_fu_139_p1__temp = roundBits_fu_139_p1 ;
   tmp_11_i_fu_251_p4__temp = tmp_11_i_fu_251_p4 ;
   tmp_11_fu_349_p2__temp = tmp_11_fu_349_p2 ;
   tmp_3_fu_287_p2__temp = tmp_3_fu_287_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_4_fu_161_p2__temp = tmp_4_fu_161_p2 ;
   float_exception_flag_4_fu_293_p2__temp = float_exception_flag_4_fu_293_p2 ;
   tmp_5_fu_305_p2__temp = tmp_5_fu_305_p2 ;
   tmp_13_fu_370_p3__temp = tmp_13_fu_370_p3 ;
   tmp_1_reg_431__temp = tmp_1_reg_431 ;
   tmp_30_i8_fu_394_p2__temp = tmp_30_i8_fu_394_p2 ;
   tmp_7_fu_167_p3__temp = tmp_7_fu_167_p3 ;
   tmp_s_reg_427__temp = tmp_s_reg_427 ;
   tmp_10_i_fu_245_p2__temp = tmp_10_i_fu_245_p2 ;
   roundBits_1_reg_115__temp = roundBits_1_reg_115 ;

       ap_return_preg = 0 ;
               tmp_15_fu_175_p3 =   (  ( zExp__temp  >> 11 )  & 1 ) ;
               tmp_3_fu_287_p2 =   (  (  (  (  ( zSig >> count_assign_reg_446__temp  )  >> 1 )  << 1 )  |  (  (  (  ( zSig <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig >> count_assign_reg_446__temp  )  & 1 )  )  & 1 )  )  == 0 ? 1 :  0 ) ;
               tmp_7_fu_167_p3 =   (  (  ( zSig + 512 )  >> 63 )  & 1 ) ;
               tmp_s_fu_143_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_5_fu_305_p2 =   ( roundBits_1_reg_115__temp  == 0 ? 1 :  0 ) ;
               tmp_1_fu_149_p2 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
               tmp_2_fu_155_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state2)
       {
           roundBits_1_reg_115 =   (  (  (  ( zSig >> count_assign_reg_446__temp  )  >> 1 )  << 1 )  |  (  (  (  ( zSig <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig >> count_assign_reg_446__temp  )  & 1 )  )  & 1 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           zExp_assign_1_reg_101 =  0;
       }
       if(1 == ap_CS_fsm_state2)
       {
           zSig_assign1_reg_90 =   (  (  (  (  ( zSig >> count_assign_reg_446__temp  )  & 18446744073709551614 )  >> 1 )  << 1 )  |  (  (  (  ( zSig <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig >> count_assign_reg_446__temp  )  & 1 )  )  & 1 )  ) ;
       }
       if((tmp_3_fu_287_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 4 ) ;
       }
       if((((tmp_5_fu_305_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_287_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:	
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
   tmp_21_cast_fu_355_p1__temp = tmp_21_cast_fu_355_p1 ;
   ap_phi_mux_p_0_phi_fu_129_p4__temp = ap_phi_mux_p_0_phi_fu_129_p4 ;
   tmp_16_fu_223_p1__temp = tmp_16_fu_223_p1 ;
   tmp_15_fu_175_p3__temp = tmp_15_fu_175_p3 ;
   tmp_fu_269_p4__temp = tmp_fu_269_p4 ;
   z_fu_261_p3__temp = z_fu_261_p3 ;
   tmp_7_i_fu_218_p2__temp = tmp_7_i_fu_218_p2 ;
   tmp_i3_fu_226_p1__temp = tmp_i3_fu_226_p1 ;
   p_0_reg_126__temp = p_0_reg_126 ;
   tmp_29_i_fu_386_p4__temp = tmp_29_i_fu_386_p4 ;
   tmp_2_reg_435__temp = tmp_2_reg_435 ;
   count_assign_reg_446__temp = count_assign_reg_446 ;
   zSig_assign_2_reg_472__temp = zSig_assign_2_reg_472 ;
   tmp_8_fu_311_p2__temp = tmp_8_fu_311_p2 ;
   tmp_28_i_fu_378_p3__temp = tmp_28_i_fu_378_p3 ;
   tmp_2_i_fu_235_p2__temp = tmp_2_i_fu_235_p2 ;
   tmp_10_fu_345_p1__temp = tmp_10_fu_345_p1 ;
   tmp_30_i9_fu_209_p2__temp = tmp_30_i9_fu_209_p2 ;
   tmp_12_fu_365_p2__temp = tmp_12_fu_365_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_7_reg_439__temp = tmp_7_reg_439 ;
   count_assign_fu_183_p2__temp = count_assign_fu_183_p2 ;
   zSig_assign1_reg_90__temp = zSig_assign1_reg_90 ;
   tmp_1_fu_149_p2__temp = tmp_1_fu_149_p2 ;
   tmp_17_fu_241_p1__temp = tmp_17_fu_241_p1 ;
   float_exception_flag_2_fu_189_p2__temp = float_exception_flag_2_fu_189_p2 ;
   zSig_assign_1_cast_fu_329_p4__temp = zSig_assign_1_cast_fu_329_p4 ;
   tmp_2_fu_155_p2__temp = tmp_2_fu_155_p2 ;
   tmp_s_fu_143_p2__temp = tmp_s_fu_143_p2 ;
   roundBits_2_fu_279_p3__temp = roundBits_2_fu_279_p3 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_6_i_fu_215_p1__temp = tmp_6_i_fu_215_p1 ;
   tmp_9_fu_323_p2__temp = tmp_9_fu_323_p2 ;
   tmp_1_i_fu_230_p2__temp = tmp_1_i_fu_230_p2 ;
   zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   zExp_assign_1_reg_101__temp = zExp_assign_1_reg_101 ;
   zSig_assign_2_fu_359_p2__temp = zSig_assign_2_fu_359_p2 ;
   tmp_i_fu_201_p3__temp = tmp_i_fu_201_p3 ;
   tmp_6_fu_339_p2__temp = tmp_6_fu_339_p2 ;
   roundBits_fu_139_p1__temp = roundBits_fu_139_p1 ;
   tmp_11_i_fu_251_p4__temp = tmp_11_i_fu_251_p4 ;
   tmp_11_fu_349_p2__temp = tmp_11_fu_349_p2 ;
   tmp_3_fu_287_p2__temp = tmp_3_fu_287_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_4_fu_161_p2__temp = tmp_4_fu_161_p2 ;
   float_exception_flag_4_fu_293_p2__temp = float_exception_flag_4_fu_293_p2 ;
   tmp_5_fu_305_p2__temp = tmp_5_fu_305_p2 ;
   tmp_13_fu_370_p3__temp = tmp_13_fu_370_p3 ;
   tmp_1_reg_431__temp = tmp_1_reg_431 ;
   tmp_30_i8_fu_394_p2__temp = tmp_30_i8_fu_394_p2 ;
   tmp_7_fu_167_p3__temp = tmp_7_fu_167_p3 ;
   tmp_s_reg_427__temp = tmp_s_reg_427 ;
   tmp_10_i_fu_245_p2__temp = tmp_10_i_fu_245_p2 ;
   roundBits_1_reg_115__temp = roundBits_1_reg_115 ;

       ap_return_preg = 0 ;
               tmp_3_fu_287_p2 =   (  (  (  (  ( zSig >> count_assign_reg_446__temp  )  >> 1 )  << 1 )  |  (  (  (  ( zSig <<  ( zExp__temp  & 63 )  )  != 0 ? 1 :  0 )  |  (  ( zSig >> count_assign_reg_446__temp  )  & 1 )  )  & 1 )  )  == 0 ? 1 :  0 ) ;
               tmp_7_fu_167_p3 =   (  (  ( zSig + 512 )  >> 63 )  & 1 ) ;
               tmp_s_fu_143_p2 =   ( zExp__temp  > 2044 ? 1 :  0 ) ;
               tmp_5_fu_305_p2 =   ( roundBits_1_reg_115__temp  == 0 ? 1 :  0 ) ;
               tmp_1_fu_149_p2 =   ( do_twos_complement(zExp )  > do_twos_complement(2045 )  ? 1 :  0 ) ;
               tmp_2_fu_155_p2 =   ( zExp__temp  == 2045 ? 1 :  0 ) ;
       if(1 == ap_CS_fsm_state3)
       {
           zSig_assign_2_reg_472 =   (  (  (  ( zSig_assign1_reg_90__temp  + 512 )  & 18446744073709550592 )  >> 10 )  &  (  ( roundBits_1_reg_115__temp  == 512 ? 1 :  0 )  ^ -1/*4294967295*/ )  ) ;	 
       }
       if((tmp_5_fu_305_p2 == 0) && (1 == ap_CS_fsm_state3))
       {
           float_exception_flag_o =   ( float_exception_flag_i | 1 ) ;
       }
       if((((tmp_5_fu_305_p2 == 0) && (1 == ap_CS_fsm_state3)) || ((tmp_3_fu_287_p2 == 0) && (1 == ap_CS_fsm_state2))) || (((ap_start == 1) && (1 == ap_CS_fsm_state1)) && (((tmp_1_fu_149_p2 == 1) && (tmp_s_fu_143_p2 == 1)) || (((tmp_7_fu_167_p3 == 1) && (tmp_2_fu_155_p2 == 1)) && (tmp_s_fu_143_p2 == 1)))))
       {
           float_exception_flag_o_ap_vld =  1;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:	
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
   tmp_21_cast_fu_355_p1__temp = tmp_21_cast_fu_355_p1 ;
   ap_phi_mux_p_0_phi_fu_129_p4__temp = ap_phi_mux_p_0_phi_fu_129_p4 ;
   tmp_16_fu_223_p1__temp = tmp_16_fu_223_p1 ;
   tmp_15_fu_175_p3__temp = tmp_15_fu_175_p3 ;
   tmp_fu_269_p4__temp = tmp_fu_269_p4 ;
   z_fu_261_p3__temp = z_fu_261_p3 ;
   tmp_7_i_fu_218_p2__temp = tmp_7_i_fu_218_p2 ;
   tmp_i3_fu_226_p1__temp = tmp_i3_fu_226_p1 ;
   p_0_reg_126__temp = p_0_reg_126 ;
   tmp_29_i_fu_386_p4__temp = tmp_29_i_fu_386_p4 ;
   tmp_2_reg_435__temp = tmp_2_reg_435 ;
   count_assign_reg_446__temp = count_assign_reg_446 ;
   zSig_assign_2_reg_472__temp = zSig_assign_2_reg_472 ;
   tmp_8_fu_311_p2__temp = tmp_8_fu_311_p2 ;
   tmp_28_i_fu_378_p3__temp = tmp_28_i_fu_378_p3 ;
   tmp_2_i_fu_235_p2__temp = tmp_2_i_fu_235_p2 ;
   tmp_10_fu_345_p1__temp = tmp_10_fu_345_p1 ;
   tmp_30_i9_fu_209_p2__temp = tmp_30_i9_fu_209_p2 ;
   tmp_12_fu_365_p2__temp = tmp_12_fu_365_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_7_reg_439__temp = tmp_7_reg_439 ;
   count_assign_fu_183_p2__temp = count_assign_fu_183_p2 ;
   zSig_assign1_reg_90__temp = zSig_assign1_reg_90 ;
   tmp_1_fu_149_p2__temp = tmp_1_fu_149_p2 ;
   tmp_17_fu_241_p1__temp = tmp_17_fu_241_p1 ;
   float_exception_flag_2_fu_189_p2__temp = float_exception_flag_2_fu_189_p2 ;
   zSig_assign_1_cast_fu_329_p4__temp = zSig_assign_1_cast_fu_329_p4 ;
   tmp_2_fu_155_p2__temp = tmp_2_fu_155_p2 ;
   tmp_s_fu_143_p2__temp = tmp_s_fu_143_p2 ;
   roundBits_2_fu_279_p3__temp = roundBits_2_fu_279_p3 ;
   ap_return_preg__temp = ap_return_preg ;
   tmp_6_i_fu_215_p1__temp = tmp_6_i_fu_215_p1 ;
   tmp_9_fu_323_p2__temp = tmp_9_fu_323_p2 ;
   zExp__temp=zExp;//missing in code
   zSig__temp=zSig;//missing in code
   zSign__temp=zSign;//missing in code
   tmp_1_i_fu_230_p2__temp = tmp_1_i_fu_230_p2 ;
   zExp_assign_1_reg_101__temp = zExp_assign_1_reg_101 ;
   zSig_assign_2_fu_359_p2__temp = zSig_assign_2_fu_359_p2 ;
   tmp_i_fu_201_p3__temp = tmp_i_fu_201_p3 ;
   tmp_6_fu_339_p2__temp = tmp_6_fu_339_p2 ;
   roundBits_fu_139_p1__temp = roundBits_fu_139_p1 ;
   tmp_11_i_fu_251_p4__temp = tmp_11_i_fu_251_p4 ;
   tmp_11_fu_349_p2__temp = tmp_11_fu_349_p2 ;
   tmp_3_fu_287_p2__temp = tmp_3_fu_287_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_4_fu_161_p2__temp = tmp_4_fu_161_p2 ;
   float_exception_flag_4_fu_293_p2__temp = float_exception_flag_4_fu_293_p2 ;
   tmp_5_fu_305_p2__temp = tmp_5_fu_305_p2 ;
   tmp_13_fu_370_p3__temp = tmp_13_fu_370_p3 ;
   tmp_1_reg_431__temp = tmp_1_reg_431 ;
   tmp_30_i8_fu_394_p2__temp = tmp_30_i8_fu_394_p2 ;
   tmp_7_fu_167_p3__temp = tmp_7_fu_167_p3 ;
   tmp_s_reg_427__temp = tmp_s_reg_427 ;
   tmp_10_i_fu_245_p2__temp = tmp_10_i_fu_245_p2 ;
   roundBits_1_reg_115__temp = roundBits_1_reg_115 ;

       ap_return_preg = 0 ;
               tmp_7_reg_439 =  tmp_7_reg_439__temp ;
               tmp_s_reg_427 =  tmp_s_reg_427__temp ;
               tmp_2_reg_435 =  tmp_2_reg_435__temp ;
               tmp_1_reg_431 =  tmp_1_reg_431__temp ;
       if(1 == ap_CS_fsm_state4)
       {
           ap_return_preg = ap_phi_mux_p_0_phi_fu_129_p4;
       }
       if((1 == ap_CS_fsm_state4) && ((tmp_s_reg_427 == 0) || (((tmp_2_reg_435 == 0) && (tmp_1_reg_431 == 0)) || ((tmp_7_reg_439 == 0) && (tmp_1_reg_431 == 0)))))
       {
           p_0_reg_126 =   (  (  (  (  ( zSig_assign_2_reg_472__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 0 :  zExp_assign_1_reg_101__temp  )  << 52 )  +  (  (  ( zSign << 9 )  << 54 )  | zSig_assign_2_reg_472__temp  )  ) ;
       }
       if((1 == ap_CS_fsm_state4) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((1 == ap_CS_fsm_state4) && ((tmp_s_reg_427 == 0) || (((tmp_2_reg_435 == 0) && (tmp_1_reg_431 == 0)) || ((tmp_7_reg_439 == 0) && (tmp_1_reg_431 == 0)))))
       {
           ap_phi_mux_p_0_phi_fu_129_p4 =   (  (  (  (  ( zSig_assign_2_reg_472__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ? 0 :  zExp_assign_1_reg_101__temp  )  << 52 )  +  (  (  ( zSign << 9 )  << 54 )  | zSig_assign_2_reg_472__temp  )  ) ;	
       }
	if(((1 == ap_CS_fsm_state4) && ((tmp_s_reg_427 == 0) || (((tmp_2_reg_435 == 0) && (tmp_1_reg_431 == 0)) || ((tmp_7_reg_439 == 0) && (tmp_1_reg_431 == 0)))))==0)
       {
           ap_phi_mux_p_0_phi_fu_129_p4 = p_0_reg_126__temp  ;	   
       }
       if(1 == ap_CS_fsm_state4)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           ap_return = ap_phi_mux_p_0_phi_fu_129_p4;
		   printf("ap_return %llu\n",ap_return);
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
