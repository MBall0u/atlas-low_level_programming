#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - a funtion pointer to other fuctions utilizing the name argument
* Decription - see above
* @name: variable being passed from the main functions to the
* fuctions this function is pointing to
* @f: the fuction pointer to the fuction that is being called
* from the main function
* Return: Always 0 (success)
*/
void print_name(char *name, void (*f)(char *))
{
	char *new_name = name;

	f(new_name);
}
