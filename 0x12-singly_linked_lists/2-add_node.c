#include <stdlib.h>
#include <string.h>
#include "list.h"

list_t *add_node(list_t **head, const char *str) {
    if (str == NULL) {
        return NULL;
    }

    /* Allocate memory for the new node */
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL;  // Allocation failed
    }

    /* Duplicate the input string using strdup */
    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);  // String duplication failed, free the allocated node
        return NULL;
    }

    /* Set the next pointer to the current head of the list */
    new_node->next = *head;

    /* Update the head to point to the new node */
    *head = new_node;

    return new_node;
}

