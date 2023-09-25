#include "lists.h"

/**
 * get_nodeint_at_index - pops head node of list
 * @head: pointer to the first element in the linked list
 * @index: index of nod to get
 *
 * Return: pointers to nod
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nod;
	unsigned int n;

	for (nod = head, n = 0, nod && n < index; nod = nod->next, n++)
	return (nod);
}
