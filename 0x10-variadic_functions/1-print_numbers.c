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
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
