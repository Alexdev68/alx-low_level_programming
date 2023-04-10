#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cpy_to_another(const char *file_from, const char *file_to);

/**
 * main - Entry point
 * @ac: This is the argument counter
 * @av: This is the srgument vector
 * Return: This returns 0 always
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cpy_to_another(av[1], av[2]);

	return (0);
}

/**
 * cpy_to_another - This function copies the content of a file to another file
 * @file_from: This is a pointer to the file that the content is copied from
 * @file_to: This is a pointer to the file that the content is being copied to
 * Return: This returns 0 on success
 */
int cpy_to_another(const char *file_from, const char *file_to)
{
	int feed, fid, i, no_ch;
	char buffer[1024];

	feed = open(file_from, O_RDONLY);
	fid = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (feed < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s\n", file_from);
		exit(98);
	}

	no_ch = read(feed, buffer, 1024);
	if (no_ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s\n", file_from);
		close(feed);
		close(fid);
		exit(98);
	}
	i = write(fid, buffer, no_ch);
	if (fid < 0 || i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(feed);
		close(fid);
		exit(99);
	}
	if (close(feed) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", feed);
		exit(100);
	}
	if (close(fid) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fid);
		exit(100);
	}
	return (0);
}
