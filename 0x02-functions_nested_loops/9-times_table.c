#include "main.h"

/**
 * times_table - prints a 9x9 multiolication table
 */

void times_table(void)
{
	int row, col, res, f, s;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			res = col * row;
			f = res / 10;
			s = res % 10;
			if (res < 10)
			{
				_putchar(res + '0');
				if (col != 9)
				{
					_putchar(',');
					if ((row * (col + 1)) < 10)
						_putchar(' ');
				}
			}
			else
			{
				_putchar(f + '0');
				_putchar(s + '0');
				if (col != 9)
					_putchar(',');
			}
			if (col != 9)
				_putchar(' ');
		}

		_putchar('\n');
	}
}
