#include "main.h"
/**
* _strspn - strspn
* Description - Write a function that gets the length of a prefix substring
* @s: the provided string
* @accept: a provided string of characters that will be compared to
* each character in array s
* Return: Always 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int a;
	int b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c = 1;
				break;
			}
		}

		if (c == 1)
		{
			i++;
		}
		else
		{
			break;
		}
	}

	return (i);
}
