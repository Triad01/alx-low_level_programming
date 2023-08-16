#include <stdio.h>
/**
* positive_or_negative - prints positive or negative
* @num: first operand
* Description: print positive or negative
* Return: always 0;
*/
int positive_or_negative(int num)
{
	if (num > 0)
	{
		printf("%d is positive\n", num);
	} else if (num < 0)
	{
		printf("%d is negative\n", num);
	}
	else
		printf("%d is zero\n", num);
	return (0);
}
