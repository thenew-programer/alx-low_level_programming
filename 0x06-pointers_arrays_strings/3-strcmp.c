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
    int cmp, i;
    
    cmp = 0;
    i = 0;

    while (s1[i] != 0 || s2[i] != 0)
    {
        cmp += s1[i] - s2[i];
        i++;
    }

    return (cmp);
}
