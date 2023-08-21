#include "main.h"

/**
 * swap_int - swaps the values of two intagers
 * using two input parameters
 * @n: input parameter 1
 * @n: input parameter 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
