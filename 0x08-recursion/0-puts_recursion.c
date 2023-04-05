#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: pointer to a string that we want to print.
 * Return: Nothinb
 */

void _puts_recursion(char *s)
{
    if (*s == 0)
    {
        _putchar(10);
        exit(1);
    }
    _putchar(*s);
    _puts_recursion(s++);
}
