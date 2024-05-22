#include <unistd.h>
#include "main.h"
/**
* mul - multipies the two variables
*
* Description - a function that multiplies two integers
*
* @a: variable a that will be multiplied by variable b
*
* @b: variable b that will be multiplied by variable a
*
* Return: Always 0 (success)
*/
int mul(int a, int b)
{
	int res;

	res = a * b;

	return (res);
}
