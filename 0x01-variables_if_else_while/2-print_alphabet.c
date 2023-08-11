#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
