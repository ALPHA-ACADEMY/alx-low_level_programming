#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a node in a list at given index
 * @head: pointer to the pointer to list
 * @idx: given index to insert node at
 * @n: data to be inserted
 * Return: the address of new node inserted or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy, *head;
	unsigned int i;

	*copy = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = head;
		*head = new;
		return (new);
	}

	for (i=0; i < (idx - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}

