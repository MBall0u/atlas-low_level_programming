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
	if (size == 0)
	{
		_putchar('\n');
	}
	for (int i = size ; i > 0 ; i--)
	{
		for (int h = size ; h > 0 ; h--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
