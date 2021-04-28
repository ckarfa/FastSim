#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 16
#define SIZE 30000
unsigned long long int input[SIZE+10][COL+100],output[SIZE+10][COL+100];
int output_org[SIZE+10][COL+100];
#include"ccode_insertion_cell_sort.c"
#include"insertion_sort.cpp"


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
		input[index1][index]=atoll(line);
		output_org[index1][index]=atoi(line);
		index = (index+1)%COL;
		if(index==0)
		{
			index1+=1;
		}
	}
	
    
  

unsigned long long int ap_clk = 0;
unsigned long long int ap_rst = 0;
unsigned long long int ap_start = 1;
unsigned long long int ap_done = 0;
unsigned long long int ap_ready = 0;
unsigned long long int ap_idle = 0; 
unsigned long long int in_V_dout = input[0][0];
unsigned long long int in_V_empty_n = 1;
unsigned long long int in_V_read = 0;
unsigned long long int out_V_din = 0;
unsigned long long int out_V_full_n = 1;
unsigned long long int out_V_write = 0;

unsigned long long int *ap_clk__1 = &ap_clk;
unsigned long long int *ap_done__1 = &ap_done;
unsigned long long int *ap_idle__1 = &ap_idle;
unsigned long long int *ap_ready__1 = &ap_ready;
unsigned long long int *ap_rst__1 = &ap_rst;
unsigned long long int *ap_start__1 = &ap_start;
unsigned long long int *in_V_dout__1 = &in_V_dout;
unsigned long long int *in_V_empty_n__1 = &in_V_empty_n;
unsigned long long int *in_V_read__1 = &in_V_read;
unsigned long long int *out_V_din__1 = &out_V_din;
unsigned long long int *out_V_full_n__1 = &out_V_full_n;
unsigned long long int *out_V_write__1 = &out_V_write;


int dummy = 0; 





	insertion_cell_sort(ap_clk__1,ap_done__1,ap_idle__1,ap_ready__1,ap_rst__1,ap_start__1,
	in_V_dout__1,in_V_empty_n__1,in_V_read__1,out_V_din__1,out_V_full_n__1,out_V_write__1, dummy);
	
	
	
 	printf("\n\n");
	int j,i;
	for(j=0;j<SIZE;j++)
    {
		insertion_sort(output_org[j]);
		for( i = 8; i < COL; i++)
		{
			int x= output[j][i];
			if(x!=output_org[j][i-8])
			{
				fail=1;
				printf("%d  %d\n",x, output_org[j][i-8]);
			}
			//fprintf(fp2,"%llu  ",output[j][i]);
			//printf("%llu  ",output[j][i]);
		}
		//fprintf(fp2,"\n");
      //printf("\n");
	}
	/*for(int i=0;i<5;i++)
		printf("%llu  ",A_ram[i]);
	printf("\n\n");
	for(int i=0;i<5;i++)
		printf("%llu  ",F_ram[i]);*/
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
	
	return fail;

}

