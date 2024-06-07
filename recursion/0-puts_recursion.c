#include "main.h"
/**
* _puts_recursion - iterates through a provided string and then prints
* a new line, using recursion
* Desription - see about comment
* @s: the provided string
* Return: Always 0 (success)
*/
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	_puts_recursion(s[i + 1]);
}
