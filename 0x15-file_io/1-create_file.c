#include <stdio.h>
#include <stdlib.h>
/**
* create_file - creates a file
* @filename: name of file to be created
* @text_content: content of the file to be created
* Return: always an integer
*/
int create_file(const char *filename, char *text_content)
{
	FILE *file_pointer = NULL;
	int i;

	file_pointer = fopen(filename, "w");

	if (file_pointer == NULL || filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
		fprintf(file_pointer, "%c", ' ');
	else
		for (i = 0; text_content[i] != '\0'; i++)
			fprintf(file_pointer, "%c", text_content[i]);

	fclose(file_pointer);

	return (1);
}

