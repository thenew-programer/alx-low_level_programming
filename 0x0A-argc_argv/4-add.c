#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: adds positive numbers and print the result
 * @argc: argument counter
 * @argv: array of argument
 * Return: 0 in Success, otherwise 1
 */

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        puts("0");
    }
    int sum, i, num;
    sum = num = 0;
    for (i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);
        if (num == 0)
        {
            puts("Error");
            return (1);
        }
        sum += num;
    }
    printf("%d\n", sum);
    return (0);
}
