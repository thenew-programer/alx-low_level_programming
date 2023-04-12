#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* create_array - creates an array of chars and initialize with a char.
* @size: the size of the arr
* @c: the character
* Return: pointer to the arr.
*/

char *create_array(unsigned int size, char c)
{
char *string;
if (size == 0)
return (NULL);
string = (char *)malloc(size);
if (string == NULL)
return (NULL);
memset(string, c, size);
return (string);
}
