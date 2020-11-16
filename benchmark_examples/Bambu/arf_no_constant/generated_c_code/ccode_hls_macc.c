#include<stdio.h>
void hls_macc(int *G11,int *G21,int *G31,int *G41,int *GG11,int *GG21,int *ap_clk1,int *ap_done1,int *ap_idle1,int *ap_ready1,int *ap_return1,int *ap_rst1,int *ap_start1,int *i11,int *i21,int *i31,int *i41,int *i61,int *o11,int *o1_ap_vld1,int *o21,int *o2_ap_vld1,int *o31,int *o41,int dummy){
int G1=*G11;
int G2=*G21;
int G3=*G31;
int G4=*G41;
int GG1=*GG11;
int GG2=*GG21;
int ap_clk=*ap_clk1;
int ap_done=*ap_done1;
int ap_idle=*ap_idle1;
int ap_ready=*ap_ready1;
int ap_return=*ap_return1;
int ap_rst=*ap_rst1;
int ap_start=*ap_start1;
int i1=*i11;
int i2=*i21;
int i3=*i31;
int i4=*i41;
int i6=*i61;
int o1=*o11;
int o1_ap_vld=*o1_ap_vld1;
int o2=*o21;
int o2_ap_vld=*o2_ap_vld1;
int o3=*o31;
int o4=*o41;
   int G1__temp=0;
   int G2__temp=0;
   int G3__temp=0;
   int G4__temp=0;
   int GG1__temp=0;
   int GG2__temp=0;
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
   int ap_NS_fsm=0;
   int ap_NS_fsm__temp=0;
   int ap_clk__temp=0;
   int ap_rst__temp=0;
   int ap_start__temp=0;
   int i1__temp=0;
   int i2__temp=0;
   int i3__temp=0;
   int i4__temp=0;
   int i6__temp=0;
   int o3__temp=0;
   int o4__temp=0;
   int op13_fu_194_p2=0;
   int op13_fu_194_p2__temp=0;
   int op13_reg_292=0;
   int op13_reg_292__temp=0;
   int op14_fu_204_p2=0;
   int op14_fu_204_p2__temp=0;
   int op14_reg_298=0;
   int op14_reg_298__temp=0;
   int op3_fu_146_p0=0;
   int op3_fu_146_p0__temp=0;
   int op3_fu_146_p1=0;
   int op3_fu_146_p1__temp=0;
   int op3_fu_146_p2=0;
   int op3_fu_146_p2__temp=0;
   int op3_reg_272=0;
   int op3_reg_272__temp=0;
   int op4_fu_106_p0=0;
   int op4_fu_106_p0__temp=0;
   int op4_fu_106_p1=0;
   int op4_fu_106_p1__temp=0;
   int op4_fu_106_p2=0;
   int op4_fu_106_p2__temp=0;
   int op4_reg_239=0;
   int op4_reg_239__temp=0;
   int op5_1_fu_129_p2=0;
   int op5_1_fu_129_p2__temp=0;
   int op5_1_reg_262=0;
   int op5_1_reg_262__temp=0;
   int op5_2_fu_118_p0=0;
   int op5_2_fu_118_p0__temp=0;
   int op5_2_fu_118_p1=0;
   int op5_2_fu_118_p1__temp=0;
   int op5_2_fu_118_p2=0;
   int op5_2_fu_118_p2__temp=0;
   int op5_2_reg_251=0;
   int op5_2_reg_251__temp=0;
   int op5_3_fu_134_p3=0;
   int op5_3_fu_134_p3__temp=0;
   int op5_fu_112_p0=0;
   int op5_fu_112_p0__temp=0;
   int op5_fu_112_p1=0;
   int op5_fu_112_p1__temp=0;
   int op5_fu_112_p2=0;
   int op5_fu_112_p2__temp=0;
   int op5_reg_246=0;
   int op5_reg_246__temp=0;
   int op6_1_fu_182_p3=0;
   int op6_1_fu_182_p3__temp=0;
   int op6_2_fu_167_p2=0;
   int op6_2_fu_167_p2__temp=0;
   int op6_3_fu_151_p0=0;
   int op6_3_fu_151_p0__temp=0;
   int op6_3_fu_151_p1=0;
   int op6_3_fu_151_p1__temp=0;
   int op6_3_fu_151_p2=0;
   int op6_3_fu_151_p2__temp=0;
   int op6_3_reg_277=0;
   int op6_3_reg_277__temp=0;
   int op6_4_fu_178_p1=0;
   int op6_4_fu_178_p1__temp=0;
   int op6_4_fu_178_p2=0;
   int op6_4_fu_178_p2__temp=0;
   int op6_5_fu_171_p3=0;
   int op6_5_fu_171_p3__temp=0;
   int op6_fu_163_p2=0;
   int op6_fu_163_p2__temp=0;
   int op7_fu_155_p0=0;
   int op7_fu_155_p0__temp=0;
   int op7_fu_155_p1=0;
   int op7_fu_155_p1__temp=0;
   int op7_fu_155_p2=0;
   int op7_fu_155_p2__temp=0;
   int op7_reg_282=0;
   int op7_reg_282__temp=0;
   int op8_fu_159_p0=0;
   int op8_fu_159_p0__temp=0;
   int op8_fu_159_p1=0;
   int op8_fu_159_p1__temp=0;
   int op8_fu_159_p2=0;
   int op8_fu_159_p2__temp=0;
   int op8_reg_287=0;
   int op8_reg_287__temp=0;
   int tmp1_fu_189_p1=0;
   int tmp1_fu_189_p1__temp=0;
   int tmp1_fu_189_p2=0;
   int tmp1_fu_189_p2__temp=0;
   int tmp2_fu_199_p2=0;
   int tmp2_fu_199_p2__temp=0;
   int tmp_6_fu_141_p2=0;
   int tmp_6_fu_141_p2__temp=0;
   int tmp_6_reg_267=0;
   int tmp_6_reg_267__temp=0;
   int tmp_6_reg_267_temp=0;
   int tmp_6_reg_267_temp__temp=0;
   int tmp_fu_124_p0=0;
   int tmp_fu_124_p0__temp=0;
   int tmp_fu_124_p2=0;
   int tmp_fu_124_p2__temp=0;
   int tmp_fu_124_p2_temp=0;
   int tmp_fu_124_p2_temp__temp=0;
   int tmp_reg_257=0;
   int tmp_reg_257__temp=0;
   int tmp_reg_257_temp=0;
   int tmp_reg_257_temp__temp=0;

   ap_ST_fsm_state1:

	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op13_reg_292__temp = op13_reg_292 ;
   op7_reg_282__temp = op7_reg_282 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op4_reg_239__temp = op4_reg_239 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op14_reg_298__temp = op14_reg_298 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_reg_246__temp = op5_reg_246 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;

   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           op5_reg_246 =   ( G1 * i3 ) ;
           op5_2_reg_251 =   ( i4 * i3 ) ;
           op4_reg_239 =   ( G2 * i1 ) ;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               op5_reg_246 =   ( G1 * i3 ) ;
               op5_2_reg_251 =   ( i4 * i3 ) ;
               op4_reg_239 =   ( G2 * i1 ) ;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op13_reg_292__temp = op13_reg_292 ;
   op7_reg_282__temp = op7_reg_282 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op4_reg_239__temp = op4_reg_239 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op14_reg_298__temp = op14_reg_298 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_reg_246__temp = op5_reg_246 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;

       if(1 == ap_CS_fsm_state2)
       {
           tmp_reg_257 =   ( G1 > 10 ? 1 :  0 ) ;
           tmp_6_reg_267 =   (  (  (  ( G1 > 10 ? 1 :  0 )  & 1 )  == 1 ?  ( op5_reg_246__temp  + GG1 )  :  op5_2_reg_251__temp  )  < op4_reg_239__temp  ? 1 : 0 ) ;
           op5_1_reg_262 =   ( op5_reg_246__temp  + GG1 ) ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op13_reg_292__temp = op13_reg_292 ;
   op7_reg_282__temp = op7_reg_282 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op4_reg_239__temp = op4_reg_239 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op14_reg_298__temp = op14_reg_298 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_reg_246__temp = op5_reg_246 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;

               tmp_6_reg_267 =  tmp_6_reg_267__temp ;
               tmp_reg_257 =  tmp_reg_257__temp ;
       if(((tmp_6_reg_267 == 0) && (tmp_reg_257 == 0)) && (1 == ap_CS_fsm_state3))
       {
           op3_reg_272 =   ( G1 * i2 ) ;
       }
       if((tmp_6_reg_267 == 1) && (1 == ap_CS_fsm_state3))
       {
           op6_3_reg_277 =   ( G2 * i4 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           op8_reg_287 =   ( G2 * i3 ) ;
           op7_reg_282 =   ( G1 * i4 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op13_reg_292__temp = op13_reg_292 ;
   op7_reg_282__temp = op7_reg_282 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op4_reg_239__temp = op4_reg_239 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op14_reg_298__temp = op14_reg_298 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_reg_246__temp = op5_reg_246 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;

       if(1 == ap_CS_fsm_state4)
       {
           op14_reg_298 =   (  ( op8_reg_287__temp  + i6 )  + op7_reg_282__temp  ) ;
           op13_reg_292 =   (  (  (  ( tmp_6_reg_267__temp  & 1 )  == 1 ?  ( op6_3_reg_277__temp  - i3 )  :   (  ( tmp_reg_257__temp  & 1 )  == 1 ?  ( op5_1_reg_262__temp  - op4_reg_239__temp  )  :   ( op5_2_reg_251__temp  - op3_reg_272__temp  )  )  )  + G1 )  + op4_reg_239__temp  ) ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op13_reg_292__temp = op13_reg_292 ;
   op7_reg_282__temp = op7_reg_282 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op4_reg_239__temp = op4_reg_239 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op14_reg_298__temp = op14_reg_298 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_reg_246__temp = op5_reg_246 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;

       if(1 == ap_CS_fsm_state5)
       {
           ap_done =  1;
          ap_return =   ( op13_reg_292__temp  + op14_reg_298__temp  ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           o1_ap_vld =  1;
               o1 =  op13_reg_292__temp ;
               o2 =  op14_reg_298__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           o2_ap_vld =  1;
               o1 =  op13_reg_292__temp ;
               o2 =  op14_reg_298__temp ;
       }
       if(ap_done==1){
       goto end;
       }
       goto ap_ST_fsm_state1;
   end:
	*G11=G1;
	*G21=G2;
	*G31=G3;
	*G41=G4;
	*GG11=GG1;
	*GG21=GG2;
	*ap_clk1=ap_clk;
	*ap_done1=ap_done;
	*ap_idle1=ap_idle;
	*ap_ready1=ap_ready;
	*ap_return1=ap_return;
	*ap_rst1=ap_rst;
	*ap_start1=ap_start;
	*i11=i1;
	*i21=i2;
	*i31=i3;
	*i41=i4;
	*i61=i6;
	*o11=o1;
	*o1_ap_vld1=o1_ap_vld;
	*o21=o2;
	*o2_ap_vld1=o2_ap_vld;
	*o31=o3;
	*o41=o4;
       return;
}
