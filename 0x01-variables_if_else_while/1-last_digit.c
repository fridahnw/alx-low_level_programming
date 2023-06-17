#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int lstdgt;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdgt = n % (5 * 2);
	if (lstdgt > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lstdgt);
	}
	else if (lstdgt == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lstdgt);
	}
	else if (lstdgt < 6 && lstdgt != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lstdgt);
	}
	return (0);
}
