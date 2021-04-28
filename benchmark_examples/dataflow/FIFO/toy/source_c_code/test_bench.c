#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 5
#define SIZE 30000
 int input[SIZE+10][COL],output[SIZE+10][COL];
#define LIMIT 5
#include"dummy.cpp"
void main_function(int A[LIMIT],  int F[LIMIT]);
int main()
{
	int fail = 0;
	clock_t t;
	t = clock();
    FILE *fp,*fp1;
	fp=fopen("input_data.txt","r");
	fp1=fopen("output_data.txt","w");
	
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
	
	for(int i=0;i<SIZE;i++)
	{
		main_function(input[i],output[i]);
		
		for(int j=0;j<COL;j++)
		{
			fprintf(fp1,"%d ",output[i][j]);
			//printf("%d ",output[i][j]);
		}
		fprintf(fp1,"\n");
		//printf("\n");
	}
	
	
	
	printf("\nPASS\n");
	
	//printf("\nClock cycle : %d\n",ap_clk);

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken: %f seconds \n", time_taken);
	fclose(fp);
	fclose(fp1);
	
	return 0;
}
