#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* _strdup - duplicate a string and put it in the heap.
* @str: pointer to the string
* Return: the pointer to the new string
*/

char *_strdup(char *str)
{
char *strdup;
int length;

if (str == NULL)
return (NULL);
length = strlen(str);
strdup = (char *) malloc(sizeof(char) * length + 1);
if (strdup == NULL)
return (NULL);
strcpy(strdup, str);
return (strdup);
}
