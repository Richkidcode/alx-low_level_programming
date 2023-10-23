#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int A, B, z;

	A = 0;
	B = 0;

	for (z = 0; z < size; z++)
	{
		A = A + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		B += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", A, B);
}
