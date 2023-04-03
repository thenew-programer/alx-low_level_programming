#include "main.h"

/**
* _memcpy - function copies n bytes from src to dest
* @dest: the pointer to the destination memory
* @src : the pointer to the src memory
* @n   : the number of bytes to be copied
* Return: pointer to the dest memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
