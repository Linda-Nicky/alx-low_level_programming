#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _strncmp - a function that compares two strings
 * @str1: the first string
 * @str2: the second string
 * @num: the max number of bytes to compare
 *
 * Return: 0 if the first n bytes of s1 and s2 are equal, otherwise non-zero
 */
int _strncmp(const char *str1, const char *str2, size_t num)
{
	for ( ; n && *str1 && *str2; --num, ++str1, ++str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
	}
	if (num)
	{
		if (*str1)
			return (1);
		if (*str2)
			return (-1);
	}
	return (0);
}

/**
 * _close - close a file descriptor and print an error message upon failure
 * @de: the file descriptor to close
 */
void _close(int f)
{
	if (close(f) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close de\n", 22);
	exit(98);
}

/**
 * _read - read from a file and print an error message upon failure
 * @de: the file descriptor to read from
 * @buff: the buffer to write to
 * @counter: the number of bytes to read
 */
void _read(int de, char *buff, size_t counter)
{
	if (read(de, buff, counter) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(de);
	exit(98);
}

/**
 * elf_magic - print ELF magic
 * @buffrs: the ELF header
 */
void elf_magic(const unsigned char *buffrs)
{
	unsigned int k;

	if (_strncmp((const char *) buffrs, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n  Magic:   ");

	for (k = 0; k < 16; ++k)
		printf("%02x%c", buffer[k], k < 15 ? ' ' : '\n');
}

/**
 * elf_class - print ELF class
 * @buffrs: the ELF header
 *
 * Return: bit mode (32 or 64)
 */
size_t elf_class(const unsigned char *buffrs)
{
	printf("  %-34s ", "Class:");

	if (buffrs[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffrs[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buffrs[EI_CLASS]);
	return (32);
}

/**
 * elf_data - print ELF data
 * @buffrs: the ELF header
 *
 * Return: 1 if big endian, otherwise 0
 */
int elf_data(const unsigned char *buffrs)
{
	printf("  %-34s ", "Data:");

	if (buffrs[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buffrs[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}

/**
 * elf_version - print ELF version
 * @buffrs: the ELF header
 */
void elf_version(const unsigned char *buffrs)
{
	printf("  %-34s %u", "Version:", buffrs[EI_VERSION]);

	if (buffrs[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elf_osabi - print ELF OS/ABI
 * @buffrs: the ELF header
 */
void elf_osabi(const unsigned char *buffrs)
{
	const char *os_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");

	if (buffrs[EI_OSABI] < 19)
		printf("%s\n", os_table[(unsigned int) buffrs[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buffrs[EI_OSABI]);
}

/**
 * elf_abivers - print ELF ABI version
 * @buffrs: the ELF header
 */
void elf_abivers(const unsigned char *buffrs)
{
	printf("  %-34s %u\n", "ABI Version:", buffrs[EI_ABIVERSION]);
}

/**
 * elf_type - print ELF type
 * @buffrs: the ELF header
 * @big_endian: endianness (big endian if non-zero)
 */
void elf_type(const unsigned char *buffrs, int big_endian)
{
	char *type_table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (big_endian)
		type = 0x100 * buffer[16] + buffrs[17];
	else
		type = 0x100 * buffer[17] + buffrs[16];

	if (type < 5)
		printf("%s\n", type_table[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * elf_entry - print entry point address
 * @buffrs: string containing the entry point address
 * @bit_m: bit mode (32 or 64)
 * @big_endian: endianness (big endian if non-zero)
 */
void elf_entry(const unsigned char *buffrs, size_t bit_m, int big_endian)
{
	int address_size = bit_m / 8;

	printf("  %-34s 0x", "Entry point address:");

	if (big_endian)
	{
		while (address_size && !*(buffrs))
			--address_size, ++buffrs;

		printf("%x", *buffrs & 0xff);

		while (--address_size > 0)
			printf("%02x", *(++buffrs) & 0xff);
	}
	else
	{
		buffrs += address_size;

		while (address_size && !*(--buffrs))
			--address_size;

		printf("%x", *buffrs & 0xff);

		while (--address_size > 0)
			printf("%02x", *(--buffrs) & 0xff);
	}

	printf("\n");
}

/**
 * main - copy a file's contents to another file
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: Always 0
 */
int main(int argc, const char *argv[])
{
	unsigned char buffrs[18];
	unsigned int bit_m;
	int big_endian;
	int de;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	de = open(argv[1], O_RDONLY);
	if (de == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	_read(fd, (char *) buffrs, 18);

	elf_magic(buffrs);
	bit_mode = elf_class(buffrs);
	big_endian = elf_data(buffrs);
	elf_version(buffrs);
	elf_osabi(buffrs);
	elf_abivers(buffrs);
	elf_type(buffrs, big_endian);

	lseek(fd, 24, SEEK_SET);
	_read(fd, (char *) buffrs, bit_m / 8);

	elf_entry(buffrs, bit_m, big_endian);

	_close(de);

	return (0);
}
