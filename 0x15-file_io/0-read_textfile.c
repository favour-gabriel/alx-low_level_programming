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
	char *g;
	ssize_t vb;
	ssize_t z;
	ssize_t y;

	vb = open(filename, O_RDONLY);
if (vb == -1)
	return (0);
g = malloc(sizeof(char) * letters);
y = read(vb, y, letters);
z = write(STDOUT_FILENO, g, y);
free(g);
close(vb);
return (z);
}
