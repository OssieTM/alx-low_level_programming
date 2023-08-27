#include "main.h"
/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int v;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (v = 0; v <= t; v++)
	{
		if (v % 2 == 0)
		{
			_putchar(str[v]);
		}
	}
	_putchar('\n');
}
