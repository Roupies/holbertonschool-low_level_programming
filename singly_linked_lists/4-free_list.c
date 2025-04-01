#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 *
 * Description: This function traverses the entire linked list, frees each
 * node's string (if dynamically allocated), and then frees the node itself.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

