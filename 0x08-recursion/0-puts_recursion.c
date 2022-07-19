#include "main.h"

void puts_helper(char *s, int n);

/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	puts_helper(s, 0);
	_putchar('\n');
}

/**
 * puts_helper - prints a string recursively
 * @s: string pointer
 * @n: index to print
 */
void puts_helper(char *s, int n)
{
	if (s[n] == '\0')
		return;
	_putchar(s[n]);
	puts_helper(s, n + 1);
}
