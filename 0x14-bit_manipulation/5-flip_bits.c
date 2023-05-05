#include "main.h"
/**
* flip_bits - Function that returns the number of bits to convert in the second
* number
*@n: first number
*@m: second number
*Return: the number of bytes to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or;
	unsigned int revalue;

	or = n ^ m;

	revalue = 0;
	while (or > 0)
	{
		if ((or & 1) != 0)
			revalue++;
		or = or >> 1;
	}
	return (revalue);
}
