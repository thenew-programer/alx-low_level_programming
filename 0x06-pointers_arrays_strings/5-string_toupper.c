#include "main.h"

/**
 * string_toupper - from lower case to upper case
 *
 * @c: the parametr
 *
 * Return: pointer to the string
 */

char *string_toupper(char *c)
{
    int i;

    for (i = 0; s[i] != 0; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    
    return (c);
}
