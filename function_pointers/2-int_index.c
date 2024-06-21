#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - a function that searches for an integer
* Description - see above
* @array: given array
* @size: array size
* @cmp: the pointer function pointing to the called functions
* Return: Always 0 (success)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
	{
		return (-1);
	}

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) != 0)
		{
			return (count);
		}
	}
	return (-1);
}
