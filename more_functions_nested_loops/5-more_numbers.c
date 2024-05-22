#include <unistd.h>
#include "main.h"
/**
*/
void more_numbers(void)
{
	int i = '0';
	int i2 = '0';
	int c = 1;
	int c2 = 0;

	while (c < 10)
	{
		while (c2 < 14)
		{
			if (c2 > 9)
			{
				_putchar(i2);
				i2++;
			}
			_putchar(i);
			c2++;
			i++;
		}
	_putchar('\n');
	c++;
	}
}
