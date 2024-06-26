#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main calc function
 * Description - this function will take three command line
 * arguments and pass them to a pointer function that will
 * determine what operator was passed through and then pass
 * the arguments to another function that will do the operation
 * and then return the result as an integer
 * @argc: the argument count
 * @argv: the array of arguments passed
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op[0] == '/' || op[0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (get_op_func(op)(num1, num2)));

	return (0);
}
