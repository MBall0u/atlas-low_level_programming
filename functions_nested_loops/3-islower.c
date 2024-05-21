#include <unistd.h>
#include "main.h"
/**
* main - islower
*
* Description - Write a function that checks for lowercase character
*
* Return: Always 0 (success)
*/
int _islower(int c)
{
	char c;

	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
