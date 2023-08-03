#include "main.h"
/**
 * print_binary - The decimal number is been printed by the binary.
 * @n: The binary number to be printed.
 */
void print_binary(unsigned long int n)
{
	int t, cut = 0;
	unsigned long int cent;

	for (t = 63; t >= 0; t--)
	{
		cent = n >> t;
			if (cent & 1)
		{
			_putchar('1');
			cut++;
		}
		else if (cut)
			_putchar('0');
	}
	if (!cut)
		_putchar('0');
}
