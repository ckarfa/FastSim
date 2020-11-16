#include<stdio.h>
int main(){
	int ap_clk=0;
	int ap_done=0;
	int ap_idle=0;
	int ap_ready=1;
	int ap_return=0;
	int ap_rst=0;
	int clock=0;
	int ap_start=1;
    int *ap_clk1=&ap_clk;
	int *ap_done1=&ap_done;
	int *ap_idle1=&ap_idle;
	int *ap_ready1=&ap_ready;
	int *ap_return1=&ap_return;
	int *ap_rst1=&ap_rst;
	int *ap_start1=&ap_start;
	int *dummy=&clock;
	top_main(ap_clk1,ap_done1,ap_idle1,ap_ready1,ap_return1,ap_rst1,ap_start1,dummy);
	
}
