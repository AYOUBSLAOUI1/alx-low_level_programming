#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y, b, h = 0, g = 0;

	for (x = 0; x < size; x++)
	{
		b = (x * size) + x;
		h += *(a + b);
	}
	for (y = 0; y < size; y++)
	{
		b = (y * size) + (size - 1 - y);
		g += *(a + b);
	}
	printf("%i, %i\n", h, g);
}
