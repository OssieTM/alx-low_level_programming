#include "main.h"
/**
 * _isalpha - Checking for alphabetic charater
 *
 * @c: alpabet to check for
 *
 * Return: 1 if c is alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
