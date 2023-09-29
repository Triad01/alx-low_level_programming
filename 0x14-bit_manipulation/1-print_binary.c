#include "main.h"
/**
 * print_binary - prints binary number to sdtout
 * @n: the number to be printed out
 */
void print_binary(unsigned long int n)
{
	int i, num, next_number;

	next_number = 0;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			next_number++;
		}
		else if (next_number)
			_putchar('0');
	}
	if (!next_number)
		_putchar('0');
}
