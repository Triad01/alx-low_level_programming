#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Usage: %s number_of_bytes\n", argv[0]);
		return 1;
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0) {
		printf("Error: Number of bytes must be positive\n");
		return 2;
	}

	print_opcodes(num_bytes);

	return 0;
}

void print_opcodes(int num_bytes) {
	unsigned char *main_ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++) {
		printf("%02x", main_ptr[i]);
		if (i < num_bytes - 1) {
			printf(" ");
		} else {
			printf("\n");
		}
	}
}

