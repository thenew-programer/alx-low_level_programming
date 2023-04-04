#include "main.h"

/**
* _strpbrk - searchers astring for any of a set of bytes
* @s: pointer to the string 
* @accept: stringcontaining the bytes
*
* Return: pointer to the byte in s that matches one of the bytes
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; *s != 0; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
}
s++;
}

return (NULL);
}
