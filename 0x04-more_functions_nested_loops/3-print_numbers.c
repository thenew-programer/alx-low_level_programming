#include "main.h"

/**
* print_numbers - prints a set of numbers from 0 to 9
*
* Return: The numbers from  0 - 9
*/

void print_numbers(void)
{
int i;

i = 0;
while (i < 10)
{
_putchar(('0' + i));
i++;
}

_putchar('\n');
}
