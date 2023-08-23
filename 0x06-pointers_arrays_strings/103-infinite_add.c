#include "main.h"

/**
* infinite_add - Adds two numbers.
* @n1: The first number.
* @n2: The second number.
* @r: The buffer to store the result.
* @size_r: The size of the buffer.
*
* Return: A pointer to the result or 0 if the result cannot be stored.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, i;

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	carry = 0;
	for (i = 0; i < size_r - 1; i++)
	{
		if (len1 > 0)
		{
			carry += n1[--len1] - '0';
		}
		if (len2 > 0)
		{
			carry += n2[--len2] - '0';
		}

		r[i] = carry % 10 + '0';
		carry /= 10;
	}

	if (carry != 0 || len1 > 0 || len2 > 0)
		return (0);

	r[i] = '\0';
	for (i = 0; i < size_r / 2; i++)
	{
		char tmp = r[i];

		r[i] = r[size_r - 1 - i];
		r[size_r - 1 - i] = tmp;
	}

	return (r);
}

