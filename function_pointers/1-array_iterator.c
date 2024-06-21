#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - a function that executes a function given
* as a parameter on each element of an array
* Description - see above
* @array: the given array
* @size: the size of the array
* @action: the pointer pointing to the given pointer funtion?
* Return: Always 0 (success)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int count;

	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}
