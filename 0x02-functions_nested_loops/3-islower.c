#include "main.h"
/**
 *  _islower - checks if a character is lowercase
 *  Return:1 or 0
 *  @c: is the parameter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
