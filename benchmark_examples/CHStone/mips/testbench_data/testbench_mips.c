#include<stdio.h>
#include<string.h>
#include <time.h>
#define COL 8

void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// Function to perform Selection Sort 
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n - 1; i++) { 
  
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
  
        // Swap the found minimum element 
        // with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

int main(){
	  clock_t t;
	  t = clock();
	  FILE *fp;
	  fp=fopen("input_data1.txt","r");
	  
	  FILE *fp1;
	  fp1=fopen("output_data1.txt","r");
	  char line[1000];
	  char line1[1000];
	
	  int index=0;
	  int input[COL],output[COL];
	  int i1=1,i;	  
	  while(!feof(fp))
		{
			fscanf(fp,"%s",line);
			fscanf(fp1,"%s",line1);
			input[index]=atoi(line);
			output[index]=atoi(line1);
			index = (index+1)%COL;
			if(index==0){	
								
				int ap_clk=1;
				int ap_done=0;
				int ap_idle=0;
				int ap_ready=1;
				int ap_return=0;
				int ap_rst=1;
				int ap_start=1;
				int dummy=0;
				
				//int result=check(input,output);
				int result=check(ap_clk,ap_rst,ap_start,dummy,input,output);
				printf("%d Generated C Simulation : %d / 30000\n",result,i1++);
			}
		}
	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
	  return 0;
}
