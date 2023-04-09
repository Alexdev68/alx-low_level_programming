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
	unsigned int no_ch, count = 0;
	int fd;
	char *c;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (0);
	}

	c = malloc(letters + 1);
	if (c == NULL)
	{
		close(fd);
		return (0);
	}

	no_ch = read(fd, c, letters);
	c[no_ch] = '\0';

	while (count < no_ch)
	{
		if (_putchar(c[count]) == EOF)
		{
			close(fd);
			free(c);
			return (0);
		}
		count++;
	}
	close(fd);
	free(c);

	return (no_ch);
}
