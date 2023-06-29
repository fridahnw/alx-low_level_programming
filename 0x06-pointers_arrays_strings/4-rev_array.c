#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: Array that is reversed
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j, k;

	j = n - 1;

	while (i <= j)
	{
		k = a[i];
		a[i++] = a[j];
		a[j--] = k;
	}
}
