#include "main.h"

/**
 * _strpbrk -  locates first instance of s
 * @s: input
 * @accept: another input
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0 ; accept[p] ; p++)
		{
			if (*s == accept[p])
				return (s);
		}
	s++;
	}
	return ('\0');
}
