#include "main.h"

/**
 * _puts - function that prints a string followed by a new line to stdout
 * @str: String in the main function
 */

void _puts(char *str)
{
	int printer = 0;

	while (str[printer] != '\0')
	{
		_putchar(str[printer]);
		printer++;
	}
	_putchar('\n');
}

