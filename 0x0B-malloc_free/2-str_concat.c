#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s11: input eleven to concat
 * @s22: input twelve to concat
 * Return: concat of s11 and s22
 */
char *str_concat(char *s11, char *s22)
{
	char *conct;
	int i, ci;

	if (s11 == NULL)
		s11 = "";
	if (s22 == NULL)
		s22 = "";

	i = ci = 0;
	while (s11[i] != '\0')
		i++;
	while (s22[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s11[i] != '\0')
	{
		conct[i] = s11[i];
		i++;
	}

	while (s22[ci] != '\0')
	{
		conct[i] = s22[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}

