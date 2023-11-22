#include "lists.h"

/**
 *free_list - frees list_t
 *@head: to be freed
 */

void free_list(list_t *head)
{
	list_t *old_node;

	while ((old_node = head) != NULL)
	{
		head = head->next;
		free(old_node->str);
		free(old_node);
	}
}
