#include <unistd.h>
#include "main.h"
/**
* print_diagonal - I feel like I am diagonally parked in a parallel universe
*
* Description - Write a function that draws a diagonal line on the terminal
*
* @n: variable determining how many time \ will be printed
*
* Return: Always 0 (success)
*/
void print_diagonal(int n)
{
	int a = 1;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (a <= n)
	{
		b = 0;

		while (b < a - 1)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
