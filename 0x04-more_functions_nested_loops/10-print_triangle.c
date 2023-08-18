#include "main.h"
/**
 * print_triangle - prints triangle to stddout
 * @size: length of triangle
 * Return: alaways 0 (successful)
 */
void print_triangle(int size)
{
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - 1; j++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
