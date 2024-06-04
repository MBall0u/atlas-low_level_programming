#include "main.h"
#include <stdio.h>
/**
* print_diagsums - skdfbskjfb
* Description - ksndksdkj
* @a: snfkjndskjfn
* @size: sdbfksjdbfkj
* Return: Always 0 (success)
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int b = 0;
	int c = size - 1;

	for (b = 0; b < size; b++)
	{
		sum1 += (*a[b][b]);
	}
	for (b = 0; b < size; b++)
	{
		sum2 += (*a[b][c]);
		c--;
	}
	printf("%d, %d\n", sum1, sum2);
}
