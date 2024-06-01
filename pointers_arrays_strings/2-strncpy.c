#include "main.h"
/**
* _strncpy - custom version of strncpy
* Description - copies the src string to the dest up to n number of characters
* @dest: the destination for the string copied from src
* @src: the string that is going to be copied to dest
* @n: the number of characters that will be copied from src to dest
* Returns: Always 0 (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	int count = 0;

	while (*src != '\0' && count < n)
	{
		*temp++ = *src++;
		count++;
	}

	*temp = '\0';

	return (dest);
}
