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
 * add_node_end - add a new node at the end.
 * @head: list.
 * @str: string.
 * Return: new node at the end.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		end = end->next;
		end->next = new;
	}

	if (str == NULL)
	{
		new->str = 0;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		if (new->str == 0)
		{
			free(new);
			return (NULL);
		}
		new->len = _nodestrlen(str);
	}
	new->next = NULL;
	return (new);
}
