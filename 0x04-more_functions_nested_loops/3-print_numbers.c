#include "main.h"

/**
* print_numbers - prints a set of numbers from 0 to 9
* Return: 0
*/

void print_numbers(void)
{
int i;

while (i < 10)
{
_putchar('0' + i);
i++;
}

_putchar(10);
}
