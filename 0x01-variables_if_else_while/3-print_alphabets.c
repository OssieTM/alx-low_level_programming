#include <stdio.h>
/**
* main - Printing alphabet in lowercase and uppercase followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
char b;

char c;

b = 'a';
c = 'A';
while (b <= 'z')
{
putchar(b);
b++;
}
while (c <= 'z')
{
putchar(c);
c++;
}
putchar ("\n");
return (0);
}
