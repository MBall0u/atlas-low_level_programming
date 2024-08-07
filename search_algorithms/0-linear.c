#include "search_algos.h"
/**
* linear_search - iterates down an array searching for a given value
* Description - starts at the begining of a given array and iterates down it
* searching for a given value and return -1 if it does not find it
* @array: the inputted array of integers
* @size: the size of the array
* @value: the value being searched for
* Return: Always count (success)
*/
int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array)
	{
		for (count = 0; count < size; count++)
		{
			printf("Value checked array[%zu] = [%d]\n", count, array[count]);
			if (array[count] == value)
				return (count);
		}
	}
	return (-1);
}
