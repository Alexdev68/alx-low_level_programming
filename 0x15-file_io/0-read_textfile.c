#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

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
	char *c;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	c = malloc(letters);
	if (c == NULL)
	{
		close(fd);
		return (0);
	}
	no_ch = read(fd, c, letters);
	if (no_ch < 0)
	{
		close(fd);
		free(c);
		return (0);
	}
	i = write(STDOUT_FILENO, c, no_ch);
	if (i == -1 || no_ch == -1 || i != no_ch)
	{
		free(c);
		return (0);
	}
	close(fd);
	free(c);

	return (no_ch);
}
