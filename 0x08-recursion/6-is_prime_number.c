#include "main.h"

int isprime_helper(int, int);

/**
 * is_prime_number - checks the primality of n
 * @n: the number to check
 * Return: 1 if n is prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (isprime_helper(n, 2));
}

/**
 * isprime_helper - helper function
 * @n: number to check
 * @i: potential divisor
 * Return: 1 if n is prime or 0
 */
int isprime_helper(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (isprime_helper(n, i + 1));
}
