#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers and print the result
* @argc: the argument counter
* @argv: the array of the argument
* Return: 0
*/

int main(int argc, char **argv)
{

int x, y, result;

if (argc < 3)
{
puts("Error");
return (1);
}

x = atoi(argv[1]);
y = atoi(argv[2]);
result = x * y;

printf("%d\n", result);

return (0);
}

