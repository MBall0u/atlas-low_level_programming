#include "main.h"
/**
* _print_rev_recursion - prints the provided string in reverse
* Decription - see above line
* @s: the provided string
* Return: Always 0 (success)
*/
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	_print_rev_recursion(&s[i + 1]);
	_putchar(s[i]);
}
