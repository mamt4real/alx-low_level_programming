#include<stdio.h>
#include<stdlib.h>

int isnumber(char *);

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 success 1 error
 */
int main(int argc, char **argv)
{
	int sum = 0, i = 1;
	/* sum all the args */
	while (i < argc)
	{
		if (!isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i++]);
	}
	/* print the sum */
	printf("%d\n", sum);
	return (0);
}

/**
 * isnumber - checks if a string is a number
 * @s: pointer to string
 * Return: 1 if s is a number 0 otherwise
 */
int isnumber(char *s)
{
	while (*s)
	{
		if (*s > 58 || *s < 48)
			return (0);
		s++;
	}
	return (1);
}
