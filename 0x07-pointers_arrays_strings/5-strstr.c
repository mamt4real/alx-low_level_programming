#include "main.h"
#include<string.h>
#include<stddef.h>

/**
 * _strstr - finds a substring
 * @s: pointer to the string
 * @sub: pointer to the substring
 * Return: pointer to the beginning of substring or NULL
 */
char *_strstr(char *s, char *sub)
{
	int i, j;
	char *found = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = s[i] == sub[0] ?
			&s[i] : NULL;
		for (j = 1; sub[j] != '\0' && found; j++)
		{
			if (sub[j] != s[i + j])
			{
				found = NULL;
				break;
			}
		}
		if (found)
			break;
	}
	if (*sub[0] == '\0')
		found = &s[i];
	return (found);
}
