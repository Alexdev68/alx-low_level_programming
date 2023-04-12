#include <elf.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

void display_header(Elf64_Ehdr *eh);

/**
 * main - Entry point
 * @ac: This is the argument count
 * @av: This is the argument vector
 * Return: This returns 0 on success
 */
int main(int ac, char **av)
{
	int efd, no_ch;
	Elf64_Ehdr elfheader;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	efd = open(av[1], O_RDONLY);
	if (efd < 0)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't open %s\n", av[1]);
		exit(98);
	}

	no_ch = read(efd, &elfheader, sizeof(Elf64_Ehdr));
	if (no_ch != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read elfheader\n");
		close(efd);
		exit(98);
	}

	if (memcmp(elfheader.e_ident, ELFMAG, 4) != 0)
	{
		dprintf(STDERR_FILENO, "ERROR: %s is not an ELF-file\n", av[1]);
		close(efd);
		exit(98);
	}

	display_header(&elfheader);

	close(efd);
	return (0);
}

/**
 * display_header - This function displays the information contained
 * in the ELF header at the start of an ELF file
 * @eh: This is the pointer to the elf header
 */
void display_header(Elf64_Ehdr *eh)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", eh->e_ident[i]);
	}
	putchar('\n');

	printf("  Class:                             ");
	printf("%s\n", eh->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              ");
	printf("%s\n", eh->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           ");
	printf("%d (current)\n", eh->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (eh->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: 53>\n");
			break;
	}
	printf("  ABI Version:                       ");
	printf("%d\n", eh->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (eh->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)eh->e_entry);
}
