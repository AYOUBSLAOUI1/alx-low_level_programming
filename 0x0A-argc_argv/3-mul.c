#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = mul(argv[1]);
	b = mul(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
