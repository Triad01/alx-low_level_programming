#include <stdio.h>
/**
* main - prints numbers to stdout
* Descrition: prints posible combo of 2 digits
* Return: always 0 (successful)
*/
int main(void)
{
	int i, j, tens_i, ones_i, tens_j, ones_j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			tens_i = i / 10;
			ones_i = i % 10;
			tens_j = j / 10;
			ones_j = j % 10;
			putchar('0' + tens_i);
			putchar('0' + ones_i);
			putchar(' ');
			putchar('0' + tens_j);
			putchar('0' + ones_j);
			if (i < 99 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
