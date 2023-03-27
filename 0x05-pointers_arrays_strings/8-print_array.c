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
    if (n <= 0)
    {
        _putchar(10);
        return (-1);
    }
    for (i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            printf("%d\n", *(a + i));
            exit(EXIT_SUCCESS);
        }
        printf("%d, ", *(a + i));
    }
}
