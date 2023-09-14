#include <stdio.h>
#include <stdlib.h>
/**
* print_opcodes - opcodes
* @start: starting point
* @num_bytes: number of bytes
*/
void print_opcodes(unsigned char *start, size_t num_bytes)
{
	size_t i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", start[i]);
	}
	printf("\n");
}
/**
* main - entry to program
* @argc: argument count
* @argv: argument vector
* Return:always 0
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_start = (unsigned char *)main;

	print_opcodes(main_start, num_bytes);

	return (0);
}
