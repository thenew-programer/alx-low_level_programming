#include "main.h"

#define BIG 0
#define LITTLE 1
/**
* get_endianness - check the endianness of the machine.
* Return: 0 => Big Endian | 1 => Little Endian
*/

int get_endianness(void)
{
	int n = 1;

	if (*((char *)&n) == 1)
		return (LITTLE);

	return (BIG);
}
