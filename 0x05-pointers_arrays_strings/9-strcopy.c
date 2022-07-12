#include "main.h"

/**
 * _strcopy - copies src to destination
 * @src: pointer to the source string
 * @dst: pointer to the destination string
 * Return: pointer to destination
 */

char *_strcopy(char *dst, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return dst;
}
