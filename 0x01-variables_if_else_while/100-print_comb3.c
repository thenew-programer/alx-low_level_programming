#include <stdio.h>

/**
* main - Entry point
* Return: 0
*/

int main(void)
{
int i, j, x, size;
for (i = 48; i <= 57; ++i)
{
for (j = 48; j <= 57; ++j)
{
if ((i == j) || (i > j) || ((i == 56) && (j == 57)))
{
continue;
}
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
x = 56;
size = 3;
while (1)
{
for (i = 0; i < size; i++)
{
if (i == 2)
{
x = 8;
}
putchar(x + i);
}
break;
}
return (0);
}
