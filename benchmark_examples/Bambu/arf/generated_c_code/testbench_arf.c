#include<stdio.h>
#include<string.h>
#include <time.h>
#define COL 11
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
				unsigned long long int o111=0;unsigned long long int o1_ap_vld11;unsigned long long int o211=0;unsigned long long int o2_ap_vld11;unsigned long long int o311=0;unsigned long long int o3_ap_vld11;unsigned long long int o411=0;unsigned long long int o4_ap_vld11;
				unsigned long long int *o11=&o111;
				unsigned long long int *o1_ap_vld1=&o1_ap_vld11;
				unsigned long long int *o21=&o211;
				unsigned long long int *o2_ap_vld1=&o2_ap_vld11;
				unsigned long long int *o31=&o311;
				unsigned long long int *o3_ap_vld1=&o3_ap_vld11;
				unsigned long long int *o41=&o411;
				unsigned long long int *o4_ap_vld1=&o4_ap_vld11;
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
			hls_macc(&input[5],&input[6],&input[7],&input[8],&input[9],&input[10],a1,a2,a3,a4,a5,a6,a7,&input[0],&input[1],&input[2],&input[3],&input[4],o11,o1_ap_vld1,o21,o2_ap_vld1,o31,o41,dummy);
				
				printf("Generated C Simulation : %d / 30000  %d\n",i1++,ap_return);
				
				
			}
		}
		
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
}
