#include <stdio.h>
#include "dog.h"

/**
* print_dog - print what's inside the dog struct.
* @d: the address of the struct
*
* Return: nothing
*/

void print_dog(struct dog *d)
{
	/* Check if d isn't NULL*/
	if (d)
	{
		printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
	}
}
