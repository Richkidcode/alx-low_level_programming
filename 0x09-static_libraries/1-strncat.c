include "main.h"
/**
 * _strncat - concentates the two strings
 * @dest: is the destination character
 * @src: is the source character
 * @n:is the number of bytes
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
