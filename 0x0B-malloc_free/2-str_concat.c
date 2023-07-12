#include "main.h"

/**
 * _strlen - find length of a string.
 * @s: input char.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}

/**
 * str_concat - Concatenates tow string.
 * @s1: string 1.
 * @s2: string 2.
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int x1, x2;
	char *t, *conc;

	if (!s1)
		s1 = "";
	else
		x1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		x2 = _strlen(s2);

	conc = malloc(x1 + x2 + 1);
	if (!conc)
		return (0);

	t = conc;
	while (*s1)
		*t++ = *s1++;

	while ((*t++ = *s2++))
		;

	return (conc);
}
