#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * _calloc - allocates a memory to array
 * @n: number of elements
 * @size: memory size in bytes
 * Return: pointer to the memory
 */
void *_calloc(unsigned int n, unsigned int size)
{
	void *ptr = malloc(n * size);
	unsigned int i = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < n * size)
		((char *)ptr)[i++] = 0;
	return (ptr);
}
