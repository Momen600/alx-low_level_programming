#include "lists.h"

/**
 * print_listint - prints the linked list
 * @h: linked list of type listint_t to print
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t nu = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nu++;
	}

	return (nu);
}
