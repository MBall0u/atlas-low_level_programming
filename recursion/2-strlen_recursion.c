#include "main.h"
/**
* _strlen_recursion - recurses through the string and counts how many
* characters there are
* Description - see the above line
* @s: the provided string
* Return: Always 0 (success)
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(&s[i + 1]));
}
