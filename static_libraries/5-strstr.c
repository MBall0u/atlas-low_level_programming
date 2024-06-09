#include "main.h"
#include <stdio.h>
/**
* _strstr - compares two strings and if the substring needle is found
* in haystack then it returns haystack, if it does not
* find the needle in the haystack then return null
* Description - see above comment
* @haystack: the inputted sting with multiple words
* @needle: the substring that we are searching for in the haystack
* Return: Always 0 (success)
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (needle[i] != '\0')
	{
		i++;
	}

	if (i == 0)
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*b == *a)
		{
			a++;
			b++;

			if (*b == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
