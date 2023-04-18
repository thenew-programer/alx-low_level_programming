#include <stdio.h>
#include "dog.h"

/**
* print_dog - print what's inside the dog struct.
* @d: the address of the struct
* Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
