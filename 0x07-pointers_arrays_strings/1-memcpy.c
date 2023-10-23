#include "main.h"
/**
 * _memcpy - copies a memory to dest
 * @dest:destination pointer
 * @src:source pointer
 * @n:number of times
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
