#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if ((i == 113) || (i == 101))
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
