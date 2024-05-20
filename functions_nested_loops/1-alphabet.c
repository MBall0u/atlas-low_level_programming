#include "main.h"
#include <unistd.h>
/**
* main - I sometimes suffer from insomnia. And when I can't fall
* asleep, I play what I call the alphabet game
*
* Description - Write a function that prints the alphabet, in
* lowercase, followed by a new line
*
* Return: Always 0 (success)
*/
int _putchar(char c);

int main(void)
{
	print_alphabet(void);
	return (0);
}

void print_alphabet(void)
{
	for (char c  =  'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
