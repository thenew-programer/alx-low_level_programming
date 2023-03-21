#include "main.h"

/**
* _islower - Checks if a character is lower case of not
* Return: (1) if the char is lower
* Return: (0) if the char isn't lower
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
