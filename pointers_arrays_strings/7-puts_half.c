#include "main.h"
/**
 * puts_half - function to half of a string
 * @str: is the string we will reverse with this function
 */

void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
		if (length % 2 == 0)
		{
			start = length / 2;
		}
		else
		{
			start = (length + 1) / 2;
		}
		for (i = start; str[i] != '\0'; i++)
		{
			_putchar (str[i]);
		}
	_putchar (10);

}

