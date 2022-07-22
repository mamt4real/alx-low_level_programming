#include<stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int i = 0;
	/* print all arguments */
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
