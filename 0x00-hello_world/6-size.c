#include <stdio.h>

/**
 * main - this is the main function
 * Description: This function prints a text
 * Return: 0 to indicate success
 */
int main(void)
{
	long long int x;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(x));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

