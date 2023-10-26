#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: input string
 * Return: O
 */
int _strlen_recursion(char *s)
{
	int l = 0;
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
