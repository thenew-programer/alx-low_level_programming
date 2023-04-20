#include "function_pointers.h"

/**
* int_index - searches for an integer and return its index.
*
* @array: pointer of the array
* @size: size of the array.
* @cmp: funtion pointer.
*
* Return: index of the element if found.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, i;

	index = -1;
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			index = i;
			break;
		}
	}
	return (index);
}
