#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a doubly linked list
 * @head: Pointer to the pointer of the first node
 * @index: Index of the node to delete (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	/* Case 1: Empty list */
	if (!head || !*head)
		return (-1);

	/* Case 2: Deleting the first node */
	if (index == 0)
	{
		*head = temp->next; /* Move head to the next node */
		if (*head)
			(*head)->prev = NULL; /* Update new head's prev */
		free(temp); /* Free the removed node */
		return (1);
	}

	/* Case 3: Traverse to the node before the one to delete */
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* If index is out of range */
	if (!temp)
		return (-1);

	/* Adjust pointers to remove temp from the list */
	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = temp->next;

	free(temp); /* Free the removed node */
	return (1);
}

