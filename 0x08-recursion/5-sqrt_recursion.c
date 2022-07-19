#include "main.h"

int sqrt_helper(int num, int n);

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: the number to find its square root
 * Return: the square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 2));
}

/**
 * sqrt_helper - find the square root of n recursively
 * @n: number to find its sqrt
 * @i: potential square root
 * Return: square root of n or -1
 */
int sqrt_helper(int n, int i)
{
	int res = i * i;

	if (res == n)
		return (i);
	if (res > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
