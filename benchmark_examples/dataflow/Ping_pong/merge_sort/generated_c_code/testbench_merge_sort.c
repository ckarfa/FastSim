#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 16
#define SIZE 30000
long long int input[SIZE+5][COL],output[SIZE+5][COL];
#include"ccode_merge_sort_parallel.c"


int main()
{
	int fail = 0;
	clock_t t;
	t = clock();
    FILE *fp,*fp1;
	fp=fopen("input_data.txt","r");
	fp1=fopen("output_data.txt","w");
	int index = 0,index1=0;
	while(!feof(fp))
	{			
		char line [ 1000 ];			
		fscanf(fp,"%s",&line);				
		input[index1][index]=atoll(line);
		index = (index+1)%COL;
		if(index==0)
		{
			index1+=1;
		}
	}	
    
    unsigned long long int A_address0 = 0 ;
	unsigned long long int A_address1 = 0 ;
	unsigned long long int A_ce0 = 0 ;
	unsigned long long int A_ce1 = 0 ;
	unsigned long long int A_d0 = 0 ;
	unsigned long long int A_d1 = 0 ;
	 long long int A_q0 = 0 ;
	 long long int A_q1 = 0 ;
	unsigned long long int A_we0 = 0 ;
	unsigned long long int A_we1 = 0 ;
	unsigned long long int B_address0 = 0 ;
	unsigned long long int B_address1 = 0 ;
	unsigned long long int B_ce0 = 0 ;
	unsigned long long int B_ce1 = 0 ;
	 long long int B_d0 = 0 ;
	 long long int B_d1 = 0 ;
	unsigned long long int B_q0 = 0 ;
	unsigned long long int B_q1 = 0 ;
	unsigned long long int B_we0 = 0 ;
	unsigned long long int B_we1 = 0 ;
	unsigned long long int ap_clk = 0 ;
	unsigned long long int ap_done = 0 ;
	unsigned long long int ap_idle = 0 ;
	unsigned long long int ap_ready = 0 ;
	unsigned long long int ap_rst = 0 ;
	unsigned long long int ap_start = 1 ;

    
    unsigned long long int A_address0__1 = &A_address0 ;
	unsigned long long int A_address1__1 = &A_address1 ;
	unsigned long long int A_ce0__1 = &A_ce0 ; 
	unsigned long long int A_ce1__1 = &A_ce1 ;
	unsigned long long int A_d0__1 = &A_d0 ; 
	unsigned long long int A_d1__1 = &A_d1 ;
	 long long int A_q0__1 = &A_q0 ;
	 long long int A_q1__1 = &A_q1 ;
	unsigned long long int A_we0__1 = &A_we0 ;
	unsigned long long int A_we1__1 = &A_we1 ;
	unsigned long long int B_address0__1 = &B_address0 ;
	unsigned long long int B_address1__1 = &B_address1 ;
	unsigned long long int B_ce0__1 = &B_ce0 ;
	unsigned long long int B_ce1__1 = &B_ce0 ;
	 long long int B_d0__1 = &B_d0 ;
	 long long int B_d1__1 = &B_d1 ;
	unsigned long long int B_q0__1 = &B_q0 ;
	unsigned long long int B_q1__1 = &B_q1 ;
	unsigned long long int B_we0__1 = &B_we0 ;
	unsigned long long int B_we1__1 = &B_we1 ;
	unsigned long long int ap_clk__1 = &ap_clk ; 
	unsigned long long int ap_done__1 = &ap_done ; 
	unsigned long long int ap_idle__1 = &ap_idle ; 
	unsigned long long int ap_ready__1 = &ap_ready ; 
	unsigned long long int ap_rst__1 = &ap_rst ;
	unsigned long long int ap_start__1 = &ap_start ; 
	 int dummy;
    
	long long int *A=input[0];
	long long int *B=output[0];
	
	
	merge_sort_parallel(A_address0__1,A_address1__1,A_ce0__1,A_ce1__1,A_d0__1,A_d1__1,A_q0__1,A_q1__1,A_we0__1,A_we1__1,
						B_address0__1,B_address1__1,B_ce0__1,B_ce1__1,B_d0__1,B_d1__1,B_q0__1,B_q1__1,B_we0__1,B_we1__1,
						ap_clk__1,ap_done__1,ap_idle__1,ap_ready__1,ap_rst__1,ap_start__1,A ,B , dummy);
	
 	printf("\n\n");
	int j,i;
	for(j=0;j<SIZE;j++)
    {
		fprintf(fp1,"%lld ",output[j][0]);
		for( i = 1; i < 16; i++)
		{
			if(output[j][i] < output[j][i-1]) {
				printf("%d  %d > %d \n",i,output[j][i-1],output[j][i]); 
				fail = 1;
			}
			fprintf(fp1,"%lld ",output[j][i]);
		}
		fprintf(fp1,"\n");
       
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
	fclose(fp1);
	return fail;

}

