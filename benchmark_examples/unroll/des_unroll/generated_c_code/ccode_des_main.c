#include<stdio.h>
void top_function( unsigned long long int *,unsigned long long int *, unsigned long long int *, unsigned long long int *, unsigned long long int *, unsigned long long int *, unsigned long long int *,unsigned long long int * , int*);
int testmain(unsigned long long int inputdata){
	 unsigned long long int ap_clk=1;
	 unsigned long long int ap_done=0;
	 unsigned long long int ap_idle=0;
	 unsigned long long int ap_ready=1;
	 unsigned long long int ap_rst=1;
	 unsigned long long int ap_start=1;
	 unsigned long long int ap_return=0;

	 unsigned long long int *ap_clk1=&ap_clk;
	 unsigned long long int *ap_done1=&ap_done;
	 unsigned long long int *ap_idle1=&ap_idle;
	 unsigned long long int *ap_ready1=&ap_ready;
	 unsigned long long int *ap_rst1=&ap_rst;
	 unsigned long long int *ap_start1=&ap_start;
	unsigned long long int *inputdata1=&inputdata;
	unsigned long long int *ap_return1=&ap_return;
	int clock=0;
	  int *dummy=&clock;
	top_function(ap_clk1,ap_done1,ap_idle1,ap_ready1,ap_return1,ap_rst1,ap_start1,inputdata1,dummy);
	
	printf("   %llu ",*ap_return1); 
	return clock;
}
