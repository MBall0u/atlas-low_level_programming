#include "main.h"
/**
* _memcpy - copy a provided array to the destination array
* Description - copies n number of characters from src to dest
* @dest: destination array
* @src: src array being compied into dest array
* @n: number of characters from src that will be copied to dest
* Return: Always 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*temp = *src;
		temp++;
		src++;
	}

	return (dest);
}
