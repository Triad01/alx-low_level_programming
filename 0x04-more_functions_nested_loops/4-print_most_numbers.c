#include "main.h"

/**
* print_most_numbers - prints most numbers
* Return: always 0 (successful)
*/

void print_most_numbers(void)
{
	{
		char numbers;

		for (numbers = '0'; numbers <= '9'; numbers++)
			if (numbers != '2' && numbers != '4')
			{
				_putchar(numbers);
			}
	}

		_putchar('\n');
}
