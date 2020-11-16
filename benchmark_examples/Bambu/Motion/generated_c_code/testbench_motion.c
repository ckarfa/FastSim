#include<stdio.h>
#include<string.h>
#include <time.h>
#define COL 10
int main(){
	  
	int input[10];
	int o111=0;int o211=0;int o311=0;
	int out1_ap_vld1=0;
	int out2_ap_vld1=0;
	int out3_ap_vld1=0;
	int *o1_ap_vld1=&out1_ap_vld1;
	int *o2_ap_vld1=&out2_ap_vld1;
	int *o3_ap_vld1=&out3_ap_vld1;
	int *o11=&o111;
	int *o21=&o211;
	int *o31=&o311;
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

	int i;
	for(i=0;i<10;i++){
		input[i]=i+1;		
	}

	hls_macc(a1,a2,a3,a4,a5,a6,a7,&input[0],&input[9],&input[1],&input[2],&input[3],&input[4],&input[5],&input[6],&input[7],&input[8],o11,o1_ap_vld1,o21,o2_ap_vld1,o31,o3_ap_vld1,dummy);
   //	int result=hls_macc(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9], o11,o21,o31);
					

	return 0;
}
