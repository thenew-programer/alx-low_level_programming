#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
char i;
for (i = '0'; i < '9'; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
i = 57;
while (1)
{
putchar(i);
i = i - 47;
if (i < 0) break;
}
return (0);
}
