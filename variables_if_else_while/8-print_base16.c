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
	char hex[16] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
