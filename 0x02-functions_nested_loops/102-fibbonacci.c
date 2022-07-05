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
