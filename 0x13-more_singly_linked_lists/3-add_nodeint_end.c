#include "lists.h"

/**
 * add_nodeint_end - function to add new node at the end of the list
 * @head: pointer to the pointer to list
 * @n: data to add
 * Return: the address of the added element
*/

listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while(lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (*head);
}
