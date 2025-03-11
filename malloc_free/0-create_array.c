#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars with a specific char.
 * @size: size of the array, number of repetition of the char
 * @c: the specific char
 * Return: tab as a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
		_putchar(i);
	}
	return (tab);
}

