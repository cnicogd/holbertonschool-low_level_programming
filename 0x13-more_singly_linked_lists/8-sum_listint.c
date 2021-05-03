#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of a listint_t.
 * @head: poitner to the first node.
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	unsigned int suma = 0;

	while (head)
	{
		suma = suma + head->n;
		head = head->next;
	}
	return (suma);
}
