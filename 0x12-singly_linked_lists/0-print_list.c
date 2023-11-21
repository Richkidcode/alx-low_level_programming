#include <stdio.h>
#include <stddef.h>

/* Define the structure for a node in the linked list */
typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

/* Function to print all elements of the linked list */
size_t print_list(const list_t *h) {
    size_t node_count = 0;

    while (h != NULL) {
        /* Check if the string is NULL */
        if (h->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%lu] %s\n", node_count, h->str);
        }

        /* Move to the next node */
        h = h->next;
        node_count++;
    }

    return node_count;
}

int main() {
    /* Example usage of the print_list function */
    list_t node3 = {"World", NULL};
    list_t node2 = {"Hello", &node3};
    list_t node1 = {"Holberton", &node2};

    size_t count = print_list(&node1);

    printf("Number of nodes: %lu\n", count);

    return 0;
}

