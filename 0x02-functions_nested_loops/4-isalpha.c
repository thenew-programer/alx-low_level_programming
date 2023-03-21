#include "main.h"

/**
* _isalpha - this the function that checks if the char is aphabet or not
* @c: the char that we check
* Return: 1 -> if the char is alpha | 0 -> if the char is !alpha
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 12) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}

