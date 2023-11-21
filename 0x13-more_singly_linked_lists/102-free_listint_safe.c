#include "lists.h"

/**
 * free_listint_safe - frees a linekd list
 * @h:poi102-free_listint_safe.c nter to first node in list
 * Return: number of elemnts freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int tof;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		tof = *h - (*h)->next;
		if (tof > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
