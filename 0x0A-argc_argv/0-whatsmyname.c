#include "main.h"
#include <stdio.h>
/**
* main - entry into our program
* @argc: number of command line arguments
* @argv: array of command line arguments with size argc;
* Return: alaways 0 (successful)
*/
int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
