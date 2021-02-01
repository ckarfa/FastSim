#include<stdio.h>
#include <time.h>
#define INPUT_SIZE 30000
int main(){
	
	  clock_t t;
	  int min_clock=1000000;
	  int max_clock=0;
	  t = clock();
	  FILE *fp;
	  fp=fopen("input_data1.txt","r");
	  char line [ 128 ];

	  int index=1;
	  while ( fgets ( line, sizeof line, fp ) != NULL )
	  {
		//TAKING INPUT FROM INPUT FILE
		int n=atoi(line);		
		
		printf("Test Case: %d/%d \t  Output: ",index,INPUT_SIZE);		
		//CALLING THE FUNCTION	
		
		int clock = testmain(n);
		printf("\t Clock: %d\n",clock);	
		if(clock<min_clock)
			min_clock=clock;
		if(clock>max_clock)
			max_clock=clock;
		//break;
		index++;
	  }
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
	  printf("Min clock cycles:%d\n",min_clock);
	  printf("Max clock cycles:%d\n",max_clock);
}
