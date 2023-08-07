#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int vb);
/**
 * create_buffer - The 1024 bytes is assigned.
 * @file: Char stores the file.
  * Return: The assigned begin.
 */
char *create_buffer(char *file)
{
	char *begin;

	begin = malloc(sizeof(char) * 1024);

	if (begin == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (begin);
}

/**
 * close_file - Descriptor files.
 * @vb: A descriptor.
 */
void close_file(int vb)
{
	int m;

	m = close(vb);

	if (m == -1)
	{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", vb);
exit(100);
}
}
/**
 * main - The other file is been depilcated.
 * @argc: This program arguments is supplied in numbers.
 * @argv: A argument of a pointer in an array.
 * Return: The succession of 0.
 * Explain: A argument is been counted with 97, 98, 99 and 100.
 */
int main(int argc, char *argv[])
{
	int be, try, ra, we;
	char *begin;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	begin = create_buffer(argv[2]);
	be = open(argv[1], O_RDONLY);
	ra = read(be, begin, 1024);
	try = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (be == -1 || ra == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(begin);
			exit(98);
		}

		we = write(try, begin, ra);
		if (try == -1 || we == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(begin);
			exit(99);
		}

		ra = read(be, begin, 1024);
		try = open(argv[2], O_WRONLY | O_APPEND);

	} while (ra > 0);

	free(begin);
	close_file(be);
	close_file(try);

	return (0);
}
