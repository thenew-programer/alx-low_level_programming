#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: pointer to a string that we want to print.
 * Return: Nothinb
 */

void _puts_recursion(char *s)
{
    printf("%s\n", s);
    _puts_recursion(s++);
}
