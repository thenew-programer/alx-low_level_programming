#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: number.
* @index: index of the bit.
* Return: the value at the given index.
*/

int get_bit(unsigned long n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);

	return (bit & 1);
}
