#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print numbers to stdout
* Description: print the last digits of random numbers
* Return: Always 0 (successful)
*/

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
		printf("Last digit of %d is %d\n", n, lastDigit);

		return (0);
}
