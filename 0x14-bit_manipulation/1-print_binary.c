#include "main.h"

/**
 * print_binary - prints an int in binary
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	print_b_helper(n, 0);
}

/**
 * print_b_helper - prints an int in binary
 * @n: number to print
 * @i: number to compare (in powers of 2)
 */
void print_b_helper(unsigned long int n, unsigned long int i)
{
	unsigned int res;

	if (i > MAX_COUNT)
		return;
	res = 1 << i;
	if (res > n)
		return;
	print_b_helper(n, i + 1);
	_putchar(n & res ? '1' : '0');
}
