#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - fonction that returns nth node of a dlistint_t list
 * @head: pointer to the first node in the list
 * @index: index of the nth node
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
