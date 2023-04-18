#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the name of the owner of the dog
* Return: the address where the dog lives
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->owner = (char *)malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
		return (NULL);

	dog->name = (char *)malloc(strlen(name) + 1);
	if (dog->name == NULL)
		return (NULL);

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
