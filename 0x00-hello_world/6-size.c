#include <stdio.h>

/**
 * main - Entry point
 * description: print the size of data types
 * Return: 0
 */

int main(void)
{
    printf("Size of a char: %d byte(s)",sizeof(char));
    printf("Size of a int: %d byte(s)",sizeof(int));
    printf("Size of a long int: %d byte(s)",sizeof(long));
    printf("Size of a long long int: %d byte(s)",sizeof(long long));
    printf("Size of a float: %d byte(s)",sizeof(double));
    return (0);
}
