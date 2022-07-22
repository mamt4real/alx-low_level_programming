#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 success 1 error
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	/* print the product of two args */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
