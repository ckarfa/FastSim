#include<stdio.h>
#include<string.h>
#include<time.h>
#define COL 12
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
					int o111;int o1_ap_vld11;int o211;int o2_ap_vld11;int o311;int o3_ap_vld11;int o411;int o4_ap_vld11;
					int *o11=&o111;
					int *o1_ap_vld1=&o1_ap_vld11;
					int *o21=&o211;
					int *o2_ap_vld1=&o2_ap_vld11;
					int *o31=&o311;
					int *o3_ap_vld1=&o3_ap_vld11;
					int *o41=&o411;
					int *o4_ap_vld1=&o4_ap_vld11;
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
				hls_macc(input[0],input[1],input[2],input[3],input[4],input[5],o11,o21,o31,o41,input[6],input[7],input[8],input[9],input[10],input[11],a5);
			  		printf("Generated C Simulation : %d / %d  %d\n",i1++,INPUT_SIZE,ap_return);
			  	
			}
		}
		
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
}
