#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print
 * Return: 0 (Success)
 */
int main(void)
{
	char m, b, c;

	b = 'b';
	c = 'c';

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m != b && m != c)
			putchar(m);
	}
	putchar('\n');
	return (0);
}
