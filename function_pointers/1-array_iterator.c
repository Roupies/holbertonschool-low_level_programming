#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * array_iterator - function applies given function to each element of an array
 * @array: an array of integer
 * @size: size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
