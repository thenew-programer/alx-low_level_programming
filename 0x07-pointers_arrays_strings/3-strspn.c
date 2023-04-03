#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: the bytes
 * Return: number of bytes that consist of bytes accept
 */

unsigned int _strspn(char *s, char *accept)
{
    int i, length, A_len, A_Index;
    int *index;

    A_len = strlen(accept);
    index = (int *)malloc(sizeof(int) * A_len);
    A_Index = 0;
    while (A_Index < A_len)
    {
        i = 0;
        while (s[i] != 0)
        {
            if (s[i] == accept[A_Index])
            {
                index[A_Index] = (i + 1);
                break;
            }
            i++;
        }
        A_Index++;
    }

    length = INT_MIN;
    for (i = 0; i < A_len; i++)
    {
        if (index[i] > length)
        {
            length = index[i];
        }
    }
    free(index);
    return (length);
}
