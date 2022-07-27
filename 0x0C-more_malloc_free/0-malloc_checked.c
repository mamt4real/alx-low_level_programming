#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * malloc_checked - allocates a memory
 * @n: memory size in bytes
 * Return: pointer to the memory
 */
void *malloc_checked(unsigned int n)
{
	void *ptr = malloc(n);

	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
