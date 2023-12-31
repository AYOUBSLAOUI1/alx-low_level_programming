#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 * @accept: which consist only of bytes from
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int w = 0, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					w++;
			}
		}
		else
			return (w);
	}
	return (w);

}
