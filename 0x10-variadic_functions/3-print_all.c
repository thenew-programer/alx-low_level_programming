#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* print_all - function prints anything
* @format: list of argument.
* Return: Nothing
*/


void print_all(const char * const format, ...)
{
	va_list randomArgs;
	unsigned int i, count;
	char *string;

	i = 0;
	count = strlen(format);

	va_start(randomArgs, format);

	while (i < count)
	{
		
		switch (format[i++])
		{
			case ('c'):
				printf("%c", va_arg(randomArgs, int));
				break;
			case ('i'):
				printf("%d", va_arg(randomArgs, int));
				break;
			case ('f'):
				printf("%f", va_arg(randomArgs, double));
				break;
			case ('s'):
				string = (char *)va_arg(randomArgs, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				else
				{
					printf("%s", string);
					break;
				}
			default:
				continue;
		}
		if (i == count)
		{
			printf("\n");
			continue;
		}
		printf(", ");
	}

	va_end(randomArgs);
}
