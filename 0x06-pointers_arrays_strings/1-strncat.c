#include "main.h"

/**
* _strncat - concatenates two strings but defferent than strcat
* because it tells you how much characters to add from the src
*
* @dest: pointer to the destination string
* @src:  pointer to the source string
* @n: the buffer of how much characters you want to add from the src
*
* Return: pointer to the dest string
*/

char *_strncat(char *dest, char *src, int n)
{
int i, counter, counter_S, counter_D;

counter_D = counter_S = 0;
/* Count how many chars in the dest string*/
while (dest[counter_D] != 0)
{
counter_D++;
}
counter = counter_D + n;
for (i = counter_D; i < counter; i++)
{
dest[i] = src[counter_S++];
}
dest[counter] = 0;
return (dest);
}

