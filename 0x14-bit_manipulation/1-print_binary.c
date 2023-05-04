#include "main.h"
#include <stdio.h>

/**
* print_binary - prints the binary representation of a number.
* @n: the number.
* Description: I'm gonna use bitwise operator ">> <<"
* Return: nothing.
*/

void print_binary(unsigned long int n)
{
	short bit;
	unsigned long int number;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	number = n >> 1;
	print_binary(number);
	bit = n & 1;
	_putchar(bit + '0');
}
