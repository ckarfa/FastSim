/*#include<stdio.h>

#include"merge.c"
void merge_sort_parallel(int A[16], int B[16]);
int main()
{
	int fail = 0;
	int A[16] = {1,-6,3,7,-2,5,3,0,-9,10,11,-12,-13,14,15,-8};
    int B[16];
    int i;
	merge_sort_parallel(A, B);
	for( i = 0; i < 16; i++)
        printf("%d  ",A[i]); 
    printf("\n");
	for( i = 0; i < 16; i++)
        printf("%d  ",B[i]); 
    printf("\n");
   // merge_sort_parallel(B, A);
    /*for( i = 0; i < 16; i++)
        printf("%d  ",A[i]); 
    printf("\n");
	for( i = 0; i < 16; i++)
        printf("%d  ",B[i]); 
    printf("\n");
	merge_sort_parallel(A, B);
	
	for( i = 0; i < 16; i++)
        printf("%d  ",A[i]); 
    printf("\n");
    for( i = 0; i < 16; i++)
        printf("%d  ",B[i]); 
    printf("\n");
*//*
	for( i = 1; i < 16; i++) {
        if(B[i] < B[i-1]) {
            printf("%d  %d > %d \n",i,B[i-1],B[i]); 
            fail = 1;
        }
    }

	if(fail == 1)
		printf("FAILED\n");
	else
		printf("PASS\n");

	return fail;

}
*/



#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 16
#define SIZE1 30000
int input[SIZE1+5][COL],output[SIZE1+5][COL];


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
		merge_sort_parallel(input[i], output[i]);
	}
	
	
	
 	printf("\n\n");
	int j,i;
	for(j=0;j<SIZE1;j++)
    {
		fprintf(fp1,"%lld ",output[j][0]);
		for( i = 1; i < 16; i++)
		{
			if(output[j][i] < output[j][i-1]) {
				printf("%d  %d > %d \n",i,output[j][i-1],output[j][i]); 
				fail = 1;
			}
			fprintf(fp1,"%lld ",output[j][i]);
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

