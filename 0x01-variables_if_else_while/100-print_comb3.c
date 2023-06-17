#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: ALways 0 (Success).
 */
int main(void)
{
	int digit_0, digit_1;

	for (digit_0 = 48; digit_0 <= 56; digit_0++)
	{
		for (digit_1 = 49; digit_1 <= 57; digit_1++)
		{
			if (digit_1 > digit_0)
			{
				putchar(digit_0);
				putchar(digit_1);
				if (digit_0 != 56 || digit_1 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
