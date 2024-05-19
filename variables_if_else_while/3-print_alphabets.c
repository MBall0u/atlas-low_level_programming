#include <stdio.h>
/**
* main - alphABET
*
* Description - Write a program that prints the alphabet in lowercase,
* and then in uppercase, followed by a new line
*
* Return: Always 0 (success)
*/
int main(void)
{
	char lo = 'a';
	char up = 'A';

	for (lo = 'a' ; lo <= 'z' ; lo++)
	{
		putchar(lo);
	}
	for (up = 'A' ; up <= 'Z' ; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
