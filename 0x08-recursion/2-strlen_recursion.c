#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: input string
 * Return: O
 */
int _strlen_recursion(char *s)
{
	int length  = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
