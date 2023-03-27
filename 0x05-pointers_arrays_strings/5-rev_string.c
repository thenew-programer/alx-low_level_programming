#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the actual string
 * Return: the string reversed
 */

void rev_string(char *s)
{
    int i, counter, j, size;

    i = counter = j = 0;
    while (s[i] != 0)
    {
        counter++;
        i++;
    }

    size = counter;
    char string[size];
    for (i = counter; i >= 0; i--)
    {
        string[j] = s[i];
        j++;
    }

    for (i = 0; i < counter; i++)
    {
        s[i] = string[i];
    }
    free(string);
}
