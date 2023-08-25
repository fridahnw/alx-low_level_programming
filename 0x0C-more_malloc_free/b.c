#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int j;
	unsigned int l;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; j <= n || s2[j] != '0'; j++)
		;
	s3 = malloc((i + j + 1) * sizeof(char));
	if (s3 == NULL)
	{	
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		l++;
		s3[l] = s1[i];
	for (j = 0; j <= n || s2[j] != '0'; j++)
		s3[i + l] = s2[j];
	return (s3);	
}
