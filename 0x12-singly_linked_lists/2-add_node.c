#include "lists.h"
/**
 * _nodestrlen - function that returns the lenght
 *@str: input
 * Return: i
 */
int _nodestrlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - add a node.
 * @head: head of the list.
 * @str: string.
 * Return: The pos o new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addsnode;

	addsnode = malloc(sizeof(list_t));

	if (addsnode == NULL)
	{
		free(addsnode);
		return (NULL);
	}
	if (str == NULL)
	{
		addsnode->str = 0;
		addsnode->len = 0;
		addsnode->next = *head;
		*head = addsnode;
		return (addsnode);
	}
	else
	{
		addsnode->str = strdup(str);
		if (addsnode->str == NULL)
		{
			free(addsnode);
			return (NULL);
		}
		addsnode->len = _nodestrlen(str);
		addsnode->next = *head;
		*head = addsnode;
		return (addsnode);
	}
	return (NULL);
}
