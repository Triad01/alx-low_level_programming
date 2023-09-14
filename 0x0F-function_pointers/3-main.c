#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 * Return: 0 on success, otherwise exit status
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = func_ptr(num1, num2);
	printf("%d\n", result);

	return (0);
}

