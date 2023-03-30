#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: pointer to string
 *
 * Return pointer to string
 */

char *cap_string(char *s)
{
    int i, j;
    const int len = 13;

    char specialCharacters[len] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

    for (i = 0; s[i] != 0; i++)
    {
        if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        for (j = 0; j < len; j++)
        {
            if (s[i] == specialCharacters[j])
            {
                if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                {
                    s[i + 1] -= 32;
                }
            }
        }
            
    }

    return (str);
}
