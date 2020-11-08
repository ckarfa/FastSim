#include<stdio.h>
#define a_input_DataWidth 64
#define a_input_AddressRange 20
#define a_input_AddressWidth 5
#define a_input_DWIDTH 64
#define a_input_AWIDTH 5
#define a_input_MEM_SIZE 20
#define b_input_DataWidth 64
#define b_input_AddressRange 20
#define b_input_AddressWidth 5
#define b_input_DWIDTH 64
#define b_input_AWIDTH 5
#define b_input_MEM_SIZE 20
#define z_output_DataWidth 64
#define z_output_AddressRange 20
#define z_output_AddressWidth 5
#define z_output_DWIDTH 64
#define z_output_AWIDTH 5
#define z_output_MEM_SIZE 20
void float64_mul(long long int * ,int * ,int * ,int * ,int * ,long long int * ,int * ,int * ,long long int * ,int* dummy);
void top(int *ap_clk__1,int *ap_done__1,int *ap_idle__1,int *ap_ready__1,int *ap_return__1,int *ap_rst__1,int *ap_start__1,int* dummy){
int min_clock=1000000;
int max_clock=0;
int clock=*dummy;
int total_clock=0;
int ap_clk=*ap_clk__1;
int ap_done=*ap_done__1;
int ap_idle=*ap_idle__1;
int ap_ready=*ap_ready__1;
int ap_return=*ap_return__1;
int ap_rst=*ap_rst__1;
int ap_start=*ap_start__1;
   int a_input_address0=0;
   int a_input_address0__temp=0;
   int a_input_ce0=0;
   int a_input_ce0__temp=0;
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
   int b_input_address0=0;
   int b_input_address0__temp=0;
   int b_input_ce0=0;
   int b_input_ce0__temp=0;
   int exitcond_fu_104_p2=0;
   int exitcond_fu_104_p2__temp=0;
   int grp_float64_mul_fu_94_ap_done=0;
   int grp_float64_mul_fu_94_ap_done__temp=0;
   int grp_float64_mul_fu_94_ap_idle=0;
   int grp_float64_mul_fu_94_ap_idle__temp=0;
   int grp_float64_mul_fu_94_ap_ready=0;
   int grp_float64_mul_fu_94_ap_ready__temp=0;
   int grp_float64_mul_fu_94_ap_start=0;
   int grp_float64_mul_fu_94_ap_start__temp=0;
   int grp_float64_mul_fu_94_ap_start_reg=0;
   int grp_float64_mul_fu_94_ap_start_reg__temp=0;
   int i_1_fu_110_p2=0;
   int i_1_fu_110_p2__temp=0;
   int i_1_reg_145=0;
   int i_1_reg_145__temp=0;
   int i_reg_71=0;
   int i_reg_71__temp=0;
   int main_result_1_fu_136_p2=0;
   int main_result_1_fu_136_p2__temp=0;
   int main_result_reg_82=0;
   int main_result_reg_82__temp=0;
   int tmp_1_fu_126_p2=0;
   int tmp_1_fu_126_p2__temp=0;
   int tmp_2_cast_fu_132_p1=0;
   int tmp_2_cast_fu_132_p1__temp=0;
   int tmp_fu_116_p1_temp11=0;
   int tmp_fu_116_p1_temp111=0;
   int tmp_fu_116_p1_temp111__temp=0;
   int tmp_fu_116_p1_temp11__temp=0;
   int tmp_reg_150_temp111=0;
   int tmp_reg_150_temp111__temp=0;
   int z_output_address0=0;
   int z_output_address0__temp=0;
   int z_output_ce0=0;
   int z_output_ce0__temp=0;
   unsigned long long int a_input_q0=0;
   unsigned long long int a_input_q0__temp=0;
   unsigned long long int b_input_q0=0;
   unsigned long long int b_input_q0__temp=0;
   long long int grp_float64_mul_fu_94_ap_return=0;
   long long int grp_float64_mul_fu_94_ap_return__temp=0;
   long long int tmp_fu_116_p1=0;
   long long int tmp_fu_116_p1__temp=0;
   long long int tmp_reg_150=0;
   long long int tmp_reg_150__temp=0;
   unsigned long long int x1_reg_165=0;
   unsigned long long int x1_reg_165__temp=0;
   unsigned long long int x2_reg_170=0;
   unsigned long long int x2_reg_170__temp=0;
   long long int z_output_q0=0;
   long long int z_output_q0__temp=0;
	ap_done=0;
	ap_start=1;
   unsigned long long int a_input_rom[a_input_MEM_SIZE]={
9218868437227405312,9223090561878065152,9218868437227405312,9218868437227405312,4607182418800017408,0,4607182418800017408,0,9223372036854775808,4607182418800017408,4607182418800017408,4611686018427387904,4598175219545276416,13835058055282163712,13821547256400052224,4611686018427387904,13821547256400052224,13835058055282163712,4598175219545276416,0};
   unsigned long long int b_input_rom[b_input_MEM_SIZE]={
18446744073709551615,18442240474082181120,0,4607182418800017408,18446462598732840960,9218868437227405312,9218868437227405312,4607182418800017408,4607182418800017408,0,9223372036854775808,4598175219545276416,4611686018427387904,13821547256400052224,13835058055282163712,13821547256400052224,4611686018427387904,4598175219545276416,13835058055282163712,0};
   unsigned long long int z_output_rom[z_output_MEM_SIZE]={
18446744073709551615,9223090561878065152,9223372036854775807,9218868437227405312,18446462598732840960,9223372036854775807,9218868437227405312,0,9223372036854775808,0,9223372036854775808,4602678819172646912,4602678819172646912,4602678819172646912,4602678819172646912,13826050856027422720,13826050856027422720,13826050856027422720,13826050856027422720,0};

   ap_ST_fsm_state1:
	clock=clock+1;
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   z_output_ce0__temp = z_output_ce0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   i_1_fu_110_p2__temp = i_1_fu_110_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_reg_71__temp = i_reg_71 ;
   z_output_address0__temp = z_output_address0 ;
   main_result_1_fu_136_p2__temp = main_result_1_fu_136_p2 ;
   i_1_reg_145__temp = i_1_reg_145 ;
   grp_float64_mul_fu_94_ap_start__temp = grp_float64_mul_fu_94_ap_start ;
   b_input_ce0__temp = b_input_ce0 ;
   grp_float64_mul_fu_94_ap_ready__temp = grp_float64_mul_fu_94_ap_ready ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_fu_116_p1_temp11__temp = tmp_fu_116_p1_temp11 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   b_input_address0__temp = b_input_address0 ;
   grp_float64_mul_fu_94_ap_start_reg__temp = grp_float64_mul_fu_94_ap_start_reg ;
   exitcond_fu_104_p2__temp = exitcond_fu_104_p2 ;
   main_result_reg_82__temp = main_result_reg_82 ;
   grp_float64_mul_fu_94_ap_done__temp = grp_float64_mul_fu_94_ap_done ;
   a_input_address0__temp = a_input_address0 ;
   tmp_reg_150_temp111__temp = tmp_reg_150_temp111 ;
   tmp_fu_116_p1_temp111__temp = tmp_fu_116_p1_temp111 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_126_p2__temp = tmp_1_fu_126_p2 ;
   a_input_ce0__temp = a_input_ce0 ;
   tmp_2_cast_fu_132_p1__temp = tmp_2_cast_fu_132_p1 ;
   grp_float64_mul_fu_94_ap_idle__temp = grp_float64_mul_fu_94_ap_idle ;
   tmp_reg_150__temp = tmp_reg_150 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_q0__temp = b_input_q0 ;
   tmp_fu_116_p1__temp = tmp_fu_116_p1 ;
   z_output_q0__temp = z_output_q0 ;
   x2_reg_170__temp = x2_reg_170 ;
   x1_reg_165__temp = x1_reg_165 ;
   grp_float64_mul_fu_94_ap_return__temp = grp_float64_mul_fu_94_ap_return ;

       grp_float64_mul_fu_94_ap_start_reg = 0 ;
       tmp_reg_150 = tmp_reg_150 & 31 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_reg_71 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           main_result_reg_82 =  0;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
          a_input_address0 =  i_reg_71__temp ;
          b_input_address0 =  i_reg_71__temp ;
          z_output_address0 =  tmp_reg_150__temp ;
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_reg_71 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               main_result_reg_82 =  0;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
          a_input_address0 =  i_reg_71__temp ;
          b_input_address0 =  i_reg_71__temp ;
          z_output_address0 =  tmp_reg_150__temp ;
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   z_output_ce0__temp = z_output_ce0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   i_1_fu_110_p2__temp = i_1_fu_110_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_reg_71__temp = i_reg_71 ;
   z_output_address0__temp = z_output_address0 ;
   main_result_1_fu_136_p2__temp = main_result_1_fu_136_p2 ;
   i_1_reg_145__temp = i_1_reg_145 ;
   grp_float64_mul_fu_94_ap_start__temp = grp_float64_mul_fu_94_ap_start ;
   b_input_ce0__temp = b_input_ce0 ;
   grp_float64_mul_fu_94_ap_ready__temp = grp_float64_mul_fu_94_ap_ready ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_fu_116_p1_temp11__temp = tmp_fu_116_p1_temp11 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   b_input_address0__temp = b_input_address0 ;
   grp_float64_mul_fu_94_ap_start_reg__temp = grp_float64_mul_fu_94_ap_start_reg ;
   exitcond_fu_104_p2__temp = exitcond_fu_104_p2 ;
   main_result_reg_82__temp = main_result_reg_82 ;
   grp_float64_mul_fu_94_ap_done__temp = grp_float64_mul_fu_94_ap_done ;
   a_input_address0__temp = a_input_address0 ;
   tmp_reg_150_temp111__temp = tmp_reg_150_temp111 ;
   tmp_fu_116_p1_temp111__temp = tmp_fu_116_p1_temp111 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_126_p2__temp = tmp_1_fu_126_p2 ;
   a_input_ce0__temp = a_input_ce0 ;
   tmp_2_cast_fu_132_p1__temp = tmp_2_cast_fu_132_p1 ;
   grp_float64_mul_fu_94_ap_idle__temp = grp_float64_mul_fu_94_ap_idle ;
   tmp_reg_150__temp = tmp_reg_150 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_q0__temp = b_input_q0 ;
   tmp_fu_116_p1__temp = tmp_fu_116_p1 ;
   z_output_q0__temp = z_output_q0 ;
   x2_reg_170__temp = x2_reg_170 ;
   x1_reg_165__temp = x1_reg_165 ;
   grp_float64_mul_fu_94_ap_return__temp = grp_float64_mul_fu_94_ap_return ;

       grp_float64_mul_fu_94_ap_start_reg = 0 ;
       tmp_reg_150 = tmp_reg_150 & 31 ;
       a_input_ce0 = 1;
       b_input_ce0 = 1;
       z_output_ce0 = 0;
	   if(i_reg_71__temp+1!=21)
	   printf("Test Case: %d/20 \t",i_reg_71__temp+1);               
	
               exitcond_fu_104_p2 =   ( i_reg_71__temp  == 20 ? 1 :  0 ) ;
   if(((exitcond_fu_104_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if(1 == ap_CS_fsm_state2)
       {
           i_1_reg_145 =   ( i_reg_71__temp  + 1 ) ;
	   //printf("case no %d\n",i_1_reg_145);
       }
       if((exitcond_fu_104_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           tmp_reg_150 =   (  ( tmp_reg_150__temp  & 18446744073709551584 )  |  ( i_reg_71__temp  & 31 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           a_input_ce0 =  1;
       }
       if((exitcond_fu_104_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
			if(ap_done==1){
          ap_return =  main_result_reg_82__temp ;
			}
       }
       if((exitcond_fu_104_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           b_input_ce0 =  1;
       }
          a_input_address0 =  i_reg_71__temp ;
          b_input_address0 =  i_reg_71__temp ;
          z_output_address0 =  tmp_reg_150__temp ;
       if(a_input_ce0){
          a_input_q0=a_input_rom[a_input_address0];
	  //printf("a=%llu\n",a_input_q0);
       }
       if(b_input_ce0){
          b_input_q0=b_input_rom[b_input_address0];
	   //printf("b=%llu\n",b_input_q0);
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((exitcond_fu_104_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if(1 == ap_CS_fsm_state2)
       {	//printf("case no %d\n",i_1_reg_145);
               i_1_reg_145 =   ( i_reg_71__temp  + 1 ) ;
		//printf("case no %d\n",i_1_reg_145);
       }
       if((exitcond_fu_104_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               tmp_reg_150 =   (  ( tmp_reg_150__temp  & 18446744073709551584 )  |  ( i_reg_71__temp  & 31 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
               a_input_ce0 =  1;
       }
       if((exitcond_fu_104_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done =  1;
			if(ap_done==1){
          ap_return =  main_result_reg_82__temp ;
			}
       }
       if((exitcond_fu_104_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               b_input_ce0 =  1;
       }
          a_input_address0 =  i_reg_71__temp ;
          b_input_address0 =  i_reg_71__temp ;
          z_output_address0 =  tmp_reg_150__temp ;
       if(a_input_ce0){
          a_input_q0=a_input_rom[a_input_address0];
	  //printf("a=%llu\n",a_input_q0);
       }
       if(b_input_ce0){
          b_input_q0=b_input_rom[b_input_address0];
	  //printf("b=%llu\n",b_input_q0);
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   z_output_ce0__temp = z_output_ce0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   i_1_fu_110_p2__temp = i_1_fu_110_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_reg_71__temp = i_reg_71 ;
   z_output_address0__temp = z_output_address0 ;
   main_result_1_fu_136_p2__temp = main_result_1_fu_136_p2 ;
   i_1_reg_145__temp = i_1_reg_145 ;
   grp_float64_mul_fu_94_ap_start__temp = grp_float64_mul_fu_94_ap_start ;
   b_input_ce0__temp = b_input_ce0 ;
   grp_float64_mul_fu_94_ap_ready__temp = grp_float64_mul_fu_94_ap_ready ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_fu_116_p1_temp11__temp = tmp_fu_116_p1_temp11 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   b_input_address0__temp = b_input_address0 ;
   grp_float64_mul_fu_94_ap_start_reg__temp = grp_float64_mul_fu_94_ap_start_reg ;
   exitcond_fu_104_p2__temp = exitcond_fu_104_p2 ;
   main_result_reg_82__temp = main_result_reg_82 ;
   grp_float64_mul_fu_94_ap_done__temp = grp_float64_mul_fu_94_ap_done ;
   a_input_address0__temp = a_input_address0 ;
   tmp_reg_150_temp111__temp = tmp_reg_150_temp111 ;
   tmp_fu_116_p1_temp111__temp = tmp_fu_116_p1_temp111 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_126_p2__temp = tmp_1_fu_126_p2 ;
   a_input_ce0__temp = a_input_ce0 ;
   tmp_2_cast_fu_132_p1__temp = tmp_2_cast_fu_132_p1 ;
   grp_float64_mul_fu_94_ap_idle__temp = grp_float64_mul_fu_94_ap_idle ;
   tmp_reg_150__temp = tmp_reg_150 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_q0__temp = b_input_q0 ;
   tmp_fu_116_p1__temp = tmp_fu_116_p1 ;
   z_output_q0__temp = z_output_q0 ;
   x2_reg_170__temp = x2_reg_170 ;
   x1_reg_165__temp = x1_reg_165 ;
   grp_float64_mul_fu_94_ap_return__temp = grp_float64_mul_fu_94_ap_return ;

       grp_float64_mul_fu_94_ap_start_reg = 0 ;
       tmp_reg_150 = tmp_reg_150 & 31 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
       if(1 == ap_CS_fsm_state3)
       {
           x2_reg_170 =  b_input_q0__temp ;
           x1_reg_165 =  a_input_q0__temp ;
       }
          a_input_address0 =  i_reg_71__temp ;
          b_input_address0 =  i_reg_71__temp ;
          z_output_address0 =  tmp_reg_150__temp ;
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
   z_output_ce0__temp = z_output_ce0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   i_1_fu_110_p2__temp = i_1_fu_110_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_reg_71__temp = i_reg_71 ;
   z_output_address0__temp = z_output_address0 ;
   main_result_1_fu_136_p2__temp = main_result_1_fu_136_p2 ;
   i_1_reg_145__temp = i_1_reg_145 ;
   grp_float64_mul_fu_94_ap_start__temp = grp_float64_mul_fu_94_ap_start ;
   b_input_ce0__temp = b_input_ce0 ;
   grp_float64_mul_fu_94_ap_ready__temp = grp_float64_mul_fu_94_ap_ready ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_fu_116_p1_temp11__temp = tmp_fu_116_p1_temp11 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   b_input_address0__temp = b_input_address0 ;
   grp_float64_mul_fu_94_ap_start_reg__temp = grp_float64_mul_fu_94_ap_start_reg ;
   exitcond_fu_104_p2__temp = exitcond_fu_104_p2 ;
   main_result_reg_82__temp = main_result_reg_82 ;
   grp_float64_mul_fu_94_ap_done__temp = grp_float64_mul_fu_94_ap_done ;
   a_input_address0__temp = a_input_address0 ;
   tmp_reg_150_temp111__temp = tmp_reg_150_temp111 ;
   tmp_fu_116_p1_temp111__temp = tmp_fu_116_p1_temp111 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_126_p2__temp = tmp_1_fu_126_p2 ;
   a_input_ce0__temp = a_input_ce0 ;
   tmp_2_cast_fu_132_p1__temp = tmp_2_cast_fu_132_p1 ;
   grp_float64_mul_fu_94_ap_idle__temp = grp_float64_mul_fu_94_ap_idle ;
   tmp_reg_150__temp = tmp_reg_150 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_q0__temp = b_input_q0 ;
   tmp_fu_116_p1__temp = tmp_fu_116_p1 ;
   z_output_q0__temp = z_output_q0 ;
   x2_reg_170__temp = x2_reg_170 ;
   x1_reg_165__temp = x1_reg_165 ;
   grp_float64_mul_fu_94_ap_return__temp = grp_float64_mul_fu_94_ap_return ;

       grp_float64_mul_fu_94_ap_start_reg = 0 ;
       tmp_reg_150 = tmp_reg_150 & 31 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 1;
       if(1 == ap_CS_fsm_state4)
       {
           grp_float64_mul_fu_94_ap_start_reg =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           z_output_ce0 =  1;
       }
          a_input_address0 =  i_reg_71__temp ;
          b_input_address0 =  i_reg_71__temp ;
          z_output_address0 =  tmp_reg_150__temp ;
       if(z_output_ce0){
          z_output_q0=z_output_rom[z_output_address0];
	//printf("z=%llu\n",z_output_q0);
       }
if (grp_float64_mul_fu_94_ap_start_reg==1){
grp_float64_mul_fu_94_ap_start=1;
float64_mul(&x1_reg_165,&ap_clk,&grp_float64_mul_fu_94_ap_done,&grp_float64_mul_fu_94_ap_idle,&grp_float64_mul_fu_94_ap_ready,&grp_float64_mul_fu_94_ap_return,&ap_rst,&grp_float64_mul_fu_94_ap_start,&x2_reg_170,&clock);
grp_float64_mul_fu_94_ap_done=1;
}
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
   z_output_ce0__temp = z_output_ce0 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   i_1_fu_110_p2__temp = i_1_fu_110_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_reg_71__temp = i_reg_71 ;
   z_output_address0__temp = z_output_address0 ;
   main_result_1_fu_136_p2__temp = main_result_1_fu_136_p2 ;
   i_1_reg_145__temp = i_1_reg_145 ;
   grp_float64_mul_fu_94_ap_start__temp = grp_float64_mul_fu_94_ap_start ;
   b_input_ce0__temp = b_input_ce0 ;
   grp_float64_mul_fu_94_ap_ready__temp = grp_float64_mul_fu_94_ap_ready ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_fu_116_p1_temp11__temp = tmp_fu_116_p1_temp11 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   b_input_address0__temp = b_input_address0 ;
   grp_float64_mul_fu_94_ap_start_reg__temp = grp_float64_mul_fu_94_ap_start_reg ;
   exitcond_fu_104_p2__temp = exitcond_fu_104_p2 ;
   main_result_reg_82__temp = main_result_reg_82 ;
   grp_float64_mul_fu_94_ap_done__temp = grp_float64_mul_fu_94_ap_done ;
   a_input_address0__temp = a_input_address0 ;
   tmp_reg_150_temp111__temp = tmp_reg_150_temp111 ;
   tmp_fu_116_p1_temp111__temp = tmp_fu_116_p1_temp111 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_1_fu_126_p2__temp = tmp_1_fu_126_p2 ;
   a_input_ce0__temp = a_input_ce0 ;
   tmp_2_cast_fu_132_p1__temp = tmp_2_cast_fu_132_p1 ;
   grp_float64_mul_fu_94_ap_idle__temp = grp_float64_mul_fu_94_ap_idle ;
   tmp_reg_150__temp = tmp_reg_150 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_q0__temp = b_input_q0 ;
   tmp_fu_116_p1__temp = tmp_fu_116_p1 ;
   z_output_q0__temp = z_output_q0 ;
   x2_reg_170__temp = x2_reg_170 ;
   x1_reg_165__temp = x1_reg_165 ;
   grp_float64_mul_fu_94_ap_return__temp = grp_float64_mul_fu_94_ap_return ;

       grp_float64_mul_fu_94_ap_start_reg = 0 ;
       tmp_reg_150 = tmp_reg_150 & 31 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
   if(((grp_float64_mul_fu_94_ap_done == 1) && (1 == ap_CS_fsm_state5)) == 1){
       if((grp_float64_mul_fu_94_ap_done == 1) && (1 == ap_CS_fsm_state5))
       {
           i_reg_71 =  i_1_reg_145__temp ;
       }
       if((grp_float64_mul_fu_94_ap_done == 1) && (1 == ap_CS_fsm_state5))
       {
           main_result_reg_82 =   (  ( grp_float64_mul_fu_94_ap_return__temp  != z_output_q0__temp  ? 1 : 0 )  + main_result_reg_82__temp  ) ;
       }
          a_input_address0 =  i_reg_71__temp ;
          b_input_address0 =  i_reg_71__temp ;
          z_output_address0 =  tmp_reg_150__temp ;		
	  printf("clock %d\n",clock);
	  if(clock<min_clock)
		  min_clock=clock;
	  if(clock>max_clock)
		  max_clock=clock;
	  total_clock=total_clock+clock;
	 clock=0;
       goto ap_ST_fsm_state2;
   }
   if(((grp_float64_mul_fu_94_ap_done == 1) && (1 == ap_CS_fsm_state5)) == 0){
       if((grp_float64_mul_fu_94_ap_done == 1) && (1 == ap_CS_fsm_state5))
       {
               i_reg_71 =  i_1_reg_145__temp ;
       }
       if((grp_float64_mul_fu_94_ap_done == 1) && (1 == ap_CS_fsm_state5))
       {
               main_result_reg_82 =   (  ( grp_float64_mul_fu_94_ap_return__temp  != z_output_q0__temp  ? 1 : 0 )  + main_result_reg_82__temp  ) ;
       }
          a_input_address0 =  i_reg_71__temp ;
          b_input_address0 =  i_reg_71__temp ;
          z_output_address0 =  tmp_reg_150__temp ;
       goto ap_ST_fsm_state5;
   }
   end:
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_return__1=ap_return;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*dummy=clock;
	//printf("%d\n",*ap_return__1);
	printf("\ntotal clock %d\n",total_clock);
	printf("Min clock cycles:%d\n",min_clock);
	printf("Max clock cycles:%d\n",max_clock);
       return;
}
