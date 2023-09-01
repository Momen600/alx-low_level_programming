#include "main.h"

/**
 * _strspn - gets the length of a prefix subastring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int tr, gtr;

	for (tr = 0; s[tr] != '\0'; tr++)
	{
		for (gtr = 0; accept[gtr] != s[tr]; gtr++)
		{
			if (accept[gtr] == '\0')
				return (tr);
		}
	}
	return (tr);
}
