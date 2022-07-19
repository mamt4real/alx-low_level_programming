#include "main.h"

int strlen_helper(char *s, int n);

/**
 * _strlen_recursion - calculates length of a string
 * @s: pointer to the string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	return (strlen_helper(s, 0));
}

/**
 * strlen_helper - recursively find the lengthof s
 * @s: string pointer
 * @n: index
 * Return: length of s
 */
int strlen_helper(char *s, int n)
{
	if (s[n] == '\0')
		return (0);
	return (1 + strlen_helper(s, n + 1));
}
