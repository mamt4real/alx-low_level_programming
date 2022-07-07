#include<stdio.h>

/**
 * main - print the largest prime factor of 612852475143
 * Return 0 success
 */
int main(void)
{
	long long int num = 612852475143;
	long int p = 3;

	while (num > 1)
	{
		if (num % p == 0)
			num /= p;
		else
			p += 2;
	}
	printf("%ld\n", p);
	return (0);
}
