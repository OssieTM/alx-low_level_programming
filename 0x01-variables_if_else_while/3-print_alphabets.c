#include <stdio.h>
/**
* main - Printing alphabet in lowercase followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
	char c;

	char d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
