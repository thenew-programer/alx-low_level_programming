#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the pointer to the string
 * @needle: the pointer to the substring
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
    int i, len, W_checker, index;

    len = strlen(needle);
    W_checker = index =  0;
    while (haystack[index++] != 0)
    {
        if (haystack[index] == needle[0])
        {
            break;
        }
    }

    for (i = 0; i < len; i++)
    {
        if (haystack[index++] == needle[i])
        {
            W_checker++;
        }
    }

    if (W_checker == len)
    {
        return (haystack + index - len);
    }
    else
    {
        return (NULL);
    }
}
