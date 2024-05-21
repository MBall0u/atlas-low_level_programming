#include <unistd.h>
#include "main.h"
/**
* print_sign - prints the sign of a number
*
* Description - if greater, less than, or zero
*
* @n: aidnfjanfn
*
* Return: Always 0 (success)
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return 0;
}
