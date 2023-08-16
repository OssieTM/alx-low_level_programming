#include "main.h"
/**
 * print_sign - Printing the sign of a number
 *
 * @n: the int to check
 *
 * Return: 1 for +ve fig, -1 for -ve fig and 0 for otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('43');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('45');
		return (-1);
	}
	else
	{
		_putchar('48');
	}
	return (0);
}
