#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates two strings
* @s1: the pointer to the first string
* @s2: the pointer to the second string
* Return: the pointer to the new string s1 + s2.
*/

char *str_concat(char *s1, char *s2)
{
char *newString;
int lenghtS1, lengthS2;

if (s1 == NULL)
lenghtS1 = 0;
else
lenghtS1 = strlen(s1);
if (s2 == NULL)
lengthS2 = 0;
else
lengthS2 = strlen(s2);

newString = (char *) malloc(sizeof(char) * (lenghtS1 + lengthS2)+1);
if (newString == NULL)
return (NULL);

memcpy(newString, s1, lenghtS1);
memcpy((newString + lenghtS1), s2, lengthS2);
newString[lengthS2 + lenghtS1] = 0;

return (newString);
}
