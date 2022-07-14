#include "main.h"

/**
 * cap_string - capitalize a string
 * Description: uses spc, tab, newline, ", ,,
 * ;, !, ., ?, (, ), {, } as delimeters
 * @s: pointer to the  string
 * Return: pointer to the string
 */

char *cap_string(char *s)
{
	int x = 0;

	to_upper(&s[0]);
	while (s[x] != '\0')
	{
		if (is_delimeter(s[x]))
			to_upper(&s[x + 1]);
		x++;
	}
	return (s);
}

/**
 * to_upper - convert a charater to uppercase
 * @c: the character pointer
 */
void to_upper(char *c)
{
	if (*c <= 'z' && *c >= 'a')
		*c -= 32;
}

/**
 * is_delimeter - check if a char is a delimeter
 * @c: the chractr to check
 * Return: true if c is a delimeter false otherwise
 */
int is_delimeter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == ',' || c == ';' || c == '!'
		|| c == '.' || c == '?' || c == '"'
		|| c == '(' || c == ')' || c == '}' || c == '{');
}

