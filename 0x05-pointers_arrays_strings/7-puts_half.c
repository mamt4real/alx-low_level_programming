#include "main.h"

/**
 * puts_half - prints last half characters in a string
 * @s: pointer to the string
 */

void puts_half(char *s)
{
	int x = 0, i;

	/* get the length os s */
	while (s[x++] != '\0')
		continue;
	x--;
	/* print last half */
	i = (x % 2) ? (x / 2) + 1 : x / 2;
	for (; i < x; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
