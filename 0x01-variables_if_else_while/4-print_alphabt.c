#include <stdio.h>
/**
 * main - prints the alphabet in lowercase without q & e
 * Description : the alphabet game.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'e' || alp == 'q')
			alp++;
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
