#include "main.h"
/**
 * append_text_to_file - At the end of the file is been appened.
 * @filename: A file with a name has a pointer.
 * @text_content: At the end of a file there is a string added.
 * Return: What if the file doesn't exit it should print --1 else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int h, z, hen = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (hen = 0; text_content[hen];)
hen++;
}
h = open(filename, O_WRONLY | O_APPEND);
z = write(h, text_content, hen);
if (h == -1 || z == -1)
return (-1);
close(h);
return (1);
}
