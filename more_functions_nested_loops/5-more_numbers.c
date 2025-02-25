#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function to display number from 0 to 14
 *
 * Return: 0 for successful
 */

void more_numbers(void)
{
char ch;
char chm;

for (ch = '0'; ch <= '9'; ch++)
_putchar (ch);
for (chm = '0'; chm <= '4'; chm++)
putchar (chm);
}
