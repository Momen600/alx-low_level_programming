#include <stdio.h>
#include <stdlib.h>

/**
 * main-print sum of 2 numbers.
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of command line arguments.
 * Return:0-success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
	int num;

	if (argc == 3)
	{
		num = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n, num);
	}
	elae
	{
		printf("Error\n");
		return (1);
	}
}
