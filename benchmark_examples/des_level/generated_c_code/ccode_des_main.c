#include<stdio.h>
void top_function(int *,int *,int *,int *,int *,int *,int,int);
int testmain(int inputdata){
	int ap_clk=1;
	int ap_done=0;
	int ap_idle=0;
	int ap_ready=1;
	int ap_rst=1;
	int ap_start=1;

	int *ap_clk1=&ap_clk;
	int *ap_done1=&ap_done;
	int *ap_idle1=&ap_idle;
	int *ap_ready1=&ap_ready;
	int *ap_rst1=&ap_rst;
	int *ap_start1=&ap_start;
	int dummy=0;
	top_function(ap_clk1,ap_done1,ap_idle1,ap_ready1,ap_rst1,ap_start1,dummy,inputdata);
	return 0;
}
