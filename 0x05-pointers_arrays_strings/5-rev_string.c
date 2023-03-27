#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the actual string
 * Return: the string reversed
 */

void rev_string(char *s)
{
    int i, counter, j;
    char *string;

    i = counter = j = 0;
    while (s[i] != 0)
    {
        counter++;
        i++;
    }

    for (i = counter - 1; i >= 0; i++)
    {
        string[j] = s[i];
        j++;
    }

    for (i = 0; i < (counter - 1); i++)
    {
        s[i] = string[i];
    }
}
