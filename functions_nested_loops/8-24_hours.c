#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* jack_bauer - sjdbfjsbf
*
* Description - kjsnfkjbsd
*
* Return: Always 0 (success)
*/
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0 ; h <= 23 ; h++)
	{
		for (m = 0 ; m <= 59 ; m++)
		{
			int th = h / 10;
			int tm = m / 10;

			_putchar(th + '0');
			th = h % 10;
			_putchar(th + '0');

			_putchar(':');
			_putchar(tm + '0');
			tm = m % 10;
			_putchar(tm + '0');

			_putchar('\n');
		}
	}
}
