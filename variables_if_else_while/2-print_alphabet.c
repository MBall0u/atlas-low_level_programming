#include <stdio.h>
/**
* main - I sometimes suffer from insomnia. And when I can't fall asleep,
* I play what I call the alphabet game
*
* Description - Write a program that prints the alphabet in lowercase,
* followed by a new line
*
* Return: Always 0 (success)
*/
int main(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
