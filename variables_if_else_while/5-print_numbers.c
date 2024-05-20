#include <stdio.h>
/**
* main - Numbers
*
* Description - Write a program that prints all single digit numbers
* of base 10 starting from 0, followed by a new line
*
* Return: Always 0 (success)
*/
int main(void)
{
	int num = 0;

	for (num = 0 ; num < 10 ; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
