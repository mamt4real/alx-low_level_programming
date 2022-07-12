#include "main.h"

/**
 * puts2 - prints even characters in a string
 * @s: pointer to the string
 */

void puts2(char *s)
{
	int x = 0, i;

	/* get the length os s */
	while (s[x++] != '\0')
		continue;
	x--;
	/* print even characters */
	for (i = 0; i < x; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
