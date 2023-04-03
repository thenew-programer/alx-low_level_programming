#include "main.h"

/**
* _strchr - locates a character in a string
* @s: pointer to the string
* @c: the character that we are looking for
* Return: pointer to ocurrence of the char c 
*/

char *_strchr(char *s, char c)
{
int i;

i = 0;
while (s[i++] != 0)
{
if (s[i] == c)
{
return (s + i);
exit(EXIT_SUCCESS);
}
}
return NULL;
}
