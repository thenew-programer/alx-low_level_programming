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
    int counter_S, counter_D;

    counter_S = counter_D = 0;

    /* Count how many chars in the dest string*/
    while (dest[counter_D] != 0)
    {
        counter_D++;
    }

    /* Count how many chars in the src string*/
    while (src[counter_S] != 0)
    {
        dest[counter_D] = src[counter_S];
        counter_S++;
        counter_D++;
    }

    dest[counter_D + 1] = 0;
    return (dest);
}
