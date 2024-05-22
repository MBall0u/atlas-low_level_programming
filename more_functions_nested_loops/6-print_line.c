#include <unistd.h>
#include "main.h"
/**
* print_line - The shortest distance between two points is a straight line
*
* Description - Write a function that draws a straight line in the terminal
*
* @n: variable representing the amount of times _ will print
*
* Return: Always 0 (success)
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
	return (0);
}
