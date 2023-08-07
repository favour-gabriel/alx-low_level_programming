#include "main.h"
/**
 * create_file - Te file is been created.
 * @filename: A created file in which the pointer name is created.
 * @text_content: A file is been written to a string pointer.
 * Return: As the function fails you print --1 else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int vb, z, wet = 0;

		if (filename == NULL)
			return (-1);
	if (text_content != NULL)
	{
		for (wet = 0; text_content[wet];)
			wet++;
	}
	vb = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(vb, text_content, wet);

	if (vb == -1 || z == -1)
		return (-1);
	close(vb);
	return (1);
}
