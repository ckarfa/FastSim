#include<stdio.h>
#include<string.h>
#include <time.h>
#define COL 20
#define INPUT_SIZE 30000
int main(){
	  clock_t t;
	  t = clock();
	  FILE *fp;
	  fp=fopen("input_data.txt","r");
	 
	  char line [ 1000 ];
	
	  unsigned long long int index=0;
	  unsigned long long int input[COL];
	  unsigned long long int i1=1,i;	  
	  while(!feof(fp))
		{
			fscanf(fp,"%s",line);
			input[index]=atoi(line);
			index = (index+1)%COL;
			if(index==0){								
				unsigned long long int out131=0;
				unsigned long long int out301=0;
				unsigned long long int out311=0;
				unsigned long long int out131_vld=0;
				unsigned long long int out301_vld=0;
				unsigned long long int out311_vld=0;
				unsigned long long int *out13=&out131;
				unsigned long long int *out30=&out301;
				unsigned long long int *out31=&out311;
				unsigned long long int *out13_vld=&out131_vld;
				unsigned long long int *out30_vld=&out301_vld;
				unsigned long long int *out31_vld=&out311_vld;
				unsigned long long int *a1,*a2,*a3,*a4,*a5,*a6,*a7;
				unsigned long long int ap_clk=1;
				unsigned long long int ap_done=0;
				unsigned long long int ap_idle=0;
				unsigned long long int ap_ready=1;
				unsigned long long int ap_return=0;
				unsigned long long int ap_rst=1;
				unsigned long long int ap_start=1;
				a1=&ap_clk;
				a2=&ap_done;
				a3=&ap_idle;
				a4=&ap_ready;
				a5=&ap_return;
				a6=&ap_rst;
				a7=&ap_start;
				unsigned long long int dummy=0;				
				hls_macc(a1,a2,a3,a4,a5,a6,a7,&input[0],&input[7],&input[9],&input[8],&input[10],&input[11],&input[12],&input[1],&input[13],&input[14],&input[15],&input[16],&input[17],&input[18],&input[2],&input[19],&input[3],&input[4],&input[5],&input[6],out13,out30,out31,dummy);			
				printf("Test Case:%d/%d \t  Output: %d\n",i1++,INPUT_SIZE,*a5);
				

			}
		}
		
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
	  return 0;
}
