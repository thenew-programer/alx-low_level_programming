#include "main.h"

/**
 * _puts - this function prints a string to the stdout
 * @str: the pointer to the string
 * Return: the str printed in the stdout
 */

void _puts(char *str)
{
    int i;
    for (i = 0;i < _strlen(str); i++)
    {
        _putchar(str[i]);
    }
    _putchar(10);
}
