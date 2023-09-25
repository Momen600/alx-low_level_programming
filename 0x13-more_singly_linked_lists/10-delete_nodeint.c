#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nod, *previ_nod;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		nod = *head;
		*head = (*head)->next;
		free(nod);
		return (1);
	}
	nod = *head;
	while (nod)
	{
		if (i == index)
		{
			previ_nod->next = nod->next;
			free(nod);
			return (1);
		}
		i++;
		previ_nod = nod;
		nod = nod->next;
	}
	return (-1);

}
