#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * Description - see above
 * @s1: the first provided string
 * @s2: the second provided string
 * @n: the length to take from s2 if it is not greater than s2
 * Return: Always 0 (success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int c1 = 0, c2 = 0, i, j = 0, c3 = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			c1++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			c2++;
		}
	}
	c3 = c1 + (n > c2 ? c2 : n) + 1;
	ptr = malloc(sizeof(char) * c3);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] ! = '\0'; i++)
	{
		ptr[j] = s1[i];
		j++;
	}
	for (i = 0; i <= n && s2[i] != '\0'; i+=)
	{
		ptr[j] = s2[i];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}