#include<stdio.h>

/**
 * main - Entry function
 * Deacription: prints alphabets in uppercase
 * Return: 0 indicating success
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
		putchar(c);
	for (c = 65; c < 91; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
