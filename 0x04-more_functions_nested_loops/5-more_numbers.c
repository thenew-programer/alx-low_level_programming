#include "main.h"

/**
* more_numbers - Prints from 0 - 14, 10 times
* Return: the output
*/

void more_numbers(void)
{
int i, j;
char endl;

endl = 10;
for (i = 0; i < 10; i++)
{
    for (j = 0; j < 15; j++)
    {
        if (j > 9)
        {
            _putchar((j / 10) + '0');
        }
        _putchar((j % 10) + '0');
    }
write(1, &endl, 1);
}
}
