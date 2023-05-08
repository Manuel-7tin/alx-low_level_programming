#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 64

/**
 * main - displays the information contained in the ELF header of an ELF file
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t n;
	Elf64_Ehdr header;
	char buffer[BUFFER_SIZE];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file '%s'\n", argv[1]);
		return (98);
	}

	n = read(fd, buffer, BUFFER_SIZE);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file '%s'\n", argv[1]);
		close(fd);
		return (98);
	}

	if (n != BUFFER_SIZE || buffer[0] != ELFMAG0 || buffer[1] != ELFMAG1 ||
	    buffer[2] != ELFMAG2 || buffer[3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "'%s' is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}

	lseek(fd, 0, SEEK_SET);
	n = read(fd, &header, sizeof(header));
	if (n != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file '%s'\n", argv[1]);
		close(fd);
		return (98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
	       header.e_ident[EI_MAG0], header.e_ident[EI_MAG1], header.e_ident[EI_MAG2],
	       header.e_ident[EI_MAG3], header.e_ident[EI_MAG4], header.e_ident[EI_MAG5],
	       header.e_ident[EI_MAG6], header.e_ident[EI_MAG7], header.e_ident[EI_MAG8],
	       header.e_ident[EI_MAG9], header.e_ident[EI_MAG10], header.e_ident[EI_MAG11],
	       header.e_ident[EI_MAG12], header.e_ident[EI_MAG13], header.e_ident[EI_MAG14],
	       header.e_ident[EI_MAG15]);
	printf("  Class:                             %s\n",
	       header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
	       header);
}
