#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *old_node;

	while (head != NULL)
	{
		old_node = head;
		head = head->next;
		free(old_node);
	}
}
