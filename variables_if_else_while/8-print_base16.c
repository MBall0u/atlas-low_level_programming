#include <stdio.h>
/**
* main - Hexadecimal
*
* Description - Write a program that prints all the numbers of base
* 16 in lowercase, followed by a new line
*
* Return: Always 0 (success)
*/
int main(void)
{
	int hex[16] = "0123456789abcdef";
	int i = 1;

	while (i <= 16)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
