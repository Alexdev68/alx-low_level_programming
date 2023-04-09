#include "main.h"
#include <string.h>

/**
 * append_text_to_file - This function appends text at the end of a file
 * @filename: This is a pointer the file
 * @text_content: This is the NULL terminated str to add at the end of the file
 * Return: This returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fid, i;

	if (filename == NULL)
	{
		return (-1);
	}

	fid = open(filename, O_WRONLY | O_APPEND);
	if (fid < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		i = write(fid, text_content, strlen(text_content));

		if (i == -1)
		{
			close(fid);
			return (-1);
		}
	}
	close(fid);
	return (1);
}
