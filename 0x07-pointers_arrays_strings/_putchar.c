#include <unsitd.h>

/**
 * _putchar - writes the character c to sdout
 * @c: the character to print
 *
 * Returne: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
