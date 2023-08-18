#include <stdio.h>
#include "main.h"
/**
* main - prints numbers to 100
* Return: always 0 (successful)
*/

int main(void)
{
	{
		int i;

		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz");
				_putchar(' ');
			else if (i % 3 == 0)
				printf("Fizz");
				_putchar(' ');
			else if (i % 5 == 0)
				printf("Buzz");
				_putchar(' ');
			else
				printf("%d ", i);
		}
		printf("\n");
		return (0);
	}
}
