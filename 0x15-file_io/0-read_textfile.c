#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Stdout reads a printed file.
 * @filename: The file of a text is been read.
 * @letters: The letters to be numbers are been read.
 * Return: The printed read bytes that is an actual number.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
