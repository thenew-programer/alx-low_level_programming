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
    int counter_D, counter_S, counter;

    counter_D = counter_S = 0;
    while (dest[counter_D] != 0)
    {
        counter_D++;
    }

    while (counter_S < n)
    {
        if (src[counter_S] == 0 || src[counter_S] == 10)
        {
            counter = counter_S;
            while (counter >= counter_D)
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
