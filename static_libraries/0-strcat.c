#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
* _strcat - strcat
* Description - Write a function that concatenates two strings
* @dest: the first string
* @src: the second string that is being added to the back of dest
* Return: Always 0 (success)
*/
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0')
	{
		*temp++ = *src++;
	}

	*temp = '\0';

	return (dest);
}
