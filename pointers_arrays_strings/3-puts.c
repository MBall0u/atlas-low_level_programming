#include <unistd.h>
#include "main.h"
/**
*/
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		putchar(str[c]);
		c++;
	}
}
