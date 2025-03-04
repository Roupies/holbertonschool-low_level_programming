#include "main.h"

/**
 * _memset - function replica of memset, fills memory with a constant byte
 * @s: the array.
 * @b: the constant byte that will replace the old one.
 * @n: the number of slots we will replace memory in the array (s)
 * Return: The array (s) if the operation is successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
