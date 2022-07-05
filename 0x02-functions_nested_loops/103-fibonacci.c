#include "main.h"
#include<stdio.h>

/**
 * main - prints the sum of even fubbonaci
 * numbers whise value does not exceed 4,000,000
 * Return: 0 always
 */

int main(void)
{
	long a = 1, b = 2, sum, next;

	for (; ;)
	{
		if (a % 2 == 0)
			sum += a;
		if (b > 4000000)
			break;
		if (b % 2 == 0)
			sum += b;
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);

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
