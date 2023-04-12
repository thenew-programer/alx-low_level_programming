#include "main.h"
#include <stdlib.h>

/**
 * free_grid - freeeeeees a 2D arr created by alloc_grid.
 * @grid: pointer to pointer
 * @height: the height of the arr.
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}
