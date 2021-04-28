#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 8
#define SIZE1 3
int input[SIZE1+10][COL],output[SIZE1+10][COL],output_org[SIZE1+10][COL];
#include "histogram_parallel.h"
#include"histogram_parallel.cpp"

void histogram_golden(int in[INPUT_SIZE], int hist[VALUE_SIZE]) {
  int val;
  for(int i = 0; i < INPUT_SIZE; i++) {
    val = in[i];
    hist[val] = hist[val] + 1;
  }
}

int main() {


	int fail = 0;
	clock_t t;
	t = clock();
    FILE *fp;
	fp=fopen("input_data.txt","r");
	int index = 0,index1=0;
	while(!feof(fp))
	{			
		char line [ 1000 ];			
		fscanf(fp,"%s",&line);				
		input[index1][index]=atoi(line);
		index = (index+1)%COL;
		if(index==0)
		{
			index1+=1;
		}
	}	
	
	for(int i=0;i<SIZE1;i++)
	{
		
    	histogram(input[i], input[i]+INPUT_SIZE/2, output[i]);
    	histogram_golden(input[i], output_org[i]);
    	for(int j = 0; j < INPUT_SIZE; j++)
    	{
			if(output_org[i][j] != output[i][j]) {
		        printf("%d %d %d\n", j, output_org[i][j], output[i][j]);
				fail = 1;
		    }
		}
		printf("\n\n");
		
    }
    
    

	

	if(fail == 1)
		printf("FAILED\n");
	else
		printf("PASS\n");
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken: %f seconds \n", time_taken);
	fclose(fp);
	return fail;
}



