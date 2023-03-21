#include "main.h"

/**
 * print_alphabet - entry point
 * description: this func print the alphabet in lower case
 */

void print_alphabet_x10(void)
{
char i, j;
for (j = 10; j > 0; j--)
{
for (i = 'a'; i <= 'z'; ++i)
{
_putchar(i);
}
_putchar(10);
}
}
