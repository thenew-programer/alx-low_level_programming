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
    len = strlen(av[0]);
    size = len + 1;
    string = (char *)malloc(sizeof(char) * size);
    for (i = 0; i < ac; i++)
    {
        len = strlen(av[i]);
        if (accumulate >= len)
        {
            size += len + 1;
            string = realloc(string, size);
        }
        memcpy(string + accumulate, av[i], len);
        string[accumulate + len] = '\n';
        accumulate += ++len;
    }
    string[accumulate] = 0;
    string = realloc(string, size + 38);

    return (string);
}
