#include "main.h"
/**
* _atoi - kajsbdj
* Description - ksndkjfbdsj
* @s: jksndkjsbnf
* Return: Always 0 (success)
*/
int _atoi(char *s)
{
	int s = 1;
	int r = 0;
	int i = 0;

	if (s[0] == '-')
	{
		s = -1;
		i++;
	}

	if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			r = r * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	r = r * s

	return r;
}
