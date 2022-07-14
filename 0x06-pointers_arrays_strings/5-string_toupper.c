#include "main.h"

/**
 * string_toupper - convert a string to upper case
 * @s: pointer to the  string
 * Return: pointer to the string
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] <= 'z' && s[x] >= 'a')
			s[x] -= 32;
		x++;
	}
	return (s);
}
