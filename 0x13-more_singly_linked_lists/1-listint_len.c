#include "lists.h"

/**
 * listint_len - returns length of node
 * @h:pointer to the first node
 * Return: length of node
 */

size_t listint_len(const listint_t *h)
{
	size_t length;

	length = 0;
	while (h)
	{
		if (h->n != 0)
		{
			length++;
		}
		h = h->next;
	}
	return (length);
}
