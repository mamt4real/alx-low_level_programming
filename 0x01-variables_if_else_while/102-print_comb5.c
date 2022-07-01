#include<stdio.h>

/**
 * main - Entry Function
 * Description: prints all combination digits
 * Return: 0
 */
int main(void)
{
	int i, j, fst, scn;
	int codes[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j < i || j == i)
				continue;
			/* First 2 digits */
			fst = i / 10;
			scn = i % 10;
			putchar(codes[fst]);
			putchar(codes[scn]);
			putchar(32);
			/* Second 2 digits */
			fst = j / 10;
			scn = j % 10;
			putchar(codes[fst]);
			putchar(codes[scn]);
			if (j == 99 && 98 == i)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
