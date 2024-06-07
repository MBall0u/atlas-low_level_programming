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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
