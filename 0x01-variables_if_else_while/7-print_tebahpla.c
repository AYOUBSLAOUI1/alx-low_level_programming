#include <stdio.h>
/**
 * main - printing the alphabet from z to a.
 * Description : prints the lowercase alphabet in reverse,.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
