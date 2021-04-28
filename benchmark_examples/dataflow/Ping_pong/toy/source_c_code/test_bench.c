/*
#include<stdio.h>
#define LIMIT 5
#include"dummy.cpp"
void main_function(int A[LIMIT],  int F[LIMIT]);
int main()
{
	int A[LIMIT]={1,2,3,4,5};
	int F[LIMIT]={0,0,0,0,0};

	int A1[LIMIT]={10,20,30,40,50};
	int F1[LIMIT]={0,0,0,0,0};

	int A2[LIMIT]={91,92,93,94,95};
	int F2[LIMIT]={0,0,0,0,0};

	main_function(A,F);
	main_function(A1,F1);
	main_function(A2,F2);

	int i;
	printf("\n");
	for(i=0;i<LIMIT;i++)
		printf("%d  ",F[i]);
	printf("\n");
	for(i=0;i<LIMIT;i++)
		printf("%d  ",F1[i]);
	printf("\n");
	for(i=0;i<LIMIT;i++)
		printf("%d  ",F2[i]);
	printf("\nPASS\n");
	return 0;
}

*/
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 5
#define SIZE1 30000
int input[SIZE1+10][COL],output[SIZE1+10][COL];
#include"dummy.cpp"

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
    
    
    for(int i=0;i<SIZE1;i++)
    {
		main_function(input[i], output[i]);
	}
	
	
	
 	printf("\n\n");
	int j,i;
	for(j=0;j<SIZE1;j++)
    {
		fprintf(fp1,"%d ",output[j][0]);
		for( i = 1; i < COL; i++)
		{
			
			fprintf(fp1,"%d ",output[j][i]);
		}
		fprintf(fp1,"\n");
       
	}

	if(fail == 1)
		printf("FAILED\n");
	else
		printf("PASS\n");


	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken: %f seconds \n", time_taken);
	fclose(fp);
	fclose(fp1);
	return fail;

}
