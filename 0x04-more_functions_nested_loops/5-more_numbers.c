#include "main.h"

#define ENDL 10
/**
 * more_numbers - Prints from 0 - 14, 10 times
 * Return: the output
 */

void more_numbers(void)
{
int i;
char endl;

endl = 10;
for (i = 0; i < 15; i++)
{
    if (i > 9)
    {
        _putchar((i / 10) + '0');
        _putchar((i % 10) + '0');
        continue;
    }
    _putchar('0' + i);
}
write(1, &endl, 1);
}
