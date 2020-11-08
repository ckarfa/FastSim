#include<stdio.h>
#include<string.h>
#include <time.h>

#include<stdio.h>
#include "aes.h"
#define COL 16
const int Sbox1[16][16] = {
  {0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b,
   0xfe, 0xd7, 0xab, 0x76},
  {0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf,
   0x9c, 0xa4, 0x72, 0xc0},
  {0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1,
   0x71, 0xd8, 0x31, 0x15},
  {0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2,
   0xeb, 0x27, 0xb2, 0x75},
  {0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3,
   0x29, 0xe3, 0x2f, 0x84},
  {0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39,
   0x4a, 0x4c, 0x58, 0xcf},
  {0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f,
   0x50, 0x3c, 0x9f, 0xa8},
  {0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21,
   0x10, 0xff, 0xf3, 0xd2},
  {0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d,
   0x64, 0x5d, 0x19, 0x73},
  {0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14,
   0xde, 0x5e, 0x0b, 0xdb},
  {0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62,
   0x91, 0x95, 0xe4, 0x79},
  {0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea,
   0x65, 0x7a, 0xae, 0x08},
  {0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f,
   0x4b, 0xbd, 0x8b, 0x8a},
  {0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9,
   0x86, 0xc1, 0x1d, 0x9e},
  {0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9,
   0xce, 0x55, 0x28, 0xdf},
  {0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f,
   0xb0, 0x54, 0xbb, 0x16}
};

/* ********* ByteSub & ShiftRow ********* */
void
ByteSub_ShiftRow1 (int statemt[32], int nb)
{
  int temp;

  switch (nb)
    {
    case 4:
      temp = Sbox1[statemt[1] >> 4][statemt[1] & 0xf];
      statemt[1] = Sbox1[statemt[5] >> 4][statemt[5] & 0xf];
      statemt[5] = Sbox1[statemt[9] >> 4][statemt[9] & 0xf];
      statemt[9] = Sbox1[statemt[13] >> 4][statemt[13] & 0xf];
      statemt[13] = temp;
//	printf("st[1]:%d st[5]:%d st[9]:%d st[13]:%d\n",statemt[1],statemt[5],statemt[9],statemt[13]);

      temp = Sbox1[statemt[2] >> 4][statemt[2] & 0xf];
      statemt[2] = Sbox1[statemt[10] >> 4][statemt[10] & 0xf];
      statemt[10] = temp;
      temp = Sbox1[statemt[6] >> 4][statemt[6] & 0xf];
      statemt[6] = Sbox1[statemt[14] >> 4][statemt[14] & 0xf];
      statemt[14] = temp;

      temp = Sbox1[statemt[3] >> 4][statemt[3] & 0xf];
      statemt[3] = Sbox1[statemt[15] >> 4][statemt[15] & 0xf];
      statemt[15] = Sbox1[statemt[11] >> 4][statemt[11] & 0xf];
      statemt[11] = Sbox1[statemt[7] >> 4][statemt[7] & 0xf];
      statemt[7] = temp;

      statemt[0] = Sbox1[statemt[0] >> 4][statemt[0] & 0xf];
      statemt[4] = Sbox1[statemt[4] >> 4][statemt[4] & 0xf];
      statemt[8] = Sbox1[statemt[8] >> 4][statemt[8] & 0xf];
      statemt[12] = Sbox1[statemt[12] >> 4][statemt[12] & 0xf];
      break;
    case 6:
      temp = Sbox1[statemt[1] >> 4][statemt[1] & 0xf];
      statemt[1] = Sbox1[statemt[5] >> 4][statemt[5] & 0xf];
      statemt[5] = Sbox1[statemt[9] >> 4][statemt[9] & 0xf];
      statemt[9] = Sbox1[statemt[13] >> 4][statemt[13] & 0xf];
      statemt[13] = Sbox1[statemt[17] >> 4][statemt[17] & 0xf];
      statemt[17] = Sbox1[statemt[21] >> 4][statemt[21] & 0xf];
      statemt[21] = temp;

      temp = Sbox1[statemt[2] >> 4][statemt[2] & 0xf];
      statemt[2] = Sbox1[statemt[10] >> 4][statemt[10] & 0xf];
      statemt[10] = Sbox1[statemt[18] >> 4][statemt[18] & 0xf];
      statemt[18] = temp;
      temp = Sbox1[statemt[6] >> 4][statemt[6] & 0xf];
      statemt[6] = Sbox1[statemt[14] >> 4][statemt[14] & 0xf];
      statemt[14] = Sbox1[statemt[22] >> 4][statemt[22] & 0xf];
      statemt[22] = temp;

      temp = Sbox1[statemt[3] >> 4][statemt[3] & 0xf];
      statemt[3] = Sbox1[statemt[15] >> 4][statemt[15] & 0xf];
      statemt[15] = temp;
      temp = Sbox1[statemt[7] >> 4][statemt[7] & 0xf];
      statemt[7] = Sbox1[statemt[19] >> 4][statemt[19] & 0xf];
      statemt[19] = temp;
      temp = Sbox1[statemt[11] >> 4][statemt[11] & 0xf];
      statemt[11] = Sbox1[statemt[23] >> 4][statemt[23] & 0xf];
      statemt[23] = temp;

      statemt[0] = Sbox1[statemt[0] >> 4][statemt[0] & 0xf];
      statemt[4] = Sbox1[statemt[4] >> 4][statemt[4] & 0xf];
      statemt[8] = Sbox1[statemt[8] >> 4][statemt[8] & 0xf];
      statemt[12] = Sbox1[statemt[12] >> 4][statemt[12] & 0xf];
      statemt[16] = Sbox1[statemt[16] >> 4][statemt[16] & 0xf];
      statemt[20] = Sbox1[statemt[20] >> 4][statemt[20] & 0xf];
      break;
    case 8:
      temp = Sbox1[statemt[1] >> 4][statemt[1] & 0xf];
      statemt[1] = Sbox1[statemt[5] >> 4][statemt[5] & 0xf];
      statemt[5] = Sbox1[statemt[9] >> 4][statemt[9] & 0xf];
      statemt[9] = Sbox1[statemt[13] >> 4][statemt[13] & 0xf];
      statemt[13] = Sbox1[statemt[17] >> 4][statemt[17] & 0xf];
      statemt[17] = Sbox1[statemt[21] >> 4][statemt[21] & 0xf];
      statemt[21] = Sbox1[statemt[25] >> 4][statemt[25] & 0xf];
      statemt[25] = Sbox1[statemt[29] >> 4][statemt[29] & 0xf];
      statemt[29] = temp;

      temp = Sbox1[statemt[2] >> 4][statemt[2] & 0xf];
      statemt[2] = Sbox1[statemt[14] >> 4][statemt[14] & 0xf];
      statemt[14] = Sbox1[statemt[26] >> 4][statemt[26] & 0xf];
      statemt[26] = Sbox1[statemt[6] >> 4][statemt[6] & 0xf];
      statemt[6] = Sbox1[statemt[18] >> 4][statemt[18] & 0xf];
      statemt[18] = Sbox1[statemt[30] >> 4][statemt[30] & 0xf];
      statemt[30] = Sbox1[statemt[10] >> 4][statemt[10] & 0xf];
      statemt[10] = Sbox1[statemt[22] >> 4][statemt[22] & 0xf];
      statemt[22] = temp;

      temp = Sbox1[statemt[3] >> 4][statemt[3] & 0xf];
      statemt[3] = Sbox1[statemt[19] >> 4][statemt[19] & 0xf];
      statemt[19] = temp;
      temp = Sbox1[statemt[7] >> 4][statemt[7] & 0xf];
      statemt[7] = Sbox1[statemt[23] >> 4][statemt[23] & 0xf];
      statemt[23] = temp;
      temp = Sbox1[statemt[11] >> 4][statemt[11] & 0xf];
      statemt[11] = Sbox1[statemt[27] >> 4][statemt[27] & 0xf];
      statemt[27] = temp;
      temp = Sbox1[statemt[15] >> 4][statemt[15] & 0xf];
      statemt[15] = Sbox1[statemt[31] >> 4][statemt[31] & 0xf];
      statemt[31] = temp;

      statemt[0] = Sbox1[statemt[0] >> 4][statemt[0] & 0xf];
      statemt[4] = Sbox1[statemt[4] >> 4][statemt[4] & 0xf];
      statemt[8] = Sbox1[statemt[8] >> 4][statemt[8] & 0xf];
      statemt[12] = Sbox1[statemt[12] >> 4][statemt[12] & 0xf];
      statemt[16] = Sbox1[statemt[16] >> 4][statemt[16] & 0xf];
      statemt[20] = Sbox1[statemt[20] >> 4][statemt[20] & 0xf];
      statemt[24] = Sbox1[statemt[24] >> 4][statemt[24] & 0xf];
      statemt[28] = Sbox1[statemt[28] >> 4][statemt[28] & 0xf];
      break;
    }
}

int
SubByte1 (int in)
{
  return Sbox1[(in / 16)][(in % 16)];
}

/* ******** MixColumn ********** */
int
MixColumn_AddRoundKey1 (int statemt[32], int nb, int n)
{
  int ret[8 * 4], j;
  register int x;

int word[4][120]={43,40,171,9,160,136,35,42,242,122,89,115,61,71,30,109,239,168,182,219,212,124,202,17,109,17,219,202,78,95,132,78,234,181,49,127,172,25,40,87,208,201,225,182,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
,126,174,247,207,250,84,163,108,194,150,53,89,128,22,35,122,68,82,113,11,209,131,242,249,136,11,249,0,84,95,166,166,210,141,43,141,119,250,209,92,20,238,63,99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
,21,210,21,79,254,44,57,118,149,185,128,246,71,254,126,136,165,91,37,173,198,157,184,21,163,62,134,147,247,201,79,220,115,186,245,41,102,220,41,0,249,37,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
22,166,136,60,23,177,57,5,242,67,122,127,125,62,68,59,65,127,59,0,248,135,188,188,122,253,65,253,14,243,178,79,33,210,96,47,243,33,65,110,168,137,200,166,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


  for (j = 0; j < nb; ++j)
    {
      ret[j * 4] = (statemt[j * 4] << 1);
      if ((ret[j * 4] >> 8) == 1)
	ret[j * 4] ^= 283;
	x = statemt[1 + j * 4];
	x ^= (x << 1);
      if ((x >> 8) == 1)
	ret[j * 4] ^= (x ^ 283);
      else
	ret[j * 4] ^= x;
      ret[j * 4] ^=
	statemt[2 + j * 4] ^ statemt[3 + j * 4] ^ word[0][j + nb * n];

      ret[1 + j * 4] = (statemt[1 + j * 4] << 1);
      if ((ret[1 + j * 4] >> 8) == 1)
	ret[1 + j * 4] ^= 283;
      x = statemt[2 + j * 4];
      x ^= (x << 1);
      if ((x >> 8) == 1)
	ret[1 + j * 4] ^= (x ^ 283);
      else
	ret[1 + j * 4] ^= x;
      ret[1 + j * 4] ^=
	statemt[3 + j * 4] ^ statemt[j * 4] ^ word[1][j + nb * n];

      ret[2 + j * 4] = (statemt[2 + j * 4] << 1);
      if ((ret[2 + j * 4] >> 8) == 1)
	ret[2 + j * 4] ^= 283;
      x = statemt[3 + j * 4];
      x ^= (x << 1);
      if ((x >> 8) == 1)
	ret[2 + j * 4] ^= (x ^ 283);
      else
	ret[2 + j * 4] ^= x;
      ret[2 + j * 4] ^=
	statemt[j * 4] ^ statemt[1 + j * 4] ^ word[2][j + nb * n];

      ret[3 + j * 4] = (statemt[3 + j * 4] << 1);
      if ((ret[3 + j * 4] >> 8) == 1)
	ret[3 + j * 4] ^= 283;
      x = statemt[j * 4];
      x ^= (x << 1);
      if ((x >> 8) == 1)
	ret[3 + j * 4] ^= (x ^ 283);
      else
	ret[3 + j * 4] ^= x;
      ret[3 + j * 4] ^=
	statemt[1 + j * 4] ^ statemt[2 + j * 4] ^ word[3][j + nb * n];
    }

  for (j = 0; j < nb; ++j)
    {
      statemt[j * 4] = ret[j * 4];
      statemt[1 + j * 4] = ret[1 + j * 4];
      statemt[2 + j * 4] = ret[2 + j * 4];
      statemt[3 + j * 4] = ret[3 + j * 4];
    }
  return 0;
}

/* ******** AddRoundKey ********** */
int

AddRoundKey1 (int statemt[32], int type, int n,int word[4][120])
{
  int j, nb;
  switch (type)
    {
    case 128128:
    case 192128:
    case 256128:
      nb = 4;
      break;
    case 128192:
    case 192192:
    case 256192:
      nb = 6;
      break;
    case 128256:
    case 192256:
    case 256256:
      nb = 8;
      break;
    }
  for (j = 0; j < nb; ++j)
    {
	//printf("statemt:%d  word:%d\n",statemt[j * 4],word[0][j + nb * n]);
      statemt[j * 4] ^= word[0][j + nb * n];
      statemt[1 + j * 4] ^= word[1][j + nb * n];
      statemt[2 + j * 4] ^= word[2][j + nb * n];
      statemt[3 + j * 4] ^= word[3][j + nb * n];
    }
  return 0;
}

const int Rcon01[30] = {
  0x01, 0x02, 0x04, 0x08,
  0x10, 0x20, 0x40, 0x80,
  0x1b, 0x36, 0x6c, 0xd8,
  0xab, 0x4d, 0x9a, 0x2f,
  0x5e, 0xbc, 0x63, 0xc6,
  0x97, 0x35, 0x6a, 0xd4,
  0xb3, 0x7d, 0xfa, 0xef,
  0xc5, 0x91,
};

/*  **************** key expand ************************ */
	int
	KeySchedule1 (int type, int key[32])
	{

	  int nk, nb, round_val;
	  int i, j, temp[4];
	  switch (type)
		{
		case 128128:
		  nk = 4;
		  nb = 4;
		  round_val = 10;
		  break;
	   case 128192:
		  nk = 4;
		  nb = 6;
		  round_val = 12;
		  break;
		case 128256:
		  nk = 4;
		  nb = 8;
		  round_val = 14;
		  break;
		case 192128:
		  nk = 6;
		  nb = 4;
		  round_val = 12;
		  break;
		case 192192:
		  nk = 6;
		  nb = 6;
		  round_val = 12;
		  break;
		case 192256:
		  nk = 6;
		  nb = 8;
		  round_val = 14;
		  break;
		case 256128:
		  nk = 8;
		  nb = 4;
		  round_val = 14;
		  break;
		case 256192:
		  nk = 8;
		  nb = 6;
		  round_val = 14;
		  break;
		case 256256:
		  nk = 8;
		  nb = 8;
		  round_val = 14;
		  break;
		default:
		  return -1;
		}
	  for (j = 0; j < nk; ++j)
		for (i = 0; i < 4; ++i)

		  word[i][j] = key[i + j * 4];


	  for (j = nk; j < nb * (round_val + 1); ++j)
		{


		  if ((j % nk) == 0)
		{
		  temp[0] = SubByte (word[1][j - 1]) ^ Rcon01[(j / nk) - 1];
		  temp[1] = SubByte (word[2][j - 1]);
		  temp[2] = SubByte (word[3][j - 1]);
		  temp[3] = SubByte (word[0][j - 1]);
		}
		  if ((j % nk) != 0)
		{
		  temp[0] = word[0][j - 1];
		  temp[1] = word[1][j - 1];
		  temp[2] = word[2][j - 1];
		  temp[3] = word[3][j - 1];
		}
		  if (nk > 6 && j % nk == 4)
		for (i = 0; i < 4; ++i)
		  temp[i] = SubByte (temp[i]);
		  for (i = 0; i < 4; ++i)
		word[i][j] = word[i][j - nk] ^ temp[i];


		}
	  return 0;
	}


void aes_func_call1(int statemt1[32]){
	int type=128128;
	int nb=4;
	int i1,i,j;
	int statemt[32];//={50,67,246,168,136,90,48,141,49,49,152,162,224,55,7,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	for(i=0;i<32;i++)
		statemt[i]=statemt1[i];

	int word1[4][120]={43,40,171,9,160,136,35,42,242,122,89,115,61,71,30,109,239,168,182,219,212,124,202,17,109,17,219,202,78,95,132,78,234,181,49,127,172,25,40,87,208,201,225,182,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	,126,174,247,207,250,84,163,108,194,150,53,89,128,22,35,122,68,82,113,11,209,131,242,249,136,11,249,0,84,95,166,166,210,141,43,141,119,250,209,92,20,238,63,99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	,21,210,21,79,254,44,57,118,149,185,128,246,71,254,126,136,165,91,37,173,198,157,184,21,163,62,134,147,247,201,79,220,115,186,245,41,102,220,41,0,249,37,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	22,166,136,60,23,177,57,5,242,67,122,127,125,62,68,59,65,127,59,0,248,135,188,188,122,253,65,253,14,243,178,79,33,210,96,47,243,33,65,110,168,137,200,166,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	AddRoundKey1 (statemt, type, 0,word1);

  for (i = 1; i <= round_val + 9; ++i)
    {
      ByteSub_ShiftRow1 (statemt, nb);
      MixColumn_AddRoundKey1 (statemt, nb, i);
    }


  ByteSub_ShiftRow1 (statemt, nb);
  AddRoundKey1 (statemt, type, i,word1);
	for(i=0;i<32;i++)
		statemt1[i]=statemt[i];
}

int
encrypt1 (int statemt[32], int key[32], int type)
{
  int i;
/*
+--------------------------------------------------------------------------+
| * Test Vector (added for CHStone)                                        |
|     out_enc_statemt : expected output data for "encrypt"                 |
+--------------------------------------------------------------------------+
*/
  const int out_enc_statemt[16] =
    { 0x39, 0x25, 0x84, 0x1d, 0x2, 0xdc, 0x9, 0xfb, 0xdc, 0x11, 0x85, 0x97,
    0x19, 0x6a, 0xb, 0x32
  };

  KeySchedule1 (type, key);
  switch (type)
    {
    case 128128:
      round_val = 0;
      nb = 4;
      break;
    case 192128:
      round_val = 2;
      nb = 4;
      break;
    case 256128:
      round_val = 4;
      nb = 4;
      break;
    case 128192:
    case 192192:
      round_val = 2;
      nb = 6;
      break;
    case 256192:
      round_val = 4;
      nb = 6;
      break;
    case 128256:
    case 192256:
    case 256256:
      round_val = 4;
      nb = 8;
      break;
    }

  aes_func_call1(statemt);
  int main_result=0;
  for (i = 0; i < 16; i++)
    main_result += (statemt[i] != out_enc_statemt[i]);
  return 0;
}


int
aes_main1 (int statemt[])
{
/*
+--------------------------------------------------------------------------+
| * Test Vectors (added for CHStone)                                       |
|     statemt, key : input data                                            |
+--------------------------------------------------------------------------+
*/
  /*statemt[0] = 50;
  statemt[1] = 67;
  statemt[2] = 246;
  statemt[3] = 168;
  statemt[4] = 136;
  statemt[5] = 90;
  statemt[6] = 48;
  statemt[7] = 141;
  statemt[8] = 49;
  statemt[9] = 49;
  statemt[10] = 152;
  statemt[11] = 162;
  statemt[12] = 224;
  statemt[13] = 55;
  statemt[14] = 7;
  statemt[15] = 52;*/

  key[0] = 43;
  key[1] = 126;
  key[2] = 21;
  key[3] = 22;
  key[4] = 40;
  key[5] = 174;
  key[6] = 210;
  key[7] = 166;
  key[8] = 171;
  key[9] = 247;
  key[10] = 21;
  key[11] = 136;
  key[12] = 9;
  key[13] = 207;
  key[14] = 79;
  key[15] = 60;

  encrypt1 (statemt, key, 128128);
  //decrypt (statemt, key, 128128);
  return 0;
}

int main(){
		clock_t t;
		t = clock();
		FILE *fp,*fp1;
		fp=fopen("input_data1.txt","r");
		//fp1=fopen("output_data.txt","w");
		int index=0;
		int input[32];
       	unsigned long long out;
		int error=0;	  
		int i=0;
		while(!feof(fp))
		{			
			char line [ 1000 ];
			char line1 [ 1000 ];			
			fscanf(fp,"%s",&line);				
			input[index]=atoll(line);
			index = (index+1)%COL;			
			if(index==0)
			{				
				//fscanf(fp1,"%s",&line1);				
				//out=atoll(line1);
				
				unsigned long long int ap_clk=0;
				unsigned long long int ap_done=0;
				unsigned long long int ap_idle=0;
				unsigned long long int ap_ready=1;
				unsigned long long int ap_return=0;
				unsigned long long int ap_rst=0;
				unsigned long long int ap_start=1;
				unsigned long long int statemt_address0=0;
				unsigned long long int statemt_address1=1;
				unsigned long long int statemt_ce0=0;
				unsigned long long int statemt_ce1=0;
				unsigned long long int statemt_d0=0;
				unsigned long long int statemt_d1=0;
				unsigned long long int statemt_q0=0;
				unsigned long long int statemt_q1=0;
				unsigned long long int statemt_we0=0;
				unsigned long long int statemt_we1=0;
				unsigned long long int *ap_clk1=&ap_clk;
				unsigned long long int *ap_done1=&ap_done;
				unsigned long long int *ap_idle1=&ap_idle;
				unsigned long long int *ap_ready1=&ap_ready;
				unsigned long long int *ap_return1=&ap_return;
				unsigned long long int *ap_rst1=&ap_rst;
				unsigned long long int *ap_start1=&ap_start;
				unsigned long long int *statemt1_address0__1=&statemt_address0;
				unsigned long long int *statemt_address1__1=&statemt_address1;
				unsigned long long int *statemt1_ce0__1=&statemt_ce0;
				unsigned long long int *statemt_ce1__1=&statemt_ce1;
				unsigned long long int *statemt1_d0__1=&statemt_d0;
				unsigned long long int *statemt_d1__1=&statemt_d1;
				unsigned long long int *statemt1_q0__1=&statemt_q0;
				unsigned long long int *statemt_q1__1=&statemt_q1;
				unsigned long long int *statemt1_we0__1=&statemt_we0;
				unsigned long long int *statemt_we1__1=&statemt_we1;
				unsigned long long int dummy=0;

				//aes_func_call(input,ap_clk1,ap_done1,ap_idle1,ap_ready1,ap_return1,ap_rst1,ap_start1,statemt1_address0__1,statemt1_ce0__1,statemt1_d0__1,statemt1_q0__1,statemt1_we0__1,dummy);
				aes_main(input);
				aes_main1(input);
				
				
				//printf("Generated C Simulation : %d / 30000 \n",++i);
			}
			
		}
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken: %f seconds \n", time_taken);
}
