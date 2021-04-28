#define LIMIT 5
#define N
#include <math.h>
void module_1(int A[LIMIT], int B[LIMIT], int C[LIMIT])
{
	int i;
    for(i=0; i< LIMIT; i++){
    	B[i] = A[i] * 9;
    	C[i] = A[i] * 2;
    }
}
void module_2(int B[LIMIT], int D[LIMIT])
{
	int i;
    for(i=0; i< LIMIT; i++)
    	 D[i] = B[i] * B[i];
}
void module_3(int C[LIMIT], int E[LIMIT])
{
	int i;
    for(i=0; i< LIMIT; i++)
    	E[i] = C[i] * C[i];
}
void module_4(int D[LIMIT], int E[LIMIT], int F[LIMIT])
{
	int i;
    for(i=0; i< LIMIT; i++)
    	F[i] = D[i] + E[i];
}


void main_function(int A[LIMIT],  int F[LIMIT])
{
#pragma HLS dataflow
    int B[LIMIT], C[LIMIT], D[LIMIT], E[LIMIT];
         module_1(A, B, C);
         module_2(B, D);
         module_3(C, E);
         module_4(D, E, F);
}




