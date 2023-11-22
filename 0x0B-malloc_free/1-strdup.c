#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated memory,
 *           with copy of a string given as a parameter
 * @str: string
 * Return: pointer to a new string which is a duplicate of the string str
 *         NULL if str = NULL
 *         pointer to duplicated string, NULL if insufficient memory was
 *         available
 */
char *_strdup(char *str)
{
char *ar = NULL;
int i = 0;
int j = 0;
if (str == NULL)
return (NULL);
while (str[i])
{
ar[j] = str[j];
j++;
}
ar[j + 1] = 0;
return (ar);
}
