#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: always 0 (successful)
*/
int main(int argc, char *argv[])
{
	int i, j, sum, has_letter;

	sum = 0;

	has_letter = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	
		for (i = 1; i < argcc; i++)
		{
			for (j = 0; j < argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1)
				}
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
}

