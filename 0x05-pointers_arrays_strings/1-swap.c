#include "main.h"
/**
 * swap_int - swaps the value of int b and int a
 * @a: first int
 * @b: second int
 * Return 0
 */
void swap_int(int *b, int *a)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
