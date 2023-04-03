#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to a 2D array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
    int i, j, len;

    len = sizeof(*a);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%c", a[i][j]);
        }
        putchar(10);
    }
}
