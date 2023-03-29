#include "main.h"

/**
 * _strcat - this func concatenates two strings
 *
 * @dest: the pointer to the destination of the strings
 * @src:  the pointert where is the string
 *
 * Return: the pointer of the concatenated string
 */

char *_strcat(char *dest, char *src)
{
    int i, counter, counter_S, counter_D;
    i = counter_S = counter_D = 0;
    /* Count how many chars in the src string*/
    while (src[counter_S] != 0)
    {
        counter_S++;
    }
    /* Count how many chars in the dest string*/
    while (dest[counter_D] != 0)
    {
        counter_D++;
    }

    counter = counter_D + counter_S;
    /* Concatenate the src with the dest string in the dest*/
    for (i = counter_D; i <= counter; i++)
    {
        dest[i] = src[i];
    }
    dest[i + 1] = NULL;
    return (dest);
}
