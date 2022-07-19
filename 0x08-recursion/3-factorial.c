#include "main.h"

/**
 * factorial - calculates the factorial of n
 * @n: the integer
 * Return: the factorial of n or -1 for error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
