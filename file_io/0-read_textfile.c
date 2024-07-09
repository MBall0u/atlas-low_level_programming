#include <main.h>
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
	int n, fd;
	char buf[letters + 1];

	fd = open(filename, O_RDONLY);
	n = read(fd ,buf, letters);
	write(1, buf, letters);

	return (n);
}