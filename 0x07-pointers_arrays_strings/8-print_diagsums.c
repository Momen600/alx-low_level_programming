#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - discription
 *
 * @a: 2d array of int types
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int tr, d1 = 0, d2 = 0;

	for (tr = 0; tr < size; tr++)
	{
		d1 += a[tr];
		d2 += a[size - tr - 1];
		a += size;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
