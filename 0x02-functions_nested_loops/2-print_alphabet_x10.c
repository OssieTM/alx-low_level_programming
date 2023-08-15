#include "main.h"
/**
* print_alphabet_x10 - Print lowercase alphabet 10 times
* Return: 0 (Successful)
*/
void print_alphabet_x10(void)
{
	char m, a;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	Return(0);
}

