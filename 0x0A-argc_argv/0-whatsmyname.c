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
	int i, totalArguments;
	
	totalArguments = 0;
	for (i = 0; i < argc; i++)
			totalArguments++;
	printf("%d\n", totalArguments);
}
