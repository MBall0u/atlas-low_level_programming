#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - prints strings
* Description - see above
* @seperator: prints inbetween the strings
* @n: the amount of strings
* Return: Always 0 (success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);

	va_start(ap, n);

	printf("$s", va_arg(ap, char *));

	for (i = 1; i < n; i++)
	{
		if (seperator != NULL)
			printf("%s", seperator);
		if ((va_arg(ap, char *)) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char *);
	}

	putchar('\n');
}
