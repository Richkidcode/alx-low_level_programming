#include "lists.h"

/**
 * delete_nodeint_at_index - delets node at given index
 * @head: pointer to the first node
 * @index: position of node to be deleted
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *store = *head;
	listint_t *before = NULL;
	unsigned int id;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		listint_t *begin = *head;
		*head = (*head)->next;
		free(begin);
		return (1);
	}

	for (id = 0 ; id < index && store != NULL ; id++)
	{
		before = store;
		store = store->next;
	}
	if (store == NULL)
		return (-1);
	before->next = store->next;
	free(store);

	return (1);
}
