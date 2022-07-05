#include "main.h"

/**
 * main - prints the sum of multiples of 3
 * and 5 that are below 1024(excluded)
 * Return: 0 always
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printNum(sum);
	_putchar('\n');

	return (0);
}

/**
 * printNum - prints an integer character wise
 * @n: the number to print
 */

void printNum(int n)
{
	if (n < 0)
	{
		_putchar('-');
		printNum(-n);
		return;
	}
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		printNum(n / 10);
		_putchar((n % 10) + '0');
	}
}
