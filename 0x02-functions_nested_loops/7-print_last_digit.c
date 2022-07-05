#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: The integer to pribt its last digit
 * Return: The last digit of an integer
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = -1 * (n % 10);
	}
	else
	{
		last = n % 10;
	}
	_putchar(last + '0');
	return (last);
}
