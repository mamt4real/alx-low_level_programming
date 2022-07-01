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
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j < i || j == i)
				continue;
			for (k = 48; k < 58; k++)
			{
				if (k < j || k == j)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (j == 56 && 55 == i && k == 57)
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
