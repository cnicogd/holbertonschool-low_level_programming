#include "lists.h"

/**
 * print_listint - print list.
 * @h: linked list h
 * Return: h elements.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
			h = h->next;
			i++;
	}
		return (i);
}
