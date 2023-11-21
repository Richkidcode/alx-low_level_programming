#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: node to be deleted
 * Return: data of node
 */

int pop_listint(listint_t **head)
{
	listint_t *store;
	int save;

	if (head == NULL || *head == NULL)
		return (0);
	store = *head;
	*head = (*head)->next;
	save = store->n;
	free(store);

	return (save);
}
