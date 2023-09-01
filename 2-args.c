#include <stdio.h>

/**
 * main - print the nimber of argument passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
