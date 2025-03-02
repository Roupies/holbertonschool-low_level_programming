#include "main.h"

/**
 * print_diagonal - function to draw a straight line in the terminal
 * @n: is an int, defines the length of the line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar (' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
