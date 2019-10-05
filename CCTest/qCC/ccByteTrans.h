#pragma once
/* 这部分功能是将不同类型的小端存储转化为大端存储 */


#include <iostream>
#include <algorithm>
using namespace std;


//int
#define htonl(A)((((A) & 0xff000000) >> 24) | \
	(((A) & 0x00ff0000) >> 8) | \
	(((A) & 0x0000ff00) << 8) | \
	(((A) & 0x000000ff) << 24))
//unsigned long long
typedef unsigned long long UINT64;
#define ntohll(x) ( ((UINT64)x & 0xff00000000000000LL)>>56 | ((UINT64)x & 0x00ff000000000000LL)>>40 | ((UINT64)x & 0x0000ff0000000000LL)>>24 | ((UINT64)x & 0x000000ff00000000LL)>>8 | ((UINT64)x & 0x00000000ff000000LL)<<8 | ((UINT64)x & 0x0000000000ff0000LL)<<24 | ((UINT64)x & 0x000000000000ff00LL)<<40 | ((UINT64)x & 0x00000000000000ffLL)<<56 )
//double
double SwapDoubleEndian(double* pdVal);
//unsigned short
unsigned short BLEndianUshort(unsigned short value);


//10 -> 2
void dec2bin(unsigned int dec, int bin[], int nn);
//2 -> 10
int bin2dec(int bin[], int nn);
//10 -> 16
string dec2hex(unsigned int dec);
//16 ->10
int hex2dec(string hex);
