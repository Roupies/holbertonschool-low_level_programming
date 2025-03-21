#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints number, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d\n", va_arg(params, int));
		}
		else
		{
			printf("%d", va_arg(params, int));
			if (i != n-1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
