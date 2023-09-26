#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given index
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *New;
	listint_t *Temp = *head;

	New = malloc(sizeof(listint_t));
	if (!New || !head)
		return (NULL);

	New->n = n;
	New->next = NULL;

	if (idx == 0)
	{
		New->next = *head;
		*head = New;
		return (New);
	}

	for (i = 0; Temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			New->next = Temp->next;
			Temp->next = New;
			return (New);
		}
		else
			Temp = Temp->next;
	}

	return (NULL);
}

