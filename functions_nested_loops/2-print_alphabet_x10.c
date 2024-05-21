#include <unistd.h>
#include "main.h"
/**
* print_alphabet_x10 - 10 x alphabet
*
* Description - Write a function that prints 10 times the alphabet,
* in lowercase, followed by a new line
*
* Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int a = 0;
	char c = 'a';

	while (a < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		a++;
	}
}
