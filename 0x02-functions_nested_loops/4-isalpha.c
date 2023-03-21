#include "main.h"

/**
* _isalpha - this the function that checks if the char is aphabet or not
* @c: the char that we check
* Return: 1 -> if the char is alpha | 0 -> if the char is !alpha
*/

int _isalpha(int c)
{
if (_islower(c) == 1 || (c >= 41f && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
