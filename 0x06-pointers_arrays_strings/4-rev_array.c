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
	int j, c;

for (j = 0; (j < (n - 1) / 2); j++)
	{
	c = a[j];
	a[j] = a[n - 1 - j];
	a[n - 1 - j] = c;
	}
}
