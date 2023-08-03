#include "main.h"
/**
 * get_bit - The decimal number of the index return a value of the bit.
 * @n: Search the number.
 * @index: The bit index.
 * Return: The bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int vb;

	if (index > 63)
		return (-1);
	vb = (n >> index) & 1;
	return (vb);
}
