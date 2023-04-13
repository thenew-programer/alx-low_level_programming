#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the 1st strings
 * @s2: the 2nd strings
 * @n: the first n bytes of s2
 * Return: the pointer to the new strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *string;
    int lengthS1, lengthS2;

    /* check if the s1 if empty*/
    if (s1 == NULL)
        lengthS1 = 0;
    else
     lengthS1 = strlen(s1);

    /* check if the s2 if empty*/
    if (s2 == NULL)
        lengthS2 = 0;
    else
        lengthS2 = strlen(s2);

    /* check if n is bigger than s2*/
    if (n > lengthS2)
        n = lengthS2;

    /* Allocate memory for the new string*/
    string = (char *) malloc(lengthS1 + n + 1);
    if (string == NULL)
        return (NULL);

    memcpy(string, s1, lengthS1);
    memcpy((string + lengthS1), s2, n);
    string[lengthS1 + n] = '\0';

    return (string);
}

