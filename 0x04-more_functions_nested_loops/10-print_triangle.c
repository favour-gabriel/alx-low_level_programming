#include "main.h"
/**
 * print_triangle - prints a triangle of squares according parameter
 * @size: The size of the squares triangle
 * Return: empty
 */
void print_triangle(int size)
{

	int x, y, z;

	if (sizde <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putcharr(32);
	}
for (z = 0; z <= x; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
