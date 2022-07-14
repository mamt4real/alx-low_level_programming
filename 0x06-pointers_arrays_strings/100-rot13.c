#include "main.h"
#include<string.h>


/**
 * rot13 - encode a string using ROT-13
 * @s: pointer to the  string
 * Return: pointer to the string
 */

char *rot13(char *s)
{
	int x = 0, index;
	char *chars = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *pos;

	while (s[x] != '\0')
	{
		pos = strchr(chars, s[x]);
		if (pos)
		{
			index = (int)(pos - chars);
			/* rotate */
			index = (index + 26) % 52;
			s[x] = chars[index];
		}
		x++;
	}
	return (s);
}

