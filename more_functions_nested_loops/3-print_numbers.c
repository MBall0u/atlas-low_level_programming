#include <unistd.h>
#include "main.h"
/**
* print_numbers - The numbers speak for themselves
*
* Description - Write a function that prints the numbers, from 0 to 9, followed
* by a new line
*
* Return: Always 0 (success)
*/
void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
