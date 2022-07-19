#include "main.h"

/**
 * _pow_recursion - calculates the power of x
 * @x: the base integer
 * @y: the index / power integer
 * Return: the value of x raised to y or -1 for error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
