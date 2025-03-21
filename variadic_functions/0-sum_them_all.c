#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - funcitpn that returns the sum of all its parameters
 * @n: number of variadics arguments to come
 * Return: the sum of all the integers given as variadic arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int somme = 0;
	va_list params;
	unsigned int i;

	if (n == O)
	{
		return (0);
	}
	va_start(params, n);

	for (i = 0; i < n; ++i)
	{
		somme += va_arg(params, unsigned int);
	}
	va_end(params);
	return (somme);
}

