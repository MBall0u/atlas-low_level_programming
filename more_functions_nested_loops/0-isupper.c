#include <unistd.h>
#include "main.h"
/**
* _isupper - checking to see if the input is an uppcase letter
*
* Description - write a function that checks for uppercase character
*
* @c: intial variable
*
* Return: Always 0 (success)
*/
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	else
		return (0);
}
