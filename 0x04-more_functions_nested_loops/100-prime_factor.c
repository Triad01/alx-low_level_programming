#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int n  = 612852475143;
	int nf = 2;

	while (n > 1)
	{
		if (n % nf == 0)
		{
			n /= nf;
		}
		else
		{
			nf++;
		}
	}
	printf("%u\n", nf);
	return (0);
}
