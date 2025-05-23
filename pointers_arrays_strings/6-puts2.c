#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: is the string that we will print every other character
 */

void puts2(char *str)
{
	int printer = 0;

	while (str[printer] != '\0')
	{
		if (printer % 2 == 0)
			_putchar(str[printer]);
		printer++;
	}
	_putchar('\n');
}
