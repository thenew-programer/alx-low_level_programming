#include "main.h"

/**
* isdigit - checks if the char given is a digit or naaah
* @c: function parameter of type int
* Return: 0 or 1
*/

int _isdigit(int c)
{
int i;

if (c > 47 && c < 58)
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
