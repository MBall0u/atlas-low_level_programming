#include "main.h"
/**
* _strchr - checks the provided string for c
* Description - for each character of the array it is going to look for
* the first instance of c
* @s: the array of characters that are inputted
* @c: the character that the loop is checkid for
* Return: Always 0 (success)
*/
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}

		s++;
	}

	return (s);
}
