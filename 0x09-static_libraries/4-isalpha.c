#include "main.h"

/**
 * _isalpha - checking for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter, or 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
