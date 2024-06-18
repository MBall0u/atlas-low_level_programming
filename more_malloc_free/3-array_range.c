#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * Description - see above
 * @min: min
 * @max: max
 * Return: Always 0 (success)
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, res;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
