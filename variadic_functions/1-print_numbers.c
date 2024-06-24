#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - a function that prints numbers
* Description - see above
* @separator: what is printed inbetween the numbers
* @n: the number of integers passed to the funtion
* Return: Always 0 (success)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);

	va_start(ap, n);

	printf("%d", va_arg(ap, int));

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s%d", separator, va_arg(ap, int));
		}
	}
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf(" %d", va_arg(ap, int));
		}
	}

	putchar('\n');
}
