#include <stdio.h>
/**
* main - Size is not grandeur, and territory does not make a nation
*
* Description: will print the size of char, int, long, long long, and float
*
* Return: Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
