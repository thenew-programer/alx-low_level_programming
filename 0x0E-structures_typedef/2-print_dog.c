#include <stdio.h>
#include "dog.h"

/**
* print_dog - print what's inside the dog struct.
* @d: the address of the struct
* Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;


	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		return;

	if (d->age < 0)
		printf("Age: %f\n", d->age);
	else
		return;

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		return;

}
