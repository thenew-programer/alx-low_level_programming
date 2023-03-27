#include "main.h"

/**
 * _puts - this function prints a string to the stdout
 * @str: the pointer to the string
 * Return: the str printed in the stdout
 */

void _puts(char *str)
{
    int i;
    while (str[i] != 0)
    {
        _putchar(str[i]);
        i++;
    }
    _putchar(10);
}
