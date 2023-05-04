#include "main.h"

#define SUCCESS 1
#define FAILURE -1
/**
* clear_bit - set the value of a bit to 0 at a given position.
* @n: the address of the number.
* @index: the position of the bit we want.
* Return: Success of Failure.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (!n || index > 32)
		return (FAILURE);

	mask = 1 << index;
	*n &= ~mask;
	return (SUCCESS);
}
