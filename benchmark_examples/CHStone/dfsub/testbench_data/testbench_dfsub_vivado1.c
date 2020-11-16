#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
#define COL 2
#define INPUT 30000



//#include "milieu.h"
typedef int flag;
typedef int int8;
typedef int int16;

typedef unsigned short int bits16;
typedef unsigned int bits32;
typedef unsigned long long int bits64;
typedef signed long long int sbits64;

#define LIT64( a ) a##LL
#define INLINE
//#include "SPARC-GCC.h"
//#include "softfloat.h"
/*----------------------------------------------------------------------------
| Software IEC/IEEE floating-point types.
*----------------------------------------------------------------------------*/
typedef unsigned int float32;
typedef unsigned long long float64;

/*----------------------------------------------------------------------------
| Software IEC/IEEE floating-point underflow tininess-detection mode.
*----------------------------------------------------------------------------*/
#define float_tininess_after_rounding   0
#define float_tininess_before_rounding  1

/*----------------------------------------------------------------------------
| Software IEC/IEEE floating-point rounding mode.
*----------------------------------------------------------------------------*/
#define float_round_nearest_even  0
#define float_round_to_zero       1
#define float_round_up            2
#define float_round_down          3

/*----------------------------------------------------------------------------
| Software IEC/IEEE floating-point exception flags.
*----------------------------------------------------------------------------*/
#define float_flag_inexact     1
#define float_flag_divbyzero   2
#define float_flag_underflow   4
#define float_flag_overflow    8
#define float_flag_invalid    16


int8 float_rounding_mode = float_round_nearest_even;
int8 float_exception_flags = 0;



/*----------------------------------------------------------------------------
| Shifts `a' right by the number of bits given in `count'.  If any nonzero
| bits are shifted off, they are ``jammed'' into the least significant bit of
| the result by setting the least significant bit to 1.  The value of `count'
| can be arbitrarily large; in particular, if `count' is greater than 64, the
| result will be either 0 or 1, depending on whether `a' is zero or nonzero.
| The result is stored in the location pointed to by `zPtr'.
*----------------------------------------------------------------------------*/

INLINE void
shift64RightJamming1 (bits64 a, int16 count, bits64 * zPtr)
{
  bits64 z;
  if (count == 0)
    {		
      z = a;
    }
  else if (count < 64)
    {
      z = (a >> count) | ((a << ((-count) & 63)) != 0);
    }
  else
    {
      z = (a != 0);
    }
  *zPtr = z;	
}

/*----------------------------------------------------------------------------
| Returns the number of leading 0 bits before the most-significant 1 bit of
| `a'.  If `a' is zero, 32 is returned.
*----------------------------------------------------------------------------*/

static int8
countLeadingZeros321 (bits32 a)
{
  static const int8 countLeadingZerosHigh[256] = {
    8, 7, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };
  int8 shiftCount;

  shiftCount = 0;
  if (a < 0x10000)
    {
      shiftCount += 16;
      a <<= 16;
    }
  if (a < 0x1000000)
    {
      shiftCount += 8;
      a <<= 8;
    }
  shiftCount += countLeadingZerosHigh[a >> 24];
  return shiftCount;

}

/*----------------------------------------------------------------------------
| Returns the number of leading 0 bits before the most-significant 1 bit of
| `a'.  If `a' is zero, 64 is returned.
*----------------------------------------------------------------------------*/

static int8
countLeadingZeros641 (bits64 a)
{
  int8 shiftCount;

  shiftCount = 0;
  if (a < ((bits64) 1) << 32)
    {
      shiftCount += 32;
    }
  else
    {
      a >>= 32;
    }
  shiftCount += countLeadingZeros321 (a);
  return shiftCount;

}


#define float_detect_tininess float_tininess_before_rounding
#define float64_default_nan LIT64( 0x7FFFFFFFFFFFFFFF )


static float64
roundAndPackFloat641 (flag zSign, int16 zExp, bits64 zSig)
{
  int8 roundingMode;
  flag roundNearestEven, isTiny;
  int16 roundIncrement, roundBits;

  roundingMode = float_rounding_mode;
  roundNearestEven = (roundingMode == float_round_nearest_even);
  roundIncrement = 0x200;

  if (!roundNearestEven)
    {		
      if (roundingMode == float_round_to_zero)
	{
	  roundIncrement = 0;
	}
      else
	{
	  roundIncrement = 0x3FF;
	  if (zSign)
	    {
	      if (roundingMode == float_round_up)
		roundIncrement = 0;
	    }
	  else
	    {
	      if (roundingMode == float_round_down)
		roundIncrement = 0;
	    }
	}
    }
  roundBits = zSig & 0x3FF;
  if (0x7FD <= (bits16) zExp)
    {
		
      if ((0x7FD < zExp)
	  || ((zExp == 0x7FD) && ((sbits64) (zSig + roundIncrement) < 0)))
	{
		int8 flags1=(float_flag_overflow | float_flag_inexact);
		float_exception_flags |= flags1;
	  //float_raise (float_flag_overflow | float_flag_inexact);
	  
	  int16 zExp1=0x7FF;
	  bits64 zSig1=0;
	  
	  return ((((bits64) zSign) << 63) + (((bits64) zExp1) << 52) + zSig1)-(roundIncrement == 0);
	  //return packFloat64 (zSign, 0x7FF, 0) - (roundIncrement == 0);
	}
      if (zExp < 0)
	{
	  isTiny = (float_detect_tininess == float_tininess_before_rounding)
	    || (zExp < -1)
	    || (zSig + roundIncrement < LIT64 (0x8000000000000000));
	  shift64RightJamming1 (zSig, -zExp, &zSig);
	  zExp = 0;
	  roundBits = zSig & 0x3FF;
	  if (isTiny && roundBits){
		  int8 flags1=(float_flag_underflow);
			float_exception_flags |= flags1;
	  }
	    //float_raise (float_flag_underflow);
	}
    }
	
  if (roundBits)
    float_exception_flags |= float_flag_inexact;

  
  zSig = (zSig + roundIncrement) >> 10;
  zSig &= ~(((roundBits ^ 0x200) == 0) & roundNearestEven);
  if (zSig == 0){

    zExp = 0;
  }

  int16 zExp1=zExp;
  bits64 zSig1=zSig;
  return ((((bits64) zSign) << 63) + (((bits64) zExp1) << 52) + zSig1);
  //return packFloat64 (zSign, zExp, zSig);

}

/*----------------------------------------------------------------------------
| Returns the result of adding the absolute values of the double-precision
| floating-point values `a' and `b'.  If `zSign' is 1, the sum is negated
| before being returned.  `zSign' is ignored if the result is a NaN.
| The addition is performed according to the IEC/IEEE Standard for Binary
| Floating-Point Arithmetic.
*----------------------------------------------------------------------------*/

static float64
normalizeRoundAndPackFloat64 (flag zSign, int16 zExp, bits64 zSig)
{
  int8 shiftCount;

  shiftCount = countLeadingZeros641 (zSig) - 1;
  //printf("shiftcount:%llu\n",shiftCount);
  //printf("zExp:%llu\n",zExp - shiftCount);
  //printf("zSig:%llu\n",zSig << shiftCount);
  //printf("zSign:%llu\n",zSign);
  return roundAndPackFloat641 (zSign, zExp - shiftCount, zSig << shiftCount);

}

static float64
subFloat64Sigs1 (float64 a, float64 b, flag zSign)
{
  int16 aExp, bExp, zExp;
  bits64 aSig, bSig, zSig;
  int16 expDiff;

  aSig = extractFloat64Frac (a);
  aExp = extractFloat64Exp (a);
  bSig = extractFloat64Frac (b);
  bExp = extractFloat64Exp (b);
  expDiff = aExp - bExp;
  aSig <<= 10;
  bSig <<= 10;
  //printf("aSig: %llu\n",aSig);
  if (0 < expDiff)
    goto aExpBigger;
  if (expDiff < 0)
    goto bExpBigger;
  ////printf("NO GOTO\n	");
  if (aExp == 0x7FF)
    {
      if (aSig | bSig){
		  float64 a1=a;
		  float64 b1=b;
		flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;
		  aIsNaN = float64_is_nan (a1);
		  aIsSignalingNaN = float64_is_signaling_nan (a1);
		  bIsNaN = float64_is_nan (b1);
		  bIsSignalingNaN = float64_is_signaling_nan (b1);
		  a1 |= LIT64 (0x0008000000000000);
		  b1 |= LIT64 (0x0008000000000000);
		  if (aIsSignalingNaN | bIsSignalingNaN)
			float_raise (float_flag_invalid);
		  return bIsSignalingNaN ? b1 : aIsSignalingNaN ? a1 : bIsNaN ? b1 : a1;
	//return propagateFloat64NaN (a, b);
	  }
      float_raise (float_flag_invalid);
      return float64_default_nan;
    }
  if (aExp == 0)
    {
      aExp = 1;
      bExp = 1;
    }
  if (bSig < aSig)
    goto aBigger;
  if (aSig < bSig)
    goto bBigger;
  return packFloat64 (float_rounding_mode == float_round_down, 0, 0);
bExpBigger:
  if (bExp == 0x7FF)
    {
      if (bSig){
		  float64 a1=a;
		  float64 b1=b;
		flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;
		  aIsNaN = float64_is_nan (a1);
		  aIsSignalingNaN = float64_is_signaling_nan (a1);
		  bIsNaN = float64_is_nan(b1);
		  bIsSignalingNaN = float64_is_signaling_nan (b1);
		  a1 |= LIT64 (0x0008000000000000);
		  b1 |= LIT64 (0x0008000000000000);
		  if (aIsSignalingNaN | bIsSignalingNaN)
			float_raise (float_flag_invalid);
		  return bIsSignalingNaN ? b1 : aIsSignalingNaN ? a1 : bIsNaN ? b1 : a1;
	  }
      return packFloat64 (zSign ^ 1, 0x7FF, 0);
    }

  if (aExp == 0){
    ++expDiff;
  }else{
    aSig |= LIT64 (0x4000000000000000);
  }

  shift64RightJamming1 (aSig, -expDiff, &aSig);
  bSig |= LIT64 (0x4000000000000000);

bBigger:

  zSig = bSig - aSig;
  zExp = bExp;
  zSign ^= 1;

  goto normalizeRoundAndPack;
aExpBigger:
  if (aExp == 0x7FF)
    {
      if (aSig){
		  float64 a1=a;
		  float64 b1=b;
		flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;
		  aIsNaN = float64_is_nan (a1);
		  aIsSignalingNaN = float64_is_signaling_nan (a1);
		  bIsNaN = float64_is_nan (b1);
		  bIsSignalingNaN = float64_is_signaling_nan (b1);
		  a1 |= LIT64 (0x0008000000000000);
		  b1 |= LIT64 (0x0008000000000000);
		  if (aIsSignalingNaN | bIsSignalingNaN)
			float_raise (float_flag_invalid);
		  return bIsSignalingNaN ? b1 : aIsSignalingNaN ? a1 : bIsNaN ? b1 : a1;
	    //return propagateFloat64NaN (a, b);
	  }
      return a;
    }
  if (bExp == 0)
    --expDiff;
  else
    bSig |= LIT64 (0x4000000000000000);
  shift64RightJamming1 (bSig, expDiff, &bSig);
  aSig |= LIT64 (0x4000000000000000);
aBigger:
  zSig = aSig - bSig;
  zExp = aExp;
normalizeRoundAndPack:
  --zExp;
  //printf("FINAL\n");
  //printf("zExp:%llu\n",zExp);
  //printf("zSig:%llu\n",zSig);
  //printf("zSign:%llu\n",zSign);
  return normalizeRoundAndPackFloat64 (zSign, zExp, zSig);

}


float64
float64_add1 (float64 a, float64 b)
{
  flag aSign, bSign;

  aSign = a>>63;
  bSign = b>>63;
  if (aSign != bSign)
    return subFloat64Sigs1 (a, b, aSign);

}


double
ullong_to_double1 (unsigned long long x)
{
  union
  {
    double d;
    unsigned long long ll;
  } t;

  t.ll = x;
  return t.d;
}

/*
+--------------------------------------------------------------------------+
| * Test Vectors (added for CHStone)                                       |
|     a_input, b_input : input data                                        |
|     z_output : expected output data                                      |
+--------------------------------------------------------------------------+
*/

#define N 20

int
top_main1  (float64 a_input,float64 b_input,float64 z_output)
{

	int main_result;
	  int i;
	  float64 x1, x2;
	      main_result = 0;
	//      for (i = 0; i < 20; i++)
	//	{
		  float64 result;
		  x1 = a_input;
		  x2 = b_input;
		  result = float64_add (x1, x2);
		  main_result += (result != z_output);
		  return main_result;
}



int main(){
	  clock_t t;
	  t = clock();
	  FILE *fp,*fp1;
	  fp=fopen("input_data1.txt","r");
	  fp1=fopen("output_data1.txt","r");
	  
	
	  int index=0;
	  unsigned long long input[COL];	  
       	  unsigned long long out;
	 unsigned long long a_input_rom[INPUT],b_input_rom[INPUT],z_output_rom[INPUT];
	  int error=0;	  
	  int inp_no=0;
	  while(!feof(fp))
		{			

			char line [ 1000 ];
			char line1 [ 1000 ];			
			fscanf(fp,"%s",line);			
			input[index]=atof(line);
			index = (index+1)%COL;			
			if(index==0){				
				fscanf(fp1,"%s",&line1);
				out=atof(line1);
				a_input_rom[inp_no]=input[0];
				b_input_rom[inp_no]=input[1];
				z_output_rom[inp_no]=out;
				inp_no++;								
			}
			
		}

		int ap_clk=0;
		int ap_done=0;
		int ap_idle=0;
		int ap_ready=1;
		int ap_return=0;
		int ap_rst=0;
		int ap_start=1;
		int *ap_clk1=&ap_clk;
		int *ap_done1=&ap_done;
		int *ap_idle1=&ap_idle;
		int *ap_ready1=&ap_ready;
		int *ap_return1=&ap_return;
		int *ap_rst1=&ap_rst;
		int *ap_start1=&ap_start;
		int dummy=0;
		//top(ap_clk1,ap_done1,ap_idle1,ap_ready1,ap_return1,ap_rst1,ap_start1,dummy,a_input_rom,b_input_rom,z_output_rom);
		//top_main(ap_clk1,ap_done1,ap_idle1,ap_ready1,ap_return1,ap_rst1,ap_start1,dummy,a_input_rom,b_input_rom,z_output_rom);
		unsigned long long result;
		int i11;
		for(i11=0;i11<INPUT;i11++){
			result=top_main(a_input_rom[i11],b_input_rom[i11],z_output_rom[i11]);
			//fprintf(fp1,"%lld\n",result);
			result=top_main1(a_input_rom[i11],b_input_rom[i11],z_output_rom[i11]);
		}


	  t = clock() - t;
	  double time_taken = ((double)t)/CLOCKS_PER_SEC;
	  printf("Time taken: %f seconds \n", time_taken);
}
