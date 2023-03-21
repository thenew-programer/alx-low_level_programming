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
        _putchar('0');
        for (j = 1; j < 10; j++)
        {
            _putchar(',');
            _putchar(' ');
            operation = i * j;
            if (operation < 10)
            {
                _putchar(' ');
                _putchar(operation + '0');
            }
            else
            {
                _putchar((operation / 10) + '0');
                _putchar((operation % 10) + '0');
            }
        }
        _putchar(10);
    }
}
