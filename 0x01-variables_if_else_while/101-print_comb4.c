#include <stdio.h>
/**
 * main - prints all possible different combinations of 3 digits.
 * Return: ALways 0 (Success).
 */
int main(void)
{
	int digit_0, digit_1, digit_2;

	for (digit_0 = 48; digit_0 <= 58; digit_0++)
	{
		for (digit_1 = 49; digit_1 <= 58; digit_1++)
		{
			for (digit_2 = 50; digit_2 < 58; digit_2++)
			{
				if (digit_2 > digit_1 && digit_1 > digit_0)
				{
					putchar(digit_0);
					putchar(digit_1);
					putchar(digit_2);
					if (digit_0 != 55 || digit_1 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
