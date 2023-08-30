#include "main.h"

/**
 * _print_rev_recursion - print string reverse
 * @s: pointer to string
 * *Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recurrsion(s + 1);
		_putchar(*s);
	}
}
