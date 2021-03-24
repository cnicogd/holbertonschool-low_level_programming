#include "lists.h"
/**
 * listint_len - print the lenght of the list
 *@h: linked list.
 *Return: lenght of the elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
