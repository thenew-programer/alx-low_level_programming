#include "main.h"

/**
 * _print_rev_recursion - prints astring in reverse.
 * @s: the pointer to the string we want to print.
 * Return: NOTHING
 */

void _print_rev_recursion(char *s)
{
    if (*s != 0)
    {
        _print_rev_recursion(s + 1);
        printf("%c", *s);
    }
}
