#include "main.h"

/**
 * _strcpy - copies a string pointed to by src including the
 * terminal null byte '\0', to the buffer pointed to by dest
 *
 * @dest: the pointer to the new string
 * @src:  the pointer to the source of the string
 *
 * Return: pointer of the string copied
 */

char *_strcpy(char *dest, char *src)
{
    int i, counter;

    i = counter = 0;
    while (src[i] != 0)
    {
        counter++;
        i++;
    }

    for (i = 0; i < counter; i++)
    {
        dest[i] = src[i];
    }
    dest[counter] = '\0';
    return dest;
}
