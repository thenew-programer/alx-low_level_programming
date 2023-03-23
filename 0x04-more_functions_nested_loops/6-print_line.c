#include "main.h"

/**
* print_line - drawa a straight line in terminal
* @n: the number of times the char '_' should be printed
* Return: 0
*/

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
continue;
}
_putchar('_');
}
_putchar(10);
}
