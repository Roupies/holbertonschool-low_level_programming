#include "main.h"

/**
 * print_line - function to draw a straight line in the terminal
 * @n: is an int, defines the length of the line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

