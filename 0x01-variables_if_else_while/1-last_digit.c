#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
* main - The main function
* Return: 0 for success
*/
int main(void)
{
	int n;
	int last;
	char *msg = "";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		msg = "greater than 5";
	else if (last == 0)
		msg = "0";
	else if (last < 6)
		msg = "less than 6 and not 0";
	printf("Last digit of %d is %d and is %s\n", n, last, msg);
	return (0);
}
