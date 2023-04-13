#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* array_range - creates an array of integers sorted from min to max.
* @min: the minimum value of the array
* @max: the maximum value of the array
* Return: pointer to the array.
*/

int *array_range(int min, int max)
{
int *array;
int size, i;

/* error handling*/
if (min > max)
return (NULL);

size = max - min + 1;
/* Allocate memory for the array*/
array = (int *)malloc(size * sizeof(int));
if (array == NULL)
return (NULL);

/* fill the array from min to max*/
for (i = 0; i < size; i++)
{
array[i] = min++;
}

return (array);
}
