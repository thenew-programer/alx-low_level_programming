#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strtow - splits a string into words
 * @str: pointer to the string we want to split.
 * Return: pointer to the new array of words.
 */

char **strtow(char *str)
{
    int i, words, len, index;
    char **strArr;

    /* checks if str is NULL or empty*/
    if (str == NULL || strlen(str) == 0)
        return (NULL);


    /* Count the number of words in the string*/
    words = wordCount(str);

    /* Allocate the memory for the array of the words*/
    strArr = (char **)malloc(sizeof(char *) * words);
    if (strArr == NULL)
        return (NULL);

    /* Allocate and fill the array with the words */
    index = 0;
    for (i = 0; i < words; i++)
    {
        /* The length of the words + 1 for the null terminator*/
        len = wordLength(str, index) + 1;
        printf("len = %d\n", len);

        /* Allocate the memory of every element of the array */
        strArr[i] = malloc(sizeof(char) * len);

        /* Fill the element of the array with the word*/
        if (strArr[i] != NULL)
        {
            memcpy(strArr[i], (str + index), len);    /* copy the word in the arr*/
            strArr[i][len] = 0; /* Terminate the string*/
            printf("word[%d] = %s\n", i, strArr[i]);
            index += len;
        }
        else    /* if the malloc fail free all the alloc memory*/
        {
            while (i >= 0)
            {
                free(strArr[i--]);
            }

            free(strArr);
            return (NULL);
        }
    }

    return (strArr);
}


/**
 * wordLength - calculate the length of a word
 * @str: pointer to the string we want to split.
 * @index: the index where we are in the string
 * Return: length of the word
 */

int wordLength(char *str, int i)
{
    int len;
    len = 0;
    while (str[i] && !isalnum(str[i]))
    {
        i++;
    }
    while (str[i] && isalnum(str[i]))
    {
        len++;
        i++;
    }
    return (len);
}

/**
 * wordCount - count how many words in a string
 * @str: the pointer to the string
 * Return: No of word
 */

int wordCount(char *str)
{
    int i, state, words;

    /* Count the number of words in the string*/
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            state =0;
        else if (state == 0)
        {
            state = 1;
            words++;
        }
    }
    return (words);
}
