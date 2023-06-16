#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-program entry point.
 * determines if an integer is positive or negative
 * Return: 0 on success
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	return (0);
	}
}
