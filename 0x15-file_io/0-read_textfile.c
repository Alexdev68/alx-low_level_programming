#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - This function reads a text file and prints
 * it to the POSIX standard output
 * @filename: This is the file pointer
 * @letters: This is the number of characters to be read and printed out
 * Return: This returns the actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd, no_ch, i;
	char c[800];

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	no_ch = read(fd, c, letters);
	c[no_ch] = '\0';

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	close(fd);

	return (no_ch);
}
