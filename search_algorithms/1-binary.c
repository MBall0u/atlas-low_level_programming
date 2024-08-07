#include "search_algos.h"
/**
* binary_search - continually cuts the searchable array in half
* until it finds the given value
* Description - Starts at the beginning of a sorted array and then jumps
* close to the middle, then it checks if the current number is the given
* value and if not then it is lower or high then the given value, repeats
* until the value is found, otherwise returns -1
* @array: the inputted array
* @size: the search size
* @value: the value we are searching for
* Return: Always pos (success)
*/
int binary_search(int *array, size_t size, int value)
{
	int pos_low = 0;
	int pos_high = size - 1;
	int pos;

	if (array)
	{
		while (pos_high - pos_low >= 0)
		{
			print_array(array, pos_low, pos_high);
			pos = (array[pos_low] + array[pos_high]) / 2;
			if (array[pos] < value)
				pos_low = pos + 1;
			else if (array[pos] > value)
				pos_high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
/**
* print_array - prints the array in the specified size
* Description - takes in the two bounds and prints the array
* @array - the inputted array
* @pos_low: the bottom of the given array
* @pos_high: the top of the given array
* Return: void
*/
void print_array(int *array, int pos_low, int pos_high)
{
	int pos;

	printf("Searching in array: ", array[pos_low]);
	for (pos = pos_low + 1; pos <= pos_high; pos++)
		printf(", %d", array[pos]);
	putchar('\n');
}
