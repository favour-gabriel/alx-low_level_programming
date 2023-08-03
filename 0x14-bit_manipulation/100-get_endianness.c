#include "main.h"
/**
 * get_endianness - The big endian or the less the machine looks at it.
 * Return: The big 0 or little.
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *g = (char *)&t;

	return (*g);
}
