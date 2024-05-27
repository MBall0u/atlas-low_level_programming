#include <stdio.h>
#include "main.h"
/**
* print_array - ksdnfljknsdf
* Description - nskfnsf
* @a: variable1
* @n: variable2
* Return: Always 0 (success)
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
