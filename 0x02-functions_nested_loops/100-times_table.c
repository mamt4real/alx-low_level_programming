#include "main.h"

/**
 * print_times_table - prints a nxn multiolication table
 * @n: the upper bound of the table
 * n should be between 0-15
 */

void print_times_table(int n)
{
	int row, col, res;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row < n + 1; row++)
	{
		for (col = 0; col < n + 1; col++)
		{
			res = col * row;
			printNum(res);
			if (col != n)
			{
				_putchar(',');
				if ((row * (col + 1)) < 10)
					_putchar(' ');
				if ((row * (col + 1)) < 100)
					_putchar(' ');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
