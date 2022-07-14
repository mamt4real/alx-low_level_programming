#include "main.h"
#include<string.h>


/**
 * leet - encode a string
 * @s: pointer to the  string
 * Return: pointer to the string
 */

char *leet(char *s)
{
	int x = 0, index;
	char *chars = "aAeEoOtTlL";
	char *codes = "4433007711", *pos;

	while (s[x] != '\0')
	{
		pos = strchr(chars, s[x]);
		if (pos)
		{
			index = (int)(pos - chars);
			s[x] = codes[index];
		}
		x++;
	}
	return (s);
}

