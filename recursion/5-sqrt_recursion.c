#include "main.h"
/**
*/
int _sqrt_recursion(int n)
{
	int i = 1;

	if (i * i == n)
	{
		return (i);
	}
	if (i * i < n)
	{
		return (1 + _sqrt_recursion(i + 1));
	}
	if (i * i > n)
	{
		return (-1);
	}
}
