#include "main.h"
/**
 * read_textfile - will read the given file and return
 * the number of characters printed to stdout
 * Description - see above
 * @filename: the filename passed as an argument
 * @letters: the number of letter to be printed
 * Return: number of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	FILE *output;

	if (filename == NULL);
	{
		return(0);
	}
	

	output = fopen(filename, "r");
	if (!output)
		return(0);

	a = fwrite(output, sizeof(char), letters, stdout);

	return(a);
}