#include "main.h"

/**
 * leet - replaces letters with digits
 * @str: string to be replaced
 * Return: a pointer is  returned
 */

char *leet(char *str)
{
	int loopInput;
	int loopString;

	char replacing[] = "aAeEoOtTlL";
	char replacement[] = "4433007711";

	for (loopInput = 0 ; str[loopInput] != '\0' ; loopInput++)
	{
		for (loopString = 0 ; replacing[loopString] != '\0'; loopString++)
		{
			if (str[loopInput] == replacing[loopString])
			{
				str[loopInput] = replacement[loopString];
			}
		}
	}
	return (str);
}
