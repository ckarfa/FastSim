#include<stdio.h>
#include<string.h>
#include <time.h>
#define COL 8
#define INPUT_SIZE 1000 

int main(){
	  clock_t t;
	  t = clock();
	  FILE *fp;
	  fp=fopen("input_data.txt","r");
	  
	  FILE *fp1;
	  fp1=fopen("output_data.txt","r");
	  char line[1000];
	  char line1[1000];
	
	  unsigned long long int index=0;
	  unsigned long long int input[COL],output[COL];
	  unsigned long long int i1=1,i,ans=0;	  
	  while(!feof(fp))
		{
			fscanf(fp,"%s",line);
			fscanf(fp1,"%s",line1);
			input[index]=atoi(line);
			output[index]=atoi(line1);
			index = (index+1)%COL;
			if(index==0){	
								
				unsigned long long int ap_clk=1;
				unsigned long long int ap_done=0;
				unsigned long long int ap_idle=0;
				unsigned long long int ap_ready=1;
				unsigned long long int ap_return=0;
				unsigned long long int ap_rst=1;
				unsigned long long int ap_start=1;
				unsigned long long int dummy=0;
					
				unsigned long long int result=check(ap_clk,ap_rst,ap_start,dummy,input,output);				
				printf("Test Case:%d/%d \t  Output: %d\n",i1,INPUT_SIZE,result);
				ans+=result;
				i1++;
			}
		}
		printf("ans = %d ",ans);
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
	  return 0;
}
