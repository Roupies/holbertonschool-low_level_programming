#include "main.h"

/**
 * print_rev - function that prints a string in reverse followed by a new line
 * @s: String in the main function
 */

void print_rev(char *s)
{
	int printer = 0;

	while (s[printer] != '\0')
	{
		printer++;
	}
	while (printer >= 0)
	{
		_putchar(s[printer - 1]);
		printer--;
	}
	_putchar('\n');
}
