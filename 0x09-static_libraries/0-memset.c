#include "main.h"

/**
 * _memset - sets number of bytes
 * @s:pointer
 * @b:byte
 * @n:number of byte
 * Return:s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
