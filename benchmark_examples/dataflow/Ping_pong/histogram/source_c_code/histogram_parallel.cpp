#include "histogram_parallel.h"
#include<stdio.h>
void histogram_map(int in[INPUT_SIZE/2], int hist[VALUE_SIZE]) {
#pragma HLS DEPENDENCE variable=hist intra RAW false
    for(int i = 0; i < VALUE_SIZE; i++) {
//#pragma HLS PIPELINE II=1
        hist[i] = 0;
    }
  int old = in[0];
  int acc = 0;
  for(int i = 0; i < INPUT_SIZE/2; i++) {
//#pragma HLS PIPELINE II=1
    int val = in[i];
    if(old == val) {
      acc = acc + 1;
    } else {
      hist[old] = acc;
      acc = hist[val] + 1;
    }
    old = val;
  }
  hist[old] = acc;
}

void histogram_reduce(int hist1[VALUE_SIZE], int hist2[VALUE_SIZE], int output[VALUE_SIZE]) {
  for(int i = 0; i < VALUE_SIZE; i++) {
//#pragma HLS PIPELINE II=1
    output[i] = hist1[i] + hist2[i];
  }
}

//Top level function
void histogram(int inputA[INPUT_SIZE/2], int inputB[INPUT_SIZE/2], int hist[VALUE_SIZE]){
  #pragma HLS DATAFLOW
  int hist1[VALUE_SIZE];
  int hist2[VALUE_SIZE];

  histogram_map(inputA, hist1);
  for(int i=0;i<INPUT_SIZE;i++)
  		printf("%d ",hist1[i]);
  printf("\n\n");
  histogram_map(inputB, hist2);
  for(int i=0;i<INPUT_SIZE;i++)
  		printf("%d ",hist2[i]);
  printf("\n\n");
  histogram_reduce(hist1, hist2, hist);
  for(int i=0;i<INPUT_SIZE;i++)
  		printf("%d ",hist[i]);
  printf("\n\n");
  
}

