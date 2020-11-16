#include<stdio.h>
#include <time.h>
#define INPUT_SIZE 1000
int main(){
	  clock_t t;
	  t = clock();
	  FILE *fp;
	  fp=fopen("input_data.txt","r");
	  char line [ 128 ];

	  int index=1;
	  while ( fgets ( line, sizeof line, fp ) != NULL )
	  {
		//TAKING INPUT FROM INPUT FILE
		int n=atoi(line);
		int result;
		
		//CALLING THE FUNCTION	
		result=testmain(n);

		printf("Test Case:%d/%d \t  Output: %d\n",index,INPUT_SIZE,result);		

		index++;
	  }
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
}
