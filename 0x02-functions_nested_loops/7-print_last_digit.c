#include "main.h"
/**
* print_last_digit - prints last digit
* @l: first opernt
* Description: to print the last digit of a number
* Return: always 0 (successful)
*/
int print_last_digit(int l)
{
	int last_digit;

	last_digit = l % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
		_putchar(last_digit + '0');
	return (last_digit);
}
