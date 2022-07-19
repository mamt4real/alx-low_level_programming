#include "main.h"

void print_rev_helper(char *s, int n);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 */
void _print_rev_recursion(char *s)
{
	print_rev_helper(s, 0);
}

/**
 * print_rev_helper - prints a string recursively
 * @s: string pointer
 * @n: index to print
 */
void print_rev_helper(char *s, int n)
{
	if (s[n] == '\0')
		return;
	print_rev_helper(s, n + 1);
	_putchar(s[n]);
}
