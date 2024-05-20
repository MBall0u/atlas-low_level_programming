#include <stdio.h>
/**
* main - Patience, persistence and perspiration make an unbeatable
* combination for success
*
* Description - Write a program that prints all possible combinations
* of single-digit numbers
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
