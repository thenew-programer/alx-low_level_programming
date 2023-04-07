#include <stdio.h>

/**
* main - this program prints the number of
* arguments passed into it
* @argc: argument counter
* @argv: array of argument
* Return: 0 in Success
*/

int main(int argc, char __attribute__((__unused__)) **argv)
{
printf("%d\n", (argc - 1));
return (0);
}

