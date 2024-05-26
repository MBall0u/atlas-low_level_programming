#include <unistd.h>
#include "main.h"
/**
* reset_to_98 - 98 Battery st.
*
* Description - Write a function that takes a pointer to an int as parameter
* and updates the value it points to to 98
*
* @n: variable being set to 98
*
* Return: Always 0 (success)
*/
void reset_to_98(int *n)
{
	int *i;

	i = &n;

	*i = 98;

	return;
}
