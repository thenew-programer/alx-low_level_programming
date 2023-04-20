#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints string followed by new line.
* @separator: delemiter
* @n: number of args
* Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (!separator)
		return;

	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (!string)
			return;

		if (i == n - 1)
		{
			printf("%s\n", string);
			continue;
		}
		printf("%s%s", string, separator);
	}

	va_end(args);
	
}
