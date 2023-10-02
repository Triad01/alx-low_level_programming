#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile - reads the text of another file
* @filename: the file whose content is to be read
* @letters: the number of letters to be red
* Return: number of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_pointer = NULL;
	size_t letters_read;
	int read_result;

	letters_read = 0;

	file_pointer = fopen(filename, "r");
	if (filename == NULL || file_pointer == NULL)
	{
		return (0);
		exit(1);
	}
	while (letters_read < letters)
	{
		read_result = fgetc(file_pointer);
		if (read_result == EOF)
		{
			if (ferror(file_pointer))
			{
				fclose(file_pointer);
				return (0);
			}
			break;
		}
		putchar(read_result);
		letters_read++;
	}
	fclose(file_pointer);
	return (letters);
}

