#include "main.h"
/**
 * get_bit - converts a decimal to binary and returns
 * a specific (index) bit
 * Description - takes a decimal, converts it to binary and
 * then returns the bit in position index
 * @n: decimal to be converted to binary
 * @index: the position to be returned
 * Return: specific bit at position index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int count = 0;

	while (i < n)
	{
		i <<= 1;
		count++;
		if (i > n)
		{
			count--;
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
			if (count == index)
				return(1);
			n -= i;
			count--;
		}
		else
		{
			if (count == index)
				return(0);
			count--;
		}
		i >>= 1;
	}
	return(-1);
}
