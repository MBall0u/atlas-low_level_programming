#include <unistd.h>
#include "main.h"
/**
* rev_string - reverses the input string
* Description - Write a function that reverses a string
* @s: variable
* Return: Always 0 (success)
*/
void rev_string(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	while (c > 0)
	{
		_putchar(s[c]);
		c--;
	}
}
