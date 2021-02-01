#include<stdio.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
uint64_t top_function(int);
int main(){
	  clock_t t;
	  t = clock();
	  FILE *fp;
	  fp=fopen("input_data1.txt","r");
	  char line [ 128 ];

	  int index=1;
	  while ( fgets ( line, sizeof line, fp ) != NULL )
	  {
		//TAKING INPUT FROM INPUT FILE
		int n=atoi(line);
		uint64_t result = 0;
		
		//CALLING THE FUNCTION	
		result=top_function(n);

		
		printf("Generated C code : %d/30000\t Result : %lu\n",index,result);

		index++;
	  }
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
}
