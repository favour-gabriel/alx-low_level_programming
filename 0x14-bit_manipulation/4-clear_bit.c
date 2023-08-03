#include "main.h"
/**
 * clear_bit - The bit value of 0.
 * @n: The change number of a pointer.
 * @index: The clear bit index.
 * Return: Success of 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
