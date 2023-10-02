#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, exit with specific codes on failure
 */
int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	size_t read_result;

	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		fclose(file_from);
		return (99);
	}

	while ((read_result = fread(buffer, 1, BUFFER_SIZE, file_from)) > 0)
	{
		size_t write_result = fwrite(buffer, 1, read_result, file_to);

		if (write_result != read_result)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			fclose(file_from);
			fclose(file_to);
			return (99);
		}
	}

	if (ferror(file_from))
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		fclose(file_from);
		fclose(file_to);
		return (98);
	}

	fclose(file_from);
	fclose(file_to);

	if (chmod(argv[2], permissions) == -1)
	{
		fprintf(stderr, "Error: Can't set permissions on %s\n", argv[2]);
		return (100);
	}

	return (0);
}

