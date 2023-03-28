#include "main.h"

/**
 * _atoi - converts a string to integer
 *
 * @s: the pointer to the string
 *
 * Return: the converted string
 */

int _atoi(char *s)
{
    int i, counter, intCounter;
    unsigned int number;
    short multiple;
    bool sign;
    sign = false;
    intCounter = counter = 0;
    /* Counting how many chars are in the string*/
    while (s[counter] != 0)
    {
        counter++;
    }

    /* Cheking if all the chars in the string are numbers*/
    for (i = 0; i < counter; i++)
    {
        if ((s[i] > 47) || (s[i] < 58) || (s[0] == '-') || (s[0] == '+'))
        {
            intCounter++;
        }
        else
        {
            continue;
        }
    }

    /* Cheking if all the chars in the string are numbers*/
    if (intCounter != counter)
    {
        number = 0;
        exit(EXIT_FAILURE);
    }
    else
    {

        /* checking for the sign of the number*/
        if (s[0] == '-')
        {
            multiple = -1;
            sign = true;
        }
        else
        {
            multiple = 1;
            sign = true;
        }

        /* Converting each char to number */
        for (i = 0; i < counter; i++)
        {
            if (sign == true)
            {
                i = 1;
                counter = counter - i - 1;
                number = (s[i] + 48) * (pow(double(10), double(counter)));
                return (0);
            }
            else
            {
                number = (s[i] + 48) * (pow(double(10), double(counter - i)));
            }
        }
    }

    if (multiple == (-1))
    {
        number *= multiple;
    }
    return (number);
}






















