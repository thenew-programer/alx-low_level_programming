#include "main.h"

#define SUCCESS 1
#define FAILURE -1
/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: pointer to the number.
* @index: position.
* Return: On success 1, -1 otherwise.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;
	if (!n || index > 32)
		return (FAILURE);

	mask = 1 << index;
	*n = ((*n & ~mask) | (mask));
	return (SUCCESS);
}
