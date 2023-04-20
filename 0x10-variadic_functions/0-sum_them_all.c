#include "variadic_functions.h"

/**
* sum_them_all - sum all the parameters given to the func.
* @n: count of the argument
* Return: the sum of all the given parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	sum = i = 0;
	for (; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
