#include "main.h"

/**
 * print_chessboard - print chessboard.
 *
 * @a: rows.
 * Return: nothing.
*/

void print_chessboard(char (*a)[8])
{
	int tr, gtr;

	for (tr = 0; tr < 8; tr++)
	{
		for (gtr = 0; gtr < 8; gtr++)
		{
			_putchar(a[tr][gtr]);
		}
		_putchar('\n');
	}
}
