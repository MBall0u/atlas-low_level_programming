#include <unistd.h>
#include "main.h"
/**
* _isalpha - isalpha
*
* Description: Write a function that checks for alphabetic character
*
* @c: jndskfj
*
* Return: always 0 (success)
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
