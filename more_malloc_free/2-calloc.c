#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * Description - see above
 * @nmemb: lksnfk
 * @size: ksdjnfsd
 * Return: Always 0 (success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i, res;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	res = nmemb * size;
	ptr = malloc(sizeof(*ptr) * res);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < res; i++)
	{
		ptr[i] = 0
	}
	return (ptr);
}
