#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_function - 
 * Description - 
 * @s: 
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

	while (ops[i] != NULL)
	{
		if (ops[i] == s)
		{
			return ((ops[i])(int, int));
		}
		i++;
	}
	return (NULL);
}