#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - add a new node at the end of the linked list
* @head: pointer to the head
* @n: data of the node.
* Return: *head
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addEndNode;
	listint_t *addNewnode;

	addNewnode = malloc(sizeof(listint_t));
	if (!addNewnode)
		return (NULL);

	addNewnode->n = n;
	addNewnode->next = NULL;

	if (*head == NULL)
	{
		*head = addNewnode;
		return (addNewnode);
	}
	addEndNode = *head;

		while (addEndNode->next != NULL)
		addEndNode = addEndNode->next;
		addEndNode->next = addNewnode;

	return (addNewnode);
}
