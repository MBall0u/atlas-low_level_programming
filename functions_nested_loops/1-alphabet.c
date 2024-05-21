#include <unistd.h>
#include "main.h"
/**
* main - I sometimes suffer from insomnia. And when I can't fall
* asleep, I play what I call the alphabet game
*
* Description: Write a function that prints the alphabet, in
* lowercase, followed by a new line
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
