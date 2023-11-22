#include "lists.h"

/**
 * add_node_end - adds nod at end of line
 * @head:new node
 * @str:string
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *old_node;
	size_t nd;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	for (nd = 0 ; str[nd] ; nd++)
		;
	new_node->len = nd;
	new_node->next = NULL;
	old_node = *head;

	if (old_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (old_node->next != NULL)
			old_node = old_node->next;
		old_node->next = new_node;
	}
	return (*head);
}
