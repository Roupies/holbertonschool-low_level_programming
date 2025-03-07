#include <stdio.h>

/**
 * main - is a function that prints the alphabet lowercase in reverse
 * Return: 0 for successful
 */

int main (void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar (i);
	}
	putchar (10);
	return (0);
}
