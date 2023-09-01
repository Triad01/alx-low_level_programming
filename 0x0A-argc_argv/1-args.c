#include <stdio.h>
/**
 * main - prints number of arguments passed to it
 * @argc: total number of arguments passed to main
 * @argv: array of arguments passed
 * Return: always 0 (successful)
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num_args;

	(void)argv;
	num_args = argc - 1;

	printf("%d\n", num_args);
	return (0);
}
