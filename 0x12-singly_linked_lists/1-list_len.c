#include "lists.h"
/**
 * list_len - print len.
 * @h: list.
 * Return: print thelenght of the node list.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
