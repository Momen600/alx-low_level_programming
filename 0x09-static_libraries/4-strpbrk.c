#include "main.h"

/**
 * *_strpbrk - search a string for any of a set of bytes.
 * @s: string
 * @accept: string to matchs
 * Return: pointer to the byte in a that matches one of the bytes in accept
 * or null if no such byt is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int tr, gtr;
	char *p;

	tr = 0;
	while (s[tr] != '\0')
	{
		gtr = 0;
		while (accept[gtr] != '\0')
		{
			if (accept[gtr] == s[tr])
			{
				p = &s[tr];
				return (p);
			}
			gtr++;
		}
		tr++;
	}
	return (0);
}
