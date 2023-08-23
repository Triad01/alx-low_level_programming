#include <stdio.h>

/**
* main - Prints the value of an element in an array.
*
* Return: Always 0.
*/
int main(void)
{
	int a[5] = {98, 198, 298, 398, 498};
	int *p;

	p = a + 2;
	printf("a[2] = %d\n", *(p));
	return (0);
}

