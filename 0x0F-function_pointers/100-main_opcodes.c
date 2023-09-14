#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_opcodes(int num_bytes, char *binary_path);

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Usage: %s number_of_bytes binary_path\n", argv[0]);
		return 1;
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0) {
		printf("Error: Number of bytes must be non-negative\n");
		return 2;
	}

	print_opcodes(num_bytes, argv[2]);

	return 0;
}

void print_opcodes(int num_bytes, char *binary_path) {
	char command[100];
	sprintf(command, "objdump -d -j.text -M intel %s | grep ':%d' | cut -f2", binary_path, num_bytes);
	FILE *fp = popen(command, "r");
	if (fp == NULL) {
		printf("Error: Failed to execute objdump\n");
		exit(1);
	}

	char opcode[3];
	while (fread(opcode, 2, 1, fp) > 0) {
		printf("%s", opcode);
		if (num_bytes <= 2) {
			printf("\n");
			break;
		}
		printf(" ");
		num_bytes -= 2;
	}

	pclose(fp);
}

