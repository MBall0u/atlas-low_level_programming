#include "main.h"
/**
 * print_binary - prints a decimal as binary
 * Description - Takes in a decimal and then uses
 * bitwise functions to print out the decimal in binary
 * @n: the inputted decimal
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	while (i < n)
	{
		i <<= 1;
		if (i > n)
		{
			i >>= 1;
			break;
		}
		if (i == n)
			break;
	}
	while (i > 0)
	{
		if (n >= i)
		{
			_putchar('1');
			n -= i;
		}
		else
			_putchar('0');
		i >>= 1;
	}
}
