#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
* main - Printing all single digit numbers of base 10, from 0 using putchar
* Return: 0 (Success)
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	putchar('\n');
	return (0);
}
