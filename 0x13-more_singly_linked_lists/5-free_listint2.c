#include "lists.h"
/**
 *free_listint2 -  function that frees a listint_t list.
 * @head: *head.
 */
void free_listint2(listint_t **head)
{
	listint_t *freeList;

	if (!head)
		return;

	while (*head != NULL)
	{
		freeList = *head;
		*head = (*head)->next;
		free(freeList);
	}
}
