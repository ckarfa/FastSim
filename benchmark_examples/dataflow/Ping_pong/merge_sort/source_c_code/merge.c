#include<stdio.h>
#define SIZE 16
void merge1(int A[SIZE],int width, int input1[SIZE])
{
	int f1 = 0;
    int f2 = width;
    int i2 = width;
    int i3 = 2*width;
    int i;
    if(i2 >= SIZE)
    	i2 = SIZE;
  	if(i3 >= SIZE)
  		i3 = SIZE;
  	for ( i = 0; i < SIZE; i++) {
  		int t1 = A[f1];
  		int t2 = (f2 == i3) ? 0 : A[f2];
  		if(f2 == i3 || (f1 < i2 && t1 <= t2)) {
  			input1[i] = t1;
		  f1++;
		}
		else {
			input1[i] = t2;
		  f2++;
		}
		if(f1 == i2 && f2 == i3) {
		  f1 = i3;
		  i2 += 2*width;
		  i3 += 2*width;
		  if(i2 >= SIZE) i2 = SIZE;
		  if(i3 >= SIZE) i3 = SIZE;
		  f2 = i2;
	 	}
	  }
}
void merge2(int input1[SIZE],int width, int input2[SIZE])
{
	int f1 = 0;
    int f2 = width;
    int i2 = width;
    int i3 = 2*width;
    int i;
    if(i2 >= SIZE)
    	i2 = SIZE;
  	if(i3 >= SIZE)
  		i3 = SIZE;
  	for ( i = 0; i < SIZE; i++) {
  		int t1 = input1[f1];
  		int t2 = (f2 == i3) ? 0 : input1[f2];
  		if(f2 == i3 || (f1 < i2 && t1 <= t2)) {
  			input2[i] = t1;
		  f1++;
		}
		else {
			input2[i] = t2;
		  f2++;
		}
		if(f1 == i2 && f2 == i3) {
		  f1 = i3;
		  i2 += 2*width;
		  i3 += 2*width;
		  if(i2 >= SIZE) i2 = SIZE;
		  if(i3 >= SIZE) i3 = SIZE;
		  f2 = i2;
	 	}
	  }
}
void merge3(int input2[SIZE],int width, int input3[SIZE])
{
	int f1 = 0;
    int f2 = width;
    int i2 = width;
    int i3 = 2*width;
    int i;
    if(i2 >= SIZE)
    	i2 = SIZE;
  	if(i3 >= SIZE)
  		i3 = SIZE;
  	for ( i = 0; i < SIZE; i++) {
  		int t1 = input2[f1];
  		int t2 = (f2 == i3) ? 0 : input2[f2];
  		if(f2 == i3 || (f1 < i2 && t1 <= t2)) {
		  input3[i] = t1;
		  f1++;
		}
		else {
		  input3[i] = t2;
		  f2++;
		}
		if(f1 == i2 && f2 == i3) {
		  f1 = i3;
		  i2 += 2*width;
		  i3 += 2*width;
		  if(i2 >= SIZE) i2 = SIZE;
		  if(i3 >= SIZE) i3 = SIZE;
		  f2 = i2;
	 	}
	  }
}
void merge4(int input3[SIZE],int width, int B[SIZE])
{
	int f1 = 0;
    int f2 = width;
    int i2 = width;
    int i3 = 2*width;
    int i;
    if(i2 >= SIZE) 
    	i2 = SIZE;
  	if(i3 >= SIZE) 
  		i3 = SIZE;
  	for ( i = 0; i < SIZE; i++) {
  		int t1 = input3[f1];
  		int t2 = (f2 == i3) ? 0 : input3[f2];
  		if(f2 == i3 || (f1 < i2 && t1 <= t2)) {
		  B[i] = t1;
		  f1++;
		} 
		else {
		  B[i] = t2;
		  f2++;
		}
		if(f1 == i2 && f2 == i3) {
		  f1 = i3;
		  i2 += 2*width;
		  i3 += 2*width;
		  if(i2 >= SIZE) i2 = SIZE;
		  if(i3 >= SIZE) i3 = SIZE;
		  f2 = i2;
	 	}
	  }
}


void merge_sort_parallel(int A[SIZE], int B[SIZE]) {
#pragma HLS dataflow

	/*DTYPE temp[STAGES-1][SIZE];
#pragma HLS array_partition variable=temp complete dim=1
	int width = 1;

	merge_arrays(A, width, temp[0]);
	width *= 2;
	
	for (int stage = 1; stage < STAGES-1; stage++) {
#pragma HLS unroll
		merge_arrays(temp[stage-1], width, temp[stage]);
		width *= 2;
	}

	merge_arrays(temp[STAGES-2], width, B);*/
	
	int input1[SIZE];
	int input2[SIZE];
	int input3[SIZE];
	int i;
	
	merge1(A,1, input1);
	
	merge2(input1,2, input2);
	
	merge3(input2,4, input3);
	
	merge4(input3,8, B);
	
	
}
















