#include "main.h"
/**
 *_memcpy - coping memory
 *@dest: memory stored area
 *@src: memory copied area
 *@n: bytes
 *Return: copied memory and n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
