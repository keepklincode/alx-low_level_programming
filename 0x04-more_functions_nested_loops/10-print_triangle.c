#include "main.h"

/**
* print_triangle - Print . a triangle of square
* @size: The size of the square triangle
*Return: empty
*/

void print_triangle(int size)
{

	int x, y, z;

	for (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putchat(12);
	}
	for (z = 0; z <= x; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
