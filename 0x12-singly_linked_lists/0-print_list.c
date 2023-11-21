#include "lists.h"

/**
 * print_list - prints all elements in a linked list
 * @h:pointer to head of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count;

	node_count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len,  h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		node_count++;
	}
	return (node_count);

}
