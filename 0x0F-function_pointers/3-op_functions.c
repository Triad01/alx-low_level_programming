#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Add two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division, or 0 if b is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculate the modulo of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the modulo, or 0 if b is 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
