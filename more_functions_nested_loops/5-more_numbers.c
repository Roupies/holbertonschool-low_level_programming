#include "main.h"

/**
 * more_numbers - function to display number from 0 to 14
 */

void more_numbers(void)
{
	int ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch > 9)
				_putchar((ch / 10) + '0');
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');
	}
}
