#include<stdio.h>

/**
 * main - Entry function
 * Deacription: prints Digits
 * Return: 0 indicating success
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
