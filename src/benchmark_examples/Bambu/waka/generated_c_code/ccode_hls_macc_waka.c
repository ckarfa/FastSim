#include<stdio.h>
int main()
{
   int ap_CS_fsm=1;
   int ap_CS_fsm__temp=1;
   int ap_CS_fsm_state1=1;
   int ap_CS_fsm_state2=1;
   int ap_CS_fsm_state3=1;
   int ap_CS_fsm_state4=1;
   int ap_CS_fsm_state5=1;
   int ap_CS_fsm_state6=1;
   int ap_NS_fsm=0;
   int ap_NS_fsm__temp=0;
   int ap_clk=0;
   int ap_done=0;
   int ap_done__temp=0;
   int ap_idle=0;
   int ap_idle__temp=0;
   int ap_ready=0;
   int ap_ready__temp=0;
   int ap_return=0;
   int ap_return__temp=0;
   int ap_rst=0;
   int ap_start=1;
   int in1=1;
   int in10=8;
   int in12=10;
   int in14=9;
   int in15=11;
   int in17=12;
   int in19=13;
   int in2=2;
   int in20=14;
   int in22=15;
   int in24=16;
   int in27=17;
   int in28=18;
   int in29=19;
   int in3=3;
   int in32=20;
   int in4=4;
   int in7=5;
   int in8=6;
   int in9=7;
   int out13=0;
   int out13_ap_vld=0;
   int out13_ap_vld__temp=0;
   int out13_assign_fu_222_p2=0;
   int out13_assign_fu_222_p2__temp=0;
   int out13_assign_reg_361=0;
   int out13_assign_reg_361__temp=0;
   int out30_i=0;
   int out30_o=0;
   int out30_o__temp=0;
   int out30_o_ap_vld=0;
   int out30_o_ap_vld__temp=0;
   int out31=0;
   int out31_ap_vld=0;
   int out31_ap_vld__temp=0;
   int t11_fu_235_p2=0;
   int t11_fu_235_p2__temp=0;
   int t11_reg_366=0;
   int t11_reg_366__temp=0;
   int t16_1_fu_289_p2=0;
   int t16_1_fu_289_p2__temp=0;
   int t16_1_reg_390=0;
   int t16_1_reg_390__temp=0;
   int t16_fu_300_p2=0;
   int t16_fu_300_p2__temp=0;
   int t23_fu_269_p2=0;
   int t23_fu_269_p2__temp=0;
   int t23_reg_385=0;
   int t23_reg_385__temp=0;
   int t25_fu_274_p2=0;
   int t25_fu_274_p2__temp=0;
   int t26_1_fu_259_p2=0;
   int t26_1_fu_259_p2__temp=0;
   int t26_1_reg_380=0;
   int t26_1_reg_380__temp=0;
   int t26_2_fu_283_p3=0;
   int t26_2_fu_283_p3__temp=0;
   int t26_fu_278_p2=0;
   int t26_fu_278_p2__temp=0;
   int t5_fu_216_p2=0;
   int t5_fu_216_p2__temp=0;
   int t5_reg_356=0;
   int t5_reg_356__temp=0;
   int t8_reg_207=0;
   int t8_reg_207__temp=0;
   int tmp1_fu_229_p2=0;
   int tmp1_fu_229_p2__temp=0;
   int tmp2_fu_265_p2=0;
   int tmp2_fu_265_p2__temp=0;
   int tmp3_fu_253_p2=0;
   int tmp3_fu_253_p2__temp=0;
   int tmp4_fu_310_p2=0;
   int tmp4_fu_310_p2__temp=0;
   int tmp_2_fu_247_p2=0;
   int tmp_2_fu_247_p2__temp=0;
   int tmp_2_reg_375=0;
   int tmp_2_reg_375__temp=0;
   int tmp_2_reg_375_temp=0;
   int tmp_2_reg_375_temp__temp=0;
   int tmp_6_fu_294_p2=0;
   int tmp_6_fu_294_p2__temp=0;
   int tmp_7_fu_304_p2=0;
   int tmp_7_fu_304_p2__temp=0;
   int tmp_fu_241_p2=0;
   int tmp_fu_241_p2__temp=0;

   ap_ST_fsm_state1:	
   t23_reg_385__temp = t23_reg_385 ;
   t26_fu_278_p2__temp = t26_fu_278_p2 ;
   ap_idle__temp = ap_idle ;
   t5_reg_356__temp = t5_reg_356 ;
   t26_1_reg_380__temp = t26_1_reg_380 ;
   tmp3_fu_253_p2__temp = tmp3_fu_253_p2 ;
   out13_ap_vld__temp = out13_ap_vld ;
   t25_fu_274_p2__temp = t25_fu_274_p2 ;
   tmp_2_reg_375_temp__temp = tmp_2_reg_375_temp ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   t8_reg_207__temp = t8_reg_207 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   tmp_2_reg_375__temp = tmp_2_reg_375 ;
   t16_fu_300_p2__temp = t16_fu_300_p2 ;
   t23_fu_269_p2__temp = t23_fu_269_p2 ;
   out30_o__temp = out30_o ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   out31_ap_vld__temp = out31_ap_vld ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t26_1_fu_259_p2__temp = t26_1_fu_259_p2 ;
   out13_assign_reg_361__temp = out13_assign_reg_361 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_7_fu_304_p2__temp = tmp_7_fu_304_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   t16_1_reg_390__temp = t16_1_reg_390 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_6_fu_294_p2__temp = tmp_6_fu_294_p2 ;
   t16_1_fu_289_p2__temp = t16_1_fu_289_p2 ;
   t11_reg_366__temp = t11_reg_366 ;
   tmp4_fu_310_p2__temp = tmp4_fu_310_p2 ;
   tmp2_fu_265_p2__temp = tmp2_fu_265_p2 ;
   t26_2_fu_283_p3__temp = t26_2_fu_283_p3 ;
   ap_done__temp = ap_done ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;

               tmp_fu_241_p2 =   ( in2 == in1 ? 1 : 0 ) ;
   if((((tmp_fu_241_p2 == 1) && (1 == ap_CS_fsm_state1)) && (ap_start == 1)) == 1){
       goto ap_ST_fsm_state5;
   }
   else if(((tmp_fu_241_p2 == 0) && (1 == ap_CS_fsm_state1)) && (ap_start == 1))
       {
               tmp_2_reg_375 =   ( in9 < in10 ? 1 : 0 ) ;
               t26_1_reg_380 =   (  ( in19 + in20 )  +  ( in3 - in4 )  ) ;

	printf("::%d\n",tmp_2_reg_375);
	printf("::%d\n",t26_1_reg_380);
	printf("::%d\n",t5_reg_356);
	printf("::%d\n",t11_reg_366);
	printf("::%d\n",out13_assign_reg_361);

		goto ap_ST_fsm_state2;
       }
   else{       
       
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle= 1;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               out13_ap_vld= 1;
       }
		if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               t5_reg_356 =   ( in3 - in4 ) ;
               t11_reg_366 =   (  ( in7 + in12 )  + in8 ) ;
               out13_assign_reg_361 =   ( in14 - in15 ) ;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

   t23_reg_385__temp = t23_reg_385 ;
   t26_fu_278_p2__temp = t26_fu_278_p2 ;
   ap_idle__temp = ap_idle ;
   t5_reg_356__temp = t5_reg_356 ;
   t26_1_reg_380__temp = t26_1_reg_380 ;
   tmp3_fu_253_p2__temp = tmp3_fu_253_p2 ;
   out13_ap_vld__temp = out13_ap_vld ;
   t25_fu_274_p2__temp = t25_fu_274_p2 ;
   tmp_2_reg_375_temp__temp = tmp_2_reg_375_temp ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   t8_reg_207__temp = t8_reg_207 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   tmp_2_reg_375__temp = tmp_2_reg_375 ;
   t16_fu_300_p2__temp = t16_fu_300_p2 ;
   t23_fu_269_p2__temp = t23_fu_269_p2 ;
   out30_o__temp = out30_o ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   out31_ap_vld__temp = out31_ap_vld ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t26_1_fu_259_p2__temp = t26_1_fu_259_p2 ;
   out13_assign_reg_361__temp = out13_assign_reg_361 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_7_fu_304_p2__temp = tmp_7_fu_304_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   t16_1_reg_390__temp = t16_1_reg_390 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_6_fu_294_p2__temp = tmp_6_fu_294_p2 ;
   t16_1_fu_289_p2__temp = t16_1_fu_289_p2 ;
   t11_reg_366__temp = t11_reg_366 ;
   tmp4_fu_310_p2__temp = tmp4_fu_310_p2 ;
   tmp2_fu_265_p2__temp = tmp2_fu_265_p2 ;
   t26_2_fu_283_p3__temp = t26_2_fu_283_p3 ;
   ap_done__temp = ap_done ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;

       if((tmp_2_reg_375 == 1) && (1 == ap_CS_fsm_state2))
       {
           t23_reg_385 =   (  ( t5_reg_356__temp  + in22 )  + t11_reg_366__temp  ) ;
       }
	printf("%d\n",t23_reg_385);
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

   t23_reg_385__temp = t23_reg_385 ;
   t26_fu_278_p2__temp = t26_fu_278_p2 ;
   ap_idle__temp = ap_idle ;
   t5_reg_356__temp = t5_reg_356 ;
   t26_1_reg_380__temp = t26_1_reg_380 ;
   tmp3_fu_253_p2__temp = tmp3_fu_253_p2 ;
   out13_ap_vld__temp = out13_ap_vld ;
   t25_fu_274_p2__temp = t25_fu_274_p2 ;
   tmp_2_reg_375_temp__temp = tmp_2_reg_375_temp ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   t8_reg_207__temp = t8_reg_207 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   tmp_2_reg_375__temp = tmp_2_reg_375 ;
   t16_fu_300_p2__temp = t16_fu_300_p2 ;
   t23_fu_269_p2__temp = t23_fu_269_p2 ;
   out30_o__temp = out30_o ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   out31_ap_vld__temp = out31_ap_vld ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t26_1_fu_259_p2__temp = t26_1_fu_259_p2 ;
   out13_assign_reg_361__temp = out13_assign_reg_361 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_7_fu_304_p2__temp = tmp_7_fu_304_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   t16_1_reg_390__temp = t16_1_reg_390 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_6_fu_294_p2__temp = tmp_6_fu_294_p2 ;
   t16_1_fu_289_p2__temp = t16_1_fu_289_p2 ;
   t11_reg_366__temp = t11_reg_366 ;
   tmp4_fu_310_p2__temp = tmp4_fu_310_p2 ;
   tmp2_fu_265_p2__temp = tmp2_fu_265_p2 ;
   t26_2_fu_283_p3__temp = t26_2_fu_283_p3 ;
   ap_done__temp = ap_done ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
                     
       if(1 == ap_CS_fsm_state3)
       {
           out30_o_ap_vld= 1;
       }
	   if(1 == ap_CS_fsm_state3)
       {
           t16_1_reg_390 =   (  (  ( tmp_2_reg_375__temp  & 1 )  == 1 ?  (  ( t23_reg_385__temp  - in24 )  + in27 )  :  t26_1_reg_380__temp  )  - in28 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           out30_o =   (  (  ( tmp_2_reg_375__temp  & 1 )  == 1 ?  (  ( t23_reg_385__temp  - in24 )  + in27 )  :  t26_1_reg_380__temp  )  + in29 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

   t23_reg_385__temp = t23_reg_385 ;
   t26_fu_278_p2__temp = t26_fu_278_p2 ;
   ap_idle__temp = ap_idle ;
   t5_reg_356__temp = t5_reg_356 ;
   t26_1_reg_380__temp = t26_1_reg_380 ;
   tmp3_fu_253_p2__temp = tmp3_fu_253_p2 ;
   out13_ap_vld__temp = out13_ap_vld ;
   t25_fu_274_p2__temp = t25_fu_274_p2 ;
   tmp_2_reg_375_temp__temp = tmp_2_reg_375_temp ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   t8_reg_207__temp = t8_reg_207 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   tmp_2_reg_375__temp = tmp_2_reg_375 ;
   t16_fu_300_p2__temp = t16_fu_300_p2 ;
   t23_fu_269_p2__temp = t23_fu_269_p2 ;
   out30_o__temp = out30_o ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   out31_ap_vld__temp = out31_ap_vld ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t26_1_fu_259_p2__temp = t26_1_fu_259_p2 ;
   out13_assign_reg_361__temp = out13_assign_reg_361 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_7_fu_304_p2__temp = tmp_7_fu_304_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   t16_1_reg_390__temp = t16_1_reg_390 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_6_fu_294_p2__temp = tmp_6_fu_294_p2 ;
   t16_1_fu_289_p2__temp = t16_1_fu_289_p2 ;
   t11_reg_366__temp = t11_reg_366 ;
   tmp4_fu_310_p2__temp = tmp4_fu_310_p2 ;
   tmp2_fu_265_p2__temp = tmp2_fu_265_p2 ;
   t26_2_fu_283_p3__temp = t26_2_fu_283_p3 ;
   ap_done__temp = ap_done ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;

       if(1 == ap_CS_fsm_state4)
       {
           t8_reg_207 =  t16_1_reg_390__temp ;
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state5:

   t23_reg_385__temp = t23_reg_385 ;
   t26_fu_278_p2__temp = t26_fu_278_p2 ;
   ap_idle__temp = ap_idle ;
   t5_reg_356__temp = t5_reg_356 ;
   t26_1_reg_380__temp = t26_1_reg_380 ;
   tmp3_fu_253_p2__temp = tmp3_fu_253_p2 ;
   out13_ap_vld__temp = out13_ap_vld ;
   t25_fu_274_p2__temp = t25_fu_274_p2 ;
   tmp_2_reg_375_temp__temp = tmp_2_reg_375_temp ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   t8_reg_207__temp = t8_reg_207 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   tmp_2_reg_375__temp = tmp_2_reg_375 ;
   t16_fu_300_p2__temp = t16_fu_300_p2 ;
   t23_fu_269_p2__temp = t23_fu_269_p2 ;
   out30_o__temp = out30_o ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   out31_ap_vld__temp = out31_ap_vld ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t26_1_fu_259_p2__temp = t26_1_fu_259_p2 ;
   out13_assign_reg_361__temp = out13_assign_reg_361 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_7_fu_304_p2__temp = tmp_7_fu_304_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   t16_1_reg_390__temp = t16_1_reg_390 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_6_fu_294_p2__temp = tmp_6_fu_294_p2 ;
   t16_1_fu_289_p2__temp = t16_1_fu_289_p2 ;
   t11_reg_366__temp = t11_reg_366 ;
   tmp4_fu_310_p2__temp = tmp4_fu_310_p2 ;
   tmp2_fu_265_p2__temp = tmp2_fu_265_p2 ;
   t26_2_fu_283_p3__temp = t26_2_fu_283_p3 ;
   ap_done__temp = ap_done ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;

       if(1 == ap_CS_fsm_state5)
       {
           t8_reg_207 =   ( t11_reg_366__temp  - in17 ) ;
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:

   t23_reg_385__temp = t23_reg_385 ;
   t26_fu_278_p2__temp = t26_fu_278_p2 ;
   ap_idle__temp = ap_idle ;
   t5_reg_356__temp = t5_reg_356 ;
   t26_1_reg_380__temp = t26_1_reg_380 ;
   tmp3_fu_253_p2__temp = tmp3_fu_253_p2 ;
   out13_ap_vld__temp = out13_ap_vld ;
   t25_fu_274_p2__temp = t25_fu_274_p2 ;
   tmp_2_reg_375_temp__temp = tmp_2_reg_375_temp ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   t8_reg_207__temp = t8_reg_207 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   tmp_2_reg_375__temp = tmp_2_reg_375 ;
   t16_fu_300_p2__temp = t16_fu_300_p2 ;
   t23_fu_269_p2__temp = t23_fu_269_p2 ;
   out30_o__temp = out30_o ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   out31_ap_vld__temp = out31_ap_vld ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t26_1_fu_259_p2__temp = t26_1_fu_259_p2 ;
   out13_assign_reg_361__temp = out13_assign_reg_361 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_7_fu_304_p2__temp = tmp_7_fu_304_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   t16_1_reg_390__temp = t16_1_reg_390 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_6_fu_294_p2__temp = tmp_6_fu_294_p2 ;
   t16_1_fu_289_p2__temp = t16_1_fu_289_p2 ;
   t11_reg_366__temp = t11_reg_366 ;
   tmp4_fu_310_p2__temp = tmp4_fu_310_p2 ;
   tmp2_fu_265_p2__temp = tmp2_fu_265_p2 ;
   t26_2_fu_283_p3__temp = t26_2_fu_283_p3 ;
   ap_done__temp = ap_done ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;

       if(1 == ap_CS_fsm_state6)
       {
           ap_done= 1;
          ap_return =   (  ( out13_assign_reg_361__temp  +  ( t8_reg_207__temp  + in32 )  )  + out30_i ) ;
       goto end;
       }
       if(1 == ap_CS_fsm_state6)
       {
           ap_ready= 1;
       }
       if(1 == ap_CS_fsm_state6)
       {
           out31_ap_vld= 1;
       }
       goto ap_ST_fsm_state1;
   end:
	printf("%d\n",ap_return);
       return 0;
}