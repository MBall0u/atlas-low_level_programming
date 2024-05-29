#include "main.h"
/**
* _strcopy - snknfkjs
* Description - sndkfsdkjfb
* @dest: variable 1
* @src: variable 2
* Return: Always 0 (success)
*/
char *_strcpy(char *dest, char *src)
{
	int i = 1;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return dest;
}
