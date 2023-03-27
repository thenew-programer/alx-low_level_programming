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
    
    if ((counter % 2) != 0)
    {
        n = (counter / 2) + 1;
    }
    else
    {
        n = (counter / 2);
    }

    for (i = n; i < counter; i++)
    {
        if (n == 0)
        {
            break;
        }
        _putchar(str[i]);
    }
    _putchar(10);
}
