#include "main.h"

/**
 * _strcmp - compares two strings
 * @s11:string 1
 * @s22: string 2
 * Return: 1 if true, 0 if false
*/

int _strcmp(char *s11, char  *s22)
{
	int equal = 0;

	while (*s11)
	{
		if (*s11 != *s22)
		{
			equal = ((int)*s11 - 48) - ((int)*s22 - 48);
			break;
		}
		s11++;
		s22++;
	}
	return (equal);
}
