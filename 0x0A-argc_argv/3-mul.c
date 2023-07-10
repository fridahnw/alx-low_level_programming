#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success 1 on error
 */

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (; i < argc - 1; i++)
	{
		printf("%d\n", atoi(argv[i]) * atoi(argv[(i + 1)]));
	}
	return (0);
}
