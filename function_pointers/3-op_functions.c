#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - addition function
 * Description - a function that adds two integers
 * and returns the result
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (success)
*/
int op_add(int a, int b)
{
	int res = a + b;

	return (res);
}
/**
 * op_sub - subtraction function
 * Description - a function that takes two integers
 * and subtracts them returning the result
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (success)
*/
int op_sub(int a, int b)
{
	int res = a - b;

	return (res);
}
/**
 * op_mul - multiplication function
 * Description - a function that takes two integers
 * and multiplies them return the result
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (success)
*/
int op_mul(int a, int b)
{
	int res = a * b;

	return (res);
}
/**
 * op_div - division function
 * Description - a function that takes two integers
 * and divides them against each other return the result
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (success)
*/
int op_div(int a, int b)
{
	int res = a / b;

	return (res);
}
/**
 * op_mod - modulus function
 * Description - a function that takes two integers and performs
 * a modulus of one against the other
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (success)
*/
int op_mod(int a, int b)
{
	int res = a % b;

	return (res);
}
