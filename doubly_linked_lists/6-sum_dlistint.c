#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * sum_dlistint - fonction that returns the sum of all the data (n) of a list
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	int somme = 0;

	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
