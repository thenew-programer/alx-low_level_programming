#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 0 if the strings are the same and other if the string
 * isn't the same
 */

int _strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
        {
            return (0);
        }
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}
