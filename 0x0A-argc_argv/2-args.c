#include <stdio.h>

/**
 * main - Entry point
 * Description: this program prints all the arguments it receives
 * @argc: the argument counter
 * @argv: the array containing the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}
