#include <stdio.h>
/**
* main - prints numbers to stdout
* Description: prints numbers in base 10
* Return: Always return 0 (successful)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
		putchar('\n');
		return (0);
}
