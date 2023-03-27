#include "main.h"

/**
 * puts_half - prints the right half of a string
 *
 * @str: the pointer to the string
 *
 * Return: the right half of a string printed
 */

void puts_half(char *str)
{
    int i, counter, n;

    i = counter = 0;
    while (str[i] != 0)
    {
        counter++;
        i++;
    }
    
    n = (counter / 2);

    for (i = n; i <= counter; i++)
    {
        _putchar(str[i]);
    }
    _putchar(10);
}
