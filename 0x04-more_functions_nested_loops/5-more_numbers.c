#include "main.h"

/**
* more_numbers - prints10 times the numvers
* from 0 - 14
*/

void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
			printNum(c);
		_putchar('\n');
	}
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
	}
	else
	{
		printNum(n / 10);
		_putchar((n % 10) + '0');
	}
}
