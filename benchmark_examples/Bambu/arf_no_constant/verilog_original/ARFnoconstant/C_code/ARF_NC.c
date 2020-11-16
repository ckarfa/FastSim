
#include "hls_arfnc.h"

void hls_macc(unsigned int i1,unsigned int i2,unsigned int i3,unsigned int i4,unsigned int i6,
         unsigned int *o1,unsigned int *o2,unsigned int *o3,unsigned int *o4,unsigned int G1,unsigned int G2, unsigned int G3, unsigned int G4, unsigned int GG1, unsigned int GG2){

  unsigned int op1,op2,op3,op4,op5,op6,op7,op8;
  unsigned int op9,op10,op11,op12,op13,op14,op15,op16;
  unsigned int op17,op18,op19,op20,op21,op22,op23,op24;
  unsigned int op25,op26,op27,op28;

  op1 = GG1 * i1;
  op2 = GG2 * i2;
  op3 = G1 * i2;
  op4 = G2 * i1;
  if (G1 > 10)
  {
     op5 = G1 * i3;
     op5 = op5 + GG1;
     op6 = op5 - op4;
  }
  else
  {
     op5 = i3 * i4;
     op6 = op5 - op3;
  }
  if (op5 < op4)
  {
     op6 = G2 * i4;
     op6 = op6 - i3;
     op17 = op6 - G2;
  }
  else
  {
     op17 = op2 - op4;
     op2 = op4 - op17;
     op17 = op17 - op2;
  }
  op7 = G1 * i4;
  op8 = G2 * i3;

  op9 = op1 + op2;
  op10 = op3 + op4;
  op11 = op4 + op6;
  op12 = op7 + op8;

  op13 = op11 + G1;
  *o1 = op13;
  op14 = i6 + op12;
  *o2 = op14;
}



