#include <unistd.h>
#include "main.h"
/**
* puts2 - nsfksjfb
* Description - jsdbfjhsbdfj
* @str: variable
* Return: Always 0 (success)
*/
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c = c + 2;
	}

}
