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
	char t;
	int i;
	int e;


	while (s[c] != '\0')
	{
		c++;
	}

	i = 0;
	e = c - 1;

	while (i < e)
	{
		t = s[i];
		s[i] = s[e];
		s[e] = t;
		i++;
		e--;
	}
}
