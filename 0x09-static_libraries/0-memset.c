#include "main.h"
/**
 * _memset - filling a specific value to a block of memory
 * @s: initial address
 * @b: required value
 * @n: bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
