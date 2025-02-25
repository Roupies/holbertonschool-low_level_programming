#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function to display number from 0 to 9 except 2 and 4
 *
 * Return: 0 for successful
 */

void print_most_numbers(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
if (ch != '2' && ch != '4')
_putchar (ch);
_putchar('\n');
}
