#include "lists.h"

/**
 * add_nodeint- adds node at beginning of list
 * @head: beginning of list
 * @n: node to be added
 * Return: item in node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *store;

	store  = malloc(sizeof(listint_t));

	if (store == NULL)
		return (NULL);
	store->n = n;
	store->next = *head;
	*head = store;

	return (store);
}
