#include "main.h"
#include <stdio.h>
/**
* _strpbrk - sbfjbskjbf
* Description - ksbjfdb
* @s: kjsndfknsd
* @accept: kjsbjbdf
* Return: Always 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != '\0')
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
