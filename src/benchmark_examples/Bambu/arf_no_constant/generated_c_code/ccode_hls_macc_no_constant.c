#include<stdio.h>
int main()
{
   int G1=10;
   int G1__temp=0;
   int G2=11;
   int G2__temp=0;
   int G3=12;
   int G3__temp=0;
   int G4=13;
   int G4__temp=0;
   int GG1=14;
   int GG1__temp=0;
   int GG2=15;
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
   int ap_clk=0;
   int ap_clk__temp=0;
   int ap_done=0;
   int ap_done__temp=0;
   int ap_idle=0;
   int ap_idle__temp=0;
   int ap_ready=0;
   int ap_ready__temp=0;
   int ap_return=0;
   int ap_rst=0;
   int ap_rst__temp=0;
   int ap_start=1;
   int ap_start__temp=1;
   int i1=1;
   int i1__temp=0;
   int i2=2;
   int i2__temp=0;
   int i3=3;
   int i3__temp=0;
   int i4=4;
   int i4__temp=0;
   int i6=5;
   int i6__temp=0;
   int o1=0;
   int o1_ap_vld=0;
   int o1_ap_vld__temp=0;
   int o2=0;
   int o2_ap_vld=0;
   int o2_ap_vld__temp=0;
   int o3=0;
   int o3__temp=0;
   int o4=0;
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

   op4_reg_239__temp = op4_reg_239 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   ap_clk__temp = ap_clk ;
   o4__temp = o4 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   G1__temp = G1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   GG1__temp = GG1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_done__temp = ap_done ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op5_reg_246__temp = op5_reg_246 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   o2_ap_vld__temp = o2_ap_vld ;
   ap_rst__temp = ap_rst ;
   ap_start__temp = ap_start ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   GG2__temp = GG2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   i3__temp = i3 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   i1__temp = i1 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   op13_reg_292__temp = op13_reg_292 ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   G2__temp = G2 ;
   G3__temp = G3 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   G4__temp = G4 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   i2__temp = i2 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   ap_ready__temp = ap_ready ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   o3__temp = o3 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;

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

   op4_reg_239__temp = op4_reg_239 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   ap_clk__temp = ap_clk ;
   o4__temp = o4 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   G1__temp = G1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   GG1__temp = GG1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_done__temp = ap_done ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op5_reg_246__temp = op5_reg_246 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   o2_ap_vld__temp = o2_ap_vld ;
   ap_rst__temp = ap_rst ;
   ap_start__temp = ap_start ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   GG2__temp = GG2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   i3__temp = i3 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   i1__temp = i1 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   op13_reg_292__temp = op13_reg_292 ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   G2__temp = G2 ;
   G3__temp = G3 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   G4__temp = G4 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   i2__temp = i2 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   ap_ready__temp = ap_ready ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   o3__temp = o3 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;

       if(1 == ap_CS_fsm_state2)
       {
           tmp_reg_257 =   ( G1 > 10 ? 1 :  0 ) ;
           tmp_6_reg_267 =   (  (  (  ( G1 > 10 ? 1 :  0 )  & 1 )  == 1 ?  ( op5_reg_246__temp  + GG1 )  :  op5_2_reg_251__temp  )  < op4_reg_239__temp  ? 1 : 0 ) ;
           op5_1_reg_262 =   ( op5_reg_246__temp  + GG1 ) ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

   op4_reg_239__temp = op4_reg_239 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   ap_clk__temp = ap_clk ;
   o4__temp = o4 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   G1__temp = G1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   GG1__temp = GG1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_done__temp = ap_done ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op5_reg_246__temp = op5_reg_246 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   o2_ap_vld__temp = o2_ap_vld ;
   ap_rst__temp = ap_rst ;
   ap_start__temp = ap_start ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   GG2__temp = GG2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   i3__temp = i3 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   i1__temp = i1 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   op13_reg_292__temp = op13_reg_292 ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   G2__temp = G2 ;
   G3__temp = G3 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   G4__temp = G4 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   i2__temp = i2 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   ap_ready__temp = ap_ready ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   o3__temp = o3 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;

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

   op4_reg_239__temp = op4_reg_239 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   ap_clk__temp = ap_clk ;
   o4__temp = o4 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   G1__temp = G1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   GG1__temp = GG1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_done__temp = ap_done ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op5_reg_246__temp = op5_reg_246 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   o2_ap_vld__temp = o2_ap_vld ;
   ap_rst__temp = ap_rst ;
   ap_start__temp = ap_start ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   GG2__temp = GG2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   i3__temp = i3 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   i1__temp = i1 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   op13_reg_292__temp = op13_reg_292 ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   G2__temp = G2 ;
   G3__temp = G3 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   G4__temp = G4 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   i2__temp = i2 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   ap_ready__temp = ap_ready ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   o3__temp = o3 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;

       if(1 == ap_CS_fsm_state4)
       {
           op14_reg_298 =   (  ( op8_reg_287__temp  + i6 )  + op7_reg_282__temp  ) ;
           op13_reg_292 =   (  (  (  ( tmp_6_reg_267__temp  & 1 )  == 1 ?  ( op6_3_reg_277__temp  - i3 )  :   (  ( tmp_reg_257__temp  & 1 )  == 1 ?  ( op5_1_reg_262__temp  - op4_reg_239__temp  )  :   ( op5_2_reg_251__temp  - op3_reg_272__temp  )  )  )  + G1 )  + op4_reg_239__temp  ) ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

   op4_reg_239__temp = op4_reg_239 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   ap_clk__temp = ap_clk ;
   o4__temp = o4 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   G1__temp = G1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   GG1__temp = GG1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   ap_done__temp = ap_done ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op5_reg_246__temp = op5_reg_246 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   o2_ap_vld__temp = o2_ap_vld ;
   ap_rst__temp = ap_rst ;
   ap_start__temp = ap_start ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   GG2__temp = GG2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   i3__temp = i3 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   tmp_reg_257__temp = tmp_reg_257 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   i1__temp = i1 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   op13_reg_292__temp = op13_reg_292 ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   G2__temp = G2 ;
   G3__temp = G3 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   G4__temp = G4 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   i2__temp = i2 ;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   ap_ready__temp = ap_ready ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_reg_287__temp = op8_reg_287 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   o3__temp = o3 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;

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
       goto end;
   end:
	printf("%d\n",o1);
	printf("%d\n",o2);
	printf("%d\n",o3);
	printf("%d\n",o4);
       return 0;
}
