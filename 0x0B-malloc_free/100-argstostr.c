#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: the number of arguments
 * @av: the pointer to the arguments
 * Return: pointer to the concatenated string.
 */

char *argstostr(int ac, char **av)
{
    int i, len, accumulate, size;
    char *string;
    if (ac == 0 || av == NULL)
        return (NULL);
    accumulate = 0;
    size = 100;
    string = (char *)malloc(sizeof(char) * size);
    for (i = 0; i < ac; i++)
    {
        if (accumulate >= size)
        {
            size += size;
            string = realloc(string, size);
        }
        len = strlen(av[i]);
        memcpy(string + accumulate, av[i], len);
        string[accumulate + len] = '\n';
        accumulate += ++len;
    }
    string[accumulate] = 0;

    return (string);
}
