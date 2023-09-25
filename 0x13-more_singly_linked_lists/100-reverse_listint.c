#include "lists.h"

/**
 * reverse_listint - reverses an int list
 * @head: address of the first node in the list
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previ = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previ;
		previ = *head;
		*head = next;
	}

	*head = previ;

	return (*head);
}
