#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *str)
{
	int lopo;
	int lupu;
	char beforeot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char afterot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (lopo = 0; str[lopo] != '\0'; lopo++)
	{
		for (lupu = 0; lupu < 52; lupu++)
		{
			if (str[lopo] == beforeot[lupu])
			{
				str[lopo] = afterot[lupu];
				break;
			}
		}
	}
	return (str);
}
