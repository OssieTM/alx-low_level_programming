#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Concantenated string, else NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int n = 0;
	int p = 0;
	int q = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[n])
		n++;

	q = i + n;
	s = malloc((sizeof(char) * q) + 1);

	if (s == NULL)
		return (NULL);

	n = 0;

	while (p < q)
	{
		if (p <= i)
			s[p] = s1[p];

		if (p >= i)
		{
			s[p] = s2[n];
			n++;
		}
		p++;
	}
	s[p] = '\0';
	return (s);
}

