<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
=======
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
>>>>>>> fc62da3407bd19f5e01b1eaac2459e671ca34487
	}
}
