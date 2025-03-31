#include "lists.h"
#include <stdio.h>

/**
 * list_len  - returns the number of elements in a linked list_t list.
 * @h: is pointer to the first node of the list
 *
 * Return: the number of elements
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
