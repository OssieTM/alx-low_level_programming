#include "main.h"
#include <unistd.h>
/**
* print_alphabet - Printing the alphabet, in lowercase,
* followed by a new line
*
* Return:0(Successful)
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

