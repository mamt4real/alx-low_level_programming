#include<stdio.h>

/**
 * main - Entry function
 * Deacription: prints alphabets in lowercase
 * Return: 0 indicating success
 */
int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
