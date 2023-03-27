#include "main.h"

/**
 * puts2 - prints every other char of a string starting with the first
 *
 * @str: the pointer to the string
 *
 * Return: new string and new line
 */

void puts2(char *str)
{
    int i, counter;

    i = counter = 0;
    while (str[i] != 0)
    {
        counter++;
        i++;
    }

    for (i = 0; i < counter; (i + 2))
    {
        _putchar(str[i]);
    }
}

