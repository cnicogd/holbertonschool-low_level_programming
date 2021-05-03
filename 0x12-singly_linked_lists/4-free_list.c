#include "lists.h"
/**
 * free_list - free the lists
 *@head: first node.
 *Return: free.
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
