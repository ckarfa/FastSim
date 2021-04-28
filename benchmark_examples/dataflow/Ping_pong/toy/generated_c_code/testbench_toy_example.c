#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 5
#define SIZE 30000
unsigned long long int input[SIZE+10][COL],output[SIZE+10][COL],output_org[SIZE+10][COL];
#include"ccode_main_function.c"


int main()
{
	int fail = 0;
	clock_t t;
	t = clock();
    FILE *fp,*fp1,*fp2;
	fp=fopen("input_data.txt","r");
	fp1=fopen("output_data.txt","r");
	fp2=fopen("output_data1.txt","w");
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
	index=0;
	index1=0;
	while(!feof(fp1))
	{			
		char line [ 1000 ];			
		fscanf(fp1,"%s",&line);				
		output_org[index1][index]=atoll(line);
		index = (index+1)%COL;
		if(index==0)
		{
			index1+=1;
		}
	}	
    
   unsigned long long int *A_ram = input[0];
 	unsigned long long int *F_ram = output[0];

unsigned long long int ap_clk = 0;
unsigned long long int ap_rst = 0;
unsigned long long int A_address0 = 0;
unsigned long long int A_ce0 = 0;
unsigned long long int A_d0 = 0;
unsigned long long int A_q0 = 0;
unsigned long long int A_we0 = 0;
unsigned long long int A_address1 = 0;
unsigned long long int A_ce1 = 0;
unsigned long long int A_d1 = 0;
unsigned long long int A_q1 = 0;
unsigned long long int A_we1 = 0;

unsigned long long int F_address0 = 0;
unsigned long long int F_ce0 = 0;
unsigned long long int F_d0 = 0;
unsigned long long int F_q0 = 0;
unsigned long long int F_we0 = 0;
unsigned long long int F_address1 = 0;
unsigned long long int F_ce1 = 0;
unsigned long long int F_d1 = 0;
unsigned long long int F_q1 = 0;
unsigned long long int F_we1 = 0;

unsigned long long int ap_start = 1;
unsigned long long int ap_done = 0;
unsigned long long int ap_ready = 0;
unsigned long long int ap_idle = 0; 

unsigned long long int *A_address0__1 = &A_address0;
unsigned long long int *A_address1__1 = &A_address1;
unsigned long long int *A_ce0__1 = &A_ce0;
unsigned long long int *A_ce1__1 = &A_ce1;
unsigned long long int *A_d0__1 = &A_d0;
unsigned long long int *A_d1__1 = &A_d1;
unsigned long long int *A_q0__1 = &A_q0;
unsigned long long int *A_q1__1 = &A_q1;
unsigned long long int *A_we0__1 = &A_we0;
unsigned long long int *A_we1__1 = &A_we1;
unsigned long long int *F_address0__1 = &F_address0;
unsigned long long int *F_address1__1 = &F_address1;
unsigned long long int *F_ce0__1 = &F_ce0;
unsigned long long int *F_ce1__1 = &F_ce1;
unsigned long long int *F_d0__1 = &F_d0;
unsigned long long int *F_d1__1 = &F_d1;
unsigned long long int *F_q0__1 = &F_q0;
unsigned long long int *F_q1__1 = &F_q1;
unsigned long long int *F_we0__1 = &F_we0;
unsigned long long int *F_we1__1 = &F_we1;
unsigned long long int *ap_clk__1 = &ap_clk;
unsigned long long int *ap_done__1 = &ap_done;
unsigned long long int *ap_idle__1 = &ap_idle;
unsigned long long int *ap_ready__1 = &ap_ready;
unsigned long long int *ap_rst__1 = &ap_rst;
unsigned long long int *ap_start__1 = &ap_start;

int dummy = 0; 



main_function(A_address0__1,A_address1__1,A_ce0__1,A_ce1__1,A_d0__1,A_d1__1,A_q0__1,A_q1__1,A_we0__1,A_we1__1,
F_address0__1,F_address1__1,F_ce0__1,F_ce1__1,F_d0__1,F_d1__1,F_q0__1,F_q1__1,F_we0__1,F_we1__1,
ap_clk__1,ap_done__1,ap_idle__1,ap_ready__1,ap_rst__1,ap_start__1,A_ram,F_ram , dummy);

	
 	printf("\n\n");
	int j,i;
	for(j=0;j<SIZE;j++)
    {
		
		for( i = 0; i < 5; i++)
		{
			if(output[j][i]!=output_org[j][i])
			{
				fail=1;
				printf("%d\n",j);
			}
			fprintf(fp2,"%llu  ",output[j][i]);
		}
		fprintf(fp2,"\n");
       
	}
	
	for(int i=0;i<5;i++)
		printf("%llu  ",F_ram[i]);
	printf("\n");
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
	fclose(fp2);
	return fail;

}

