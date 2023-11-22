#include "main.h"


/**
 * _strlen - counts string length
 * @s: is a character
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
