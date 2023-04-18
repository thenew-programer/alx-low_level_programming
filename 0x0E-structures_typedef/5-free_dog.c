#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free the dog you generate
* @d: the address where the dog lives
* Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
