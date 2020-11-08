#include<stdio.h>
#include <time.h>
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
		int result;
		
		//CALLING THE FUNCTION	
		result=testmain(n);


		printf("Generated C code: %d/30000\n",index);
		//printf("%d\n",index);


		index++;
	  }
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
}
