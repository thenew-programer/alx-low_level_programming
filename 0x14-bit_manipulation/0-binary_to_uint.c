#include "main.h"

/**
* binary_to_uint - converts a bin numbers to an uint.
* @b: pointer to a string of 0s and 1s.
* Return: uint number.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	unsigned int counter, i, length;
	/* Edge case */
	if (!b || (atoi(b) == 0))
		return (0);

	number = i = 0;
	length = strlen(b);
	while (i < length) {
	
	}
	return (number);
}
