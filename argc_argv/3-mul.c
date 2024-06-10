#include "main.h"
#include <stdio.h>
/**
* main - this is going to take two number and multiply them
* Description - see comment above
* @argc: the arg count
* @argv: the arg vectors
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int result = 1, i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i <= argc; i++)
	{
		result *= _atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
