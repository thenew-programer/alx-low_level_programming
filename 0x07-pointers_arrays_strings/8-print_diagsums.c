#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * square matrix of integers
 * @a: the pointer to the matrix
 * @size: the size of the matrix (square)
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
    int i, H_sum, V_sum;

    for (i = 0; i < size; i++)
    {
        H_sum += *(a + (i * size) + i);
        V_sum += a[(size * (i + 1)) - (i + 1)];
    }
    printf("%d, %d\n", H_sum, V_sum);
}
