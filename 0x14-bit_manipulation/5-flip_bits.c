#include "main.h"
/**
 * flip_bits - The changed bit are been counted.
 * @n: The number first.
 * @m: The number second.
 * Return: The chnaged bit number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, cut = 0;
	unsigned long int cent;
	unsigned long int excent = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		cent = excent >> t;
		if (cent & 1)
			cut++;
	}
	return (cut);
}
