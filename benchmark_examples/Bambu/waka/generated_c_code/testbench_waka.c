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
	
	  int index=0;
	  int input[COL];
	  int i1=1,i;	  
	  while(!feof(fp))
		{
			fscanf(fp,"%s",line);
			input[index]=atoi(line);
			index = (index+1)%COL;
			if(index==0){								
				int out131=0;
				int out301=0;
				int out311=0;
				int out131_vld=0;
				int out301_vld=0;
				int out311_vld=0;
				int *out13=&out131;
				int *out30=&out301;
				int *out31=&out311;
				int *out13_vld=&out131_vld;
				int *out30_vld=&out301_vld;
				int *out31_vld=&out311_vld;
				int *a1,*a2,*a3,*a4,*a5,*a6,*a7;
				int ap_clk=1;
				int ap_done=0;
				int ap_idle=0;
				int ap_ready=1;
				int ap_return=0;
				int ap_rst=1;
				int ap_start=1;
				a1=&ap_clk;
				a2=&ap_done;
				a3=&ap_idle;
				a4=&ap_ready;
				a5=&ap_return;
				a6=&ap_rst;
				a7=&ap_start;
				int dummy=0;				
				hls_macc(a1,a2,a3,a4,a5,a6,a7,&input[0],&input[7],&input[9],&input[8],&input[10],&input[11],&input[12],&input[1],&input[13],&input[14],&input[15],&input[16],&input[17],&input[18],&input[2],&input[19],&input[3],&input[4],&input[5],&input[6],out13,out30,out31,dummy);			
				printf("Test Case:%d/%d \t  Output: %d\n",i1++,INPUT_SIZE,*a5);

			}
		}
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
	  return 0;
}
