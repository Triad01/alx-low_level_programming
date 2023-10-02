#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 64

void print_elf_header(const unsigned char *header);

int main(int argc, char *argv[]) {
	int fd;
	unsigned char header[BUF_SIZE];
	ssize_t;= bytes_read;

	if (argc != 2) {
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, header, BUF_SIZE);
	if (bytes_read == -1) {
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (bytes_read < BUF_SIZE) {
		dprintf(2, "Error: Not a valid ELF file: %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (header[0] != 0x7f || header[1] != 'E' || header[2] != 'L' || header[3] != 'F') {
		dprintf(2, "Error: Not a valid ELF file: %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_elf_header(header);

	close(fd);
	return (0);
}

void print_elf_header(const unsigned char *header) {
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
			header[0], header[1], header[2], header[3], header[4], header[5], header[6], header[7],
			header[8], header[9], header[10], header[11], header[12], header[13], header[14], header[15]);
	printf("  Class:                             ELF%d\n", header[4] == 1 ? 32 : 64);
	printf("  Data:                              2's complement, %s endian\n", header[5] == 1 ? "little" : "big");
	printf("  Version:                           %d (current)\n", header[6]);
	printf("  OS/ABI:                            ");
	switch (header[7]) {
		case 0: printf("UNIX - System V\n"); break;
		case 1: printf("HP-UX\n"); break;
		case 2: printf("NetBSD\n"); break;
		case 3: printf("Linux\n"); break;
		case 6: printf("Sun Solaris\n"); break;
		default: printf("<unknown: %d>\n", header[7]); break;
	}
	printf("  ABI Version:                       %d\n", header[8]);
	printf("  Type:                              ");
	switch (*((unsigned short *)(header + 16))) {
		case 0: printf("NONE (Unknown)\n"); break;
		case 1: printf("REL (Relocatable file)\n"); break;
		case 2: printf("EXEC (Executable file)\n"); break;
		case 3: printf("DYN (Shared object file)\n"); break;
		case 4: printf("CORE (Core file)\n"); break;
		default: printf("<unknown: %d>\n", *((unsigned short *)(header + 16))); break;
	}
	printf("  Entry point address:               0x");
	for (int i = 0; i < 8; i++) {
		printf("%02x", header[24 + i]);
	}
	printf("\n");
}

