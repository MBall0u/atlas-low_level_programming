#include <unistd.h>
#include "main.h"
/**
* _islower - islower
*
* Description - Write a function that checks for lowercase character
*
* @c: the decimal value for the input character
*
* Return: Always 0 (success)
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
