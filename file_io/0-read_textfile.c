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
	char *buffer;
	FILE *input;

	if (filename == NULL)
		return(0);

	input = fopen(filename, "r");
	if (!input)
		return(0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return(0);
	
	a = fread(buffer, sizeof(char), letters, input);

	if (a != letters)
	{
		fclose(input);
		return(0);
	}

	fwrite(buffer, sizeof(char), a stdout);

	fclose(input);
	free(buffer);

	return(a);
}