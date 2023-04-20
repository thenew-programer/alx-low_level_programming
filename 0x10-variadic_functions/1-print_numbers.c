#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers followed by new line.
* @separator: the delemiter to be printed with the numbers.
* @n: count of the numbers given
* Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(numbers, int));
			continue;
		}
		printf("%d%s", va_arg(numbers, int), separator);
	}

	va_end(numbers);
}
