#include "main.h"
#include<string.h>

int wildcmp_helper(char *, char *, int, int);

/**
 * wildcmp - compares two strings
 * Description: allows wil character (*)
 * comoarison in s2
 * @s1: string 1 pointer
 * @s2: pattern pointer
 * Return: 1 if it mmatches 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2, 0, 0));
}

/**
 * wildcmp_helper - helper to wildcmp
 * @s1: string
 * @s2: pttern pointer
 * @i: string index
 * @j: pattern index
 * Return: 1 if it mmatches 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2, int i, int j)
{
	int k;

	/* Base case (reached end of s2) */
	if (s2[j] == '\0')
	{
		/* string ends */
		if (s1[i] == '\0')
			return (1);
		/* string remains */
		return (0);
	}
	/* Base case (reached end of s1) */
	if (s1[i] == '\0')
	{
		/* pattern ends */
		if (s2[j] == '\0' || (s2[j] == '*' && s2[j + 1] == '\0'))
			return (1);
		/* pattern remain */
		return (0);
	}
	/* when character matches */
	if (s1[i] == s2[j])
	{
		return (wildcmp_helper(s1, s2, i + 1, j + 1));
	}
	/* wild character in pattern */
	if (s2[j] == '*')
	{
		/* move to the last wc */
		while (s2[j + 1] == '*')
			j++;
		/* stop wc matching */
		if (s1[i] == s2[j + 1])
		{
			/* find the last index of ch that matches next pt */
			k = i;
			while (s1[k] != '\0')
			{
				if (s1[k] == s2[j + 1])
					i = k;
				k++;
			}
			return (wildcmp_helper(s1, s2, i, j + 1));
		}
		/* goto next ch in string */
		return (wildcmp_helper(s1, s2, i + 1, j));
	}
	/* ch doesnt match */
	return (0);
}
