#include "main.h"

/**
* print_line - prints '_' times n to form a line
* @n: the length of  the line
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
