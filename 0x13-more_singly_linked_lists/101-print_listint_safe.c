#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts number of nique nodes
 * @head: pointer to the first node
 * Return: number of unique nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *har;
	size_t num = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tort = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tort == har)
		{
			tort = head;
			while (tort != har)
			{
				num++;
				tort = tort->next;
				har = har->next;
			}
			tort = tort->next;
			while (tort != har)
			{
				num++;
				tort = tort->next;
			}
			return (num);
		}
		tort = tort->next;
		har = (har->next)->next;

	}
	return (0);

}
 /**
 * print_listint_safe - prints a listint_list safely
 * @head: pointer to the first node
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count, ind = 0;

	node_count = looped_listint_len(head);

	if (node_count == 0)
	{
		for (; head != NULL ; node_count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind  = 0 ; ind < node_count ; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node_count);
}
