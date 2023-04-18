#ifndef DOG_H
#define DOG_H

/**
	* struct dog - custom data type that contains some dogs info
	* @name: the name of the dog
	* @age: the age of the dog
	* @owner: the name of the owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Alias of the dog struct
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
