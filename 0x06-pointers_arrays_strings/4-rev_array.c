#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a:array
 * @n:integer
 *
 * Return : void
 */

void reverse_array(int *a, int n)
{
	int a, b;

	for (a = 0; (a < (n - 1) / 2); a++)
	{
		b = a[a];
		a[a] = a[n - 1 - a];
		a[n - 1 - a] = b;
	}
}
