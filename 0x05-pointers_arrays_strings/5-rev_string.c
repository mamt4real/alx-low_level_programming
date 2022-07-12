#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	int x = 0, i;
	char tmp;

	/* get the length os s */
	while (s[x++] != '\0')
		continue;
	x--;
	/* reverse the string */
	for (i = 0; i < x / 2; i++)
	{
		tmp = s[i];
		s[i] = s[x - i - 1];
		s[x - i - 1] = tmp;
	}
}
