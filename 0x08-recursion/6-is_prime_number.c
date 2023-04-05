#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - indicates if an integer is a prime number or not
 * @n: num to evaluate
 *
 * Return: 0 if not prime num or 1 if n is
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if the number is prime recursively
 * @n: num to evaluate
 * @i: iterator
 *
 * Return: 0 if n is not prime, 1 if n is
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
