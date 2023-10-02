#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
* read_textfile - reads the text of another file
* @filename: the file whose content is to be read
* @letters: the number of letters to be red
* Return: number of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_pointer = NULL;
	char buffer[1024];
	ssize_t letters_read, bytes_read, bytes_written, bytes_to_write;

	letters_read = 0;

	file_pointer = fopen(filename, "r");
	if (filename == NULL || file_pointer == NULL)
	{
		return (0);
		exit(1);
	}
	while (letters > 0)
	{
		bytes_read = fread(buffer, 1, sizeof(buffer), file_pointer);
		if (bytes_read <= 0)
		{
			if (feof(file_pointer))
				break;
			else if (ferror(file_pointer))
			{
				fclose(file_pointer);
				return (0);
			}
		}
		if ((ssize_t)letters < bytes_read)
			bytes_to_write = (ssize_t)letters;
		else
			bytes_to_write = (ssize_t)bytes_read;
		 bytes_written = write(STDOUT_FILENO, buffer, bytes_to_write);
		if (bytes_written != bytes_to_write)
		{
			fclose(file_pointer);
			return (0);
		}
		letters_read += bytes_written;
		letters -= bytes_written;
	}
	fclose(file_pointer);
	return (letters_read);
}
