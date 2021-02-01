#include<stdio.h>
#include<string.h>
#include <time.h>
#define COL 16
void aes_decrypt_call(unsigned long long int *,unsigned long long int *,unsigned long long int *,unsigned long long int *,unsigned long long int *,unsigned long long int *,unsigned long long int *,unsigned long long int *,unsigned long long int *,unsigned long long int *,unsigned long long int *,long long int  * , int*);
int main(){
		clock_t t;
		t = clock();
		int min_clock=1000000;
		int max_clock=0;
		
		FILE *fp,*fp1;
		fp=fopen("input_data1.txt","r");
		int index=0;
		unsigned long long int input[32];
       	unsigned long long out;
       	
		int error=0;	  
		int i=0;
		while(!feof(fp))
		{			
			char line [ 1000 ];
			char line1 [ 1000 ];			
			fscanf(fp,"%s",&line);				
			input[index]=atoll(line);
			index = (index+1)%COL;			
			if(index==0)
			{				
				unsigned long long int ap_clk=0;
				unsigned long long int ap_done=0;
				unsigned long long int ap_idle=0;
				unsigned long long int ap_ready=1;
				unsigned long long int ap_return=0;
				unsigned long long int ap_rst=0;
				unsigned long long int ap_start=1;
				unsigned long long int statemt_address0=0;
				unsigned long long int statemt_address1=1;
				unsigned long long int statemt_ce0=0;
				unsigned long long int statemt_ce1=0;
				unsigned long long int statemt_d0=0;
				unsigned long long int statemt_d1=0;
				unsigned long long int statemt_q0=0;
				unsigned long long int statemt_q1=0;
				unsigned long long int statemt_we0=0;
				unsigned long long int statemt_we1=0;
				unsigned long long int *ap_clk1=&ap_clk;
				unsigned long long int *ap_done1=&ap_done;
				unsigned long long int *ap_idle1=&ap_idle;
				unsigned long long int *ap_ready1=&ap_ready;
				unsigned long long int *ap_return1=&ap_return;
				unsigned long long int *ap_rst1=&ap_rst;
				unsigned long long int *ap_start1=&ap_start;
				unsigned long long int *statement_address0__1=&statemt_address0;
				unsigned long long int *statement_address1__1=&statemt_address1;
				unsigned long long int *statement_ce0__1=&statemt_ce0;
				unsigned long long int *statement_ce1__1=&statemt_ce1;
				unsigned long long int *statement_d0__1=&statemt_d0;
				unsigned long long int *statement_d1__1=&statemt_d1;
				unsigned long long int *statement_q0__1=&statemt_q0;
				unsigned long long int *statement_q1__1=&statemt_q1;
				unsigned long long int *statement_we0__1=&statemt_we0;
				unsigned long long int *statement_we1__1=&statemt_we1;
				 int clock=0;
				int *dummy=&clock;
				
				aes_decrypt_call(ap_clk1,ap_done1,ap_idle1,ap_ready1,ap_rst1,ap_start1,statement_address0__1,statement_ce0__1,statement_d0__1,statement_q0__1,statement_we0__1,input,dummy);
				
				
				printf("Generated C Simulation : %d / 30000  Clock:%d\n",++i,clock);
				if(clock<min_clock)
					min_clock=clock;
				if(clock>max_clock)
					max_clock=clock;
				
			}
			
		}
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken: %f seconds \n", time_taken);
	printf("Min clock cycles:%d\n",min_clock);
	printf("Max clock cycles:%d\n",max_clock);
}
