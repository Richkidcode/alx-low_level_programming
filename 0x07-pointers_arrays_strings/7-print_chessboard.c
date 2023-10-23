#include "main.h"
/**
 * print_chessboard - prints chess
 * @a: array
 * Return:always 0
 */
void print_chessboard(char (*a)[8])
{
	int p;
	int z;

	for (p = 0 ; p < 8 ; p++)
	{
		for (z = 0 ; z < 8 ; z++)
		{
			_putchar(a[p][z]);
		}
		_putchar('\n');
	}

}
