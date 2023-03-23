#include <stdio.h>

/**
 * main - ENtry point
 * Return: 0
 */

int main(void)
{
    int i, size;

    size = 100;
    for (i = 1; i <= size; i++)
    {
        if ((i % 5) == 0 && (i % 3) == 0)
        {
            printf("FizzBuzz");
        }
        else if ((i % 5) == 0)
        {
            printf("Buzz");
        }
        else if ((i % 3) == 0)
        {
            printf("Fizz");
        }
        else
        {
            printf("%d", i);
        }
        if (i != 100)
        {
            putchar(' ');
        }
    }
    putchar(10);
    return (0);
}
