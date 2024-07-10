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
	long unsigned int a;
	char *buffer;
	FILE *input;

	if (filename == NULL || letters == 0)
		return(0);

	input = open(filename, O_RDONLY);
	if (input == -1)
		return(0);

	buffer = malloc(letters + 1);
	if (!buffer)
	{
		close(input);
		return(0);
	}
	
	a = read(input, buffer, letters);
	if (a != letters)
	{
		free(buffer);
		close(input);
		return(0);
	}

	buffer[letters] = '\0';
	
	puts(buffer);

	close(input);
	free(buffer);

	return(a);
}