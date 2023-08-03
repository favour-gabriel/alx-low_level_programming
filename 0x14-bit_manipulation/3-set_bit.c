#include "main.h"
/**
 * set_bit - The index of 1 is given on a set of bit.
 * @n: To change the number of pointer.
 * @index: The index of 1 in a bit.
 * Return: Success of 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
