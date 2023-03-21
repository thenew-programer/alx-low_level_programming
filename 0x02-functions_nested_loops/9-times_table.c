#include "main.h"

/**
* times_table - print the the 9-times table
* Return: the 9-times table
*/

void times_table(void)
{
int i, j, operation;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
operation = i * j;
if (operation < 10)
{
_putchar(operation + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar((operation / 10) + '0');
_putchar((operation % 10) + '0');
_putchar((operation / 10) + '0');
_putchar((operation % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar(10);
}
}
