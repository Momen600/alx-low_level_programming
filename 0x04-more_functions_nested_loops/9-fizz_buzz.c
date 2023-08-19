#include "main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 * number that are multiples of 3 print Fizz
 * number that are multiples of 5 print Buzz
 * number that are multiples of 3 print FizzBuzz
 * each number and word to be separated by space
 * Return: Always 0 (sucsess)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0 && (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0
			printf("%s",  "Fizz")
		else if (i % 5 == 0)
			printf("%s", "Buzz")
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
