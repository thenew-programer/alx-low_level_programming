#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - return a pointer to a 2D array of type int.
 * @width: the width of the arr
 * @height: the height of the arr.
 * Return: pointer to 2D arr
 */

int **alloc_grid(int width, int height)
{
    int **grid, i;
    
    if (width <= 0 || height <= 0)
        return (NULL);

    grid = (int **)malloc(width * sizeof(int *));
    if (*grid == NULL)
        return (NULL);

    for (i = 0; i < width; i++)
        grid[i] = calloc(height, sizeof(int));
    return (grid);
}
