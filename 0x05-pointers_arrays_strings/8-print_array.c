#include "main.h"

/**
 * print_array - prints n element of an array
 *
 * @a: the pointer to the array
 * @n: the size of the array
 *
 * Return: prints the array
 */

void print_array(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        _putchar(a[i] + '0');
        while (i < n)
        {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar(10);
}
