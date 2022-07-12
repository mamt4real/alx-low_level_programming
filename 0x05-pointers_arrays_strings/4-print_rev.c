#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 */

void print_rev(char *s)
{
	int x = 0;

	/* get the length os s */
	while (s[x++] != '\0')
		continue;
	x--;
	/* print in reverse */
	while (x >= 0)
		_putchar(s[x--]);
	_putchar('\n');
}
