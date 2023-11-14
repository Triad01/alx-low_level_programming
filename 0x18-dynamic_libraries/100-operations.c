#include <stdio.h>
/**
* add - adds two numbers
* @a: first number
* @b: second number
* Return: integer
*/
int add(int a, int b)
{
	return (a + b);
}
/**
* sub - adds two numbers
* @a: first number
* @b: second number
* Return: integer
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
* mul - adds two numbers
* @a: first number
* @b: second number
* Return: integer
*/
int mul(int a, int b)
{
	return (a * b);
}
/**
* div - adds two numbers
* @a: first number
* @b: second number
* Return: integer
*/
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Division by 0\n");
		return (0);
	}
	return (a / b);
}
/**
* mod - adds two numbers
* @a: first number
* @b: second number
* Return: integer
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Modular division by 0\n");
		return (0);
	}
	return (a % b);
}
