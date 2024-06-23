#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - pointer function to the operator functions
 * Description - this function is a pointer function that
 * takes three arguments and passes them to a fuction
 * that will do the given operation and return an integer
 * @s: this will be an operator that is passed from the
 * command line to the main function and then to this one
 * Return: Always 0 (success)
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if ((strcmp(ops[i].op, s)) == 0)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
