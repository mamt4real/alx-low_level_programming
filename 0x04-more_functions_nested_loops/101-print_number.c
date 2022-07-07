#include "main.h"

/**
 * print_number - prints an integer character wise
 * @n: the number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
		return;
	}
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
