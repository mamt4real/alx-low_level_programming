#include "lists.h"

/**
 * print_list - prints a singly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int retval = 0;

	while(h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		retval++;
	}
	
	return (retval);
}
