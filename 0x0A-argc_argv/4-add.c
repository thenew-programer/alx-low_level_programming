#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers and print the result
 * @argc: argument counter
 * @argv: array of argument
 * Return: 0 in Success, otherwise 1
 */

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        puts("0");
        return (0);
    }
    int sum, i, j;
    sum = 0;
    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != 0; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                puts("Error");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return (0);
}

