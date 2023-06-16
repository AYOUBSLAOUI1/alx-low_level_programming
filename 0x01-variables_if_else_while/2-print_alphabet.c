#include <stdio.h>
/**
 * main - printing the alphabet from a to z.
 * Description : the alphabet game.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char alp = 'a';
		while (alp <= 'z')
		{
			putchar(alp);
			alp++;
		}
	putchar('\n');
	return (0);
}
