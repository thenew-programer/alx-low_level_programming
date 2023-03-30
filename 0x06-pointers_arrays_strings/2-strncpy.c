#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: pointer to the copies string
 */

char *_strncpy(char *dest, char *src, int n)
{
    int counter_S;

    counter_S = 0;

    while (counter_S < n)
    {
        if (src[counter_S] == 0)
        {
            while (counter_S < n)
            {
                src[counter++] = '\0';
            }
            break;
        }

        dest[counter_S] = src[counter_S];
        counter_S++;
    }
    return (dest);
}
