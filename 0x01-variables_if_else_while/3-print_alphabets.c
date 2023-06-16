#include <stdio.h>
/**
 * main - printing the alphabet from a to z & A TO Z .
 * Description : the alphabet game.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z') /*alphabet a to z*/
	{
		putchar(alp);
		alp++;
	}
	while (ALP <= 'Z') /*ALPHABET A TO Z*/
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');
	return (0);
}
