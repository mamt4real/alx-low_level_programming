#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n: starting point
 */

void print_to_98(int n)
{
	int inc, i;

	inc = (n < 98) ? 1 : -1;
	for (i = n; i != 98; i += inc)
	{
		printNum(i);
		_putchar(',');
		_putchar(' ');
	}
	printNum(98);
	_putchar('\n');
}
