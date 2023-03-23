#include "main.h"

/**
* print_diagonal - draws a diagonal line in  the teminal
* @n: the number of times the character '\' should be printed
* Return: 0
*/

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar(10);
exit(EXIT_FAILURE);
}

for (i = 0; i < n; i++)
{
for (j = i; j > 0; j--)
{
_putchar(' ');
}
_putchar('\\');
_putchar(10);
}
}
