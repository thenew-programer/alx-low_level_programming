#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string s of any
 * bytes in the string accept
 * @s: the pointet to the string s
 * @accept: the pointer to the string accept
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
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
                index[A_Index] = i;
                break;
            }
            i++;
        }
        A_Index++;
    }

    length = INT_MAX;
    for (i = 0; i < A_len; i++)
    {
        if (index[i] < length)
        {
            length = index[i];
        }
    }
    free(index);
    if (length > 0)
    {
        return (s + length);
    }
    else
    {
        return NULL;
    }
}
