#include "main.h"
/**
* _strncat - custom strncat function
* Description - takes n number of characters from the src and puts it on the
* back of the dest
* @dest: string that n number of src characters will be added to
* @src: n numbers of this string will be added onto the back of dest
* @n: the number of characters that will be added from src to dest
* Return: Always 0 (success)
*/
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int count = 0;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0' && count < n)
	{
		*temp++ = *src++;
		count++;
	}

	*temp = '\0';

	return (dest);
}
