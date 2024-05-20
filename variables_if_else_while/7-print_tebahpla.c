#include <stdio.h>
/**
* main - Smile in the mirror
*
* Description - Write a program that prints the lowercase alphabet
* in reverse, followed by a new line
*
* Return: Always 0 (success)
*/
int main(void)
{
	int al = 'z';

	for (al = 'z' ; al >= 'a' ; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
