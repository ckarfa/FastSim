
#define SIZE1 8 
void insertion_sort(int A[SIZE1]) {
 L1:
    for(int i = 1; i < SIZE1; i++) {
      int item = A[i];
	  int j = i;
      int t = A[j-1];
    L2:
      while(j > 0 && A[j-1] > item && j > 0) {
         // #pragma HLS pipeline II=1
		  A[j] = A[j-1];
		  j--;
	  }
	  A[j] = item;
  }
}
