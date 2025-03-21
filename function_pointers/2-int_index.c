#include "function_pointers.h"
#include "stddef.h"

/**
 * int_index - function that searches for an integer
 * @array: an array of integer
 * @size: size of the array, i.e numbers of elements
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element that matches, -1 if no or if size<=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		{
		}
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}
