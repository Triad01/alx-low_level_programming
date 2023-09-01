#include <stdio.h>
/**
* main - prints all arguments
* @argc: argument count
* @argv: argument vector
* Return: always 0 successful(
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
