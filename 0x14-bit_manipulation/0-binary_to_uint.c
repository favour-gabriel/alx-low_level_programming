#include "main.h"
/**
 * binary_to_uint - unsigned int is been converted to binary number.
 * @b: A binary number is containing a string.
 * Return: Convert number.
 */
unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int red = 0;

	if (!b)
		return (0);
for (t = 0; b[t]; t++)
{
	if (b[t] < '0' || b[t] > '1')
		return (0);
	red = 2 * red + (b[t] - '0');
}
return (red);
}
