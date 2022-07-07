#include "main.h"

/**
* print_triangle - prints '#' to form a teiangle
* @n: the length of  the triangle
*/

void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
