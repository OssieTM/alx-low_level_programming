#include "main.h"
/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number
 * @n: input number
 * Return: 1 if the number is a prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (a_prime(n, n - 1));
}
/**
 * a_prime - calculate the prime number
 * @n: to check
 * @i: iteration
 */
int a_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (a_prime(n, i - 1));
}
