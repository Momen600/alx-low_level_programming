#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to index
 * @index: index of the bit to set
 *
 * Return: 1 for successful, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
