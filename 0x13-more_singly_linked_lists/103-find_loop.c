#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head:pointer to fist node
 * Return: address of node where loop starts or null
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *before = head, *temp = head;

	while (temp && temp->next)
	{
		before = before->next;
		temp = temp->next->next;
		if (before == temp)
		{
			before = head;
			while (before != temp)
			{
				before = before->next;
				temp = temp->next;
			}
			return (before);
		}
	}
	return (NULL);
}
