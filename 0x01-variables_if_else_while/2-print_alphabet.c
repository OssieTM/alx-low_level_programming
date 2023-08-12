#include <stdio.h>
/**
* main - Printing alphabet in lowercase followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
char b;

b = 'a';

while (b <= 'z')
{
putchar(b);
b++;
}
putchar ('\n');
return (0);
}
