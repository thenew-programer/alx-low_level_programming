#include "main.h"

/**
* flip_bits - return the number of bits you would need to flip
* to get from one number to another.
* @n: the number.
* @m: the number.
* Return: number of bits you need to flip to get from n to m.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits, i, j;

	i = bits = 0;
	j = sizeof(long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			bits++;

		n >>= 1;
		m >>= 1;
	}
	return (bits);
}
