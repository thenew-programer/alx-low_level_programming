#include "3-calc.h"

/**
* main - calculator
* @argc: argument count
* @argv: argument array
* Return: Always 0
*/

int main(int argc, char **argv)
{
	int a, b, result;
	op_t operation;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		puts("Error");
		exit(100);
	}

	operation.op = argv[2];
	operation.f = get_op_func(operation.op);

	if (!operation.f)
	{
		puts("Error");
		exit(99);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = operation.f(a, b);

	printf("%d\n", result);
	return (0);
}
