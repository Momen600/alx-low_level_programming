#include "lists.h"

/**
 * add_nodeint - adds a new node to the linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod = malloc(sizeof(listint_t));

	if (!head || !new_nod)
		return (NULL);

	new_nod->next = NULL;
	new_nod->n = n;
	if (*head)
		new_nod->next - *head;
	*head = new_nod;
	return (new_nod);
}
