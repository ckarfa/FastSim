#include<stdio.h>
#include <time.h>
int main(){
		int min_clock=1000000;
		int max_clock=0;
	  clock_t t;
	  t = clock();
	  FILE *fp;
	  fp=fopen("input_data.txt","r");
	  char line [ 128 ];

	  int index=1;
	  while ( fgets ( line, sizeof line, fp ) != NULL )
	  {
		//TAKING INPUT FROM INPUT FILE
		int inputdata=atoi(line);
		int result;
		
		//CALLING THE FUNCTION	
		int ap_clk=1;
		int ap_done=0;
		int ap_idle=0;
		int ap_ready=1;
		int ap_rst=0;
		int ap_start=1;	
		int dummy=0;
		int *dummy1=&dummy;
		top_function( ap_clk, ap_done, ap_idle, ap_ready, ap_rst, ap_start, dummy1,inputdata);
		
		//top_function(ap_clk1,ap_done1,ap_idle1,ap_ready1,ap_rst1,ap_start1,dummy1,inputdata);

		printf("Generated C code: %d/1000 Clock:%d\n",index,dummy);
		if(dummy<min_clock)
			min_clock=dummy;
		if(dummy>max_clock)
			max_clock=dummy;

		index++;
	  }
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
	  printf("Min clock cycles:%d\n",min_clock);
	  printf("Max clock cycles:%d\n",max_clock);
}
