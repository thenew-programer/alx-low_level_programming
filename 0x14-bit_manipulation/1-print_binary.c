#include "main.h"

/**
* real_function - the funtion that do the ral work.
* @n: the number.
* Return: nothing
*/
void real_function(unsigned long int n)
{
	short bit;
	unsigned long int number;

	if (n == 0)
	{
		return;
	}

	number = n >> 1;
	real_function(number);
	bit = n & 1;
	_putchar(bit + '0');

}

/**
* print_binary - prints the binary representation of a number.
* @n: the number.
* Description: I'm gonna use bitwise operator ">> <<"
* Return: nothing.
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	real_function(n);
}

