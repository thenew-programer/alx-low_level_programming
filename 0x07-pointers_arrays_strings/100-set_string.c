#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: pointer to pointer we want to set the value of
* @to: the pointer to the string we want to point to
* Return: Nothing
*/

void set_string(char **s, char *to)
{
*s = to;
}
