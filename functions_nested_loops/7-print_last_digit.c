#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* print_last_digit - sjhdfjhsfhj
*
* Description - ksjbdfkbfjks
*
* @i: ksdfbds
*
* Return: Always 0 (success)
*/
int print_last_digit(int i)
{
	int res;

	if (i < 0)
	{
		i *= -1;
	}
	res = i % 10;
	_putchar(res + '0');
	return (res);
}
