#include "main.h"

/**
* print_last_digit - return the last digit of a number
* @n: the paramater of the function
* Return: the last digit of the paramater
*/

int print_last_digit(int n)
{
int digit;
digit = n % 10;
if (digit < 0)
digit *= -1;

_putchar(digit + '0');
return (digit);
}
