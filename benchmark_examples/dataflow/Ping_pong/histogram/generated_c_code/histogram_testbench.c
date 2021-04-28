/*#include <stdio.h>
#include "ccode_histogram.c"
#define INPUT_SIZE 8
#define VALUE_SIZE 256

void histogram_golden(long long int in[INPUT_SIZE], long long int hist[VALUE_SIZE]) {
  int val;
  for(int i = 0; i < INPUT_SIZE; i++) {
    val = in[i];
    hist[val] = hist[val] + 1;
  }
}

int main() {
	int fail = 0;
	unsigned long long int values[] = {4,2,4,3,4,3,4,3};
	unsigned long long int y_sw[VALUE_SIZE] = {};
    unsigned long long int y[VALUE_SIZE] = {};

	/*char *end,*end1,*end2;
		unsigned long long int x = 	strtoull(line,&end,10);
		long long int y = strtoull(line,&end1,10);			
		input[index1][index]=strtoull(line,&end2,10);*/

	/*unsigned long long int ap_clk = 0 ; 
	unsigned long long int ap_done = 0 ; 
	unsigned long long int ap_idle = 0 ; 
	unsigned long long int ap_ready = 0 ; 
	unsigned long long int ap_rst = 0 ; 
	unsigned long long int ap_start = 1 ; 
	unsigned long long int hist_address0 = 0 ; 
	unsigned long long int hist_address1 = 0 ; 
	unsigned long long int hist_ce0 = 0 ; 
	unsigned long long int hist_ce1 = 0 ; 
	unsigned long long int hist_d0 = 0 ; 
	unsigned long long int hist_d1 = 0 ; 
	unsigned long long int hist_q0 = 0 ; 
	unsigned long long int hist_q1 = 0 ; 
	unsigned long long int hist_we0 = 0 ; 
	unsigned long long int hist_we1 = 0 ; 
	unsigned long long int inputA_address0 = 0 ; 
	unsigned long long int inputA_address1 = 0 ; 
	unsigned long long int inputA_ce0 = 0 ; 
	unsigned long long int inputA_ce1 = 0 ; 
	unsigned long long int inputA_d0 = 0 ; 
	unsigned long long int inputA_d1 = 0 ; 
	unsigned long long int inputA_q0 = 0 ; 
	unsigned long long int inputA_q1 = 0 ; 
	unsigned long long int inputA_we0 = 0 ; 
	unsigned long long int inputA_we1 = 0 ; 
	unsigned long long int inputB_address0 = 0 ; 
	unsigned long long int inputB_address1 = 0 ; 
	unsigned long long int inputB_ce0 = 0 ; 
	unsigned long long int inputB_ce1 = 0 ; 
	unsigned long long int inputB_d0 = 0 ; 
	unsigned long long int inputB_d1 = 0 ; 
	unsigned long long int inputB_q0 = 0 ; 
	unsigned long long int inputB_q1 = 0 ; 
	unsigned long long int inputB_we0 = 0 ; 
	unsigned long long int inputB_we1 = 0 ; 





	unsigned long long int *ap_clk__1 = &ap_clk ;
	unsigned long long int *ap_done__1 = &ap_done ;
	unsigned long long int *ap_idle__1 = &ap_idle ;
	unsigned long long int *ap_ready__1 = &ap_ready ;
	unsigned long long int *ap_rst__1 = &ap_rst ;
	unsigned long long int *ap_start__1 = &ap_start ;
	unsigned long long int *hist_address0__1 = &hist_address0 ;
	unsigned long long int *hist_address1__1 = &hist_address1 ;
	unsigned long long int *hist_ce0__1 = &hist_ce0 ;
	unsigned long long int *hist_ce1__1 = &hist_ce1 ;
	unsigned long long int *hist_d0__1 = &hist_d0 ;
	unsigned long long int *hist_d1__1 = &hist_d1 ;
	unsigned long long int *hist_q0__1 = &hist_q0 ;
	unsigned long long int *hist_q1__1 = &hist_q1 ;
	unsigned long long int *hist_we0__1 = &hist_we0 ;
	unsigned long long int *hist_we1__1 = &hist_we1 ;
	unsigned long long int *inputA_address0__1 = &inputA_address0 ;
	unsigned long long int *inputA_address1__1 = &inputA_address1 ;
	unsigned long long int *inputA_ce0__1 = &inputA_ce0 ;
	unsigned long long int *inputA_ce1__1 = &inputA_ce1 ;
	unsigned long long int *inputA_d0__1 = &inputA_d0 ;
	unsigned long long int *inputA_d1__1 = &inputA_d1 ;
	unsigned long long int *inputA_q0__1 = &inputA_q0 ;
	unsigned long long int *inputA_q1__1 = &inputA_q1 ;
	unsigned long long int *inputA_we0__1 = &inputA_we0 ;
	unsigned long long int *inputA_we1__1 = &inputA_we1 ;
	unsigned long long int *inputB_address0__1 = &inputB_address0 ;
	unsigned long long int *inputB_address1__1 = &inputB_address1 ;
	unsigned long long int *inputB_ce0__1 = &inputB_ce0 ;
	unsigned long long int *inputB_ce1__1 = &inputB_ce1 ;
	unsigned long long int *inputB_d0__1 = &inputB_d0 ;
	unsigned long long int *inputB_d1__1 = &inputB_d1 ;
	unsigned long long int *inputB_q0__1 = &inputB_q0 ;
	unsigned long long int *inputB_q1__1 = &inputB_q1 ;
	unsigned long long int *inputB_we0__1 = &inputB_we0 ;
	unsigned long long int *inputB_we1__1 = &inputB_we1 ;

	int dummy = 0;





	histogram_golden(values, y_sw);
   // histogram(values, values+INPUT_SIZE/2, y);
   histogram(ap_clk__1,ap_done__1,ap_idle__1,ap_ready__1,ap_rst__1,ap_start__1,
hist_address0__1,hist_address1__1,hist_ce0__1,hist_ce1__1,hist_d0__1,hist_d1__1,hist_q0__1,hist_q1__1,hist_we0__1,hist_we1__1,
inputA_address0__1,inputA_address1__1,inputA_ce0__1,inputA_ce1__1,inputA_d0__1,inputA_d1__1,inputA_q0__1,inputA_q1__1,inputA_we0__1,inputA_we1__1,
inputB_address0__1,inputB_address1__1,inputB_ce0__1,inputB_ce1__1,inputB_d0__1,inputB_d1__1,inputB_q0__1,inputB_q1__1,inputB_we0__1,inputB_we1__1,
values , values+INPUT_SIZE/2 , y ,  dummy);

	for(int i = 0; i < INPUT_SIZE; i++)
	{
		if(y_sw[i] != y[i]) {
        //    printf("%d %d %d\n", i, y_sw[i], y[i]);
			fail = 1;
        }
		printf("%llu %llu\n", y_sw[i], y[i]);

	}

	if(fail == 1)
		printf("FAILED\n");
	else
		printf("PASS\n");

	return fail;
}*/




#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define INPUT_SIZE 8
#define VALUE_SIZE 256
#define COL 8
#define SIZE 30000
unsigned long long int input[SIZE+10][COL],output[SIZE+10][COL],output_org[SIZE+10][COL];
#include "ccode_histogram.c"
void histogram_golden(unsigned long long int in[INPUT_SIZE], unsigned long long int *hist) {
  int val;
  for(int i = 0; i < INPUT_SIZE; i++) {
    val = in[i];
    hist[val] = hist[val] + 1;
  }
}

int main()
{
	int fail = 0;
	clock_t t;
	t = clock();
    FILE *fp;
	fp=fopen("input_data.txt","r");
	
	int index = 0,index1=0;
	while(!feof(fp))
	{			
		char line [ 1000 ];			
		fscanf(fp,"%s",&line);
		//unsigned long long int x = 	atoll(line);
		//long long int y = atoll(line);			
		input[index1][index]=atoll(line);
		/*char *end,*end1,*end2;
		unsigned long long int x = 	strtoull(line,&end,10);
		long long int y = strtoull(line,&end1,10);			
		input[index1][index]=strtoull(line,&end2,10);*/
		index = (index+1)%COL;
		if(index==0)
		{
			index1+=1;
		}
	}
	
    unsigned long long int *values=input[0];
    unsigned long long int *y=output[0];
    
    unsigned long long int ap_clk = 0 ; 
	unsigned long long int ap_done = 0 ; 
	unsigned long long int ap_idle = 0 ; 
	unsigned long long int ap_ready = 0 ; 
	unsigned long long int ap_rst = 0 ; 
	unsigned long long int ap_start = 1 ; 
	unsigned long long int hist_address0 = 0 ; 
	unsigned long long int hist_address1 = 0 ; 
	unsigned long long int hist_ce0 = 0 ; 
	unsigned long long int hist_ce1 = 0 ; 
	unsigned long long int hist_d0 = 0 ; 
	unsigned long long int hist_d1 = 0 ; 
	unsigned long long int hist_q0 = 0 ; 
	unsigned long long int hist_q1 = 0 ; 
	unsigned long long int hist_we0 = 0 ; 
	unsigned long long int hist_we1 = 0 ; 
	unsigned long long int inputA_address0 = 0 ; 
	unsigned long long int inputA_address1 = 0 ; 
	unsigned long long int inputA_ce0 = 0 ; 
	unsigned long long int inputA_ce1 = 0 ; 
	unsigned long long int inputA_d0 = 0 ; 
	unsigned long long int inputA_d1 = 0 ; 
	unsigned long long int inputA_q0 = 0 ; 
	unsigned long long int inputA_q1 = 0 ; 
	unsigned long long int inputA_we0 = 0 ; 
	unsigned long long int inputA_we1 = 0 ; 
	unsigned long long int inputB_address0 = 0 ; 
	unsigned long long int inputB_address1 = 0 ; 
	unsigned long long int inputB_ce0 = 0 ; 
	unsigned long long int inputB_ce1 = 0 ; 
	unsigned long long int inputB_d0 = 0 ; 
	unsigned long long int inputB_d1 = 0 ; 
	unsigned long long int inputB_q0 = 0 ; 
	unsigned long long int inputB_q1 = 0 ; 
	unsigned long long int inputB_we0 = 0 ; 
	unsigned long long int inputB_we1 = 0 ; 





	unsigned long long int *ap_clk__1 = &ap_clk ;
	unsigned long long int *ap_done__1 = &ap_done ;
	unsigned long long int *ap_idle__1 = &ap_idle ;
	unsigned long long int *ap_ready__1 = &ap_ready ;
	unsigned long long int *ap_rst__1 = &ap_rst ;
	unsigned long long int *ap_start__1 = &ap_start ;
	unsigned long long int *hist_address0__1 = &hist_address0 ;
	unsigned long long int *hist_address1__1 = &hist_address1 ;
	unsigned long long int *hist_ce0__1 = &hist_ce0 ;
	unsigned long long int *hist_ce1__1 = &hist_ce1 ;
	unsigned long long int *hist_d0__1 = &hist_d0 ;
	unsigned long long int *hist_d1__1 = &hist_d1 ;
	unsigned long long int *hist_q0__1 = &hist_q0 ;
	unsigned long long int *hist_q1__1 = &hist_q1 ;
	unsigned long long int *hist_we0__1 = &hist_we0 ;
	unsigned long long int *hist_we1__1 = &hist_we1 ;
	unsigned long long int *inputA_address0__1 = &inputA_address0 ;
	unsigned long long int *inputA_address1__1 = &inputA_address1 ;
	unsigned long long int *inputA_ce0__1 = &inputA_ce0 ;
	unsigned long long int *inputA_ce1__1 = &inputA_ce1 ;
	unsigned long long int *inputA_d0__1 = &inputA_d0 ;
	unsigned long long int *inputA_d1__1 = &inputA_d1 ;
	unsigned long long int *inputA_q0__1 = &inputA_q0 ;
	unsigned long long int *inputA_q1__1 = &inputA_q1 ;
	unsigned long long int *inputA_we0__1 = &inputA_we0 ;
	unsigned long long int *inputA_we1__1 = &inputA_we1 ;
	unsigned long long int *inputB_address0__1 = &inputB_address0 ;
	unsigned long long int *inputB_address1__1 = &inputB_address1 ;
	unsigned long long int *inputB_ce0__1 = &inputB_ce0 ;
	unsigned long long int *inputB_ce1__1 = &inputB_ce1 ;
	unsigned long long int *inputB_d0__1 = &inputB_d0 ;
	unsigned long long int *inputB_d1__1 = &inputB_d1 ;
	unsigned long long int *inputB_q0__1 = &inputB_q0 ;
	unsigned long long int *inputB_q1__1 = &inputB_q1 ;
	unsigned long long int *inputB_we0__1 = &inputB_we0 ;
	unsigned long long int *inputB_we1__1 = &inputB_we1 ;

	int dummy = 0;




	
   histogram(ap_clk__1,ap_done__1,ap_idle__1,ap_ready__1,ap_rst__1,ap_start__1,
hist_address0__1,hist_address1__1,hist_ce0__1,hist_ce1__1,hist_d0__1,hist_d1__1,hist_q0__1,hist_q1__1,hist_we0__1,hist_we1__1,
inputA_address0__1,inputA_address1__1,inputA_ce0__1,inputA_ce1__1,inputA_d0__1,inputA_d1__1,inputA_q0__1,inputA_q1__1,inputA_we0__1,inputA_we1__1,
inputB_address0__1,inputB_address1__1,inputB_ce0__1,inputB_ce1__1,inputB_d0__1,inputB_d1__1,inputB_q0__1,inputB_q1__1,inputB_we0__1,inputB_we1__1,
values , values+INPUT_SIZE/2 , y ,  dummy);

	for(int i=0;i<SIZE;i++)
	{
		histogram_golden(input[i], output_org[i]);
	}
   
	for(int j=0;j<SIZE;j++)
	{
		for(int i = 0; i < INPUT_SIZE; i++)
		{
			if(output_org[j][i] != output[j][i]) {
			//	printf("%llu %llu\n", output[j][i], output_org[j][i]);
				fail = 1;
		    }
			//printf("%llu %llu\n", y_sw[i], y[i]);
			/*if(fail==0)
				printf("Test Case : %d  | PASS\n",j);
			else
			{
				printf("Test Case : %d  | FAIL\n",j);
				break;
			}*/
				
		}
		//printf("\n\n");
	}

	if(fail == 1)
		printf("FAILED\n");
	else
		printf("PASS\n");

	

	printf("\nClock cycle : %d\n",ap_clk);

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken: %f seconds \n", time_taken);
	fclose(fp);
	
	return fail;

}



