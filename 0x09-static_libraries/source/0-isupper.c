#include "main.h"

/**
* _isupper - checks if the char given is uppercase or
* lower case
* @c: the function parameter of type char
* Return: 0 or 1
*/

int _isupper(int c)
{
int i;

if (c > 64 && c < 91)
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
