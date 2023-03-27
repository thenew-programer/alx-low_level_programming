#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the actual string
 * Return: the string reversed
 */

void rev_string(char *s)
{
    int i, counter, j;
    char *tmp;

    i = counter = j = 0;
    while (s[i] != 0)
    {
        counter++;
        i++;
    }

    tmp = (char *) malloc(counter * sizeof(char));
    for (i = counter; i >= 0; i--)
    {
        tmp[j] = s[i];
        j++;
    }

    for (i = 0; i < counter; i++)
    {
        s[i] = tmp[i];
    }
    free(tmp);
}
