#include "main.h"
/**
* _strcopy - snknfkjs
* Description - sndkfsdkjfb
* @dest: variable 1
* @src: variable 2
* Return: Always 0 (success)
*/
char *_strcopy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return *dest;
}
