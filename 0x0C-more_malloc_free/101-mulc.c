#include<stdlib.h>
#include<string.h>
#include "main.h"

/**
 * reverse - reverses a string
 * @s: pointer to string
 * @i: last index
 * Return: pointer to to s
 */
char *reverse(char *s, int i)
{
	char ans;
	int j = 0;

	for (j = 0; j < i; j++, i--)
	{
		ans = s[j];
		s[j] = s[i];
		s[i] = ans;
	}
	return (s);
}

/**
 * isnumber - checks if a string is a number
 * @s: pointer to string
 * Return: 1 if s is a number 0 otherwise
 */
int isnumber(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > 58 || s[i] < 48)
			return (0);
		i++;
	}
	return (1);
}

/**
 * mul2 - multiply two numbers
 * @s1: first number
 * @s2: second number
 * Return: pointer to result
 */
char *mul2(char *s1, char *s2)
{
	int l1, l2, sum = 0, cry = 0, i,
	    j, n1, n2, r1 = 0, r2 = 0;
	char *res;

	if (!isnumber(s1) || !isnumber(s2))
		return (NULL);
	l1 = strlen(s1);
	l2 = strlen(s2);
	if ((l1 == 1 && s1[0] == '0') || (l2 == 1 && s2[0] == '0'))
	{
		res = malloc(2 * sizeof(char));
		res[0] = '0', res[1] = '\0';
		return (res);
	}
	res = malloc((l1 + l2) * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < l1 + l2; i++)
		res[i] = '0';
	for (i = l1 - 1; i >= 0; i--)
	{
		n1 = s1[i] - '0';
		r2 = 0;
		cry = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			n2 = s2[j] - '0';
			sum = (n1 * n2) + res[r1 + r2] + cry - '0';
			res[r1 + r2] = (sum % 10) + '0';
			cry = sum / 10, r2++;
		}
		if (cry > 0)
			res[r1 + r2] += cry;
		r1++;
	}
	i = l1 + l2 - 1;
	while (res[i] == '0' && i >= 0)
		i--;
	res[i + 1] = '\0';
	return (reverse(res, i));
}

/**
 * print - prints a string
 * @s: string to print
 */
void print(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);
	_putchar('\n');
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 * Return: 0 success 98 error
 */
int main(int argc, char **argv)
{
	char *res;

	if (argc != 3)
	{
		print("Error");
		exit(98);
	}
	res = mul2(argv[1], argv[2]);
	if (res == NULL)
	{
		print("Error");
		exit(98);
	}
	print(res);
	free(res);
	return (0);
}
