#include <stdio.h>
/**
* main - When I was having that alphabet soup, I never thought that it
* would pay off
*
* Description - Write a program that prints the alphabet in lowercase
* except q and e, followed by a new line
*
* Return: Always 0 (success)
*/
int main(void)
{
	int lo = 'a';

	for (lo = 'a' ; lo <= 'z' ; lo++)
	{
		if (lo == 'e')
		{
		}
		else if (lo == 'q')
		{
		}
		else
			putchar(lo);
	}
	putchar('\n');
	return (0);
}
