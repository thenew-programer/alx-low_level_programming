#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: number.
* @index: index of the bit.
* Return: the value at the given index.
*/

int get_bit(unsigned long n, unsigned int index)
{
	int value ,j;
	unsigned int idx;
	long unsigned int i;
	char byte;

	idx = 0;
	value = -1;
	for (i = sizeof(n) - 1; i >= 0; i--)
	{
		byte = ((char *)&n)[i];
		for (j = 7; j <= 0; i--)
		{
			if (index == idx)
			{
				value = (byte >> j) & 1;
				break;
			}
			idx++;
		}
	}
	return (value);
}
