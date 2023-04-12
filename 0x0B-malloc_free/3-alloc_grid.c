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
    int **array_2d, i;

    if (width <= 0 || height <= 0)
        return (NULL);

    array_2d = (int **)malloc(height * sizeof(int *));
    if (array_2d == NULL)
        return (NULL);
    for (i = 0; i < height; i++)
    {
        array_2d[i] = (int *)calloc(width, sizeof(int));
        if (array_2d[i] != NULL)
        {
            continue;
        }
        else
        {
            while (--i >= 0)
            {
                free(array_2d[i]);
            }
            free(array_2d);
            return (NULL);
        }
    }

    return (array_2d);
}
