#include <unistd.h>
#include "main.h"
/**
* more_numbers - Numbers constitute the only universal language
*
* Description - Write a function that prints 10 times the numbers, from 0 to 14, followed
* by a new line
*
* Return: Always 0 (success)
*/
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		i = 0;

		while (i <= 10)
		{
			_putchar(i + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
