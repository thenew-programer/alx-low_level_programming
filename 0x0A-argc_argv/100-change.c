#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument counter
 * @argv: array of argument
 * Return: 0 on succes and 1 otherwise
 */

int main(int argc, char **argv)
{
    int cents, coins, i;
    const int change[] = { 25, 10, 5, 2, 1 };

    if (argc != 2)
    {
        puts("Error");
        return (1);
    }

    coins = i = 0;
    cents = atoi(argv[1]);
    if (cents < 0)
    {
        puts("0");
        return (0);
    }
    while (cents != 0)
    {
        while (cents > 0)
        {
            cents -= change[i];
            if (cents < 0)
            {
                cents += change[i];
                break;
            }
            coins++;
        }
        i++;
    }
    printf("%d", coins);
    return (0);
}
