#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: number of element of an array.
 * @size: element size of bytes each
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    /* checks for the validity of the array*/
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Allocate memory for the arr*/
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);

    /* Set all the allocates memory to 0*/
    memset(ptr, 0, (size * nmemb));

    return (ptr);
}
