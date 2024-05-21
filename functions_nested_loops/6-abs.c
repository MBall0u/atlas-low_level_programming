#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* _abs - kjdfsnfn
*
* Description - fakjsdfbasdf
*
* @i: skjfksb
*
* Return: Always 0 (success)
*/
int _abs(int i)
{
	int res;

	if (i < 0)
		res = i * -1;
	else if (i >= 0)
		res = i;
	return (res);
}
