#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - adds a node at the beginning of a list
* @head: pointer to the first node
* @n: data of the node
* Return: ->head / *head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNewNode;

	if (head == NULL)
		return (NULL);
	addNewNode = malloc(sizeof(listint_t));
	if (!addNewNode)
		return (NULL);

	addNewNode->n = n;
	addNewNode->next = *head;
	*head = addNewNode;

	return (*head);
}
