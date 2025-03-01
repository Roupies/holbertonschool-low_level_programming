#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function to display number from 0 to 9
 *
 * Return: 0 for successful
 */

void print_numbers(void)
{
char ch = '0';
while (ch <= '9')
_putchar (ch++);
_putchar('\n');
}
