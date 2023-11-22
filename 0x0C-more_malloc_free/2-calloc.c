#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array to beallocated memory
 * @size:size of array
 * Return:pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int b = 0, mesi = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mesi = nmemb * size;

	ptr = malloc(mesi);

	if (ptr == NULL)
		return (NULL);
	while (b < mesi)
	{
		ptr[b] = 0;
		b++;
	}
	return (ptr);

}
