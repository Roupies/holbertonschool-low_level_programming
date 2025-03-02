#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 * @a: pointer to an integer array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

