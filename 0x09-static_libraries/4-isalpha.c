#include "main.h"

/**
 * _isalpha -  checks if c is lowercase or uppercase
 * Return: 1 or 0
 * @c: is the parameter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
