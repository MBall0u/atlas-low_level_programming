#include "main.h"
#include <stdio.h>
/**
* main- it will print the number of arguments passed to it
* Description - see above comments
* @argc: the number of arguments passed
* @argv: the argument vectors
* Return: 0 (success)
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
