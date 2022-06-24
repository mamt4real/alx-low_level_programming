#include <stdio.h>

/**
 * main - this is the main function
 * Description: This function prints a text
 * Return: 0 to indicate success                   */
int main(void)
{
	long long int x;
	printf("Size of a char: %d byte(s)\n",sizeof(char));
	printf("Size of an int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %d byte(s)\n",sizeof(long));
	printf("Size of a long long int: %d byte(s)\n",sizeof(x));
	printf("Size of a float: %d byte(s)\n",sizeof(float));
	
	return (0);
}

