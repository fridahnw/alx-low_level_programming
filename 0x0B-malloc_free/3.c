#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *n;
	int l;
	int m;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		; 
	n = malloc((i + 1 + j) * sizeof(char));
	if (n == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		n[l] = s1[l];
	for (m = 0; m < j; m++)
		n[l + m] = s2[m];


	
	return (n);
}	
