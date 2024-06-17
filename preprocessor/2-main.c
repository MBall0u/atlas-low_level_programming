#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the name of the file it was compiled from
* Description - see above
* Return: Always 0 (success)
*/
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
