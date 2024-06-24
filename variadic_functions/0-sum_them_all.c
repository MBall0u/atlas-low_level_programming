#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* Description - see above
* @n: first variable
* Return: Always 0 (success)
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list test;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start (test, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg (test, int);
	}

	va_end (test);
	return (sum);
}
