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

	char *str;
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
			continue;
		}

		if (i != (n - 1))
		{
			printf("%s\n", str);
			continue;
		}

		printf("%s", str);

	}

	va_end(args);

}
