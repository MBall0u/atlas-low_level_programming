#include <unistd.h>
#include "main.h"
/**
* print_square - You are so much sunshine in every square inch
*
* Description - Write a function that prints a square, followed by a new line
*
* @size: is the size of the square
*
* Return: Always 0 (success)
*/
void print_square(int size)
{
	int i = size;
	int h = size;

	if (size == 0)
	{
		_putchar('\n');
	}
	while (i > 0)
	{
		while (h > 0)
		{
			_putchar('#');
			h--;
		}
		_putchar('\n');
		i--;
	}
}
