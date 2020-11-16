/*
+--------------------------------------------------------------------------+
| CHStone : a suite of benchmark programs for C-based High-Level Synthesis |
| ======================================================================== |
|                                                                          |
| * Collected and Modified : Y. Hara, H. Tomiyama, S. Honda,               |
|                            H. Takada and K. Ishii                        |
|                            Nagoya University, Japan                      |
|                                                                          |
| * Remark :                                                               |
|    1. This source code is modified to unify the formats of the benchmark |
|       programs in CHStone.                                               |
|    2. Test vectors are added for CHStone.                                |
|    3. If "main_result" is 0 at the end of the program, the program is    |
|       correctly executed.                                                |
|    4. Please follow the copyright of each benchmark program.             |
+--------------------------------------------------------------------------+
*/
/*
 * Copyright (C) 2008
 * Y. Hara, H. Tomiyama, S. Honda, H. Takada and K. Ishii
 * Nagoya University, Japan
 * All rights reserved.
 *
 * Disclaimer of Warranty
 *
 * These software programs are available to the user without any license fee or
 * royalty on an "as is" basis. The authors disclaims any and all warranties, 
 * whether express, implied, or statuary, including any implied warranties or 
 * merchantability or of fitness for a particular purpose. In no event shall the
 * copyright-holder be liable for any incidental, punitive, or consequential damages
 * of any kind whatsoever arising from the use of these programs. This disclaimer
 * of warranty extends to the user of these programs and user's customers, employees,
 * agents, transferees, successors, and assigns.
 *
 */
#include <stdio.h>
#include<string.h>
//#include "softfloat.c"
/*
+--------------------------------------------------------------------------+
| CHStone : a suite of benchmark programs for C-based High-Level Synthesis |
| ======================================================================== |
|                                                                          |
| * Collected and Modified : Y. Hara, H. Tomiyama, S. Honda,               |
|                            H. Takada and K. Ishii                        |
|                            Nagoya University, Japan                      |
|                                                                          |
| * Remark :                                                               |
|    1. This source code is modified to unify the formats of the benchmark |
|       programs in CHStone.                                               |
|    2. Test vectors are added for CHStone.                                |
|    3. If "main_result" is 0 at the end of the program, the program is    |
|       correctly executed.                                                |
|    4. Please follow the copyright of each benchmark program.             |
+--------------------------------------------------------------------------+
*/
/*============================================================================

This C source file is part of the SoftFloat IEC/IEEE Floating-point Arithmetic
Package, Release 2b.

Written by John R. Hauser.  This work was made possible in part by the
International Computer Science Institute, located at Suite 600, 1947 Center
Street, Berkeley, California 94704.  Funding was partially provided by the
National Science Foundation under grant MIP-9311980.  The original version
of this code was written as part of a project to build a fixed-point vector
processor in collaboration with the University of California at Berkeley,
overseen by Profs. Nelson Morgan and John Wawrzynek.  More information
is available through the Web page `http://www.cs.berkeley.edu/~jhauser/
arithmetic/SoftFloat.html'.

THIS SOFTWARE IS DISTRIBUTED AS IS, FOR FREE.  Although reasonable effort has
been made to avoid it, THIS SOFTWARE MAY CONTAIN FAULTS THAT WILL AT TIMES
RESULT IN INCORRECT BEHAVIOR.  USE OF THIS SOFTWARE IS RESTRICTED TO PERSONS
AND ORGANIZATIONS WHO CAN AND WILL TAKE FULL RESPONSIBILITY FOR ALL LOSSES,
COSTS, OR OTHER PROBLEMS THEY INCUR DUE TO THE SOFTWARE, AND WHO FURTHERMORE
EFFECTIVELY INDEMNIFY JOHN HAUSER AND THE INTERNATIONAL COMPUTER SCIENCE
INSTITUTE (possibly via similar legal warning) AGAINST ALL LOSSES, COSTS, OR
OTHER PROBLEMS INCURRED BY THEIR CUSTOMERS AND CLIENTS DUE TO THE SOFTWARE.

Derivative works are acceptable, even for commercial purposes, so long as
(1) the source code for the derivative work includes prominent notice that
the work is derivative, and (2) the source code includes prominent notice with
these four paragraphs for those parts of this code that are retained.

=============================================================================*/

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
shift64RightJamming (bits64 a, int16 count, bits64 * zPtr)
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
countLeadingZeros32 (bits32 a)
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
countLeadingZeros64 (bits64 a)
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
  shiftCount += countLeadingZeros32 (a);
  return shiftCount;

}


#define float_detect_tininess float_tininess_before_rounding
#define float64_default_nan LIT64( 0x7FFFFFFFFFFFFFFF )

/*----------------------------------------------------------------------------
| Takes two double-precision floating-point values `a' and `b', one of which
| is a NaN, and returns the appropriate NaN result.  If either `a' or `b' is a
| signaling NaN, the invalid exception is raised.
*----------------------------------------------------------------------------*/

/*static float64
propagateFloat64NaN (float64 a, float64 b)
{
  flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;

  aIsNaN = (LIT64 (0xFFE0000000000000) < (bits64) (a << 1));//float64_is_nan (a);
  aIsSignalingNaN = (((a >> 51) & 0xFFF) == 0xFFE) && (a & LIT64 (0x0007FFFFFFFFFFFF));//float64_is_signaling_nan (a);
  bIsNaN = (LIT64 (0xFFE0000000000000) < (bits64) (b << 1));//float64_is_nan (b);
  bIsSignalingNaN = (((b >> 51) & 0xFFF) == 0xFFE) && (b & LIT64 (0x0007FFFFFFFFFFFF));//float64_is_signaling_nan (b);
  a |= LIT64 (0x0008000000000000);
  b |= LIT64 (0x0008000000000000);
  if (aIsSignalingNaN | bIsSignalingNaN){
	int8 flags1=float_flag_invalid;
	float_exception_flags |= flags1;
    //float_raise (float_flag_invalid);
  }
  return bIsSignalingNaN ? b : aIsSignalingNaN ? a : bIsNaN ? b : a;

}/


/*----------------------------------------------------------------------------
| Takes an abstract floating-point value having sign `zSign', exponent `zExp',
| and significand `zSig', and returns the proper double-precision floating-
| point value corresponding to the abstract input.  Ordinarily, the abstract
| value is simply rounded and packed into the double-precision format, with
| the inexact exception raised if the abstract input cannot be represented
| exactly.  However, if the abstract value is too large, the overflow and
| inexact exceptions are raised and an infinity or maximal finite value is
| returned.  If the abstract value is too small, the input value is rounded
| to a subnormal number, and the underflow and inexact exceptions are raised
| if the abstract input cannot be represented exactly as a subnormal double-
| precision floating-point number.
|     The input significand `zSig' has its binary point between bits 62
| and 61, which is 10 bits to the left of the usual location.  This shifted
| significand must be normalized or smaller.  If `zSig' is not normalized,
| `zExp' must be 0; in that case, the result returned is a subnormal number,
| and it must not require rounding.  In the usual case that `zSig' is
| normalized, `zExp' must be 1 less than the ``true'' floating-point exponent.
| The handling of underflow and overflow follows the IEC/IEEE Standard for
| Binary Floating-Point Arithmetic.
*----------------------------------------------------------------------------*/

static float64
roundAndPackFloat64 (flag zSign, int16 zExp, bits64 zSig)
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
	  shift64RightJamming (zSig, -zExp, &zSig);
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
addFloat64Sigs (float64 a, float64 b, flag zSign)
{
  int16 aExp, bExp, zExp;
  bits64 aSig, bSig, zSig;
  int16 expDiff;
	//printf("a:%llu\nb:%llu\n",a,b);
  aSig = a & LIT64 (0x000FFFFFFFFFFFFF);//extractFloat64Frac (a);
  aExp = (a >> 52) & 0x7FF;//extractFloat64Exp (a);
  bSig = b & LIT64 (0x000FFFFFFFFFFFFF);//extractFloat64Frac (b);
  bExp = (b >> 52) & 0x7FF;//extractFloat64Exp (b);
  expDiff = aExp - bExp;
  aSig <<= 9;
  bSig <<= 9;
  
  if (0 < expDiff)
    {		
      if (aExp == 0x7FF)
		{
			
		  if (aSig){
			  flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;
			  aIsNaN = (LIT64 (0xFFE0000000000000) < (bits64) (a << 1));//float64_is_nan (a);
			  aIsSignalingNaN = (((a >> 51) & 0xFFF) == 0xFFE) && (a & LIT64 (0x0007FFFFFFFFFFFF));//float64_is_signaling_nan (a);
			  bIsNaN = (LIT64 (0xFFE0000000000000) < (bits64) (b << 1));//float64_is_nan (b);
			  bIsSignalingNaN = (((b >> 51) & 0xFFF) == 0xFFE) && (b & LIT64 (0x0007FFFFFFFFFFFF));//float64_is_signaling_nan (b);
			  a |= LIT64 (0x0008000000000000);
			  b |= LIT64 (0x0008000000000000);
			  if (aIsSignalingNaN | bIsSignalingNaN){
				int8 flags1=float_flag_invalid;
				float_exception_flags |= flags1;				
			  }
			  return bIsSignalingNaN ? b : aIsSignalingNaN ? a : bIsNaN ? b : a;
			//return propagateFloat64NaN (a, b);
		  }	  

		  return a;
		}

      if (bExp == 0)
		--expDiff;
      else
		bSig |= LIT64 (0x2000000000000000);
      	shift64RightJamming (bSig, expDiff, &bSig);
        zExp = aExp;
    }
  else if (expDiff < 0)
    {
      if (bExp == 0x7FF)
	{
	  if (bSig){
		  flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;

		  aIsNaN = (LIT64 (0xFFE0000000000000) < (bits64) (a << 1));//float64_is_nan (a);
		  aIsSignalingNaN = (((a >> 51) & 0xFFF) == 0xFFE) && (a & LIT64 (0x0007FFFFFFFFFFFF));//float64_is_signaling_nan (a);
		  bIsNaN = (LIT64 (0xFFE0000000000000) < (bits64) (b << 1));//float64_is_nan (b);
		  bIsSignalingNaN = (((b >> 51) & 0xFFF) == 0xFFE) && (b & LIT64 (0x0007FFFFFFFFFFFF));//float64_is_signaling_nan (b);
		  a |= LIT64 (0x0008000000000000);
		  b |= LIT64 (0x0008000000000000);
		  if (aIsSignalingNaN | bIsSignalingNaN){
			int8 flags1=float_flag_invalid;
			float_exception_flags |= flags1;
			//float_raise (float_flag_invalid);
		  }
		  return bIsSignalingNaN ? b : aIsSignalingNaN ? a : bIsNaN ? b : a;
	    //return propagateFloat64NaN (a, b);
	  }
	  
	  int16 zExp1=0x7FF;
	  bits64 zSig1=0;

	  return ((((bits64) zSign) << 63) + (((bits64) zExp1) << 52) + zSig1);
	  //return packFloat64 (zSign, 0x7FF, 0);
	}
      if (aExp == 0)
	++expDiff;
      else
	{
	  aSig |= LIT64 (0x2000000000000000);
	}
      shift64RightJamming (aSig, -expDiff, &aSig);
      zExp = bExp;
    }
  else
    {		
      if (aExp == 0x7FF)
	{
	  if (aSig | bSig){
		  flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;
		  aIsNaN = (LIT64 (0xFFE0000000000000) < (bits64) (a << 1));//float64_is_nan (a);
		  aIsSignalingNaN = (((a >> 51) & 0xFFF) == 0xFFE) && (a & LIT64 (0x0007FFFFFFFFFFFF));//float64_is_signaling_nan (a);
		  bIsNaN = (LIT64 (0xFFE0000000000000) < (bits64) (b << 1));//float64_is_nan (b);
		  bIsSignalingNaN = (((b >> 51) & 0xFFF) == 0xFFE) && (b & LIT64 (0x0007FFFFFFFFFFFF));//float64_is_signaling_nan (b);
		  a |= LIT64 (0x0008000000000000);
		  b |= LIT64 (0x0008000000000000);
		  if (aIsSignalingNaN | bIsSignalingNaN){
			int8 flags1=float_flag_invalid;
			float_exception_flags |= flags1;
			//float_raise (float_flag_invalid);
		  }
		  return bIsSignalingNaN ? b : aIsSignalingNaN ? a : bIsNaN ? b : a;
	    //return propagateFloat64NaN (a, b);
	  }

	  return a;
	}
      if (aExp == 0){
		  int16 zExp1=0;
		  bits64 zSig1=(aSig + bSig)>>9;

		  return ((((bits64) zSign) << 63) + (((bits64) zExp1) << 52) + zSig1);	  
	   //return packFloat64 (zSign, 0, (aSig + bSig) >> 9);
	  }
      zSig = LIT64 (0x4000000000000000) + aSig + bSig;
      zExp = aExp;
	  
      goto roundAndPack;
    }
  aSig |= LIT64 (0x2000000000000000);
  
  zSig = (aSig + bSig) << 1;
  --zExp;
  if ((sbits64) zSig < 0)
    {

      zSig = aSig + bSig;	  
      ++zExp;
    }
roundAndPack:
  return roundAndPackFloat64 (zSign, zExp, zSig);

}

float64
float64_add (float64 a, float64 b)
{
  flag aSign, bSign;

  aSign = a>>63;
  bSign = b>>63;
  if (aSign == bSign)
    return addFloat64Sigs (a, b, aSign);
  //else
    //return subFloat64Sigs (a, b, aSign);

}


double
ullong_to_double (unsigned long long x)
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

unsigned long long top(float64 a_input,float64 b_input,float64 z_output)
{    
	/*int i;
	int error=0;
	 for(i=0;i<1000;i++){*/
		  float64 x1, x2;      
		  float64 result;
		  x1 = a_input;
		  x2 = b_input;
		  result=float64_add (x1, x2);
		  return result;
	/*	  if(result!=z_output[i]){
			error++;
		  }
	  }*/
}
