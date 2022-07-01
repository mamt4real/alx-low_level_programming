#include<stdio.h>

/**
 * main - Entry function
 * Deacription: prints base 16 characters
 * Return: 0 indicating success
 */
int main(void)
{
	int c;

	for (c = 48; c < 103; c++)
	{
		if (c == 58)
			c = 97;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
