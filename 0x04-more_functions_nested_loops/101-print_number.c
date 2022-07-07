#include "main.h"

/**
 * print_number - prints an integer character wise
 * @x: the number to print
 */

void print_number(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	unsigned int n = (unsigned int)x;

	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
