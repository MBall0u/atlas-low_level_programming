#include "main.h"
#include <stdio.h>
/**
* main - will print the first arg pushed to the main function
* Description - see above comment
* @argc: the argument count
* @argv: the argument vectors
* Return: Always 0 (success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
