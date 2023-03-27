#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the actual string
 * Return: the string reversed
 */

void rev_string(char *s)
{
    int i, counter, j;

    i = counter = j = 0;
    while (s[i] != 0)
    {
        counter++;
        i++;
    }
    static char tmp[counter + 1];
    for (i = (counter - 1); i >= 0; i--)
    {
        tmp[j] = s[i];
        j++;
    }
    tmp[counter] = '\0';
    s = tmp;
}
