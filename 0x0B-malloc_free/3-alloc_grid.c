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
    int **grid;
    
    if (width <= 0 || height <= 0)
        return (NULL);

    grid = (int **)malloc(sizeof(int) * (width * height));
    if (grid == NULL)
        return (NULL);

    return (grid);
}
