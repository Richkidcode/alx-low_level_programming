#include <stdio.h>

/**
  * main - this is the entry point of the program
  *
  * Return: always 0
  */


int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
