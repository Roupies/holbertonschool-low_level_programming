#include "main.h"

/**
 * main - fonction pour imprimer un triangle
 * @size: taille du triangle
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar (10);
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = -1; k < i; ++k)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
