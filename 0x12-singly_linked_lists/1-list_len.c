#include "lists.h"
/**
 * list_len - returns the number of nodes in a list
 * @h: pointer to the first element in the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i = i + 1;
		h = h->next;
	}

	return (i);
}
