#include "lists.h"

/**
 * free_listint2 - frees listint2_t
 * @head: node to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *old_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		old_node = *head;
		*head = (*head)->next;
		free(old_node);
	}
	*head = NULL;
}
