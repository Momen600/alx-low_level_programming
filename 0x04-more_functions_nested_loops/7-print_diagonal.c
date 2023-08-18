#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *
 * should be printed
*/

void print_diagonal(int n)
{
	int number, space;

		if (n <= 0)
			_putchar('\n');
		else
		{
			for (number = 1; number <= n; number++)
			{
				_putchar(92); /*is equal to '/' char*/
				_putchar('\n');
				for (space = 1; space <= number, space)
					_putchar(' ')
			}
		}
}
