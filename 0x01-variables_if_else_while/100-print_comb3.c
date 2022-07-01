#include<stdio.h>

/**
 * main - Entry Function
 * Description: prints all combination digits
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j < i || j == i)
				continue;
			putchar(i);
			putchar(j);
			if (j == 57 && 56 == i)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
