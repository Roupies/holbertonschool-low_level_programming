#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Data to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	/* If inserting at the beginning, use add_dnodeint */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	/* Traverse to the position before the insertion point */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* If idx is out of bounds */
	if (!temp || !temp->next)
	{
		free(new);
		return (NULL);
	}

	/* Insert new node between temp and temp->next */
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}

