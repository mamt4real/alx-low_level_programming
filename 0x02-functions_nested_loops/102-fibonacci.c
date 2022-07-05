#include "main.h"

/**
 * main - prints the first fifty fibbonaci numbers
 * Return: 0 always
 */

int main(void)
{
	int a = 0, b = 1;
	long sum, i;

	for (i = 1; i <= 50; i++)
	{
		sum = a + b;
		printNum(sum);
		a = b;
		b = sum;

		if (i < 50)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
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
