#include "lists.h"

/**
 * get_nodeint_at_index - prints node at index
 * @head: start of list
 * @index: index of nodde
 * Return: index at node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int in;
	listint_t *store;

	store = head;
	for (in = 0 ; in < index && store != NULL ; in++)
	{
		store = store->next;
	}
	return (store);
}
