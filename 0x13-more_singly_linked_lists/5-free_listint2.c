#include "lists.h"

/**
 * free_listint2 - function to free list
 * @head: pointer to the pointer of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
