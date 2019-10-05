#include "ccByteTrans.h"
using namespace std;

double SwapDoubleEndian(double* pdVal)
{
	UINT64 llVal = ntohll(*((UINT64*)pdVal));
	return *((double*)&llVal);
}


unsigned short BLEndianUshort(unsigned short value)
{
	return ((value & 0x00FF) << 8) | ((value & 0xFF00) >> 8);
}



void dec2bin(unsigned int dec, int bin[], int nn)
{
	for (int i = nn; i >= 0; i--)
	{
		if (dec&(1 << i))
			bin[nn - 1 - i] = 1;
		else
			bin[nn - 1 - i] = 0;
	}

}

int bin2dec(int bin[], int nn)
{
	unsigned int dec = 0;
	for (int i = 0; i < nn; i++)
		dec += bin[i] * pow(2, nn - 1 - i);
	return dec;
}

string dec2hex(unsigned int dec)
{
	string hex;
	while (dec != 0)
	{
		if (dec % 16 > 9)
			hex += dec % 16 - 10 + 'A';
		else
			hex += dec % 16 + '0';
		dec /= 16;
	}
	reverse(hex.begin(), hex.end());
	return hex;
}

int hex2dec(string hex)
{
	int count = (int)hex.length();
	unsigned int dec = 0;
	for (int i = count - 1; i >= 0; i--)
	{
		if (hex[i] > '0'&&hex[i] <= '9')
			dec += (hex[i] - 48)*pow(16, count - 1);
		else if (hex[i] >= 'A'&&hex[i] <= 'F')
			dec += (hex[i] - 55)*pow(16, count - i - 1);
	}
	return dec;
}