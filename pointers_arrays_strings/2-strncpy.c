#include "main.h"
/**
* _strncpy - custom version of strncpy
* Description - copies the src string to the dest up to n number of characters
* @dest: the destination for the string copied from src
* @src: the string that is going to be copied to dest
* @n: the number of characters that will be copied from src to dest
* Return: Always 0 (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	char *count = src;
	int cc = 0;

	while (*count != '\0')
	{
		++count;
		++cc;
	}

	if (cc > n)
	{
		cc = n;

		while (cc-- > 0 && *src != '\0')
		{
			*temp++ = *src++;
		}

		return (dest);
	}

	while (cc-- > 0 && *src != '\0')
	{
		*temp++ = *src++;
	}

	while (n > 0)
	{
		*temp = '\0';
		*temp++;
		n--;
	}

	return (dest);
}
