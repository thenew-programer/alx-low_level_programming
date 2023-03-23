#include "main.h"

/**
 * print_square - prints a square followed by a \n
 * @size: the size of the square
 * Return: 0
 */

void print_square(int size)
{
    int i, j;
    if (size <= 0)
    {
        _putchar(10);
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            _putchar('#');
        }
        _putchar(10);
    }
}
