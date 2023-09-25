#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *nod, *temp;

	if (!head)
		return;
	nod = *head;
	while (nod)
	{
		temp = nod;
		nod = nod->next;
		free(temp);
	}
	*head = NULL;
}
