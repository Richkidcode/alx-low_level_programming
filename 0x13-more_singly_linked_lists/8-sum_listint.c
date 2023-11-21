#include "lists.h"

/**
 * sum_listint - returns sum of data
 * @head: pointer to first node
 * Return: sum of data or 0
 */

int sum_listint(listint_t *head)
{
	int datasum = 0;

	while (head != NULL)
	{
		datasum += head->n;
		head = head->next;
	}
	return (datasum);
}
