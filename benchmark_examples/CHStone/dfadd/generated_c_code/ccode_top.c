#include<stdio.h>
#define a_input_DataWidth 64
#define a_input_AddressRange 24
#define a_input_AddressWidth 5
#define a_input_DWIDTH 64
#define a_input_AWIDTH 5
#define a_input_MEM_SIZE 24
#define b_input_DataWidth 64
#define b_input_AddressRange 24
#define b_input_AddressWidth 5
#define b_input_DWIDTH 64
#define b_input_AWIDTH 5
#define b_input_MEM_SIZE 24
#define z_output_DataWidth 64
#define z_output_AddressRange 24
#define z_output_AddressWidth 5
#define z_output_DWIDTH 64
#define z_output_AWIDTH 5
#define z_output_MEM_SIZE 24

void addFloat64Sigs(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int dummy);
void top(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
   long long int ap_CS_fsm_state1=1;
   long long int ap_CS_fsm_state2=1;
   long long int ap_CS_fsm_state3=1;
   long long int ap_CS_fsm_state4=1;
   long long int ap_CS_fsm_state5=1;
   unsigned long long int a_input_address0=0;
   unsigned long long int a_input_address0__temp=0;
   unsigned long long int a_input_ce0=0;
   unsigned long long int a_input_ce0__temp=0;
   unsigned long long int a_input_q0=0;
   unsigned long long int a_input_q0__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=1;
   unsigned long long int b_input_address0=0;
   unsigned long long int b_input_address0__temp=0;
   unsigned long long int b_input_ce0=0;
   unsigned long long int b_input_ce0__temp=0;
   unsigned long long int b_input_q0=0;
   unsigned long long int b_input_q0__temp=0;
   unsigned long long int exitcond_fu_105_p2=0;
   unsigned long long int exitcond_fu_105_p2__temp=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_done=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_done__temp=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_idle=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_idle__temp=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_ready=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_ready__temp=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_return=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_return__temp=0;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_start=1;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_start__temp=1;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_start_reg=1;
   unsigned long long int grp_addFloat64Sigs_fu_96_ap_start_reg__temp=1;
   unsigned long long int i_1_fu_111_p2=0;
   unsigned long long int i_1_fu_111_p2__temp=0;
   unsigned long long int i_1_reg_154=0;
   unsigned long long int i_1_reg_154__temp=0;
   unsigned long long int i_reg_73=0;
   unsigned long long int i_reg_73__temp=0;
   unsigned long long int main_result_1_fu_145_p2=0;
   unsigned long long int main_result_1_fu_145_p2__temp=0;
   unsigned long long int main_result_reg_84=0;
   unsigned long long int main_result_reg_84__temp=0;
   unsigned long long int tmp_1_fu_135_p2=0;
   unsigned long long int tmp_1_fu_135_p2__temp=0;
   unsigned long long int tmp_2_cast_fu_141_p1=0;
   unsigned long long int tmp_2_cast_fu_141_p1__temp=0;
   unsigned long long int tmp_2_reg_184=0;
   unsigned long long int tmp_2_reg_184__temp=0;
   unsigned long long int tmp_fu_117_p1=0;
   unsigned long long int tmp_fu_117_p1__temp=0;
   unsigned long long int tmp_reg_159=0;
   unsigned long long int tmp_reg_159__temp=0;
   unsigned long long int x1_reg_174=0;
   unsigned long long int x1_reg_174__temp=0;
   unsigned long long int x2_reg_179=0;
   unsigned long long int x2_reg_179__temp=0;
   unsigned long long int z_output_address0=0;
   unsigned long long int z_output_address0__temp=0;
   unsigned long long int z_output_ce0=0;
   unsigned long long int z_output_ce0__temp=0;
   unsigned long long int z_output_q0=0;
   unsigned long long int z_output_q0__temp=0;
	ap_done=0;
	ap_start=1;
   unsigned long long int a_input_rom[a_input_MEM_SIZE]={
9221120237041090560,9218868437227405312,4611686018427387904,4611686018427387904,4607182418800017408,4607182418800017408,0,4609434218613702656,9221120237041090560,9218868437227405312,0,4609434218613702656,18444492273895866368,18442240474082181120,13835058055282163712,13835058055282163712,13830554455654793216,13830554455654793216,9223372036854775808,13832806255468478464,18444492273895866368,18442240474082181120,9223372036854775808,13832806255468478464};
   unsigned long long int b_input_rom[b_input_MEM_SIZE]={
4607182418800017408,4607182418800017408,0,4609434218613702656,9221120237041090560,9218868437227405312,4611686018427387904,4611686018427387904,9218868437227405312,9218868437227405312,0,4607182418800017408,13830554455654793216,13830554455654793216,9223372036854775808,13832806255468478464,18444492273895866368,18442240474082181120,13835058055282163712,13835058055282163712,18442240474082181120,18442240474082181120,9223372036854775808,13830554455654793216};
   unsigned long long int z_output_rom[z_output_MEM_SIZE]={
9221120237041090560,9218868437227405312,4611686018427387904,4615063718147915776,9221120237041090560,9218868437227405312,4611686018427387904,4615063718147915776,9221120237041090560,9218868437227405312,0,4612811918334230528,18444492273895866368,18442240474082181120,13835058055282163712,13838435755002691584,18444492273895866368,18442240474082181120,13835058055282163712,13838435755002691584,18444492273895866368,18442240474082181120,9223372036854775808,13836183955189006336};

   ap_ST_fsm_state1:

	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   tmp_2_cast_fu_141_p1__temp = tmp_2_cast_fu_141_p1 ;
   grp_addFloat64Sigs_fu_96_ap_idle__temp = grp_addFloat64Sigs_fu_96_ap_idle ;
   a_input_q0__temp = a_input_q0 ;
   z_output_q0__temp = z_output_q0 ;
   i_1_reg_154__temp = i_1_reg_154 ;
   tmp_fu_117_p1__temp = tmp_fu_117_p1 ;
   x1_reg_174__temp = x1_reg_174 ;
   z_output_address0__temp = z_output_address0 ;
   i_reg_73__temp = i_reg_73 ;
   z_output_ce0__temp = z_output_ce0 ;
   grp_addFloat64Sigs_fu_96_ap_start_reg__temp = grp_addFloat64Sigs_fu_96_ap_start_reg ;
   grp_addFloat64Sigs_fu_96_ap_return__temp = grp_addFloat64Sigs_fu_96_ap_return ;
   b_input_q0__temp = b_input_q0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   main_result_reg_84__temp = main_result_reg_84 ;
   a_input_ce0__temp = a_input_ce0 ;
   main_result_1_fu_145_p2__temp = main_result_1_fu_145_p2 ;
   tmp_reg_159__temp = tmp_reg_159 ;
   tmp_2_reg_184__temp = tmp_2_reg_184 ;
   b_input_address0__temp = b_input_address0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_179__temp = x2_reg_179 ;
   tmp_1_fu_135_p2__temp = tmp_1_fu_135_p2 ;
   a_input_address0__temp = a_input_address0 ;
   grp_addFloat64Sigs_fu_96_ap_ready__temp = grp_addFloat64Sigs_fu_96_ap_ready ;
   i_1_fu_111_p2__temp = i_1_fu_111_p2 ;
   grp_addFloat64Sigs_fu_96_ap_done__temp = grp_addFloat64Sigs_fu_96_ap_done ;
   grp_addFloat64Sigs_fu_96_ap_start__temp = grp_addFloat64Sigs_fu_96_ap_start ;
   exitcond_fu_105_p2__temp = exitcond_fu_105_p2 ;

       grp_addFloat64Sigs_fu_96_ap_start_reg = 0 ;
       tmp_reg_159 = tmp_reg_159 & 31 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_reg_73 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           main_result_reg_84 =  0;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
          a_input_address0 =  i_reg_73__temp ;
          b_input_address0 =  i_reg_73__temp ;
          z_output_address0 =  tmp_reg_159__temp ;
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_reg_73 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               main_result_reg_84 =  0;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
          a_input_address0 =  i_reg_73__temp ;
          b_input_address0 =  i_reg_73__temp ;
          z_output_address0 =  tmp_reg_159__temp ;
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   tmp_2_cast_fu_141_p1__temp = tmp_2_cast_fu_141_p1 ;
   grp_addFloat64Sigs_fu_96_ap_idle__temp = grp_addFloat64Sigs_fu_96_ap_idle ;
   a_input_q0__temp = a_input_q0 ;
   z_output_q0__temp = z_output_q0 ;
   i_1_reg_154__temp = i_1_reg_154 ;
   tmp_fu_117_p1__temp = tmp_fu_117_p1 ;
   x1_reg_174__temp = x1_reg_174 ;
   z_output_address0__temp = z_output_address0 ;
   i_reg_73__temp = i_reg_73 ;
   z_output_ce0__temp = z_output_ce0 ;
   grp_addFloat64Sigs_fu_96_ap_start_reg__temp = grp_addFloat64Sigs_fu_96_ap_start_reg ;
   grp_addFloat64Sigs_fu_96_ap_return__temp = grp_addFloat64Sigs_fu_96_ap_return ;
   b_input_q0__temp = b_input_q0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   main_result_reg_84__temp = main_result_reg_84 ;
   a_input_ce0__temp = a_input_ce0 ;
   main_result_1_fu_145_p2__temp = main_result_1_fu_145_p2 ;
   tmp_reg_159__temp = tmp_reg_159 ;
   tmp_2_reg_184__temp = tmp_2_reg_184 ;
   b_input_address0__temp = b_input_address0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_179__temp = x2_reg_179 ;
   tmp_1_fu_135_p2__temp = tmp_1_fu_135_p2 ;
   a_input_address0__temp = a_input_address0 ;
   grp_addFloat64Sigs_fu_96_ap_ready__temp = grp_addFloat64Sigs_fu_96_ap_ready ;
   i_1_fu_111_p2__temp = i_1_fu_111_p2 ;
   grp_addFloat64Sigs_fu_96_ap_done__temp = grp_addFloat64Sigs_fu_96_ap_done ;
   grp_addFloat64Sigs_fu_96_ap_start__temp = grp_addFloat64Sigs_fu_96_ap_start ;
   exitcond_fu_105_p2__temp = exitcond_fu_105_p2 ;

       grp_addFloat64Sigs_fu_96_ap_start_reg = 0 ;
       tmp_reg_159 = tmp_reg_159 & 31 ;
       a_input_ce0 = 1;
       b_input_ce0 = 1;
       z_output_ce0 = 0;
               exitcond_fu_105_p2 =   ( i_reg_73__temp  == 24 ? 1 :  0 ) ;
   if(((exitcond_fu_105_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if(1 == ap_CS_fsm_state2)
       {
           i_1_reg_154 =   ( i_reg_73__temp  + 1 ) ;
       }
       if((exitcond_fu_105_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           tmp_reg_159 =   (  ( tmp_reg_159__temp  & 18446744073709551584 )  |  ( i_reg_73__temp  & 31 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           a_input_ce0 =  1;
       }
       if((exitcond_fu_105_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
			if(ap_done==1){
          ap_return = main_result_reg_84;
			}
       }
       if((exitcond_fu_105_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           b_input_ce0 =  1;
       }
          a_input_address0 =  i_reg_73__temp ;
          b_input_address0 =  i_reg_73__temp ;
          z_output_address0 =  tmp_reg_159__temp ;
       if(a_input_ce0){
          a_input_q0=a_input_rom[a_input_address0];
       }
       if(b_input_ce0){
          b_input_q0=b_input_rom[b_input_address0];
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((exitcond_fu_105_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if(1 == ap_CS_fsm_state2)
       {       printf("case %d\n", i_1_reg_154);
               i_1_reg_154 =   ( i_reg_73__temp  + 1 ) ;
       }
       if((exitcond_fu_105_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               tmp_reg_159 =   (  ( tmp_reg_159__temp  & 18446744073709551584 )  |  ( i_reg_73__temp  & 31 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
               a_input_ce0 =  1;
       }
       if((exitcond_fu_105_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done =  1;
			if(ap_done==1){
          ap_return = main_result_reg_84;
			}
       }
       if((exitcond_fu_105_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               b_input_ce0 =  1;
       }
          a_input_address0 =  i_reg_73__temp ;
          b_input_address0 =  i_reg_73__temp ;
          z_output_address0 =  tmp_reg_159__temp ;
       if(a_input_ce0){
          a_input_q0=a_input_rom[a_input_address0];
       }
       if(b_input_ce0){
          b_input_q0=b_input_rom[b_input_address0];
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   tmp_2_cast_fu_141_p1__temp = tmp_2_cast_fu_141_p1 ;
   grp_addFloat64Sigs_fu_96_ap_idle__temp = grp_addFloat64Sigs_fu_96_ap_idle ;
   a_input_q0__temp = a_input_q0 ;
   z_output_q0__temp = z_output_q0 ;
   i_1_reg_154__temp = i_1_reg_154 ;
   tmp_fu_117_p1__temp = tmp_fu_117_p1 ;
   x1_reg_174__temp = x1_reg_174 ;
   z_output_address0__temp = z_output_address0 ;
   i_reg_73__temp = i_reg_73 ;
   z_output_ce0__temp = z_output_ce0 ;
   grp_addFloat64Sigs_fu_96_ap_start_reg__temp = grp_addFloat64Sigs_fu_96_ap_start_reg ;
   grp_addFloat64Sigs_fu_96_ap_return__temp = grp_addFloat64Sigs_fu_96_ap_return ;
   b_input_q0__temp = b_input_q0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   main_result_reg_84__temp = main_result_reg_84 ;
   a_input_ce0__temp = a_input_ce0 ;
   main_result_1_fu_145_p2__temp = main_result_1_fu_145_p2 ;
   tmp_reg_159__temp = tmp_reg_159 ;
   tmp_2_reg_184__temp = tmp_2_reg_184 ;
   b_input_address0__temp = b_input_address0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_179__temp = x2_reg_179 ;
   tmp_1_fu_135_p2__temp = tmp_1_fu_135_p2 ;
   a_input_address0__temp = a_input_address0 ;
   grp_addFloat64Sigs_fu_96_ap_ready__temp = grp_addFloat64Sigs_fu_96_ap_ready ;
   i_1_fu_111_p2__temp = i_1_fu_111_p2 ;
   grp_addFloat64Sigs_fu_96_ap_done__temp = grp_addFloat64Sigs_fu_96_ap_done ;
   grp_addFloat64Sigs_fu_96_ap_start__temp = grp_addFloat64Sigs_fu_96_ap_start ;
   exitcond_fu_105_p2__temp = exitcond_fu_105_p2 ;

       grp_addFloat64Sigs_fu_96_ap_start_reg = 0 ;
       tmp_reg_159 = tmp_reg_159 & 31 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
       if(1 == ap_CS_fsm_state3)
       {
           x2_reg_179 =  b_input_q0__temp ;
           x1_reg_174 =  a_input_q0__temp ;
           tmp_2_reg_184 =   (  ( a_input_q0__temp  >> 63 )  & 1 ) ;
       }
          a_input_address0 =  i_reg_73__temp ;
          b_input_address0 =  i_reg_73__temp ;
          z_output_address0 =  tmp_reg_159__temp ;
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
   tmp_2_cast_fu_141_p1__temp = tmp_2_cast_fu_141_p1 ;
   grp_addFloat64Sigs_fu_96_ap_idle__temp = grp_addFloat64Sigs_fu_96_ap_idle ;
   a_input_q0__temp = a_input_q0 ;
   z_output_q0__temp = z_output_q0 ;
   i_1_reg_154__temp = i_1_reg_154 ;
   tmp_fu_117_p1__temp = tmp_fu_117_p1 ;
   x1_reg_174__temp = x1_reg_174 ;
   z_output_address0__temp = z_output_address0 ;
   i_reg_73__temp = i_reg_73 ;
   z_output_ce0__temp = z_output_ce0 ;
   grp_addFloat64Sigs_fu_96_ap_start_reg__temp = grp_addFloat64Sigs_fu_96_ap_start_reg ;
   grp_addFloat64Sigs_fu_96_ap_return__temp = grp_addFloat64Sigs_fu_96_ap_return ;
   b_input_q0__temp = b_input_q0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   main_result_reg_84__temp = main_result_reg_84 ;
   a_input_ce0__temp = a_input_ce0 ;
   main_result_1_fu_145_p2__temp = main_result_1_fu_145_p2 ;
   tmp_reg_159__temp = tmp_reg_159 ;
   tmp_2_reg_184__temp = tmp_2_reg_184 ;
   b_input_address0__temp = b_input_address0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_179__temp = x2_reg_179 ;
   tmp_1_fu_135_p2__temp = tmp_1_fu_135_p2 ;
   a_input_address0__temp = a_input_address0 ;
   grp_addFloat64Sigs_fu_96_ap_ready__temp = grp_addFloat64Sigs_fu_96_ap_ready ;
   i_1_fu_111_p2__temp = i_1_fu_111_p2 ;
   grp_addFloat64Sigs_fu_96_ap_done__temp = grp_addFloat64Sigs_fu_96_ap_done ;
   grp_addFloat64Sigs_fu_96_ap_start__temp = grp_addFloat64Sigs_fu_96_ap_start ;
   exitcond_fu_105_p2__temp = exitcond_fu_105_p2 ;

       grp_addFloat64Sigs_fu_96_ap_start_reg = 0 ;
       tmp_reg_159 = tmp_reg_159 & 31 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 1;
       if(1 == ap_CS_fsm_state4)
       {
           grp_addFloat64Sigs_fu_96_ap_start_reg =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           z_output_ce0 =  1;
       }
          a_input_address0 =  i_reg_73__temp ;
          b_input_address0 =  i_reg_73__temp ;
          z_output_address0 =  tmp_reg_159__temp ;
       if(z_output_ce0){
          z_output_q0=z_output_rom[z_output_address0];
       }
if (grp_addFloat64Sigs_fu_96_ap_start_reg==1){
grp_addFloat64Sigs_fu_96_ap_start=1;
addFloat64Sigs(&x1_reg_174,&ap_clk,&grp_addFloat64Sigs_fu_96_ap_done,&grp_addFloat64Sigs_fu_96_ap_idle,&grp_addFloat64Sigs_fu_96_ap_ready,&grp_addFloat64Sigs_fu_96_ap_return,&ap_rst,&grp_addFloat64Sigs_fu_96_ap_start,&x2_reg_179,&tmp_2_reg_184,dummy);
grp_addFloat64Sigs_fu_96_ap_done=1;
}
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
   tmp_2_cast_fu_141_p1__temp = tmp_2_cast_fu_141_p1 ;
   grp_addFloat64Sigs_fu_96_ap_idle__temp = grp_addFloat64Sigs_fu_96_ap_idle ;
   a_input_q0__temp = a_input_q0 ;
   z_output_q0__temp = z_output_q0 ;
   i_1_reg_154__temp = i_1_reg_154 ;
   tmp_fu_117_p1__temp = tmp_fu_117_p1 ;
   x1_reg_174__temp = x1_reg_174 ;
   z_output_address0__temp = z_output_address0 ;
   i_reg_73__temp = i_reg_73 ;
   z_output_ce0__temp = z_output_ce0 ;
   grp_addFloat64Sigs_fu_96_ap_start_reg__temp = grp_addFloat64Sigs_fu_96_ap_start_reg ;
   grp_addFloat64Sigs_fu_96_ap_return__temp = grp_addFloat64Sigs_fu_96_ap_return ;
   b_input_q0__temp = b_input_q0 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   main_result_reg_84__temp = main_result_reg_84 ;
   a_input_ce0__temp = a_input_ce0 ;
   main_result_1_fu_145_p2__temp = main_result_1_fu_145_p2 ;
   tmp_reg_159__temp = tmp_reg_159 ;
   tmp_2_reg_184__temp = tmp_2_reg_184 ;
   b_input_address0__temp = b_input_address0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_179__temp = x2_reg_179 ;
   tmp_1_fu_135_p2__temp = tmp_1_fu_135_p2 ;
   a_input_address0__temp = a_input_address0 ;
   grp_addFloat64Sigs_fu_96_ap_ready__temp = grp_addFloat64Sigs_fu_96_ap_ready ;
   i_1_fu_111_p2__temp = i_1_fu_111_p2 ;
   grp_addFloat64Sigs_fu_96_ap_done__temp = grp_addFloat64Sigs_fu_96_ap_done ;
   grp_addFloat64Sigs_fu_96_ap_start__temp = grp_addFloat64Sigs_fu_96_ap_start ;
   exitcond_fu_105_p2__temp = exitcond_fu_105_p2 ;

       grp_addFloat64Sigs_fu_96_ap_start_reg = 0 ;
       tmp_reg_159 = tmp_reg_159 & 31 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
   if(((grp_addFloat64Sigs_fu_96_ap_done == 1) && (1 == ap_CS_fsm_state5)) == 1){
       if((grp_addFloat64Sigs_fu_96_ap_done == 1) && (1 == ap_CS_fsm_state5))
       {
           i_reg_73 =  i_1_reg_154__temp ;
       }
       if((grp_addFloat64Sigs_fu_96_ap_done == 1) && (1 == ap_CS_fsm_state5))
       {
           main_result_reg_84 =   ( main_result_reg_84__temp  +  ( grp_addFloat64Sigs_fu_96_ap_return__temp  != z_output_q0__temp  ? 1 : 0 )  ) ;
		   printf(" ------------------------- > %llu : %llu\n",grp_addFloat64Sigs_fu_96_ap_return__temp,z_output_q0__temp);
		   //printf("main_result_reg_84:%d\n",main_result_reg_84);
       }
          a_input_address0 =  i_reg_73__temp ;
          b_input_address0 =  i_reg_73__temp ;
          z_output_address0 =  tmp_reg_159__temp ;
       goto ap_ST_fsm_state2;
   }
   if(((grp_addFloat64Sigs_fu_96_ap_done == 1) && (1 == ap_CS_fsm_state5)) == 0){
       if((grp_addFloat64Sigs_fu_96_ap_done == 1) && (1 == ap_CS_fsm_state5))
       {
               i_reg_73 =  i_1_reg_154__temp ;
       }
       if((grp_addFloat64Sigs_fu_96_ap_done == 1) && (1 == ap_CS_fsm_state5))
       {
               main_result_reg_84 =   ( main_result_reg_84__temp  +  ( grp_addFloat64Sigs_fu_96_ap_return__temp  != z_output_q0__temp  ? 1 : 0 )  ) ;			   
       }
	   
          a_input_address0 =  i_reg_73__temp ;
          b_input_address0 =  i_reg_73__temp ;
          z_output_address0 =  tmp_reg_159__temp ;
       goto ap_ST_fsm_state5;
   }
   end:
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_return__1=ap_return;
	printf("main result %d\n",ap_return);
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
       return;
}
