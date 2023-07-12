#include <stdlib.h>

/**
 * _strdup - copy
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *m;
	int x = 0, y;

	if (!str)
		return (NULL);

	while (*(str + x))
		x++;
	x++;
	m = malloc(sizeof(char) * x);

	if (m == NULL)
	{
		return (NULL);
	}

	for (y = 0; y <= x; y++)
	{
		m[y] = str[y];
	}
	return (m);
}
