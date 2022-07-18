#include "main.h"
#include<stddef.h>

/**
 * _strchr - finds a character in a string
 * @s: pointer to the string
 * @c: the character to find
 * Return: pointer to c in s or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *found = NULL;

	if (!(*s && c))
		return (found);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found = &s[i];
			break;
		}
	}
	return (found);
}
