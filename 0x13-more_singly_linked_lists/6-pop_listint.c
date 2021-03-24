#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list.
* @head: **pointer.
* Return:head data n.
*/
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *pop_node_list;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	pop_node_list = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(pop_node_list);
	return (i);
}
