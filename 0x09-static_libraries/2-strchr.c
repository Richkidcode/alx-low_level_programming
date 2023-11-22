#include "main.h"

/**
 * *_strchr - returns a pointer
 * @s:pointer
 * @c:character in string
 * Return:always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
