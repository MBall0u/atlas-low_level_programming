#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* times_table - jhadjhbajdhb
*
* Description - bsajfsjhdfvb
*
* Return: Always 0 (success)
*/
void times_table(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			printf("%d", a * b);
			if (a != b)
			{
				printf(",  ");
			}
		}
		printf("\n");
	}
}
