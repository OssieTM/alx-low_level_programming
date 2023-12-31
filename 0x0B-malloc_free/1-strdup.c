#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: string
 * Return: Null if strl = null else return
 * a pointer to the copied string
 */
char *_strdup(char *str)
{
	int n = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (n < i)
	{
		s[n] = str[n];
		n++;
	}
	s[n] = '\0';
	return (s);
}
