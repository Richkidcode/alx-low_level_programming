#include "lists.h"

/**
 * reverse_listint - reverses list
 * @head: pointer to first node
 * Return: first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL, *after = NULL, *now = *head;

	while (now != NULL)
	{
		after = now->next;
		now->next = before;
		before = now;
		now = after;
	}
	*head = before;
	return (*head);
}
