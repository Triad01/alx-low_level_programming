#include <stdio.h>
/**
* positive_or_negative - check numbers
* @n: first operand
* Description: display positive or negative
* Return: always return 0
*/

int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);

}
