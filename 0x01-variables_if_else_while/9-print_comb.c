#include <stdio.h>
/**
* main - prints single digit numbers to stdout
* Description: prints all possible combinations
* Return: always return 0 (successful)
*/

int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar('0' + numbers);
		if (numbers != 9)
		{	
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
