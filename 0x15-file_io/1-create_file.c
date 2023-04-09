#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - This function creates a file
 * @filename: This is a pointer a file
 * @text_content: This is a NULL terminated string to write to the file
 * Return: This returns 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i, len = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		i = write(fd, text_content, len);

		if (i != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
