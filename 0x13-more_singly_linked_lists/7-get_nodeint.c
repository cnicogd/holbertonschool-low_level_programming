#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t.
 * @head: first node.
 * @index:  is the index of the node, starting at 0.
 * Return: NUll
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *tmp_node;

	while (head)
	{
		tmp_node = head;
		if (i == index)
			return (tmp_node);
		head = head->next;
		i++;
	}
	return (NULL);
}
