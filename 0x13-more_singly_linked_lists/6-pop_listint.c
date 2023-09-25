#include "lists.h"

/**
 * pop_listint - pops head node of list
 * @head: pointer to the first element in the linked list
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *nod;
	int n;

	if (!head || !*head)
		return (0);

	nod = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nod;

	return (n);
}
