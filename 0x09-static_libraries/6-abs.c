#include "main.h"

/**
 * _abs -to find the absolute value of a number
 * @a:function parameter
 * Return: -a , 0 or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);

}
