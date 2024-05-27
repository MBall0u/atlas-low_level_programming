#include <unistd.h>
#include "main.h"
/**
* puts_half - jbsdfjbsdf
* Description - sdnfksdkjf
* @str: sbfkjsdf
* Return: Always 0 (succes)
*/
void puts_half(char *str)
{
	int c = 0;
	int t;

	while (str[c] != 0)
	{
		c++;
	}

	if (c % 2 == 0)
	{
		t = c / 2;

		while (t < c)
		{
			_putchar(str[t]);
			t++;
		}
	}

	t = (c - 1) / 2;

	while (t < c)
	{
		_putchar(str[t]);
		t++;
	}
	_putchar('\n');
}
