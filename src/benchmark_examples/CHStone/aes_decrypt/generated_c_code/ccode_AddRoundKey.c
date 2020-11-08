#include<stdio.h>
void AddRoundKey(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *n__1,unsigned long long int *statemt_address0__1,unsigned long long int *statemt_address1__1,unsigned long long int *statemt_ce0__1,unsigned long long int *statemt_ce1__1,unsigned long long int *statemt_d0__1,unsigned long long int *statemt_d1__1,unsigned long long int *statemt_q0__1,unsigned long long int *statemt_q1__1,unsigned long long int *statemt_we0__1,unsigned long long int *statemt_we1__1,unsigned long long int *word_address0__1,unsigned long long int *word_address1__1,unsigned long long int *word_ce0__1,unsigned long long int *word_ce1__1,unsigned long long int *word_q0__1,unsigned long long int *word_q1__1,int dummy,unsigned long long int statemt_ram[32],unsigned long long int word_rom[480]){
int i,j;
printf("Add round key\n");


	/*for(j=0;j<480;j++){
		printf("%d ",word_rom[j]);
	}
printf("\n");*/


unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int n=*n__1;
//printf("n:%d\n",n);
unsigned long long int statemt_address0=*statemt_address0__1;
unsigned long long int statemt_address1=*statemt_address1__1;
unsigned long long int statemt_ce0=*statemt_ce0__1;
unsigned long long int statemt_ce1=*statemt_ce1__1;
unsigned long long int statemt_d0=*statemt_d0__1;
unsigned long long int statemt_d1=*statemt_d1__1;
unsigned long long int statemt_q0=*statemt_q0__1;
unsigned long long int statemt_q1=*statemt_q1__1;
unsigned long long int statemt_we0=*statemt_we0__1;
unsigned long long int statemt_we1=*statemt_we1__1;
unsigned long long int word_address0=*word_address0__1;
unsigned long long int word_address1=*word_address1__1;
unsigned long long int word_ce0=*word_ce0__1;
unsigned long long int word_ce1=*word_ce1__1;
unsigned long long int word_q0=*word_q0__1;
unsigned long long int word_q1=*word_q1__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int exitcond_fu_175_p2=0;
   unsigned long long int exitcond_fu_175_p2__temp=0;
   unsigned long long int grp_fu_137_p2=0;
   unsigned long long int grp_fu_137_p2__temp=0;
   unsigned long long int grp_fu_143_p2=0;
   unsigned long long int grp_fu_143_p2__temp=0;
   unsigned long long int j_4_fu_181_p2=0;
   unsigned long long int j_4_fu_181_p2__temp=0;
   unsigned long long int j_4_reg_293=0;
   unsigned long long int j_4_reg_293__temp=0;
   unsigned long long int j_cast1_fu_171_p1=0;
   unsigned long long int j_cast1_fu_171_p1__temp=0;
   unsigned long long int j_reg_126=0;
   unsigned long long int j_reg_126__temp=0;
   unsigned long long int n__temp=0;
   unsigned long long int reg_149=0;
   unsigned long long int reg_149__temp=0;
   unsigned long long int reg_154=0;
   unsigned long long int reg_154__temp=0;
   unsigned long long int statemt_addr_28_reg_324=0;
   unsigned long long int statemt_addr_28_reg_324__temp=0;
   unsigned long long int statemt_addr_28_reg_324_temp_7=0;
   unsigned long long int statemt_addr_28_reg_324_temp_7__temp=0;
   unsigned long long int statemt_addr_29_reg_339=0;
   unsigned long long int statemt_addr_29_reg_339__temp=0;
   unsigned long long int statemt_addr_29_reg_339_temp_16=0;
   unsigned long long int statemt_addr_29_reg_339_temp_16__temp=0;
   unsigned long long int statemt_addr_30_reg_344=0;
   unsigned long long int statemt_addr_30_reg_344__temp=0;
   unsigned long long int statemt_addr_30_reg_344_temp_19=0;
   unsigned long long int statemt_addr_30_reg_344_temp_19__temp=0;
   unsigned long long int statemt_addr_reg_319=0;
   unsigned long long int statemt_addr_reg_319__temp=0;
   unsigned long long int statemt_addr_reg_319_temp_10=0;
   unsigned long long int statemt_addr_reg_319_temp_10__temp=0;
   unsigned long long int statemt_q0__temp=0;
   unsigned long long int statemt_q1__temp=0;
   unsigned long long int tmp_100_cast_fu_207_p1=0;
   unsigned long long int tmp_100_cast_fu_207_p1__temp=0;
   unsigned long long int tmp_100_fu_201_p2=0;
   unsigned long long int tmp_100_fu_201_p2__temp=0;
   unsigned long long int tmp_101_cast1_fu_240_p1=0;
   unsigned long long int tmp_101_cast1_fu_240_p1__temp=0;
   unsigned long long int tmp_101_cast_fu_197_p1=0;
   unsigned long long int tmp_101_cast_fu_197_p1__temp=0;
   unsigned long long int tmp_101_fu_192_p1=0;
   unsigned long long int tmp_101_fu_192_p1__temp=0;
   unsigned long long int tmp_102_cast_fu_249_p1=0;
   unsigned long long int tmp_102_cast_fu_249_p1__temp=0;
   unsigned long long int tmp_102_fu_243_p2=0;
   unsigned long long int tmp_102_fu_243_p2__temp=0;
   unsigned long long int tmp_103_cast_fu_260_p1=0;
   unsigned long long int tmp_103_cast_fu_260_p1__temp=0;
   unsigned long long int tmp_103_fu_254_p2=0;
   unsigned long long int tmp_103_fu_254_p2__temp=0;
   unsigned long long int tmp_104_fu_216_p3=0;
   unsigned long long int tmp_104_fu_216_p3__temp=0;
   unsigned long long int tmp_104_fu_216_p3_temp_12=0;
   unsigned long long int tmp_104_fu_216_p3_temp_12__temp=0;
   unsigned long long int tmp_104_fu_216_p3_temp_12_temp_14=0;
   unsigned long long int tmp_104_fu_216_p3_temp_12_temp_14__temp=0;
   unsigned long long int tmp_104_reg_313=0;
   unsigned long long int tmp_104_reg_313__temp=0;
   unsigned long long int tmp_104_reg_313_temp_13=0;
   unsigned long long int tmp_104_reg_313_temp_13__temp=0;
   unsigned long long int tmp_105_fu_224_p1=0;
   unsigned long long int tmp_105_fu_224_p1__temp=0;
   unsigned long long int tmp_105_fu_224_p1_temp_9=0;
   unsigned long long int tmp_105_fu_224_p1_temp_9__temp=0;
   unsigned long long int tmp_105_fu_224_p1_temp_9_temp_11=0;
   unsigned long long int tmp_105_fu_224_p1_temp_9_temp_11__temp=0;
   unsigned long long int tmp_107_fu_229_p2=0;
   unsigned long long int tmp_107_fu_229_p2__temp=0;
   unsigned long long int tmp_108_fu_235_p1=0;
   unsigned long long int tmp_108_fu_235_p1__temp=0;
   unsigned long long int tmp_108_fu_235_p1_temp_6=0;
   unsigned long long int tmp_108_fu_235_p1_temp_6__temp=0;
   unsigned long long int tmp_108_fu_235_p1_temp_6_temp_8=0;
   unsigned long long int tmp_108_fu_235_p1_temp_6_temp_8__temp=0;
   unsigned long long int tmp_110_fu_265_p2=0;
   unsigned long long int tmp_110_fu_265_p2__temp=0;
   unsigned long long int tmp_111_fu_270_p1=0;
   unsigned long long int tmp_111_fu_270_p1__temp=0;
   unsigned long long int tmp_111_fu_270_p1_temp_15=0;
   unsigned long long int tmp_111_fu_270_p1_temp_15__temp=0;
   unsigned long long int tmp_111_fu_270_p1_temp_15_temp_17=0;
   unsigned long long int tmp_111_fu_270_p1_temp_15_temp_17__temp=0;
   unsigned long long int tmp_113_fu_275_p2=0;
   unsigned long long int tmp_113_fu_275_p2__temp=0;
   unsigned long long int tmp_114_fu_280_p1=0;
   unsigned long long int tmp_114_fu_280_p1__temp=0;
   unsigned long long int tmp_114_fu_280_p1_temp_18=0;
   unsigned long long int tmp_114_fu_280_p1_temp_18__temp=0;
   unsigned long long int tmp_114_fu_280_p1_temp_18_temp_20=0;
   unsigned long long int tmp_114_fu_280_p1_temp_18_temp_20__temp=0;
   unsigned long long int tmp_96_fu_159_p1=0;
   unsigned long long int tmp_96_fu_159_p1__temp=0;
   unsigned long long int tmp_96_fu_159_p1_temp_25=0;
   unsigned long long int tmp_96_fu_159_p1_temp_25__temp=0;
   unsigned long long int tmp_97_fu_212_p1=0;
   unsigned long long int tmp_97_fu_212_p1__temp=0;
   unsigned long long int tmp_97_fu_212_p1_temp_24=0;
   unsigned long long int tmp_97_fu_212_p1_temp_24__temp=0;
   unsigned long long int tmp_fu_163_p3=0;
   unsigned long long int tmp_fu_163_p3__temp=0;
   unsigned long long int tmp_fu_163_p3_temp_21=0;
   unsigned long long int tmp_fu_163_p3_temp_21__temp=0;
   unsigned long long int tmp_fu_163_p3_temp_21_temp_23=0;
   unsigned long long int tmp_fu_163_p3_temp_21_temp_23__temp=0;
   unsigned long long int tmp_reg_285=0;
   unsigned long long int tmp_reg_285__temp=0;
   unsigned long long int tmp_reg_285_temp_22=0;
   unsigned long long int tmp_reg_285_temp_22__temp=0;
   unsigned long long int tmp_s_fu_187_p2=0;
   unsigned long long int tmp_s_fu_187_p2__temp=0;
   unsigned long long int tmp_s_reg_298=0;
   unsigned long long int tmp_s_reg_298__temp=0;
   unsigned long long int word_q0__temp=0;
   unsigned long long int word_q1__temp=0;
	ap_done=0;
	ap_start=1;

   ap_ST_fsm_state1:

	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   statemt_addr_28_reg_324__temp = statemt_addr_28_reg_324 ;
   tmp_104_fu_216_p3__temp = tmp_104_fu_216_p3 ;
   tmp_105_fu_224_p1_temp_9__temp = tmp_105_fu_224_p1_temp_9 ;
   tmp_fu_163_p3_temp_21_temp_23__temp = tmp_fu_163_p3_temp_21_temp_23 ;
   tmp_reg_285_temp_22__temp = tmp_reg_285_temp_22 ;
   tmp_107_fu_229_p2__temp = tmp_107_fu_229_p2 ;
   tmp_114_fu_280_p1_temp_18__temp = tmp_114_fu_280_p1_temp_18 ;
   tmp_101_fu_192_p1__temp = tmp_101_fu_192_p1 ;
   tmp_104_fu_216_p3_temp_12_temp_14__temp = tmp_104_fu_216_p3_temp_12_temp_14 ;
   tmp_111_fu_270_p1_temp_15_temp_17__temp = tmp_111_fu_270_p1_temp_15_temp_17 ;
   tmp_105_fu_224_p1__temp = tmp_105_fu_224_p1 ;
   tmp_105_fu_224_p1_temp_9_temp_11__temp = tmp_105_fu_224_p1_temp_9_temp_11 ;
   tmp_104_reg_313_temp_13__temp = tmp_104_reg_313_temp_13 ;
   j_4_fu_181_p2__temp = j_4_fu_181_p2 ;
   reg_154__temp = reg_154 ;
   tmp_96_fu_159_p1_temp_25__temp = tmp_96_fu_159_p1_temp_25 ;
   statemt_addr_30_reg_344_temp_19__temp = statemt_addr_30_reg_344_temp_19 ;
   tmp_102_fu_243_p2__temp = tmp_102_fu_243_p2 ;
   tmp_fu_163_p3_temp_21__temp = tmp_fu_163_p3_temp_21 ;
   tmp_108_fu_235_p1__temp = tmp_108_fu_235_p1 ;
   tmp_101_cast_fu_197_p1__temp = tmp_101_cast_fu_197_p1 ;
   tmp_114_fu_280_p1__temp = tmp_114_fu_280_p1 ;
   grp_fu_143_p2__temp = grp_fu_143_p2 ;
   tmp_101_cast1_fu_240_p1__temp = tmp_101_cast1_fu_240_p1 ;
   j_4_reg_293__temp = j_4_reg_293 ;
   statemt_addr_30_reg_344__temp = statemt_addr_30_reg_344 ;
   statemt_addr_reg_319_temp_10__temp = statemt_addr_reg_319_temp_10 ;
   statemt_addr_29_reg_339__temp = statemt_addr_29_reg_339 ;
   tmp_fu_163_p3__temp = tmp_fu_163_p3 ;
   exitcond_fu_175_p2__temp = exitcond_fu_175_p2 ;
   tmp_104_reg_313__temp = tmp_104_reg_313 ;
   tmp_102_cast_fu_249_p1__temp = tmp_102_cast_fu_249_p1 ;
   tmp_s_fu_187_p2__temp = tmp_s_fu_187_p2 ;
   tmp_103_cast_fu_260_p1__temp = tmp_103_cast_fu_260_p1 ;
   tmp_s_reg_298__temp = tmp_s_reg_298 ;
   tmp_103_fu_254_p2__temp = tmp_103_fu_254_p2 ;
   tmp_97_fu_212_p1_temp_24__temp = tmp_97_fu_212_p1_temp_24 ;
   statemt_addr_reg_319__temp = statemt_addr_reg_319 ;
   statemt_addr_28_reg_324_temp_7__temp = statemt_addr_28_reg_324_temp_7 ;
   tmp_111_fu_270_p1__temp = tmp_111_fu_270_p1 ;
   tmp_100_fu_201_p2__temp = tmp_100_fu_201_p2 ;
   tmp_113_fu_275_p2__temp = tmp_113_fu_275_p2 ;
   tmp_96_fu_159_p1__temp = tmp_96_fu_159_p1 ;
   j_cast1_fu_171_p1__temp = j_cast1_fu_171_p1 ;
   tmp_114_fu_280_p1_temp_18_temp_20__temp = tmp_114_fu_280_p1_temp_18_temp_20 ;
   j_reg_126__temp = j_reg_126 ;
   grp_fu_137_p2__temp = grp_fu_137_p2 ;
   tmp_104_fu_216_p3_temp_12__temp = tmp_104_fu_216_p3_temp_12 ;
   tmp_108_fu_235_p1_temp_6_temp_8__temp = tmp_108_fu_235_p1_temp_6_temp_8 ;
   tmp_reg_285__temp = tmp_reg_285 ;
   statemt_addr_29_reg_339_temp_16__temp = statemt_addr_29_reg_339_temp_16 ;
   tmp_97_fu_212_p1__temp = tmp_97_fu_212_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_111_fu_270_p1_temp_15__temp = tmp_111_fu_270_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_100_cast_fu_207_p1__temp = tmp_100_cast_fu_207_p1 ;
   reg_149__temp = reg_149 ;
   tmp_110_fu_265_p2__temp = tmp_110_fu_265_p2 ;
   tmp_108_fu_235_p1_temp_6__temp = tmp_108_fu_235_p1_temp_6 ;

       tmp_reg_285 = ( ( tmp_reg_285 & 60 ) & 63 )  ;
       tmp_104_reg_313 = ( ( tmp_104_reg_313 & 12 ) & 15 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 28 ) & 31 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 15 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 29 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 15 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 30 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 15 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 31 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 15 ) & 31 )  ;
               exitcond_fu_175_p2 =   ( j_reg_126__temp  == 4 ? 1 :  0 ) ;
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           j_reg_126 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           tmp_reg_285 =  ( ( ( ( (( ( ( ( (n & 31 )  & 15 ) & 15 )  << 2 )  & 36893488147419103231 )  & 63 )  & 60 ) & 36893488147419103231 )  | ( ( tmp_reg_285__temp  & 3 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
       }
       if(((exitcond_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               j_reg_126 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               tmp_reg_285 =  ( ( ( ( (( ( ( ( (n & 31 )  & 15 ) & 15 )  << 2 )  & 36893488147419103231 )  & 63 )  & 60 ) & 36893488147419103231 )  | ( ( tmp_reg_285__temp  & 3 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
       }
       if(((exitcond_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
			if(ap_done==1){
			}
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
   statemt_addr_28_reg_324__temp = statemt_addr_28_reg_324 ;
   tmp_104_fu_216_p3__temp = tmp_104_fu_216_p3 ;
   tmp_105_fu_224_p1_temp_9__temp = tmp_105_fu_224_p1_temp_9 ;
   tmp_fu_163_p3_temp_21_temp_23__temp = tmp_fu_163_p3_temp_21_temp_23 ;
   tmp_reg_285_temp_22__temp = tmp_reg_285_temp_22 ;
   tmp_107_fu_229_p2__temp = tmp_107_fu_229_p2 ;
   tmp_114_fu_280_p1_temp_18__temp = tmp_114_fu_280_p1_temp_18 ;
   tmp_101_fu_192_p1__temp = tmp_101_fu_192_p1 ;
   tmp_104_fu_216_p3_temp_12_temp_14__temp = tmp_104_fu_216_p3_temp_12_temp_14 ;
   tmp_111_fu_270_p1_temp_15_temp_17__temp = tmp_111_fu_270_p1_temp_15_temp_17 ;
   tmp_105_fu_224_p1__temp = tmp_105_fu_224_p1 ;
   tmp_105_fu_224_p1_temp_9_temp_11__temp = tmp_105_fu_224_p1_temp_9_temp_11 ;
   tmp_104_reg_313_temp_13__temp = tmp_104_reg_313_temp_13 ;
   j_4_fu_181_p2__temp = j_4_fu_181_p2 ;
   reg_154__temp = reg_154 ;
   tmp_96_fu_159_p1_temp_25__temp = tmp_96_fu_159_p1_temp_25 ;
   statemt_addr_30_reg_344_temp_19__temp = statemt_addr_30_reg_344_temp_19 ;
   tmp_102_fu_243_p2__temp = tmp_102_fu_243_p2 ;
   tmp_fu_163_p3_temp_21__temp = tmp_fu_163_p3_temp_21 ;
   tmp_108_fu_235_p1__temp = tmp_108_fu_235_p1 ;
   tmp_101_cast_fu_197_p1__temp = tmp_101_cast_fu_197_p1 ;
   tmp_114_fu_280_p1__temp = tmp_114_fu_280_p1 ;
   grp_fu_143_p2__temp = grp_fu_143_p2 ;
   tmp_101_cast1_fu_240_p1__temp = tmp_101_cast1_fu_240_p1 ;
   j_4_reg_293__temp = j_4_reg_293 ;
   statemt_addr_30_reg_344__temp = statemt_addr_30_reg_344 ;
   statemt_addr_reg_319_temp_10__temp = statemt_addr_reg_319_temp_10 ;
   statemt_addr_29_reg_339__temp = statemt_addr_29_reg_339 ;
   tmp_fu_163_p3__temp = tmp_fu_163_p3 ;
   exitcond_fu_175_p2__temp = exitcond_fu_175_p2 ;
   tmp_104_reg_313__temp = tmp_104_reg_313 ;
   tmp_102_cast_fu_249_p1__temp = tmp_102_cast_fu_249_p1 ;
   tmp_s_fu_187_p2__temp = tmp_s_fu_187_p2 ;
   tmp_103_cast_fu_260_p1__temp = tmp_103_cast_fu_260_p1 ;
   tmp_s_reg_298__temp = tmp_s_reg_298 ;
   tmp_103_fu_254_p2__temp = tmp_103_fu_254_p2 ;
   tmp_97_fu_212_p1_temp_24__temp = tmp_97_fu_212_p1_temp_24 ;
   statemt_addr_reg_319__temp = statemt_addr_reg_319 ;
   statemt_addr_28_reg_324_temp_7__temp = statemt_addr_28_reg_324_temp_7 ;
   tmp_111_fu_270_p1__temp = tmp_111_fu_270_p1 ;
   tmp_100_fu_201_p2__temp = tmp_100_fu_201_p2 ;
   tmp_113_fu_275_p2__temp = tmp_113_fu_275_p2 ;
   tmp_96_fu_159_p1__temp = tmp_96_fu_159_p1 ;
   j_cast1_fu_171_p1__temp = j_cast1_fu_171_p1 ;
   tmp_114_fu_280_p1_temp_18_temp_20__temp = tmp_114_fu_280_p1_temp_18_temp_20 ;
   j_reg_126__temp = j_reg_126 ;
   grp_fu_137_p2__temp = grp_fu_137_p2 ;
   tmp_104_fu_216_p3_temp_12__temp = tmp_104_fu_216_p3_temp_12 ;
   tmp_108_fu_235_p1_temp_6_temp_8__temp = tmp_108_fu_235_p1_temp_6_temp_8 ;
   tmp_reg_285__temp = tmp_reg_285 ;
   statemt_addr_29_reg_339_temp_16__temp = statemt_addr_29_reg_339_temp_16 ;
   tmp_97_fu_212_p1__temp = tmp_97_fu_212_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_111_fu_270_p1_temp_15__temp = tmp_111_fu_270_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_100_cast_fu_207_p1__temp = tmp_100_cast_fu_207_p1 ;
   reg_149__temp = reg_149 ;
   tmp_110_fu_265_p2__temp = tmp_110_fu_265_p2 ;
   tmp_108_fu_235_p1_temp_6__temp = tmp_108_fu_235_p1_temp_6 ;

       tmp_reg_285 = ( ( tmp_reg_285 & 60 ) & 63 )  ;
       tmp_104_reg_313 = ( ( tmp_104_reg_313 & 12 ) & 15 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 28 ) & 31 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 15 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 29 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 15 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 30 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 15 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 31 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 15 ) & 31 )  ;
               exitcond_fu_175_p2 =   ( j_reg_126__temp  == 4 ? 1 :  0 ) ;
   if(((exitcond_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if(1 == ap_CS_fsm_state2)
       {
           j_4_reg_293 =  ( ( j_reg_126__temp  + 1 ) & 7 ) ;
       }
       if((exitcond_fu_175_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           tmp_s_reg_298 =  ( ( (j_reg_126 & 63 )  + tmp_reg_285__temp  ) & 63 ) ;
           tmp_104_reg_313 =  ( ( ( ( (( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  & 12 ) & 36893488147419103231 )  | ( ( tmp_104_reg_313__temp  & 3 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
           statemt_addr_reg_319 =  ( ( ( ( ((( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  & 18446744073709551615 )  & 12 ) & 36893488147419103231 )  | ( ( statemt_addr_reg_319__temp  & 19 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
           statemt_addr_28_reg_324 =  ( ( ( ( (( ( (( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  | 1 ) & 15 )  & 18446744073709551615 )  & 12 ) & 36893488147419103231 )  | ( ( statemt_addr_28_reg_324__temp  & 19 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
       }
       if(((exitcond_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((exitcond_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           statemt_address0 =  ((( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           statemt_address1 =  (( ( (( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  | 1 ) & 15 )  & 18446744073709551615 ) ;
       }

       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
           statemt_ce0 =  1;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
           statemt_ce1 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           word_address0 =  (( ( (j_reg_126 & 63 )  + tmp_reg_285__temp  ) & 63 )  & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           word_address1 =  (( ( 120 + (( ( (j_reg_126 & 63 )  + tmp_reg_285__temp  ) & 63 )  & 255 )  ) & 255 )  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state3))
       {
           word_ce0 =  1;
       }
       if((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state3))
       {
           word_ce1 =  1;
       }

       if(word_ce0){
          word_q0=word_rom[word_address0];
       }
       if(word_ce1){
          word_q1=word_rom[word_address1];
       }

       if(statemt_ce0){
          statemt_q0=statemt_ram[statemt_address0];
       }
       if(statemt_ce1){
          statemt_q1=statemt_ram[statemt_address1];
       }

	if(word_ce0){
          word_q0=word_rom[word_address0];
       }
       if(word_ce1){
          word_q1=word_rom[word_address1];
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((exitcond_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if(1 == ap_CS_fsm_state2)
       {
               j_4_reg_293 =  ( ( j_reg_126__temp  + 1 ) & 7 ) ;
       }
       if((exitcond_fu_175_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               tmp_s_reg_298 =  ( ( (j_reg_126 & 63 )  + tmp_reg_285__temp  ) & 63 ) ;
               tmp_104_reg_313 =  ( ( ( ( (( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  & 12 ) & 36893488147419103231 )  | ( ( tmp_104_reg_313__temp  & 3 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
               statemt_addr_reg_319 =  ( ( ( ( ((( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  & 18446744073709551615 )  & 12 ) & 36893488147419103231 )  | ( ( statemt_addr_reg_319__temp  & 19 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
               statemt_addr_28_reg_324 =  ( ( ( ( (( ( (( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  | 1 ) & 15 )  & 18446744073709551615 )  & 12 ) & 36893488147419103231 )  | ( ( statemt_addr_28_reg_324__temp  & 19 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
       }
       if(((exitcond_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2)) || ((ap_start == 0) && (1 == ap_CS_fsm_state1)))
       {
               ap_done =  1;
			if(ap_done==1){
			}
       }
       if((exitcond_fu_175_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               statemt_address0 =  ((( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
               statemt_address1 =  (( ( (( ( ( ( j_reg_126__temp  & 3 ) & 3 )  << 2 )  & 36893488147419103231 )  & 15 )  | 1 ) & 15 )  & 18446744073709551615 ) ;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
               statemt_ce0 =  1;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
               statemt_ce1 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               word_address0 =  (( ( (j_reg_126 & 63 )  + tmp_reg_285__temp  ) & 63 )  & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
               word_address1 =  (( ( 120 + (( ( (j_reg_126 & 63 )  + tmp_reg_285__temp  ) & 63 )  & 255 )  ) & 255 )  & 18446744073709551615 ) ;
       }
       if((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state3))
       {
               word_ce0 =  1;
       }
       if((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state3))
       {
               word_ce1 =  1;
       }
	//printf("wadd0:%d wadd1:%d\n",word_rom[word_address0],word_rom[word_address1]);
       if(word_ce0){
          word_q0=word_rom[word_address0];
       }
       if(word_ce1){
          word_q1=word_rom[word_address1];
       }	
       if(statemt_ce0){
          statemt_q0=statemt_ram[statemt_address0];
       }
       if(statemt_ce1){
          statemt_q1=statemt_ram[statemt_address1];
       }
	//printf("add0:%d add1:%d \n",statemt_q0,statemt_q1);
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   statemt_addr_28_reg_324__temp = statemt_addr_28_reg_324 ;
   tmp_104_fu_216_p3__temp = tmp_104_fu_216_p3 ;
   tmp_105_fu_224_p1_temp_9__temp = tmp_105_fu_224_p1_temp_9 ;
   tmp_fu_163_p3_temp_21_temp_23__temp = tmp_fu_163_p3_temp_21_temp_23 ;
   tmp_reg_285_temp_22__temp = tmp_reg_285_temp_22 ;
   tmp_107_fu_229_p2__temp = tmp_107_fu_229_p2 ;
   tmp_114_fu_280_p1_temp_18__temp = tmp_114_fu_280_p1_temp_18 ;
   tmp_101_fu_192_p1__temp = tmp_101_fu_192_p1 ;
   tmp_104_fu_216_p3_temp_12_temp_14__temp = tmp_104_fu_216_p3_temp_12_temp_14 ;
   tmp_111_fu_270_p1_temp_15_temp_17__temp = tmp_111_fu_270_p1_temp_15_temp_17 ;
   tmp_105_fu_224_p1__temp = tmp_105_fu_224_p1 ;
   tmp_105_fu_224_p1_temp_9_temp_11__temp = tmp_105_fu_224_p1_temp_9_temp_11 ;
   tmp_104_reg_313_temp_13__temp = tmp_104_reg_313_temp_13 ;
   j_4_fu_181_p2__temp = j_4_fu_181_p2 ;
   reg_154__temp = reg_154 ;
   tmp_96_fu_159_p1_temp_25__temp = tmp_96_fu_159_p1_temp_25 ;
   statemt_addr_30_reg_344_temp_19__temp = statemt_addr_30_reg_344_temp_19 ;
   tmp_102_fu_243_p2__temp = tmp_102_fu_243_p2 ;
   tmp_fu_163_p3_temp_21__temp = tmp_fu_163_p3_temp_21 ;
   tmp_108_fu_235_p1__temp = tmp_108_fu_235_p1 ;
   tmp_101_cast_fu_197_p1__temp = tmp_101_cast_fu_197_p1 ;
   tmp_114_fu_280_p1__temp = tmp_114_fu_280_p1 ;
   grp_fu_143_p2__temp = grp_fu_143_p2 ;
   tmp_101_cast1_fu_240_p1__temp = tmp_101_cast1_fu_240_p1 ;
   j_4_reg_293__temp = j_4_reg_293 ;
   statemt_addr_30_reg_344__temp = statemt_addr_30_reg_344 ;
   statemt_addr_reg_319_temp_10__temp = statemt_addr_reg_319_temp_10 ;
   statemt_addr_29_reg_339__temp = statemt_addr_29_reg_339 ;
   tmp_fu_163_p3__temp = tmp_fu_163_p3 ;
   exitcond_fu_175_p2__temp = exitcond_fu_175_p2 ;
   tmp_104_reg_313__temp = tmp_104_reg_313 ;
   tmp_102_cast_fu_249_p1__temp = tmp_102_cast_fu_249_p1 ;
   tmp_s_fu_187_p2__temp = tmp_s_fu_187_p2 ;
   tmp_103_cast_fu_260_p1__temp = tmp_103_cast_fu_260_p1 ;
   tmp_s_reg_298__temp = tmp_s_reg_298 ;
   tmp_103_fu_254_p2__temp = tmp_103_fu_254_p2 ;
   tmp_97_fu_212_p1_temp_24__temp = tmp_97_fu_212_p1_temp_24 ;
   statemt_addr_reg_319__temp = statemt_addr_reg_319 ;
   statemt_addr_28_reg_324_temp_7__temp = statemt_addr_28_reg_324_temp_7 ;
   tmp_111_fu_270_p1__temp = tmp_111_fu_270_p1 ;
   tmp_100_fu_201_p2__temp = tmp_100_fu_201_p2 ;
   tmp_113_fu_275_p2__temp = tmp_113_fu_275_p2 ;
   tmp_96_fu_159_p1__temp = tmp_96_fu_159_p1 ;
   j_cast1_fu_171_p1__temp = j_cast1_fu_171_p1 ;
   tmp_114_fu_280_p1_temp_18_temp_20__temp = tmp_114_fu_280_p1_temp_18_temp_20 ;
   j_reg_126__temp = j_reg_126 ;
   grp_fu_137_p2__temp = grp_fu_137_p2 ;
   tmp_104_fu_216_p3_temp_12__temp = tmp_104_fu_216_p3_temp_12 ;
   tmp_108_fu_235_p1_temp_6_temp_8__temp = tmp_108_fu_235_p1_temp_6_temp_8 ;
   tmp_reg_285__temp = tmp_reg_285 ;
   statemt_addr_29_reg_339_temp_16__temp = statemt_addr_29_reg_339_temp_16 ;
   tmp_97_fu_212_p1__temp = tmp_97_fu_212_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_111_fu_270_p1_temp_15__temp = tmp_111_fu_270_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_100_cast_fu_207_p1__temp = tmp_100_cast_fu_207_p1 ;
   reg_149__temp = reg_149 ;
   tmp_110_fu_265_p2__temp = tmp_110_fu_265_p2 ;
   tmp_108_fu_235_p1_temp_6__temp = tmp_108_fu_235_p1_temp_6 ;

       tmp_reg_285 = ( ( tmp_reg_285 & 60 ) & 63 )  ;
       tmp_104_reg_313 = ( ( tmp_104_reg_313 & 12 ) & 15 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 28 ) & 31 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 15 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 29 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 15 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 30 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 15 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 31 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 15 ) & 31 )  ;
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           reg_154 =  ( ( (word_q1 & 4294967295 )  ^ (statemt_q1 & 4294967295 )  ) & 4294967295 ) ;
           reg_149 =  ( ( (word_q0 & 4294967295 )  ^ (statemt_q0 & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           statemt_addr_30_reg_344 =  ( ( ( ( (( ( tmp_104_reg_313__temp  | 3 ) & 15 )  & 18446744073709551615 )  & 12 ) & 36893488147419103231 )  | ( ( statemt_addr_30_reg_344__temp  & 19 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
           statemt_addr_29_reg_339 =  ( ( ( ( (( ( tmp_104_reg_313__temp  | 2 ) & 15 )  & 18446744073709551615 )  & 12 ) & 36893488147419103231 )  | ( ( statemt_addr_29_reg_339__temp  & 19 ) & 36893488147419103231 )  ) & 36893488147419103231 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           statemt_address0 =  (( ( tmp_104_reg_313__temp  | 2 ) & 15 )  & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           statemt_address1 =  (( ( tmp_104_reg_313__temp  | 3 ) & 15 )  & 18446744073709551615 ) ;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
           statemt_ce0 =  1;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
           statemt_ce1 =  1;
       }

       if(1 == ap_CS_fsm_state3)
       {
           word_address0 =  (( ( 240 + (tmp_s_reg_298 & 511 )  ) & 511 )  & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           word_address1 =  (( ( do_twos_complement( 360,511 )  + do_twos_complement( (tmp_s_reg_298 & 511 ) ,9 )  ) & 511 )  & 18446744073709551615 ) ;
       }
	//printf("wadd0:%d wadd1:%d\n",word_rom[word_address0],word_rom[word_address1]);
       if((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state3))
       {
           word_ce0 =  1;
       }
       if((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state3))
       {
           word_ce1 =  1;
       }
statemt_d0 = reg_149__temp;
statemt_d1 = reg_154__temp;
       if(word_ce0){
          word_q0=word_rom[word_address0];
       }
       if(word_ce1){
          word_q1=word_rom[word_address1];
       }
       if(statemt_ce0){
          statemt_q0=statemt_ram[statemt_address0];
       }
       if(statemt_ce1){
          statemt_q1=statemt_ram[statemt_address1];
       }
	//printf("add0:%d add1:%d\n",statemt_q0,statemt_q1);
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
   statemt_addr_28_reg_324__temp = statemt_addr_28_reg_324 ;
   tmp_104_fu_216_p3__temp = tmp_104_fu_216_p3 ;
   tmp_105_fu_224_p1_temp_9__temp = tmp_105_fu_224_p1_temp_9 ;
   tmp_fu_163_p3_temp_21_temp_23__temp = tmp_fu_163_p3_temp_21_temp_23 ;
   tmp_reg_285_temp_22__temp = tmp_reg_285_temp_22 ;
   tmp_107_fu_229_p2__temp = tmp_107_fu_229_p2 ;
   tmp_114_fu_280_p1_temp_18__temp = tmp_114_fu_280_p1_temp_18 ;
   tmp_101_fu_192_p1__temp = tmp_101_fu_192_p1 ;
   tmp_104_fu_216_p3_temp_12_temp_14__temp = tmp_104_fu_216_p3_temp_12_temp_14 ;
   tmp_111_fu_270_p1_temp_15_temp_17__temp = tmp_111_fu_270_p1_temp_15_temp_17 ;
   tmp_105_fu_224_p1__temp = tmp_105_fu_224_p1 ;
   tmp_105_fu_224_p1_temp_9_temp_11__temp = tmp_105_fu_224_p1_temp_9_temp_11 ;
   tmp_104_reg_313_temp_13__temp = tmp_104_reg_313_temp_13 ;
   j_4_fu_181_p2__temp = j_4_fu_181_p2 ;
   reg_154__temp = reg_154 ;
   tmp_96_fu_159_p1_temp_25__temp = tmp_96_fu_159_p1_temp_25 ;
   statemt_addr_30_reg_344_temp_19__temp = statemt_addr_30_reg_344_temp_19 ;
   tmp_102_fu_243_p2__temp = tmp_102_fu_243_p2 ;
   tmp_fu_163_p3_temp_21__temp = tmp_fu_163_p3_temp_21 ;
   tmp_108_fu_235_p1__temp = tmp_108_fu_235_p1 ;
   tmp_101_cast_fu_197_p1__temp = tmp_101_cast_fu_197_p1 ;
   tmp_114_fu_280_p1__temp = tmp_114_fu_280_p1 ;
   grp_fu_143_p2__temp = grp_fu_143_p2 ;
   tmp_101_cast1_fu_240_p1__temp = tmp_101_cast1_fu_240_p1 ;
   j_4_reg_293__temp = j_4_reg_293 ;
   statemt_addr_30_reg_344__temp = statemt_addr_30_reg_344 ;
   statemt_addr_reg_319_temp_10__temp = statemt_addr_reg_319_temp_10 ;
   statemt_addr_29_reg_339__temp = statemt_addr_29_reg_339 ;
   tmp_fu_163_p3__temp = tmp_fu_163_p3 ;
   exitcond_fu_175_p2__temp = exitcond_fu_175_p2 ;
   tmp_104_reg_313__temp = tmp_104_reg_313 ;
   tmp_102_cast_fu_249_p1__temp = tmp_102_cast_fu_249_p1 ;
   tmp_s_fu_187_p2__temp = tmp_s_fu_187_p2 ;
   tmp_103_cast_fu_260_p1__temp = tmp_103_cast_fu_260_p1 ;
   tmp_s_reg_298__temp = tmp_s_reg_298 ;
   tmp_103_fu_254_p2__temp = tmp_103_fu_254_p2 ;
   tmp_97_fu_212_p1_temp_24__temp = tmp_97_fu_212_p1_temp_24 ;
   statemt_addr_reg_319__temp = statemt_addr_reg_319 ;
   statemt_addr_28_reg_324_temp_7__temp = statemt_addr_28_reg_324_temp_7 ;
   tmp_111_fu_270_p1__temp = tmp_111_fu_270_p1 ;
   tmp_100_fu_201_p2__temp = tmp_100_fu_201_p2 ;
   tmp_113_fu_275_p2__temp = tmp_113_fu_275_p2 ;
   tmp_96_fu_159_p1__temp = tmp_96_fu_159_p1 ;
   j_cast1_fu_171_p1__temp = j_cast1_fu_171_p1 ;
   tmp_114_fu_280_p1_temp_18_temp_20__temp = tmp_114_fu_280_p1_temp_18_temp_20 ;
   j_reg_126__temp = j_reg_126 ;
   grp_fu_137_p2__temp = grp_fu_137_p2 ;
   tmp_104_fu_216_p3_temp_12__temp = tmp_104_fu_216_p3_temp_12 ;
   tmp_108_fu_235_p1_temp_6_temp_8__temp = tmp_108_fu_235_p1_temp_6_temp_8 ;
   tmp_reg_285__temp = tmp_reg_285 ;
   statemt_addr_29_reg_339_temp_16__temp = statemt_addr_29_reg_339_temp_16 ;
   tmp_97_fu_212_p1__temp = tmp_97_fu_212_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_111_fu_270_p1_temp_15__temp = tmp_111_fu_270_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_100_cast_fu_207_p1__temp = tmp_100_cast_fu_207_p1 ;
   reg_149__temp = reg_149 ;
   tmp_110_fu_265_p2__temp = tmp_110_fu_265_p2 ;
   tmp_108_fu_235_p1_temp_6__temp = tmp_108_fu_235_p1_temp_6 ;

       tmp_reg_285 = ( ( tmp_reg_285 & 60 ) & 63 )  ;
       tmp_104_reg_313 = ( ( tmp_104_reg_313 & 12 ) & 15 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 28 ) & 31 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 15 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 29 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 15 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 30 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 15 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 31 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 15 ) & 31 )  ;
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           reg_154 =  ( ( (word_q1 & 4294967295 )  ^ (statemt_q1 & 4294967295 )  ) & 4294967295 ) ;
           reg_149 =  ( ( (word_q0 & 4294967295 )  ^ (statemt_q0 & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           statemt_address0 =  statemt_addr_reg_319__temp ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           statemt_address1 =  statemt_addr_28_reg_324__temp + 1;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
           statemt_ce0 =  1;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
           statemt_ce1 =  1;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))
       {
           statemt_we0 =  1;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))
       {
           statemt_we1 =  1;
       }
statemt_d0 = reg_149__temp;
statemt_d1 = reg_154__temp;
//	printf("add0:%d add1:%d\n",statemt_address0,statemt_address1);
	if(statemt_ce0){
          statemt_q0=statemt_ram[statemt_address0];
           if(statemt_we0){
              statemt_ram[statemt_address0]=statemt_d0;
           }
       }

	if(statemt_ce1){
          statemt_q1=statemt_ram[statemt_address1];
           if(statemt_we1){
              statemt_ram[statemt_address1]=statemt_d1;
           }
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
   statemt_addr_28_reg_324__temp = statemt_addr_28_reg_324 ;
   tmp_104_fu_216_p3__temp = tmp_104_fu_216_p3 ;
   tmp_105_fu_224_p1_temp_9__temp = tmp_105_fu_224_p1_temp_9 ;
   tmp_fu_163_p3_temp_21_temp_23__temp = tmp_fu_163_p3_temp_21_temp_23 ;
   tmp_reg_285_temp_22__temp = tmp_reg_285_temp_22 ;
   tmp_107_fu_229_p2__temp = tmp_107_fu_229_p2 ;
   tmp_114_fu_280_p1_temp_18__temp = tmp_114_fu_280_p1_temp_18 ;
   tmp_101_fu_192_p1__temp = tmp_101_fu_192_p1 ;
   tmp_104_fu_216_p3_temp_12_temp_14__temp = tmp_104_fu_216_p3_temp_12_temp_14 ;
   tmp_111_fu_270_p1_temp_15_temp_17__temp = tmp_111_fu_270_p1_temp_15_temp_17 ;
   tmp_105_fu_224_p1__temp = tmp_105_fu_224_p1 ;
   tmp_105_fu_224_p1_temp_9_temp_11__temp = tmp_105_fu_224_p1_temp_9_temp_11 ;
   tmp_104_reg_313_temp_13__temp = tmp_104_reg_313_temp_13 ;
   j_4_fu_181_p2__temp = j_4_fu_181_p2 ;
   reg_154__temp = reg_154 ;
   tmp_96_fu_159_p1_temp_25__temp = tmp_96_fu_159_p1_temp_25 ;
   statemt_addr_30_reg_344_temp_19__temp = statemt_addr_30_reg_344_temp_19 ;
   tmp_102_fu_243_p2__temp = tmp_102_fu_243_p2 ;
   tmp_fu_163_p3_temp_21__temp = tmp_fu_163_p3_temp_21 ;
   tmp_108_fu_235_p1__temp = tmp_108_fu_235_p1 ;
   tmp_101_cast_fu_197_p1__temp = tmp_101_cast_fu_197_p1 ;
   tmp_114_fu_280_p1__temp = tmp_114_fu_280_p1 ;
   grp_fu_143_p2__temp = grp_fu_143_p2 ;
   tmp_101_cast1_fu_240_p1__temp = tmp_101_cast1_fu_240_p1 ;
   j_4_reg_293__temp = j_4_reg_293 ;
   statemt_addr_30_reg_344__temp = statemt_addr_30_reg_344 ;
   statemt_addr_reg_319_temp_10__temp = statemt_addr_reg_319_temp_10 ;
   statemt_addr_29_reg_339__temp = statemt_addr_29_reg_339 ;
   tmp_fu_163_p3__temp = tmp_fu_163_p3 ;
   exitcond_fu_175_p2__temp = exitcond_fu_175_p2 ;
   tmp_104_reg_313__temp = tmp_104_reg_313 ;
   tmp_102_cast_fu_249_p1__temp = tmp_102_cast_fu_249_p1 ;
   tmp_s_fu_187_p2__temp = tmp_s_fu_187_p2 ;
   tmp_103_cast_fu_260_p1__temp = tmp_103_cast_fu_260_p1 ;
   tmp_s_reg_298__temp = tmp_s_reg_298 ;
   tmp_103_fu_254_p2__temp = tmp_103_fu_254_p2 ;
   tmp_97_fu_212_p1_temp_24__temp = tmp_97_fu_212_p1_temp_24 ;
   statemt_addr_reg_319__temp = statemt_addr_reg_319 ;
   statemt_addr_28_reg_324_temp_7__temp = statemt_addr_28_reg_324_temp_7 ;
   tmp_111_fu_270_p1__temp = tmp_111_fu_270_p1 ;
   tmp_100_fu_201_p2__temp = tmp_100_fu_201_p2 ;
   tmp_113_fu_275_p2__temp = tmp_113_fu_275_p2 ;
   tmp_96_fu_159_p1__temp = tmp_96_fu_159_p1 ;
   j_cast1_fu_171_p1__temp = j_cast1_fu_171_p1 ;
   tmp_114_fu_280_p1_temp_18_temp_20__temp = tmp_114_fu_280_p1_temp_18_temp_20 ;
   j_reg_126__temp = j_reg_126 ;
   grp_fu_137_p2__temp = grp_fu_137_p2 ;
   tmp_104_fu_216_p3_temp_12__temp = tmp_104_fu_216_p3_temp_12 ;
   tmp_108_fu_235_p1_temp_6_temp_8__temp = tmp_108_fu_235_p1_temp_6_temp_8 ;
   tmp_reg_285__temp = tmp_reg_285 ;
   statemt_addr_29_reg_339_temp_16__temp = statemt_addr_29_reg_339_temp_16 ;
   tmp_97_fu_212_p1__temp = tmp_97_fu_212_p1 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_111_fu_270_p1_temp_15__temp = tmp_111_fu_270_p1_temp_15 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_100_cast_fu_207_p1__temp = tmp_100_cast_fu_207_p1 ;
   reg_149__temp = reg_149 ;
   tmp_110_fu_265_p2__temp = tmp_110_fu_265_p2 ;
   tmp_108_fu_235_p1_temp_6__temp = tmp_108_fu_235_p1_temp_6 ;

       tmp_reg_285 = ( ( tmp_reg_285 & 60 ) & 63 )  ;
       tmp_104_reg_313 = ( ( tmp_104_reg_313 & 12 ) & 15 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 28 ) & 31 )  ;
       statemt_addr_reg_319 = ( ( statemt_addr_reg_319 & 15 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 29 ) & 31 )  ;
       statemt_addr_28_reg_324 = ( ( statemt_addr_28_reg_324 & 15 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 30 ) & 31 )  ;
       statemt_addr_29_reg_339 = ( ( statemt_addr_29_reg_339 & 15 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 31 ) & 31 )  ;
       statemt_addr_30_reg_344 = ( ( statemt_addr_30_reg_344 & 15 ) & 31 )  ;
       if(1 == ap_CS_fsm_state5)
       {
           j_reg_126 =  j_4_reg_293__temp ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           statemt_address0 =  statemt_addr_29_reg_339__temp + 2;
       }
       if(1 == ap_CS_fsm_state5)
       {
           statemt_address1 =  statemt_addr_30_reg_344__temp + 3;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
           statemt_ce0 =  1;
       }
       if((((1 == ap_CS_fsm_state2) || (1 == ap_CS_fsm_state4)) || (1 == ap_CS_fsm_state3)) || (1 == ap_CS_fsm_state5))
       {
           statemt_ce1 =  1;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))
       {
           statemt_we0 =  1;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state5))
       {
           statemt_we1 =  1;
       }
statemt_d0 = reg_149;
statemt_d1 = reg_154;
//	printf("add0:%d add1:%d\n",statemt_address0,statemt_address1);
	if(statemt_ce0){
          statemt_q0=statemt_ram[statemt_address0];
           if(statemt_we0){
              statemt_ram[statemt_address0]=statemt_d0;
           }
       }

	if(statemt_ce1){
          statemt_q1=statemt_ram[statemt_address1];
           if(statemt_we1){
              statemt_ram[statemt_address1]=statemt_d1;
           }
       }

       goto ap_ST_fsm_state2;
   end:
for(i=0;i<32;i++)
	printf("%d ",statemt_ram[i]);
printf("\n");

	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*n__1=n;
	*statemt_address0__1=statemt_address0;
	*statemt_address1__1=statemt_address1;
	*statemt_ce0__1=statemt_ce0;
	*statemt_ce1__1=statemt_ce1;
	*statemt_d0__1=statemt_d0;
	*statemt_d1__1=statemt_d1;
	*statemt_q0__1=statemt_q0;
	*statemt_q1__1=statemt_q1;
	*statemt_we0__1=statemt_we0;
	*statemt_we1__1=statemt_we1;
	*word_address0__1=word_address0;
	*word_address1__1=word_address1;
	*word_ce0__1=word_ce0;
	*word_ce1__1=word_ce1;
	*word_q0__1=word_q0;
	*word_q1__1=word_q1;
       return;
}
