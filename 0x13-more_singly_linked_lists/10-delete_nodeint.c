#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete a node at given index in a list
 * @head: pointer to a pointer to a list
 * @index: node to be deleted at
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int i;

	if (copy == NULL)
		return (-1);

	if (i == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (i=0; i < (i - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}


