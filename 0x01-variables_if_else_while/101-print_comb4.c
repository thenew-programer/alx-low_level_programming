#include <stdio.h>

/**
* main - Entry point
* Return: 0
*/

int main(void)
{
int i, j, x, size, k;
for (i = 48; i <= 57; ++i)
{
for (j = 48; j <= 57; ++j)
{
for (k = 48; k <= 57; ++k)
{
if ((i == j) || (j == k) || (k == i) || (i > j) || (j > k) || (i > k))
{
continue;
}
else if ((i == 55) && (j == 56) && (k == 57))
{
continue;
}
putchar(i);
putchar(j);
putchar(k);
putchar(',');
putchar(' ');
}
}
}
x = 55;
size = 4;
while (1)
{
for (i = 0; i < size; i++)
{
if (i == 3)
{
x = 7;
}
putchar(x + i);
}
break;
}
return (0);
}
