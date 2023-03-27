#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the actual string
 * Return: the string reversed
 */

void rev_string(char *s)
{
    int i, counter, j;
    char tmp;

    i = counter = j = 0;
    while (s[counter] != 0)
    {
        counter++;
    }
    j = counter;
    for (i = 0; i < counter / 2; i--)
    {
        tmp = s[i];
        s[i] = s[--j];
        s[j] = tmp;
    }
}
