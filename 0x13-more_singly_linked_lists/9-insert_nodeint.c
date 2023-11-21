#include "lists.h"

/**
 * insert_nodeint_at_index - places node at index given
 * @head: start of list
 * @idx: position of insertion
 * @n: data to be added
 * Return: node added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *store, *node_add;
	unsigned int id;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		node_add = malloc(sizeof(listint_t));
		if (node_add == NULL)
			return (NULL);

		node_add->n = n;
		node_add->next = *head;
		*head = node_add;
		return (node_add);
	}
	store = *head;

	for (id = 0 ; id < idx - 1 && store != NULL ; id++)
		store = store->next;
	if (store == NULL)
		return (NULL);
	node_add = malloc(sizeof(listint_t));
	if (node_add == NULL)
		return (NULL);
	node_add->n = n;
	node_add->next = store->next;
	store->next = node_add;

	return (node_add);
}
