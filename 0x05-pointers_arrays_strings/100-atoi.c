#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the pinter to the string
 * Return: the integer value of s
 */
int _atoi(char *s)
{
	int res = 0, i = 0;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if ('0' <= s[i] && s[i] <= '9')
			break;
	}
	while ('0' <= s[i] && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
