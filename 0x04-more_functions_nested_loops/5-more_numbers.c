#include "main.h"
/**
* more_numbers - prints more numbers
* Return: always successful (0)
*/
void more_numbers(void)
{
	{
		int i, j;

		for (i = 0; i < 10; i++)
		{
			for (j = 0; j <= 14; j++)
			{
				if (j >= 10)
				{
					_putchar('0' + j / 10);
					_putchar('0' + j % 10);
				}
				else
					_putchar('0' + j);
			}
			_putchar('\n');
		}
	}
}
