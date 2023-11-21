#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    char *arr;
    unsigned int i;

    if (size == 0) {
        return NULL; /* Return NULL if size is 0 */
    }

    arr = (char *)malloc(size * sizeof(char));

    if (arr == NULL) {
        return NULL; /* Return NULL if memory allocation fails */
    }

    for (i = 0; i < size; i++) {
        arr[i] = c; /* Initialize each element with the specified char */
    }

    return arr; /* Return a pointer to the created array */
}

