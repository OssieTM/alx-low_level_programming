#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
* main - Printing alphabet in lowercase and uppercase followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar (c);
	for (c = 'A'; c <= 'z'; c++)
		putchar (c);
	putchar('\n');
	return (0);
}
