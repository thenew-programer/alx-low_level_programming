#include "main.h"

/**
* binary_to_uint - converts a bin numbers to an uint.
* @b: pointer to a string of 0s and 1s.
* Return: uint number.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int counter, i;

	/* Edge case */
	if (!b || (atoi(b) == 0))
		return (0);

	number = counter = 0;
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			if (counter == 0)
			{
				counter = 1;
				continue;
			}
			counter *= 2;
		}
		else if (b[i] == '1')
		{
			if (counter == 0)
			{
				counter = 1;
				number = counter;
				continue;
			}
			counter *= 2;
			number += counter;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
