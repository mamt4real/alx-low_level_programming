#include "main.h"

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
	printNum(sum);
	_putchar('\n');

	return (0);
}
