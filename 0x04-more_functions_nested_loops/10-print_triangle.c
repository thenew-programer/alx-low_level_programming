#include "main.h"

/**
 * print_triangle - prints a triangle followed by \n
 * @size: the size of the triangle
 * Return: the triangle
 */

void print_triangle(int size)
{
    int i, j, k;

    if (size <= 0)
    {
        _putchar('\n');
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < size; i++)
    {
        for (; j > 0; j--)
        {
            _putchar(' ');
        }
        for (k = (size - i); k > 0; k--)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
