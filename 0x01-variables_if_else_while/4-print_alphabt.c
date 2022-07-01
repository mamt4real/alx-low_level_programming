#include<stdio.h>

/**
 * main - Entry function
 * Deacription: prints alphabets in lowercase
 * Return: 0 indicating success
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c == 101 || c == 113)
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
