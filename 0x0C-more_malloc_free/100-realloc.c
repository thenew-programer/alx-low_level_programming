#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the previous memory.
 * @old_size: parameter
 * @new_size: parameter
 * Return: pointer to the new allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *newPtr;

    /* if the size don't change do nothing*/
    if (new_size == old_size)
        return ptr;

    /* new_size = 0, is like free(ptr)*/
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    /* ptr == NULL; is like malloc(new_size + old_size)*/
    if (ptr == NULL)
    {
        /* Allocate the memory */
        newPtr = malloc(old_size + new_size);
        if (newPtr == NULL)
            return (ptr);
        
        return (newPtr);
    }

    /* If new_size > old_size */
    if (new_size > old_size)
    {
        /* allocate memory*/
        newPtr = malloc(new_size);
        if (newPtr == NULL)
            return (ptr);
         
        /* Copy the content of the old memory*/
        memcpy(newPtr, ptr, old_size);

        /* free the old memory*/
        free(ptr);
        return (newPtr);
    }
    return (ptr);
}
