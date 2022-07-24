#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * create_array - creates an array of char and initialises the first element
 * @size: size of the array
 * @c: character to initialise the first
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (!size)
		return (NULL);
	arr = malloc(size * sizeof(char));
	while (i < size && arr)
		arr[i++] = c;
	return (arr);
}
