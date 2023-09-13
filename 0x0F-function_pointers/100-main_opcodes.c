#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char command[100];
	snprintf(command, sizeof(command), "objdump -d -j.text -M intel %s | grep '<main>:' | cut -d ':' -f 2- | cut -c 2-", argv[0]);

	FILE *pipe = popen(command, "r");
	if (pipe == NULL)
	{
		perror("Error");
		return (3);
	}

	char opcode[3];
	while (fread(opcode, sizeof(char), 2, pipe) == 2 && num_bytes > 0)
	{
		printf("%s", opcode);
		num_bytes -= 2;
		if (num_bytes > 0)
			printf(" ");
	}

	printf("\n");
	pclose(pipe);

	return (0);
}

