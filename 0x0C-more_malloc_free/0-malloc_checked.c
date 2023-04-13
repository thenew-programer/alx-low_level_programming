#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memery using malloc()
 * @b: the number of bytes to allocate.
 * Return: a void pointer.
 */

void *malloc_checked(unsigned int b)
{
    void *mem;
    mem = malloc(b);
    if (mem == NULL)
        exit(98);

    return (mem);
}
