#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C print numbers of base16 in lowercase
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*decimal rep of f*/
	{
		putcher(digit);

		/*after 9 we jump till 96: */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putcher('\n');
	return (0);
}
