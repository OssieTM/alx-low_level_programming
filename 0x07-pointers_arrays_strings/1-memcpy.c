#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: bytes copied
 * @src: memory area copied from
 * @dest: memory area copied to
 * Return: a pointer copied area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
