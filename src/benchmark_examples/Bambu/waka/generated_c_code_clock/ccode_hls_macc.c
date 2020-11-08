#include<stdio.h>
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
void hls_macc(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *in1__1,unsigned long long int *in10__1,unsigned long long int *in12__1,unsigned long long int *in14__1,unsigned long long int *in15__1,unsigned long long int *in17__1,unsigned long long int *in19__1,unsigned long long int *in2__1,unsigned long long int *in20__1,unsigned long long int *in22__1,unsigned long long int *in24__1,unsigned long long int *in27__1,unsigned long long int *in28__1,unsigned long long int *in29__1,unsigned long long int *in3__1,unsigned long long int *in32__1,unsigned long long int *in4__1,unsigned long long int *in7__1,unsigned long long int *in8__1,unsigned long long int *in9__1,unsigned long long int *out13__1,unsigned long long int *out13_ap_vld__1,unsigned long long int *out30__1,unsigned long long int *out30_ap_vld__1,unsigned long long int *out31__1,unsigned long long int *out31_ap_vld__1,int *dummy__1){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int in1=*in1__1;
unsigned long long int in10=*in10__1;
unsigned long long int in12=*in12__1;
unsigned long long int in14=*in14__1;
unsigned long long int in15=*in15__1;
unsigned long long int in17=*in17__1;
unsigned long long int in19=*in19__1;
unsigned long long int in2=*in2__1;
unsigned long long int in20=*in20__1;
unsigned long long int in22=*in22__1;
unsigned long long int in24=*in24__1;
unsigned long long int in27=*in27__1;
unsigned long long int in28=*in28__1;
unsigned long long int in29=*in29__1;
unsigned long long int in3=*in3__1;
unsigned long long int in32=*in32__1;
unsigned long long int in4=*in4__1;
unsigned long long int in7=*in7__1;
unsigned long long int in8=*in8__1;
unsigned long long int in9=*in9__1;
unsigned long long int out13=*out13__1;
unsigned long long int out13_ap_vld=*out13_ap_vld__1;
unsigned long long int out30=*out30__1;
unsigned long long int out30_ap_vld=*out30_ap_vld__1;
unsigned long long int out31=*out31__1;
unsigned long long int out31_ap_vld=*out31_ap_vld__1;
int dummy=*dummy__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int in10__temp=0;
   unsigned long long int in12__temp=0;
   unsigned long long int in14__temp=0;
   unsigned long long int in15__temp=0;
   unsigned long long int in17__temp=0;
   unsigned long long int in19__temp=0;
   unsigned long long int in1__temp=0;
   unsigned long long int in20__temp=0;
   unsigned long long int in22__temp=0;
   unsigned long long int in24__temp=0;
   unsigned long long int in27__temp=0;
   unsigned long long int in28__temp=0;
   unsigned long long int in29__temp=0;
   unsigned long long int in2__temp=0;
   unsigned long long int in32__temp=0;
   unsigned long long int in3__temp=0;
   unsigned long long int in4__temp=0;
   unsigned long long int in7__temp=0;
   unsigned long long int in8__temp=0;
   unsigned long long int in9__temp=0;
   unsigned long long int out13__temp=0;
   unsigned long long int out13_ap_vld__temp=0;
   unsigned long long int out30__temp=0;
   unsigned long long int out30_ap_vld__temp=0;
   unsigned long long int out31__temp=0;
   unsigned long long int out31_ap_vld__temp=0;
   unsigned long long int t11_fu_203_p2=0;
   unsigned long long int t11_fu_203_p2__temp=0;
   unsigned long long int t11_reg_306=0;
   unsigned long long int t11_reg_306__temp=0;
   unsigned long long int t16_1_fu_280_p2=0;
   unsigned long long int t16_1_fu_280_p2__temp=0;
   unsigned long long int t16_2_fu_291_p3=0;
   unsigned long long int t16_2_fu_291_p3__temp=0;
   unsigned long long int t16_fu_275_p2=0;
   unsigned long long int t16_fu_275_p2__temp=0;
   unsigned long long int t23_fu_221_p2=0;
   unsigned long long int t23_fu_221_p2__temp=0;
   unsigned long long int t23_reg_317=0;
   unsigned long long int t23_reg_317__temp=0;
   unsigned long long int t25_fu_232_p2=0;
   unsigned long long int t25_fu_232_p2__temp=0;
   unsigned long long int t26_1_fu_249_p2=0;
   unsigned long long int t26_1_fu_249_p2__temp=0;
   unsigned long long int t26_2_fu_254_p3=0;
   unsigned long long int t26_2_fu_254_p3__temp=0;
   unsigned long long int t26_2_reg_322=0;
   unsigned long long int t26_2_reg_322__temp=0;
   unsigned long long int t26_fu_237_p2=0;
   unsigned long long int t26_fu_237_p2__temp=0;
   unsigned long long int t5_fu_209_p2=0;
   unsigned long long int t5_fu_209_p2__temp=0;
   unsigned long long int t5_reg_312=0;
   unsigned long long int t5_reg_312__temp=0;
   unsigned long long int tmp1_fu_197_p2=0;
   unsigned long long int tmp1_fu_197_p2__temp=0;
   unsigned long long int tmp2_fu_215_p2=0;
   unsigned long long int tmp2_fu_215_p2__temp=0;
   unsigned long long int tmp3_fu_243_p2=0;
   unsigned long long int tmp3_fu_243_p2__temp=0;
   unsigned long long int tmp_2_fu_226_p2=0;
   unsigned long long int tmp_2_fu_226_p2__temp=0;
   unsigned long long int tmp_2_fu_226_p2_temp=0;
   unsigned long long int tmp_2_fu_226_p2_temp__temp=0;
   unsigned long long int tmp_fu_269_p2=0;
   unsigned long long int tmp_fu_269_p2__temp=0;
   unsigned long long int tmp_fu_269_p2_temp=0;
   unsigned long long int tmp_fu_269_p2_temp__temp=0;
	ap_done=0;
	ap_start=1;

   ap_ST_fsm_state1:

	dummy = dummy + 1;
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   t16_2_fu_291_p3__temp = t16_2_fu_291_p3 ;
   tmp3_fu_243_p2__temp = tmp3_fu_243_p2 ;
   in20__temp = in20 ;
   in15__temp = in15 ;
   out13_ap_vld__temp = out13_ap_vld ;
   in19__temp = in19 ;
   in10__temp = in10 ;
   ap_clk__temp = ap_clk ;
   t26_2_fu_254_p3__temp = t26_2_fu_254_p3 ;
   in24__temp = in24 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   in14__temp = in14 ;
   t23_reg_317__temp = t23_reg_317 ;
   in3__temp = in3 ;
   in22__temp = in22 ;
   tmp_2_fu_226_p2__temp = tmp_2_fu_226_p2 ;
   in29__temp = in29 ;
   t26_fu_237_p2__temp = t26_fu_237_p2 ;
   in12__temp = in12 ;
   ap_ready__temp = ap_ready ;
   tmp_fu_269_p2_temp__temp = tmp_fu_269_p2_temp ;
   in27__temp = in27 ;
   ap_rst__temp = ap_rst ;
   in7__temp = in7 ;
   out30_ap_vld__temp = out30_ap_vld ;
   in4__temp = in4 ;
   t5_fu_209_p2__temp = t5_fu_209_p2 ;
   tmp_2_fu_226_p2_temp__temp = tmp_2_fu_226_p2_temp ;
   in32__temp = in32 ;
   out31_ap_vld__temp = out31_ap_vld ;
   t26_2_reg_322__temp = t26_2_reg_322 ;
   ap_done__temp = ap_done ;
   t26_1_fu_249_p2__temp = t26_1_fu_249_p2 ;
   in2__temp = in2 ;
   t11_reg_306__temp = t11_reg_306 ;
   t16_fu_275_p2__temp = t16_fu_275_p2 ;
   tmp_fu_269_p2__temp = tmp_fu_269_p2 ;
   out13__temp = out13 ;
   out30__temp = out30 ;
   tmp2_fu_215_p2__temp = tmp2_fu_215_p2 ;
   in8__temp = in8 ;
   t5_reg_312__temp = t5_reg_312 ;
   ap_start__temp = ap_start ;
   t25_fu_232_p2__temp = t25_fu_232_p2 ;
   in17__temp = in17 ;
   tmp1_fu_197_p2__temp = tmp1_fu_197_p2 ;
   ap_idle__temp = ap_idle ;
   t11_fu_203_p2__temp = t11_fu_203_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   out31__temp = out31 ;
   t23_fu_221_p2__temp = t23_fu_221_p2 ;
   in28__temp = in28 ;
   in1__temp = in1 ;
   in9__temp = in9 ;
   t16_1_fu_280_p2__temp = t16_1_fu_280_p2 ;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 1){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           t11_reg_306 =   ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 0){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               t11_reg_306 =   ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

	dummy = dummy + 1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   t16_2_fu_291_p3__temp = t16_2_fu_291_p3 ;
   tmp3_fu_243_p2__temp = tmp3_fu_243_p2 ;
   in20__temp = in20 ;
   in15__temp = in15 ;
   out13_ap_vld__temp = out13_ap_vld ;
   in19__temp = in19 ;
   in10__temp = in10 ;
   ap_clk__temp = ap_clk ;
   t26_2_fu_254_p3__temp = t26_2_fu_254_p3 ;
   in24__temp = in24 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   in14__temp = in14 ;
   t23_reg_317__temp = t23_reg_317 ;
   in3__temp = in3 ;
   in22__temp = in22 ;
   tmp_2_fu_226_p2__temp = tmp_2_fu_226_p2 ;
   in29__temp = in29 ;
   t26_fu_237_p2__temp = t26_fu_237_p2 ;
   in12__temp = in12 ;
   ap_ready__temp = ap_ready ;
   tmp_fu_269_p2_temp__temp = tmp_fu_269_p2_temp ;
   in27__temp = in27 ;
   ap_rst__temp = ap_rst ;
   in7__temp = in7 ;
   out30_ap_vld__temp = out30_ap_vld ;
   in4__temp = in4 ;
   t5_fu_209_p2__temp = t5_fu_209_p2 ;
   tmp_2_fu_226_p2_temp__temp = tmp_2_fu_226_p2_temp ;
   in32__temp = in32 ;
   out31_ap_vld__temp = out31_ap_vld ;
   t26_2_reg_322__temp = t26_2_reg_322 ;
   ap_done__temp = ap_done ;
   t26_1_fu_249_p2__temp = t26_1_fu_249_p2 ;
   in2__temp = in2 ;
   t11_reg_306__temp = t11_reg_306 ;
   t16_fu_275_p2__temp = t16_fu_275_p2 ;
   tmp_fu_269_p2__temp = tmp_fu_269_p2 ;
   out13__temp = out13 ;
   out30__temp = out30 ;
   tmp2_fu_215_p2__temp = tmp2_fu_215_p2 ;
   in8__temp = in8 ;
   t5_reg_312__temp = t5_reg_312 ;
   ap_start__temp = ap_start ;
   t25_fu_232_p2__temp = t25_fu_232_p2 ;
   in17__temp = in17 ;
   tmp1_fu_197_p2__temp = tmp1_fu_197_p2 ;
   ap_idle__temp = ap_idle ;
   t11_fu_203_p2__temp = t11_fu_203_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   out31__temp = out31 ;
   t23_fu_221_p2__temp = t23_fu_221_p2 ;
   in28__temp = in28 ;
   in1__temp = in1 ;
   in9__temp = in9 ;
   t16_1_fu_280_p2__temp = t16_1_fu_280_p2 ;

       if(1 == ap_CS_fsm_state2)
       {
           t5_reg_312 =   ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 ) ;
           t23_reg_317 =   ( (  ( (  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  + ( in22__temp  & 4294967295 )  ) & 4294967295 )  + t11_reg_306__temp  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

	dummy = dummy + 1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
   t16_2_fu_291_p3__temp = t16_2_fu_291_p3 ;
   tmp3_fu_243_p2__temp = tmp3_fu_243_p2 ;
   in20__temp = in20 ;
   in15__temp = in15 ;
   out13_ap_vld__temp = out13_ap_vld ;
   in19__temp = in19 ;
   in10__temp = in10 ;
   ap_clk__temp = ap_clk ;
   t26_2_fu_254_p3__temp = t26_2_fu_254_p3 ;
   in24__temp = in24 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   in14__temp = in14 ;
   t23_reg_317__temp = t23_reg_317 ;
   in3__temp = in3 ;
   in22__temp = in22 ;
   tmp_2_fu_226_p2__temp = tmp_2_fu_226_p2 ;
   in29__temp = in29 ;
   t26_fu_237_p2__temp = t26_fu_237_p2 ;
   in12__temp = in12 ;
   ap_ready__temp = ap_ready ;
   tmp_fu_269_p2_temp__temp = tmp_fu_269_p2_temp ;
   in27__temp = in27 ;
   ap_rst__temp = ap_rst ;
   in7__temp = in7 ;
   out30_ap_vld__temp = out30_ap_vld ;
   in4__temp = in4 ;
   t5_fu_209_p2__temp = t5_fu_209_p2 ;
   tmp_2_fu_226_p2_temp__temp = tmp_2_fu_226_p2_temp ;
   in32__temp = in32 ;
   out31_ap_vld__temp = out31_ap_vld ;
   t26_2_reg_322__temp = t26_2_reg_322 ;
   ap_done__temp = ap_done ;
   t26_1_fu_249_p2__temp = t26_1_fu_249_p2 ;
   in2__temp = in2 ;
   t11_reg_306__temp = t11_reg_306 ;
   t16_fu_275_p2__temp = t16_fu_275_p2 ;
   tmp_fu_269_p2__temp = tmp_fu_269_p2 ;
   out13__temp = out13 ;
   out30__temp = out30 ;
   tmp2_fu_215_p2__temp = tmp2_fu_215_p2 ;
   in8__temp = in8 ;
   t5_reg_312__temp = t5_reg_312 ;
   ap_start__temp = ap_start ;
   t25_fu_232_p2__temp = t25_fu_232_p2 ;
   in17__temp = in17 ;
   tmp1_fu_197_p2__temp = tmp1_fu_197_p2 ;
   ap_idle__temp = ap_idle ;
   t11_fu_203_p2__temp = t11_fu_203_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   out31__temp = out31 ;
   t23_fu_221_p2__temp = t23_fu_221_p2 ;
   in28__temp = in28 ;
   in1__temp = in1 ;
   in9__temp = in9 ;
   t16_1_fu_280_p2__temp = t16_1_fu_280_p2 ;

       if(1 == ap_CS_fsm_state3)
       {
           t26_2_reg_322 =   (  ( (  ( do_twos_complement( ( in9 & 4294967295 )  , 63 )  < do_twos_complement( ( in10 & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  ( ( t23_reg_317__temp  - ( in24__temp  & 4294967295 )  ) & 4294967295 )  + ( in27__temp  & 4294967295 )  ) & 4294967295 )  :   ( (  ( ( ( in19__temp  & 4294967295 )  + ( in20__temp  & 4294967295 )  ) & 4294967295 )  + t5_reg_312__temp  ) & 4294967295 )  ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

	dummy = dummy + 1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
   t16_2_fu_291_p3__temp = t16_2_fu_291_p3 ;
   tmp3_fu_243_p2__temp = tmp3_fu_243_p2 ;
   in20__temp = in20 ;
   in15__temp = in15 ;
   out13_ap_vld__temp = out13_ap_vld ;
   in19__temp = in19 ;
   in10__temp = in10 ;
   ap_clk__temp = ap_clk ;
   t26_2_fu_254_p3__temp = t26_2_fu_254_p3 ;
   in24__temp = in24 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   in14__temp = in14 ;
   t23_reg_317__temp = t23_reg_317 ;
   in3__temp = in3 ;
   in22__temp = in22 ;
   tmp_2_fu_226_p2__temp = tmp_2_fu_226_p2 ;
   in29__temp = in29 ;
   t26_fu_237_p2__temp = t26_fu_237_p2 ;
   in12__temp = in12 ;
   ap_ready__temp = ap_ready ;
   tmp_fu_269_p2_temp__temp = tmp_fu_269_p2_temp ;
   in27__temp = in27 ;
   ap_rst__temp = ap_rst ;
   in7__temp = in7 ;
   out30_ap_vld__temp = out30_ap_vld ;
   in4__temp = in4 ;
   t5_fu_209_p2__temp = t5_fu_209_p2 ;
   tmp_2_fu_226_p2_temp__temp = tmp_2_fu_226_p2_temp ;
   in32__temp = in32 ;
   out31_ap_vld__temp = out31_ap_vld ;
   t26_2_reg_322__temp = t26_2_reg_322 ;
   ap_done__temp = ap_done ;
   t26_1_fu_249_p2__temp = t26_1_fu_249_p2 ;
   in2__temp = in2 ;
   t11_reg_306__temp = t11_reg_306 ;
   t16_fu_275_p2__temp = t16_fu_275_p2 ;
   tmp_fu_269_p2__temp = tmp_fu_269_p2 ;
   out13__temp = out13 ;
   out30__temp = out30 ;
   tmp2_fu_215_p2__temp = tmp2_fu_215_p2 ;
   in8__temp = in8 ;
   t5_reg_312__temp = t5_reg_312 ;
   ap_start__temp = ap_start ;
   t25_fu_232_p2__temp = t25_fu_232_p2 ;
   in17__temp = in17 ;
   tmp1_fu_197_p2__temp = tmp1_fu_197_p2 ;
   ap_idle__temp = ap_idle ;
   t11_fu_203_p2__temp = t11_fu_203_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   out31__temp = out31 ;
   t23_fu_221_p2__temp = t23_fu_221_p2 ;
   in28__temp = in28 ;
   in1__temp = in1 ;
   in9__temp = in9 ;
   t16_1_fu_280_p2__temp = t16_1_fu_280_p2 ;

       if(1 == ap_CS_fsm_state4)
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if(1 == ap_CS_fsm_state4)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           out13_ap_vld =  1;
               out13 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
               out30 =   ( ( t26_2_reg_322__temp  + ( in29__temp  & 4294967295 )  ) & 4294967295 ) ;
               out31 =   ( (  (  ( (  ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( t11_reg_306__temp  - ( in17__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( t26_2_reg_322__temp  - ( in28__temp  & 4294967295 )  ) & 4294967295 )  )  + ( in32__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           out30_ap_vld =  1;
               out13 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
               out30 =   ( ( t26_2_reg_322__temp  + ( in29__temp  & 4294967295 )  ) & 4294967295 ) ;
               out31 =   ( (  (  ( (  ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( t11_reg_306__temp  - ( in17__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( t26_2_reg_322__temp  - ( in28__temp  & 4294967295 )  ) & 4294967295 )  )  + ( in32__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           out31_ap_vld =  1;
               out13 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
               out30 =   ( ( t26_2_reg_322__temp  + ( in29__temp  & 4294967295 )  ) & 4294967295 ) ;
               out31 =   ( (  (  ( (  ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( t11_reg_306__temp  - ( in17__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( t26_2_reg_322__temp  - ( in28__temp  & 4294967295 )  ) & 4294967295 )  )  + ( in32__temp  & 4294967295 )  ) & 4294967295 ) ;
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
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*in1__1=in1;
	*in10__1=in10;
	*in12__1=in12;
	*in14__1=in14;
	*in15__1=in15;
	*in17__1=in17;
	*in19__1=in19;
	*in2__1=in2;
	*in20__1=in20;
	*in22__1=in22;
	*in24__1=in24;
	*in27__1=in27;
	*in28__1=in28;
	*in29__1=in29;
	*in3__1=in3;
	*in32__1=in32;
	*in4__1=in4;
	*in7__1=in7;
	*in8__1=in8;
	*in9__1=in9;
	*out13__1=out13;
	*out13_ap_vld__1=out13_ap_vld;
	*out30__1=out30;
	*out30_ap_vld__1=out30_ap_vld;
	*out31__1=out31;
	*out31_ap_vld__1=out31_ap_vld;
	*dummy__1=dummy;
       return;
}
