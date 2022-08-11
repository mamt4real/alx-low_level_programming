#include "lists.h"

/**
 * list_len - length of a singly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int retval = 0;

	while(h)
	{
		h = h->next;
		retval++;
	}
	
	return (retval);
}
