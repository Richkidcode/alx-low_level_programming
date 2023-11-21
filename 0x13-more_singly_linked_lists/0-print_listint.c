#include "lists.h"

/**
 * print_listint - prints nt
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count;

	node_count = 0;
	while (h)
	{
		if (h->n != 0)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}
