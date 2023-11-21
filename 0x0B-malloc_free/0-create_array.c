<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c:character
 * Return:ptr on success and null on failure
 */


char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		ptr[i] = c;

	return (ptr);
}
=======
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

>>>>>>> 17a990c4c9110e1495531d65dadc1c8c49a9ad3c
