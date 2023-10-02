#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
* append_text_to_file - appends text at the end of a file
* @filename: name of while to append text
* @text_content: content to be appended into the file
* Return: always an integer
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_pointer = NULL;
	int value;

	file_pointer = fopen(filename, "a+");

	if (file_pointer == NULL || filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		value = fputs(text_content, file_pointer);
		if (value < 0)
			return (-1);
	}

	fclose(file_pointer);

	if (chmod(filename, 0664) != 0)
		return (-1);

	return (1);
}
