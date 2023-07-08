#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	unsigned int x;
	int count, sum;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (sum > 1)
		{
			for (x = 0; x < sizeof(cents[x]); x++)
			{
				if (sum >= cents[x])
				{
					count += sum / cents[x];
					sum = sum % cents[x];
				}
			}
		}
		if (sum == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
